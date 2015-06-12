/*	$NetBSD: lr9g20_start.S,v 1.2 2011/01/31 06:28:04 matt Exp $ */
/*
 * Copyright (C) 2005, 2006 WIDE Project and SOUM Corporation.
 * All rights reserved.
 *
 * Written by Takashi Kiyohara and Susumu Miki for WIDE Project and SOUM
 * Corporation.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the project nor the name of SOUM Corporation
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE PROJECT and SOUM CORPORATION ``AS IS''
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
 * TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE PROJECT AND SOUM CORPORATION
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */
/*
 * Copyright (c) 2002, 2003  Genetec Corporation.  All rights reserved.
 * Written by Hiroyuki Bessho for Genetec Corporation.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. The name of Genetec Corporation may not be used to endorse or
 *    promote products derived from this software without specific prior
 *    written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY GENETEC CORPORATION ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
 * TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL GENETEC CORPORATION
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#include <machine/asm.h>
#include <arm/armreg.h>
#include <arm/arm32/pte.h>
#include <arm/arm32/pmap.h>		/* for PMAP_DOMAIN_KERNEL */

#ifndef SDRAM_START
#define SDRAM_START	0x20000000
#endif

#define LED1 (1<<6)
#define LED2 (1<<7)

/*
 * CPWAIT -- Canonical method to wait for CP15 update.
 * NOTE: Clobbers the specified temp reg.
 * copied from arm/arm/cpufunc_asm_xscale.S
 * XXX: better be in a common header file.
 */
#define	CPWAIT_BRANCH							 \
	sub	pc, pc, #4

#define	CPWAIT(tmp)							 \
	mrc	p15, 0, tmp, c2, c0, 0	/* arbitrary read of CP15 */	;\
	mov	tmp, tmp		/* wait for it to complete */	;\
	CPWAIT_BRANCH			/* branch to next insn */

/*
 * Kernel start routine for Marvell boards
 * this code is excuted at the very first after the kernel is loaded
 * by U-Boot.
 */
	.text

	.global	_C_LABEL(lr9g20_start)
_C_LABEL(lr9g20_start):
	/* The Loader for Lr9g20 board is u-boot.  it's running on RAM */
	/*
	 *  Kernel is loaded in SDRAM (0x20000000..), and is expected to run
	 *  in VA 0xc0000000..
	 */

	/* save u-boot's args */
	adr	r4, u_boot_args
	nop
	nop
	nop
	stmia	r4!, {r0, r1, r2, r3}
	nop
	nop
	nop

	ldr     r5, =0xFFFFF434
    ldr     r6, =0xFFFFF434
    orr     r5, r5, #LED1 
    orr     r5, r5, #LED2 
    //bic     r5, r5, #LED2
    str     r5, [r6]

	/* Calculate RAM size */
	adr	r4, ram_size
	ldr	r0, [r4]
0:
	add	r3, r4, r0
	ldr	r1, [r3]
	cmp	r0, r1
	beq	2f
1:
	add	r0, r0, r0	/* r0 <<= 1 */
	str	r0, [r4]
	b	0b
2:
	mvn	r1, r1		/* r1 ^= 0xffffffff */
	str	r1, [r3]
	ldr	r2, [r4]
	cmp	r1, r2
	beq	3f
	str	r0, [r3]	/* restore */
	b	1b
3:
	str	r0, [r4]

	/* build page table from scratch */
	ldr	r0, Lstartup_pagetable		/* pagetable */
	adr	r4, mmu_init_table
	b	5f

4:
	str	r3, [r0, r2]
	add	r2, r2, #4
	add	r3, r3, #(L1_S_SIZE)
	adds	r1, r1, #-1
	bhi	4b
5:
	ldmia	r4!, {r1, r2, r3}	/* # of sections, PA|attr, VA */
	cmp	r1, #0
	bne	4b


	mcr	p15, 0, r0, c2, c0, 0	/* Set TTB */
	mcr	p15, 0, r0, c8, c7, 0	/* Flush TLB */
	//mov	r0, #0
	//mcr	p15, 0, r0, c7, c6, 0	/* Invalidate D cache */
	//mcr	p15, 0, r0, c7, c10, 4	/* Drain write-buffer */

	/* Ensure safe Translation Table. */

	/* Set the Domain Access register.  Very important! */
    mov     r0, #((DOMAIN_CLIENT << (PMAP_DOMAIN_KERNEL*2)) | DOMAIN_CLIENT)
	mcr	p15, 0, r0, c3, c0, 0

	/* Enable MMU */
	mrc	p15, 0, r0, c1, c0, 0
	orr	r0, r0, #CPU_CONTROL_SYST_ENABLE
	orr	r0, r0, #CPU_CONTROL_MMU_ENABLE
	mcr	p15, 0, r0, c1, c0, 0
	CPWAIT(r0)
9:
    ldr     r5, =0xFFFFF430
    ldr     r6, =0xFFFFF430
    orr     r5, r5, #LED1 
    //orr     r5, r5, #LED2 
    str     r5, [r6]
	//b 9b
   
	/* Jump to kernel code in TRUE VA */
	//ldr	pc, Lstart
	adr	r0, Lstart
	ldr	pc, [r0]

Lstart:
	.word	start


#ifndef STARTUP_PAGETABLE_ADDR
#define STARTUP_PAGETABLE_ADDR 0x20000000
#endif
Lstartup_pagetable:
	.word	STARTUP_PAGETABLE_ADDR

	.globl	_C_LABEL(u_boot_args)
u_boot_args:
	.space	16			/* r0, r1, r2, r3 */
    
    .globl	_C_LABEL(ram_size)			      
ram_size:						      
	.word	0x04000000		/* 64Mbyte */

#define MMU_INIT(va,pa,n_sec,attr) \
	.word	n_sec					    ; \
	.word	4 * ((va) >> L1_S_SHIFT)		    ; \
	.word	(pa) | (attr)				    ;

mmu_init_table:
	/* fill all table VA==PA */
	MMU_INIT(0x00000000, 0x00000000,
	    1 << (32 - L1_S_SHIFT), L1_TYPE_S | L1_S_AP(AP_KRW))

	/* map SDRAM VA==PA, WT cacheable */
	MMU_INIT(SDRAM_START, SDRAM_START,
	    64, L1_TYPE_S | L1_S_C | L1_S_AP(AP_KRW))

	/* map VA 0xc0000000..0xc3ffffff to PA 0x20000000..0x23ffffff */
	MMU_INIT(0xc0000000, SDRAM_START,
	    64, L1_TYPE_S | L1_S_C | L1_S_AP(AP_KRW))

	.word	0			/* end of table */


