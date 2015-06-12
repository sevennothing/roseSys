/*-
 * Copyright (c) 2012 The NetBSD Foundation, Inc.
 * All rights reserved.
 *
 * This code is derived from software contributed to The NetBSD Foundation
 * by Paul Fleischer <paul@xpg.dk>
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE NETBSD FOUNDATION, INC. AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
 * TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE FOUNDATION OR CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */
#include <sys/types.h>

#include <arm/armreg.h>
#include <arm/at91/at91sam9260reg.h>

#include <netinet/in.h>
#include <netinet/in_systm.h>

#include <lib/libkern/libkern.h>
#include <lib/libsa/stand.h>
#include <lib/libsa/loadfile.h>
#include <lib/libsa/iodesc.h>

//#include <arch/evbarm/mini2440/mini2440_bootinfo.h>

#define UART_BAUDRATE		115200
#define AT91SAM9G20_XTAL_CLK	18432000
#define BOOTINFO_ADDR		0x31500000

/* Macros to turn on/off LEDs. Numbering is 1-4. */
#define LED_REG() PIOA_READ(PIO_ODSR)
/* PA6 PA7 set to 1*/
#define CLEAR_LEDS() PIOA_WRITE(PIO_SODR, LED_REG() | 0xc0) 
#define LED_ON(led) PIOA_WRITE(PIO_CODR, LED_REG() & (1<<(led + 5)))
#define LED_OFF(led) PIOA_WRITE(PIO_SODR, LED_REG() & (1<<(led + 5)))


/* Local variables */
//static time_t	wallclock = 0;
//static uint32_t timer_inc_rate;
void *bootinfo;
int bi_size;
char *bi_next;

#define STR_EXPAND(tok) #tok
#define STR(tok) STR_EXPAND(tok)


/* Local functions */
static void at91sam9g20_clock_freq2(vaddr_t clkman_base, int *fclk, int *hclk,
				int *pclk);
static void uart_init(uint32_t pclk);
//static void parse_mac_address(const char *str, uint8_t *enaddr);

extern void* dm9k_init(unsigned int tag, void *macaddr);

/* External variables */

/* External functions */
extern void netif_match(unsigned int tag, uint8_t *macaddr);
/*  extern int sdif_init(unsigned int tag);*/

/* Global variables */
int pclk;
//struct btinfo_rootdevice	bi_rdev;

/* This is not very flexible, as only one net device is allowed */
//struct btinfo_net		bi_net;

//struct btinfo_bootpath		bi_path;

void
main(int argc, char *argv[])
{
	int fclk, hclk;
	//int fd;
	//unsigned long marks[MARK_MAX];
	//unsigned char hdr[0x26];
	//void (*entry)(void*);
	//unsigned elfpriv;
	char *bootfile;
	char *bf;
	bool kernel_loaded;
//	uint8_t enaddr[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

	/* Give some indication that main() has been reached */
	CLEAR_LEDS();
	LED_OFF(1);
	LED_ON(2);

	at91sam9g20_clock_freq2(AT91SAM9260_PMC_BASE, &fclk, &hclk, &pclk);

	uart_init(pclk);

	/* Let the user know we are alive */
	printf("\n");
	printf(">> %s bootLR9g20, revision %s\n", "9g20 boot test", "0.0.1");

	/* Detect networking devices */
	//netif_match(0, enaddr);

	kernel_loaded = FALSE;
	do {
		bootfile = strsep(&bf, ";");
		printf("Trying \"%s\"...\n", bootfile);
#if 0
		fd = open(bootfile, 0);
		if (fd < 0) {
			printf("Failed: %d\n", errno);
			close(fd);
			continue;
		}

		if (fdloadfile(fd, marks, LOAD_ALL) == 0) {
			kernel_loaded = TRUE;
			break;
		}
#endif
	} while(bf != NULL);

	if (!kernel_loaded) {
		panic("Failed to load kernel\n");
		_rtt();
	}

#if 0
	/* Set MAC address of the 'dme' net device, if
	 * it isn't set already */
	if (bi_net.devname[0] == 0) {
		uint8_t en[6] = {DM9000MAC};
		snprintf(bi_net.devname, sizeof(bi_net.devname), "dme");
		bi_net.cookie = 0;

		memcpy(bi_net.mac_address, en, sizeof(bi_net.mac_address));
	}
#endif
	/*
	 * ARM ELF header has a distinctive value in "private flags"
	 * field of offset [0x24:25];
	 * - NetBSD 02 06
	 * - Linux  02 00 (2.4) or 02 02 (2.6)
	 */
#if 0
	lseek(fd, (off_t)0, SEEK_SET);
	read(fd, &hdr, sizeof(hdr));
	elfpriv = *(unsigned short *)&hdr[0x24];

	entry = (void *)marks[MARK_ENTRY];
	if (elfpriv == 0x0602) {
		struct btinfo_symtab bi_syms;

		bi_syms.nsym = marks[MARK_NSYM];
		bi_syms.ssym = (void*)marks[MARK_SYM];
		bi_syms.esym = (void*)marks[MARK_END];
		bi_add(&bi_syms, BTINFO_SYMTAB, sizeof(bi_syms));
		if (bi_path.bootpath[0] != 0)
		  bi_add(&bi_path, BTINFO_BOOTPATH, sizeof(bi_path));
		bi_add(&bi_rdev, BTINFO_ROOTDEVICE, sizeof(bi_rdev));
		if (bi_net.devname[0] != 0 )
			bi_add(&bi_net, BTINFO_NET, sizeof(bi_net));
	} else {
		printf("Loaded object is not NetBSD ARM ELF");
		_rtt();
	}
	printf("entry=%p, nsym=%lu, ssym=%p, esym=%p\n",
	       (void *)marks[MARK_ENTRY],
	       marks[MARK_NSYM],
	       (void *)marks[MARK_SYM],
	       (void *)marks[MARK_END]);
	(*entry)(bootinfo);

#endif
	printf("exec returned, restarting...\n");
	_rtt();
}

void
uart_init(uint32_t pclk)
{
	DBGU_INIT(pclk,UART_BAUDRATE);
}

//static uint32_t countdown_duration;

void
lr9g20_panic()
{
	while(1) {
		CLEAR_LEDS();
	}
}

void
at91sam9g20_clock_freq2(vaddr_t clkman_base, int *fclk, int *hclk, int *pclk)
{
///	uint32_t pllcon, divn, camdivn;
//	int mdiv, pdiv, sdiv;
//	uint32_t f, h, p;

	if (fclk) *fclk = 0;
	if (hclk) *hclk = 0;
	if (pclk) *pclk =  132096000;
return;
#if 0
	pllcon = *(volatile uint32_t *)(clkman_base + CLKMAN_MPLLCON);
	divn = *(volatile uint32_t *)(clkman_base + CLKMAN_CLKDIVN);
	camdivn = *(volatile uint32_t *)(clkman_base + CLKMAN_CAMDIVN);

	mdiv = (pllcon & PLLCON_MDIV_MASK) >> PLLCON_MDIV_SHIFT;
	pdiv = (pllcon & PLLCON_PDIV_MASK) >> PLLCON_PDIV_SHIFT;
	sdiv = (pllcon & PLLCON_SDIV_MASK) >> PLLCON_SDIV_SHIFT;

	f = ((mdiv + 8) * AT91SAM9G20_XTAL_CLK) / ((pdiv + 2) * (1 << sdiv)) * 2;
	h = f;

	/* HDIVN of CLKDIVN can have 4 distinct values */
	switch( (divn & CLKDIVN_HDIVN_MASK) >> CLKDIVN_HDIVN_SHIFT )
		{
		case 0:
			/* 00b: HCLK = FCLK/1*/
			break;
		case 1:
			/* 01b: HCLK = FCLK/2*/
			h /= 2;
			break;
		case 2:
			/* 10b: HCLK = FCLK/4 when CAMDIVN[9] (HCLK4_HALF) = 0
			 *      HCLK = FCLK/8 when CAMDIVN[9] (HCLK4_HALF) = 1 */
			if( camdivn & CLKCAMDIVN_HCLK4_HALF )
				h /= 8;
			else
				h /= 4;
			break;
		case 3:
			/* 11b: HCLK = FCLK/3 when CAMDIVN[8] (HCLK3_HALF) = 0
			 *      HCLK = FCLK/6 when CAMDIVN[8] (HCLK3_HALF) = 1 */
			if( camdivn & CLKCAMDIVN_HCLK3_HALF )
				h /= 6;
			else
				h /= 3;
			break;
		}

	p = h;

	if (divn & CLKDIVN_PDIVN)
		p /= 2;

	if (fclk) *fclk = f;
	if (hclk) *hclk = h;
	if (pclk) *pclk = p;
#endif
}

void
putchar(int c)
{
	uint32_t stat;

	if (c == '\n')
		putchar('\r');
	
	//DBGU_PUTS(c);
	
	do {
		stat = DBGUREG(DBGU_SR);
	} while ((stat & DBGU_SR_TXRDY) == 0);
	DBGUREG(DBGU_THR) = c;
}

void
_rtt()
{
	int cpsr_save, tmp;
	/* Disable interrupts */
	__asm volatile("mrs %0, cpsr;"
		       "orr %1, %0, %2;"
		       "msr cpsr_c, %1;"
		       : "=r" (cpsr_save), "=r" (tmp)
		       : "I" (I32_bit)
		       );

	/* Disable MMU */
	__asm volatile("mrc p15, 0, %0, c1, c0, 0;"
		       "bic %0, %0, %1;"
		       "mcr p15, 0, %0, c1, c0, 0;"
		       : "=r" (tmp)
		       : "I" (CPU_CONTROL_MMU_ENABLE)
		       );

	/* Configure watchdog to fire now */
	*(volatile uint32_t *)(AT91SAM9260_WDT_BASE + 0x4) = 0x3fff2fff;
}

#if 0
static void
parse_mac_address(const char *str, uint8_t *enaddr)
{
	int i;
	char *next = (char*)str;

	for(i=0;i<6;i++) {
		str = next;
		enaddr[i] = (unsigned char)strtoll(str, &next, 16);
		if( *next == ':' ) {
			next++;
		} else {
			break;
		}
	}
}
#endif
