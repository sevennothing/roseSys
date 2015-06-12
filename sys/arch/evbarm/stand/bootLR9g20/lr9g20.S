_start
	add	r2, pc, #232	; 0xe8
	stm	r2, {r0, r1}
	mrs	r0, CPSR
	orr	r0, r0, #128	; 0x80
	msr	CPSR_fc, r0
	ldr	r3, [pc, #220]	; 20a000f8 bootloader_args+0x8>
	ldr	r1, [pc, #216]	; 20a000f8 bootloader_args+0x8>
	orr	r3, r3, #64	; 0x40
	orr	r3, r3, #128	; 0x80
	str	r3, [r1]
	mrc	15, 0, r2, cr1, cr0, {0}
	bic	r2, r2, #1
	mcr	15, 0, r2, cr1, cr0, {0}
	nop			; (mov r0, r0)
	nop			; (mov r0, r0)
	nop			; (mov r0, r0)
	ldr	r0, [pc, #152]	; 20a000e0 LpageTable>
	add	r4, pc, #108	; 0x6c
	b	20a00060 _start+0x60>
	str	r3, [r0, r2]
	add	r2, r2, #4
	add	r3, r3, #1048576	; 0x100000
	subs	r1, r1, #1
	bhi	20a0004c _start+0x4c>
	ldm	r4!, {r1, r2, r3}
	cmp	r1, #0
	bne	20a0004c _start+0x4c>
	mcr	15, 0, r0, cr2, cr0, {0}
	mcr	15, 0, r0, cr8, cr7, {0}
	mrc	15, 0, r0, cr1, cr0, {0}
	orr	r0, r0, #1
	mcr	15, 0, r0, cr1, cr0, {0}
	nop			; (mov r0, r0)
	nop			; (mov r0, r0)
	nop			; (mov r0, r0)
	add	r1, pc, #80	; 0x50
	ldm	r1, {r1, r2, sp}
	sub	r2, r2, r1
	mov	r3, #0
	str	r3, [r1], #4
	subs	r2, r2, #4
	bgt	20a0009c _start+0x9c>
	add	r2, pc, #64	; 0x40
	ldm	r2, {r0, r1}
	ldr	pc, [pc, #-4]	; 20a000b4 Lstart>

Lstart
	strdcs	r0, [r0], ip	; UNPREDICTABLE>

mmu_init_table
	andeq	r1, r0, r0
	andeq	r0, r0, r0
	andeq	r0, r0, r2, lsl #8
	andeq	r0, r0, r0, asr #32
	andeq	r0, r0, r0, lsl #16
	andcs	r0, r0, sl, lsl #8
	andeq	r0, r0, r0, asr #32
	andeq	r3, r0, r0
	andcs	r0, r0, sl, lsl #8
	andeq	r0, r0, r0

LpageTable
	andcs	r0, r0, r0

Lcrtsetup
	adccs	r1, r0, r0, asr #3
	adccs	r1, r0, r0, asr r2
	adccs	r0, r0, r0

bootloader_args

			; UNDEFINED> instruction: 0xfffff434

main
	mov	ip, sp
	push	{fp, ip, lr, pc}
	sub	fp, ip, #4
	sub	sp, sp, #32
	str	r0, [fp, #-40]	; 0x28
	str	r1, [fp, #-44]	; 0x2c
	mov	r3, #0
	sub	r3, r3, #3024	; 0xbd0
	mvn	r2, #3008	; 0xbc0
	sub	r2, r2, #7
	ldr	r2, [r2]
	orr	r2, r2, #192	; 0xc0
	str	r2, [r3]
	mov	r3, #0
	sub	r3, r3, #3024	; 0xbd0
	mvn	r2, #3008	; 0xbc0
	sub	r2, r2, #7
	ldr	r2, [r2]
	and	r2, r2, #64	; 0x40
	str	r2, [r3]
	mvn	r3, #3008	; 0xbc0
	sub	r3, r3, #11
	mvn	r2, #3008	; 0xbc0
	sub	r2, r2, #7
	ldr	r2, [r2]
	and	r2, r2, #128	; 0x80
	str	r2, [r3]
	sub	r2, fp, #24
	sub	r3, fp, #28
	mov	r0, #-2147483648	; 0x80000000
	asr	r0, r0, #21
	mov	r1, r2
	mov	r2, r3
	ldr	r3, [pc, #132]	; 20a0020c main+0x110>
	bl	20a002ec at91sam9g20_clock_freq2>
	ldr	r3, [pc, #124]	; 20a0020c main+0x110>
	ldr	r3, [r3]
	mov	r0, r3
	bl	20a00230 uart_init>
	ldr	r0, [pc, #112]	; 20a00210 main+0x114>
	bl	20a004e0 printf>
	ldr	r0, [pc, #108]	; 20a00214 main+0x118>
	ldr	r1, [pc, #108]	; 20a00218 main+0x11c>
	ldr	r2, [pc, #108]	; 20a0021c main+0x120>
	bl	20a004e0 printf>
	mov	r3, #0
	strb	r3, [fp, #-13]
	sub	r3, fp, #32
	mov	r0, r3
	ldr	r1, [pc, #88]	; 20a00220 main+0x124>
	bl	20a00bd4 strsep>
	str	r0, [fp, #-20]
	ldr	r0, [pc, #80]	; 20a00224 main+0x128>
	ldr	r1, [fp, #-20]
	bl	20a004e0 printf>
	ldr	r3, [fp, #-32]
	cmp	r3, #0
	bne	20a001b8 main+0xbc>
	ldrb	r3, [fp, #-13]
	eor	r3, r3, #1
	and	r3, r3, #255	; 0xff
	cmp	r3, #0
	beq	20a00200 main+0x104>
	ldr	r0, [pc, #40]	; 20a00228 main+0x12c>
	bl	20a00410 panic>
	ldr	r0, [pc, #36]	; 20a0022c main+0x130>
	bl	20a004e0 printf>
	bl	20a003c0 _rtt>
	ldrdcs	r1, [r0], r8	; UNPREDICTABLE>
	adccs	r1, r0, r4, lsr #2
	adccs	r1, r0, r8, lsr #2
	adccs	r1, r0, r8, asr #2
	adccs	r1, r0, r8, asr r1
	adccs	r1, r0, r0, ror #2
	adccs	r1, r0, r4, ror #2
	adccs	r1, r0, r4, ror r1
	adccs	r1, r0, ip, lsl #3

uart_init
	mov	ip, sp
	push	{fp, ip, lr, pc}
	sub	fp, ip, #4
	sub	sp, sp, #4
	str	r0, [fp, #-16]
	mov	r3, #-1728053248	; 0x99000000
	asr	r3, r3, #19
	mov	r2, #512	; 0x200
	add	r2, r2, #2
	str	r2, [r3]
	mov	r3, #-1862270976	; 0x91000000
	asr	r3, r3, #19
	ldr	r2, [fp, #-16]
	lsr	r2, r2, #4
	add	r1, r2, #57600	; 0xe100
	ldr	r2, [pc, #72]	; 20a002bc uart_init+0x8c>
	umull	r0, r2, r1, r2
	lsr	r2, r2, #16
	str	r2, [r3]
	mvn	r3, #3568	; 0xdf0
	sub	r3, r3, #11
	mov	r2, #2048	; 0x800
	str	r2, [r3]
	mov	r3, #-1879048192	; 0x90000000
	asr	r3, r3, #19
	mov	r2, #268	; 0x10c
	str	r2, [r3]
	mov	r3, #-1879048192	; 0x90000000
	asr	r3, r3, #19
	mov	r2, #80	; 0x50
	str	r2, [r3]
	mvn	r3, #3552	; 0xde0
	sub	r3, r3, #11
	ldr	r3, [r3]
	ldm	sp, {r3, fp, sp, pc}
			; UNDEFINED> instruction: 0x91a2b3c5

lr9g20_panic
	mov	ip, sp
	push	{fp, ip, lr, pc}
	sub	fp, ip, #4
	mov	r3, #0
	sub	r3, r3, #3024	; 0xbd0
	mvn	r2, #3008	; 0xbc0
	sub	r2, r2, #7
	ldr	r2, [r2]
	orr	r2, r2, #192	; 0xc0
	str	r2, [r3]
	b	20a002cc lr9g20_panic+0xc>

at91sam9g20_clock_freq2
	mov	ip, sp
	push	{fp, ip, lr, pc}
	sub	fp, ip, #4
	sub	sp, sp, #16
	str	r0, [fp, #-16]
	str	r1, [fp, #-20]
	str	r2, [fp, #-24]
	str	r3, [fp, #-28]
	ldr	r3, [fp, #-20]
	cmp	r3, #0
	beq	20a00324 at91sam9g20_clock_freq2+0x38>
	ldr	r3, [fp, #-20]
	mov	r2, #0
	str	r2, [r3]
	ldr	r3, [fp, #-24]
	cmp	r3, #0
	beq	20a0033c at91sam9g20_clock_freq2+0x50>
	ldr	r3, [fp, #-24]
	mov	r2, #0
	str	r2, [r3]
	ldr	r3, [fp, #-28]
	cmp	r3, #0
	beq	20a00358 at91sam9g20_clock_freq2+0x6c>
	ldr	r2, [fp, #-28]
	mov	r3, #131072000	; 0x7d00000
	add	r3, r3, #1024000	; 0xfa000
	str	r3, [r2]
	sub	sp, fp, #12
	ldm	sp, {fp, sp, pc}

putchar
	mov	ip, sp
	push	{fp, ip, lr, pc}
	sub	fp, ip, #4
	sub	sp, sp, #12
	str	r0, [fp, #-24]
	ldr	r3, [fp, #-24]
	cmp	r3, #10
	bne	20a00388 putchar+0x28>
	mov	r0, #13
	bl	20a00360 putchar>
	mvn	r3, #3552	; 0xde0
	sub	r3, r3, #11
	ldr	r3, [r3]
	str	r3, [fp, #-16]
	ldr	r3, [fp, #-16]
	and	r3, r3, #2
	cmp	r3, #0
	beq	20a00388 putchar+0x28>
	mvn	r3, #3552	; 0xde0
	sub	r3, r3, #3
	ldr	r2, [fp, #-24]
	str	r2, [r3]
	sub	sp, fp, #12
	ldm	sp, {fp, sp, pc}

_rtt
	mov	ip, sp
	push	{r4, r5, fp, ip, lr, pc}
	sub	fp, ip, #4
	sub	sp, sp, #8
	mrs	r5, CPSR
	orr	r4, r5, #128	; 0x80
	msr	CPSR_c, r4
	str	r5, [fp, #-24]
	str	r4, [fp, #-28]
	mrc	15, 0, r4, cr1, cr0, {0}
	bic	r4, r4, #1
	mcr	15, 0, r4, cr1, cr0, {0}
	str	r4, [fp, #-28]
	mov	r3, #0
	sub	r3, r3, #700	; 0x2bc
	mvn	r2, #-1073741824	; 0xc0000000
	sub	r2, r2, #53248	; 0xd000
	str	r2, [r3]
	sub	sp, fp, #20
	ldm	sp, {r4, r5, fp, sp, pc}

panic
	mov	ip, sp
	push	{r0, r1, r2, r3}
	push	{fp, ip, lr, pc}
	sub	fp, ip, #20
	sub	sp, sp, #8
	ldr	r3, [pc, #60]	; 20a00468 panic+0x58>
	ldr	r3, [r3]
	cmp	r3, #0
	bne	20a00444 panic+0x34>
	ldr	r3, [pc, #44]	; 20a00468 panic+0x58>
	mov	r2, #1
	str	r2, [r3]
	bl	20a00470 closeall>
	add	r3, fp, #8
	str	r3, [fp, #-16]
	ldr	r3, [fp, #-16]
	ldr	r0, [fp, #4]
	mov	r1, r3
	bl	20a006c8 vprintf>
	ldr	r0, [pc, #8]	; 20a0046c panic+0x5c>
	bl	20a004e0 printf>
	bl	20a003c0 _rtt>
	adccs	r1, r0, r0, asr #3
	adccs	r1, r0, ip, lsr #3

closeall
	mov	ip, sp
	push	{fp, ip, lr, pc}
	sub	fp, ip, #4
	sub	sp, sp, #8
	mov	r3, #0
	str	r3, [fp, #-16]
	b	20a004c8 closeall+0x58>
	ldr	r1, [pc, #72]	; 20a004dc closeall+0x6c>
	ldr	r2, [fp, #-16]
	mov	r3, r2
	lsl	r3, r3, #3
	rsb	r3, r2, r3
	lsl	r3, r3, #2
	add	r3, r1, r3
	ldr	r3, [r3]
	cmp	r3, #0
	beq	20a004bc closeall+0x4c>
	ldr	r0, [fp, #-16]
	bl	20a00514 close>
	ldr	r3, [fp, #-16]
	add	r3, r3, #1
	str	r3, [fp, #-16]
	ldr	r3, [fp, #-16]
	cmp	r3, #3
	ble	20a0048c closeall+0x1c>
	sub	sp, fp, #12
	ldm	sp, {fp, sp, pc}
	ldrdcs	r1, [r0], ip	; UNPREDICTABLE>

printf
	mov	ip, sp
	push	{r0, r1, r2, r3}
	push	{fp, ip, lr, pc}
	sub	fp, ip, #20
	sub	sp, sp, #8
	add	r3, fp, #8
	str	r3, [fp, #-16]
	ldr	r3, [fp, #-16]
	ldr	r0, [fp, #4]
	mov	r1, r3
	bl	20a006c8 vprintf>
	sub	sp, fp, #12
	ldm	sp, {fp, sp, pc}

close
	mov	ip, sp
	push	{fp, ip, lr, pc}
	sub	fp, ip, #4
	sub	sp, sp, #20
	str	r0, [fp, #-32]
	ldr	r2, [fp, #-32]
	mov	r3, r2
	lsl	r3, r3, #3
	rsb	r3, r2, r3
	lsl	r3, r3, #2
	mov	r2, r3
	ldr	r3, [pc, #288]	; 20a00668 close+0x154>
	add	r3, r2, r3
	str	r3, [fp, #-24]
	mov	r3, #0
	str	r3, [fp, #-16]
	mov	r3, #0
	str	r3, [fp, #-20]
	ldr	r3, [fp, #-32]
	cmp	r3, #3
	bhi	20a00578 close+0x64>
	ldr	r3, [fp, #-24]
	ldr	r3, [r3]
	cmp	r3, #0
	bne	20a0058c close+0x78>
	ldr	r3, [pc, #236]	; 20a0066c close+0x158>
	mov	r2, #9
	str	r2, [r3]
	mvn	r3, #0
	b	20a0065c close+0x148>
	ldr	r3, [fp, #-24]
	ldr	r3, [r3]
	and	r3, r3, #4
	cmp	r3, #0
	bne	20a005cc close+0xb8>
	ldr	r3, [fp, #-24]
	ldr	r3, [r3, #12]
	cmp	r3, #0
	beq	20a005cc close+0xb8>
	ldr	r3, [fp, #-24]
	ldr	r3, [r3, #12]
	ldr	r3, [r3, #4]
	ldr	r0, [fp, #-24]
	mov	lr, pc
	mov	pc, r3
	str	r0, [fp, #-16]
	ldr	r3, [fp, #-24]
	ldr	r3, [r3]
	and	r3, r3, #8
	cmp	r3, #0
	bne	20a0060c close+0xf8>
	ldr	r3, [fp, #-24]
	ldr	r3, [r3, #4]
	cmp	r3, #0
	beq	20a0060c close+0xf8>
	ldr	r3, [fp, #-24]
	ldr	r3, [r3, #4]
	ldr	r3, [r3, #12]
	ldr	r0, [fp, #-24]
	mov	lr, pc
	mov	pc, r3
	str	r0, [fp, #-20]
	ldr	r3, [fp, #-24]
	mov	r2, #0
	str	r2, [r3]
	ldr	r3, [fp, #-16]
	cmp	r3, #0
	beq	20a00638 close+0x124>
	ldr	r3, [pc, #64]	; 20a0066c close+0x158>
	ldr	r2, [fp, #-16]
	str	r2, [r3]
	mvn	r3, #0
	b	20a0065c close+0x148>
	ldr	r3, [fp, #-20]
	cmp	r3, #0
	beq	20a00658 close+0x144>
	ldr	r3, [pc, #32]	; 20a0066c close+0x158>
	ldr	r2, [fp, #-20]
	str	r2, [r3]
	mvn	r3, #0
	b	20a0065c close+0x148>
	mov	r3, #0
	mov	r0, r3
	sub	sp, fp, #12
	ldm	sp, {fp, sp, pc}
	ldrdcs	r1, [r0], ip	; UNPREDICTABLE>
	adccs	r1, r0, ip, asr #4

sputchar
	mov	ip, sp
	push	{fp, ip, lr, pc}
	sub	fp, ip, #4
	sub	sp, sp, #4
	str	r0, [fp, #-16]
	ldr	r3, [pc, #52]	; 20a006c0 sputchar+0x50>
	ldr	r2, [r3]
	ldr	r3, [pc, #48]	; 20a006c4 sputchar+0x54>
	ldr	r3, [r3]
	cmp	r2, r3
	bcs	20a006bc sputchar+0x4c>
	ldr	r3, [pc, #28]	; 20a006c0 sputchar+0x50>
	ldr	r3, [r3]
	ldr	r2, [fp, #-16]
	and	r2, r2, #255	; 0xff
	strb	r2, [r3]
	add	r2, r3, #1
	ldr	r3, [pc, #4]	; 20a006c0 sputchar+0x50>
	str	r2, [r3]
	ldm	sp, {r3, fp, sp, pc}
	adccs	r1, r0, r4, asr #3
	adccs	r1, r0, r8, asr #3

vprintf
	mov	ip, sp
	push	{fp, ip, lr, pc}
	sub	fp, ip, #4
	sub	sp, sp, #8
	str	r0, [fp, #-16]
	str	r1, [fp, #-20]
	ldr	r0, [pc, #16]	; 20a006f8 vprintf+0x30>
	ldr	r1, [fp, #-16]
	ldr	r2, [fp, #-20]
	bl	20a0078c kdoprnt>
	sub	sp, fp, #12
	ldm	sp, {fp, sp, pc}
	adccs	r0, r0, r0, ror #6

vsnprintf
	mov	ip, sp
	push	{fp, ip, lr, pc}
	sub	fp, ip, #4
	sub	sp, sp, #16
	str	r0, [fp, #-16]
	str	r1, [fp, #-20]
	str	r2, [fp, #-24]
	str	r3, [fp, #-28]
	ldr	r3, [pc, #92]	; 20a00780 vsnprintf+0x84>
	ldr	r2, [fp, #-16]
	str	r2, [r3]
	ldr	r3, [fp, #-20]
	sub	r3, r3, #1
	ldr	r2, [fp, #-16]
	add	r2, r2, r3
	ldr	r3, [pc, #68]	; 20a00784 vsnprintf+0x88>
	str	r2, [r3]
	ldr	r0, [pc, #64]	; 20a00788 vsnprintf+0x8c>
	ldr	r1, [fp, #-24]
	ldr	r2, [fp, #-28]
	bl	20a0078c kdoprnt>
	ldr	r3, [pc, #40]	; 20a00780 vsnprintf+0x84>
	ldr	r3, [r3]
	mov	r2, #0
	strb	r2, [r3]
	ldr	r3, [pc, #24]	; 20a00780 vsnprintf+0x84>
	ldr	r3, [r3]
	mov	r2, r3
	ldr	r3, [fp, #-16]
	rsb	r3, r3, r2
	mov	r0, r3
	sub	sp, fp, #12
	ldm	sp, {fp, sp, pc}
	adccs	r1, r0, r4, asr #3
	adccs	r1, r0, r8, asr #3
	adccs	r0, r0, r0, ror r6

kdoprnt
	mov	ip, sp
	push	{fp, ip, lr, pc}
	sub	fp, ip, #4
	sub	sp, sp, #28
	str	r0, [fp, #-32]
	str	r1, [fp, #-36]	; 0x24
	str	r2, [fp, #-40]	; 0x28
	b	20a007c8 kdoprnt+0x3c>
	ldr	r3, [fp, #-28]
	cmp	r3, #0
	beq	20a00b00 kdoprnt+0x374>
	ldr	r3, [fp, #-32]
	ldr	r0, [fp, #-28]
	mov	lr, pc
	mov	pc, r3
	ldr	r3, [fp, #-36]	; 0x24
	ldrb	r3, [r3]
	str	r3, [fp, #-28]
	ldr	r3, [fp, #-28]
	cmp	r3, #37	; 0x25
	moveq	r3, #0
	movne	r3, #1
	and	r3, r3, #255	; 0xff
	ldr	r2, [fp, #-36]	; 0x24
	add	r2, r2, #1
	str	r2, [fp, #-36]	; 0x24
	cmp	r3, #0
	bne	20a007ac kdoprnt+0x20>
	mov	r3, #0
	str	r3, [fp, #-24]
	ldr	r3, [fp, #-36]	; 0x24
	ldrb	r3, [r3]
	str	r3, [fp, #-28]
	ldr	r3, [fp, #-28]
	ldr	r2, [fp, #-36]	; 0x24
	add	r2, r2, #1
	str	r2, [fp, #-36]	; 0x24
	sub	r3, r3, #99	; 0x63
	cmp	r3, #23
	ldrls	pc, [pc, r3, lsl #2]
	b	20a00ad8 kdoprnt+0x34c>
	adccs	r0, r0, r0, asr #17
	adccs	r0, r0, r0, asr r9
	ldrdcs	r0, [r0], r8	; UNPREDICTABLE>
	ldrdcs	r0, [r0], r8	; UNPREDICTABLE>
	ldrdcs	r0, [r0], r8	; UNPREDICTABLE>
	ldrdcs	r0, [r0], r8	; UNPREDICTABLE>
	ldrdcs	r0, [r0], r8	; UNPREDICTABLE>
	ldrdcs	r0, [r0], r8	; UNPREDICTABLE>
	ldrdcs	r0, [r0], r8	; UNPREDICTABLE>
	umlalcs	r0, r0, r0, r8	; UNPREDICTABLE>
	ldrdcs	r0, [r0], r8	; UNPREDICTABLE>
	ldrdcs	r0, [r0], r8	; UNPREDICTABLE>
	adccs	r0, r0, r8, asr #19
	adccs	r0, r0, r8, ror #20
	ldrdcs	r0, [r0], r8	; UNPREDICTABLE>
	ldrdcs	r0, [r0], r8	; UNPREDICTABLE>
	strdcs	r0, [r0], r0	; UNPREDICTABLE>
	adccs	r0, r0, r0, lsr #17
	adccs	r0, r0, r8, lsl sl
	ldrdcs	r0, [r0], r8	; UNPREDICTABLE>
	ldrdcs	r0, [r0], r8	; UNPREDICTABLE>
	adccs	r0, r0, r8, lsl #21
	ldrdcs	r0, [r0], r8	; UNPREDICTABLE>
			; UNDEFINED> instruction: 0x20a008b0
	ldr	r3, [fp, #-24]
	orr	r3, r3, #1
	str	r3, [fp, #-24]
	b	20a00804 kdoprnt+0x78>
	ldr	r3, [fp, #-24]
	orr	r3, r3, #1
	str	r3, [fp, #-24]
	b	20a00804 kdoprnt+0x78>
	ldr	r3, [fp, #-24]
	orr	r3, r3, #1
	str	r3, [fp, #-24]
	b	20a00804 kdoprnt+0x78>
	ldr	r3, [fp, #-40]	; 0x28
	add	r2, r3, #4
	str	r2, [fp, #-40]	; 0x28
	ldr	r3, [r3]
	str	r3, [fp, #-28]
	ldr	r3, [fp, #-28]
	and	r2, r3, #255	; 0xff
	ldr	r3, [fp, #-32]
	mov	r0, r2
	mov	lr, pc
	mov	pc, r3
	b	20a00af8 kdoprnt+0x36c>
	ldr	r3, [fp, #-40]	; 0x28
	add	r2, r3, #4
	str	r2, [fp, #-40]	; 0x28
	ldr	r3, [r3]
	str	r3, [fp, #-16]
	b	20a00918 kdoprnt+0x18c>
	ldr	r3, [fp, #-32]
	ldr	r0, [fp, #-28]
	mov	lr, pc
	mov	pc, r3
	ldr	r3, [fp, #-16]
	ldrb	r3, [r3]
	str	r3, [fp, #-28]
	ldr	r3, [fp, #-28]
	cmp	r3, #0
	moveq	r3, #0
	movne	r3, #1
	and	r3, r3, #255	; 0xff
	ldr	r2, [fp, #-16]
	add	r2, r2, #1
	str	r2, [fp, #-16]
	cmp	r3, #0
	bne	20a00908 kdoprnt+0x17c>
	b	20a00af8 kdoprnt+0x36c>
	ldr	r3, [fp, #-24]
	and	r3, r3, #1
	and	r3, r3, #255	; 0xff
	cmp	r3, #0
	beq	20a00978 kdoprnt+0x1ec>
	ldr	r3, [fp, #-40]	; 0x28
	add	r2, r3, #4
	str	r2, [fp, #-40]	; 0x28
	ldr	r3, [r3]
	b	20a00988 kdoprnt+0x1fc>
	ldr	r3, [fp, #-40]	; 0x28
	add	r2, r3, #4
	str	r2, [fp, #-40]	; 0x28
	ldr	r3, [r3]
	str	r3, [fp, #-20]
	ldr	r3, [fp, #-20]
	cmp	r3, #0
	bge	20a009b4 kdoprnt+0x228>
	ldr	r3, [fp, #-20]
	rsb	r3, r3, #0
	str	r3, [fp, #-20]
	ldr	r3, [fp, #-32]
	mov	r0, #45	; 0x2d
	mov	lr, pc
	mov	pc, r3
	ldr	r0, [fp, #-32]
	ldr	r1, [fp, #-20]
	mov	r2, #10
	bl	20a00b14 kprintn>
	b	20a00af8 kdoprnt+0x36c>
	ldr	r3, [fp, #-24]
	and	r3, r3, #1
	and	r3, r3, #255	; 0xff
	cmp	r3, #0
	beq	20a009f0 kdoprnt+0x264>
	ldr	r3, [fp, #-40]	; 0x28
	add	r2, r3, #4
	str	r2, [fp, #-40]	; 0x28
	ldr	r3, [r3]
	b	20a00a00 kdoprnt+0x274>
	ldr	r3, [fp, #-40]	; 0x28
	add	r2, r3, #4
	str	r2, [fp, #-40]	; 0x28
	ldr	r3, [r3]
	str	r3, [fp, #-20]
	ldr	r0, [fp, #-32]
	ldr	r1, [fp, #-20]
	mov	r2, #8
	bl	20a00b14 kprintn>
	b	20a00af8 kdoprnt+0x36c>
	ldr	r3, [fp, #-24]
	and	r3, r3, #1
	and	r3, r3, #255	; 0xff
	cmp	r3, #0
	beq	20a00a40 kdoprnt+0x2b4>
	ldr	r3, [fp, #-40]	; 0x28
	add	r2, r3, #4
	str	r2, [fp, #-40]	; 0x28
	ldr	r3, [r3]
	b	20a00a50 kdoprnt+0x2c4>
	ldr	r3, [fp, #-40]	; 0x28
	add	r2, r3, #4
	str	r2, [fp, #-40]	; 0x28
	ldr	r3, [r3]
	str	r3, [fp, #-20]
	ldr	r0, [fp, #-32]
	ldr	r1, [fp, #-20]
	mov	r2, #10
	bl	20a00b14 kprintn>
	b	20a00af8 kdoprnt+0x36c>
	ldr	r3, [fp, #-32]
	mov	r0, #48	; 0x30
	mov	lr, pc
	mov	pc, r3
	ldr	r3, [fp, #-32]
	mov	r0, #120	; 0x78
	mov	lr, pc
	mov	pc, r3
	ldr	r3, [fp, #-24]
	and	r3, r3, #1
	and	r3, r3, #255	; 0xff
	cmp	r3, #0
	beq	20a00ab0 kdoprnt+0x324>
	ldr	r3, [fp, #-40]	; 0x28
	add	r2, r3, #4
	str	r2, [fp, #-40]	; 0x28
	ldr	r3, [r3]
	b	20a00ac0 kdoprnt+0x334>
	ldr	r3, [fp, #-40]	; 0x28
	add	r2, r3, #4
	str	r2, [fp, #-40]	; 0x28
	ldr	r3, [r3]
	str	r3, [fp, #-20]
	ldr	r0, [fp, #-32]
	ldr	r1, [fp, #-20]
	mov	r2, #16
	bl	20a00b14 kprintn>
	b	20a00af8 kdoprnt+0x36c>
	ldr	r3, [fp, #-28]
	cmp	r3, #0
	beq	20a00b08 kdoprnt+0x37c>
	ldr	r3, [fp, #-32]
	ldr	r0, [fp, #-28]
	mov	lr, pc
	mov	pc, r3
	nop			; (mov r0, r0)
	nop			; (mov r0, r0)
	b	20a007c8 kdoprnt+0x3c>
	nop			; (mov r0, r0)
	b	20a00b0c kdoprnt+0x380>
	nop			; (mov r0, r0)
	sub	sp, fp, #12
	ldm	sp, {fp, sp, pc}

kprintn
	mov	ip, sp
	push	{fp, ip, lr, pc}
	sub	fp, ip, #4
	sub	sp, sp, #36	; 0x24
	str	r0, [fp, #-40]	; 0x28
	str	r1, [fp, #-44]	; 0x2c
	str	r2, [fp, #-48]	; 0x30
	sub	r3, fp, #32
	str	r3, [fp, #-16]
	ldr	r3, [fp, #-48]	; 0x30
	ldr	r2, [fp, #-44]	; 0x2c
	mov	r0, r2
	mov	r1, r3
	bl	20a00cc4 __umodsi3>
	mov	r3, r0
	ldr	r2, [pc, #120]	; 20a00bd0 kprintn+0xbc>
	ldrb	r2, [r2, r3]
	ldr	r3, [fp, #-16]
	strb	r2, [r3]
	ldr	r3, [fp, #-16]
	add	r3, r3, #1
	str	r3, [fp, #-16]
	ldr	r3, [fp, #-48]	; 0x30
	ldr	r0, [fp, #-44]	; 0x2c
	mov	r1, r3
	bl	20a00cdc __aeabi_uidiv>
	mov	r3, r0
	str	r3, [fp, #-44]	; 0x2c
	ldr	r3, [fp, #-44]	; 0x2c
	cmp	r3, #0
	bne	20a00b38 kprintn+0x24>
	ldr	r3, [fp, #-16]
	sub	r3, r3, #1
	str	r3, [fp, #-16]
	ldr	r3, [fp, #-16]
	ldrb	r3, [r3]
	mov	r2, r3
	ldr	r3, [fp, #-40]	; 0x28
	mov	r0, r2
	mov	lr, pc
	mov	pc, r3
	sub	r3, fp, #32
	ldr	r2, [fp, #-16]
	cmp	r2, r3
	bhi	20a00b90 kprintn+0x7c>
	sub	sp, fp, #12
	ldm	sp, {fp, sp, pc}
			; UNDEFINED> instruction: 0x20a011b0

strsep
	mov	ip, sp
	push	{fp, ip, lr, pc}
	sub	fp, ip, #4
	sub	sp, sp, #32
	str	r0, [fp, #-40]	; 0x28
	str	r1, [fp, #-44]	; 0x2c
	ldr	r3, [fp, #-40]	; 0x28
	ldr	r3, [r3]
	str	r3, [fp, #-16]
	ldr	r3, [fp, #-16]
	cmp	r3, #0
	bne	20a00c0c strsep+0x38>
	mov	r3, #0
	b	20a00cb8 strsep+0xe4>
	ldr	r3, [fp, #-16]
	str	r3, [fp, #-24]
	ldr	r3, [fp, #-16]
	ldrb	r3, [r3]
	str	r3, [fp, #-28]
	ldr	r3, [fp, #-16]
	add	r3, r3, #1
	str	r3, [fp, #-16]
	ldr	r3, [fp, #-44]	; 0x2c
	str	r3, [fp, #-20]
	ldr	r3, [fp, #-20]
	ldrb	r3, [r3]
	str	r3, [fp, #-32]
	ldr	r2, [fp, #-32]
	ldr	r3, [fp, #-28]
	cmp	r2, r3
	movne	r3, #0
	moveq	r3, #1
	and	r3, r3, #255	; 0xff
	ldr	r2, [fp, #-20]
	add	r2, r2, #1
	str	r2, [fp, #-20]
	cmp	r3, #0
	beq	20a00ca8 strsep+0xd4>
	ldr	r3, [fp, #-28]
	cmp	r3, #0
	bne	20a00c84 strsep+0xb0>
	mov	r3, #0
	str	r3, [fp, #-16]
	b	20a00c94 strsep+0xc0>
	ldr	r3, [fp, #-16]
	sub	r3, r3, #1
	mov	r2, #0
	strb	r2, [r3]
	ldr	r3, [fp, #-40]	; 0x28
	ldr	r2, [fp, #-16]
	str	r2, [r3]
	ldr	r3, [fp, #-24]
	b	20a00cb8 strsep+0xe4>
	ldr	r3, [fp, #-32]
	cmp	r3, #0
	bne	20a00c34 strsep+0x60>
	b	20a00c14 strsep+0x40>
	mov	r0, r3
	sub	sp, fp, #12
	ldm	sp, {fp, sp, pc}

__umodsi3
	push	{lr}
	sub	sp, sp, #4
	bl	20a00cdc __aeabi_uidiv>
	add	sp, sp, #4
	mov	r0, r1
	pop	{pc}

__aeabi_uidiv
	b	20a00ce8 __udivide>
	mvn	r0, #0
	mov	pc, lr

__udivide
	eor	r0, r1, r0
	eor	r1, r0, r1
	eor	r0, r1, r0
	cmp	r0, #1
	bcc	20a00ce0 __aeabi_uidiv+0x4>
	beq	20a00d1c __udivide+0x34>
	mov	ip, #0
	movs	r1, r1
	bpl	20a00d58 __divide+0x30>
	orr	ip, ip, #536870912	; 0x20000000
	lsrs	r1, r1, #1
	orrcs	ip, ip, #268435456	; 0x10000000
	b	20a00d58 __divide+0x30>
	mov	r0, r1
	mov	r1, #0
	mov	pc, lr

__divide
	eor	r0, r1, r0
	eor	r1, r0, r1
	eor	r0, r1, r0
	cmp	r0, #1
	bcc	20a00ce0 __aeabi_uidiv+0x4>
	beq	20a00d1c __udivide+0x34>
	ands	ip, r0, #-2147483648	; 0x80000000
	rsbmi	r0, r0, #0
	ands	r2, r1, #-2147483648	; 0x80000000
	eor	ip, ip, r2
	rsbmi	r1, r1, #0
	orr	ip, r2, ip, lsr #1
	mov	r2, #1
	mov	r3, #0
	movs	r1, r1
	bpl	20a00e64 __divide+0x13c>
	tst	r1, r0
	bmi	20a010d0 __divide+0x3a8>
	tst	r1, r0, lsl #1
	bmi	20a010c4 __divide+0x39c>
	tst	r1, r0, lsl #2
	bmi	20a010b8 __divide+0x390>
	tst	r1, r0, lsl #3
	bmi	20a010ac __divide+0x384>
	tst	r1, r0, lsl #4
	bmi	20a010a0 __divide+0x378>
	tst	r1, r0, lsl #5
	bmi	20a01094 __divide+0x36c>
	tst	r1, r0, lsl #6
	bmi	20a01088 __divide+0x360>
	tst	r1, r0, lsl #7
	bmi	20a0107c __divide+0x354>
	tst	r1, r0, lsl #8
	bmi	20a01070 __divide+0x348>
	tst	r1, r0, lsl #9
	bmi	20a01064 __divide+0x33c>
	tst	r1, r0, lsl #10
	bmi	20a01058 __divide+0x330>
	tst	r1, r0, lsl #11
	bmi	20a0104c __divide+0x324>
	tst	r1, r0, lsl #12
	bmi	20a01040 __divide+0x318>
	tst	r1, r0, lsl #13
	bmi	20a01034 __divide+0x30c>
	tst	r1, r0, lsl #14
	bmi	20a01028 __divide+0x300>
	tst	r1, r0, lsl #15
	bmi	20a0101c __divide+0x2f4>
	tst	r1, r0, lsl #16
	bmi	20a01010 __divide+0x2e8>
	tst	r1, r0, lsl #17
	bmi	20a01004 __divide+0x2dc>
	tst	r1, r0, lsl #18
	bmi	20a00ff8 __divide+0x2d0>
	tst	r1, r0, lsl #19
	bmi	20a00fec __divide+0x2c4>
	tst	r1, r0, lsl #20
	bmi	20a00fe0 __divide+0x2b8>
	tst	r1, r0, lsl #21
	bmi	20a00fd4 __divide+0x2ac>
	tst	r1, r0, lsl #22
	bmi	20a00fc8 __divide+0x2a0>
	tst	r1, r0, lsl #23
	bmi	20a00fbc __divide+0x294>
	tst	r1, r0, lsl #24
	bmi	20a00fb0 __divide+0x288>
	tst	r1, r0, lsl #25
	bmi	20a00fa4 __divide+0x27c>
	tst	r1, r0, lsl #26
	bmi	20a00f98 __divide+0x270>
	tst	r1, r0, lsl #27
	bmi	20a00f8c __divide+0x264>
	tst	r1, r0, lsl #28
	bmi	20a00f80 __divide+0x258>
	tst	r1, r0, lsl #29
	bmi	20a00f74 __divide+0x24c>
	tst	r1, r0, lsl #30
	bmi	20a00f68 __divide+0x240>
	b	20a00f5c __divide+0x234>
	cmp	r1, r0
	bcc	20a010dc __divide+0x3b4>
	cmp	r1, r0, lsl #1
	bcc	20a010d0 __divide+0x3a8>
	cmp	r1, r0, lsl #2
	bcc	20a010c4 __divide+0x39c>
	cmp	r1, r0, lsl #3
	bcc	20a010b8 __divide+0x390>
	cmp	r1, r0, lsl #4
	bcc	20a010ac __divide+0x384>
	cmp	r1, r0, lsl #5
	bcc	20a010a0 __divide+0x378>
	cmp	r1, r0, lsl #6
	bcc	20a01094 __divide+0x36c>
	cmp	r1, r0, lsl #7
	bcc	20a01088 __divide+0x360>
	cmp	r1, r0, lsl #8
	bcc	20a0107c __divide+0x354>
	cmp	r1, r0, lsl #9
	bcc	20a01070 __divide+0x348>
	cmp	r1, r0, lsl #10
	bcc	20a01064 __divide+0x33c>
	cmp	r1, r0, lsl #11
	bcc	20a01058 __divide+0x330>
	cmp	r1, r0, lsl #12
	bcc	20a0104c __divide+0x324>
	cmp	r1, r0, lsl #13
	bcc	20a01040 __divide+0x318>
	cmp	r1, r0, lsl #14
	bcc	20a01034 __divide+0x30c>
	cmp	r1, r0, lsl #15
	bcc	20a01028 __divide+0x300>
	cmp	r1, r0, lsl #16
	bcc	20a0101c __divide+0x2f4>
	cmp	r1, r0, lsl #17
	bcc	20a01010 __divide+0x2e8>
	cmp	r1, r0, lsl #18
	bcc	20a01004 __divide+0x2dc>
	cmp	r1, r0, lsl #19
	bcc	20a00ff8 __divide+0x2d0>
	cmp	r1, r0, lsl #20
	bcc	20a00fec __divide+0x2c4>
	cmp	r1, r0, lsl #21
	bcc	20a00fe0 __divide+0x2b8>
	cmp	r1, r0, lsl #22
	bcc	20a00fd4 __divide+0x2ac>
	cmp	r1, r0, lsl #23
	bcc	20a00fc8 __divide+0x2a0>
	cmp	r1, r0, lsl #24
	bcc	20a00fbc __divide+0x294>
	cmp	r1, r0, lsl #25
	bcc	20a00fb0 __divide+0x288>
	cmp	r1, r0, lsl #26
	bcc	20a00fa4 __divide+0x27c>
	cmp	r1, r0, lsl #27
	bcc	20a00f98 __divide+0x270>
	cmp	r1, r0, lsl #28
	bcc	20a00f8c __divide+0x264>
	cmp	r1, r0, lsl #29
	bcc	20a00f80 __divide+0x258>
	cmp	r1, r0, lsl #30
	bcc	20a00f74 __divide+0x24c>
	cmp	r1, r0, lsl #31
	subcs	r1, r1, r0, lsl #31
	addcs	r3, r3, r2, lsl #31
	cmp	r1, r0, lsl #30
	subcs	r1, r1, r0, lsl #30
	addcs	r3, r3, r2, lsl #30
	cmp	r1, r0, lsl #29
	subcs	r1, r1, r0, lsl #29
	addcs	r3, r3, r2, lsl #29
	cmp	r1, r0, lsl #28
	subcs	r1, r1, r0, lsl #28
	addcs	r3, r3, r2, lsl #28
	cmp	r1, r0, lsl #27
	subcs	r1, r1, r0, lsl #27
	addcs	r3, r3, r2, lsl #27
	cmp	r1, r0, lsl #26
	subcs	r1, r1, r0, lsl #26
	addcs	r3, r3, r2, lsl #26
	cmp	r1, r0, lsl #25
	subcs	r1, r1, r0, lsl #25
	addcs	r3, r3, r2, lsl #25
	cmp	r1, r0, lsl #24
	subcs	r1, r1, r0, lsl #24
	addcs	r3, r3, r2, lsl #24
	cmp	r1, r0, lsl #23
	subcs	r1, r1, r0, lsl #23
	addcs	r3, r3, r2, lsl #23
	cmp	r1, r0, lsl #22
	subcs	r1, r1, r0, lsl #22
	addcs	r3, r3, r2, lsl #22
	cmp	r1, r0, lsl #21
	subcs	r1, r1, r0, lsl #21
	addcs	r3, r3, r2, lsl #21
	cmp	r1, r0, lsl #20
	subcs	r1, r1, r0, lsl #20
	addcs	r3, r3, r2, lsl #20
	cmp	r1, r0, lsl #19
	subcs	r1, r1, r0, lsl #19
	addcs	r3, r3, r2, lsl #19
	cmp	r1, r0, lsl #18
	subcs	r1, r1, r0, lsl #18
	addcs	r3, r3, r2, lsl #18
	cmp	r1, r0, lsl #17
	subcs	r1, r1, r0, lsl #17
	addcs	r3, r3, r2, lsl #17
	cmp	r1, r0, lsl #16
	subcs	r1, r1, r0, lsl #16
	addcs	r3, r3, r2, lsl #16
	cmp	r1, r0, lsl #15
	subcs	r1, r1, r0, lsl #15
	addcs	r3, r3, r2, lsl #15
	cmp	r1, r0, lsl #14
	subcs	r1, r1, r0, lsl #14
	addcs	r3, r3, r2, lsl #14
	cmp	r1, r0, lsl #13
	subcs	r1, r1, r0, lsl #13
	addcs	r3, r3, r2, lsl #13
	cmp	r1, r0, lsl #12
	subcs	r1, r1, r0, lsl #12
	addcs	r3, r3, r2, lsl #12
	cmp	r1, r0, lsl #11
	subcs	r1, r1, r0, lsl #11
	addcs	r3, r3, r2, lsl #11
	cmp	r1, r0, lsl #10
	subcs	r1, r1, r0, lsl #10
	addcs	r3, r3, r2, lsl #10
	cmp	r1, r0, lsl #9
	subcs	r1, r1, r0, lsl #9
	addcs	r3, r3, r2, lsl #9
	cmp	r1, r0, lsl #8
	subcs	r1, r1, r0, lsl #8
	addcs	r3, r3, r2, lsl #8
	cmp	r1, r0, lsl #7
	subcs	r1, r1, r0, lsl #7
	addcs	r3, r3, r2, lsl #7
	cmp	r1, r0, lsl #6
	subcs	r1, r1, r0, lsl #6
	addcs	r3, r3, r2, lsl #6
	cmp	r1, r0, lsl #5
	subcs	r1, r1, r0, lsl #5
	addcs	r3, r3, r2, lsl #5
	cmp	r1, r0, lsl #4
	subcs	r1, r1, r0, lsl #4
	addcs	r3, r3, r2, lsl #4
	cmp	r1, r0, lsl #3
	subcs	r1, r1, r0, lsl #3
	addcs	r3, r3, r2, lsl #3
	cmp	r1, r0, lsl #2
	subcs	r1, r1, r0, lsl #2
	addcs	r3, r3, r2, lsl #2
	cmp	r1, r0, lsl #1
	subcs	r1, r1, r0, lsl #1
	addcs	r3, r3, r2, lsl #1
	cmp	r1, r0
	subcs	r1, r1, r0
	addcs	r3, r3, r2
	tst	ip, #536870912	; 0x20000000
	bne	20a01100 __divide+0x3d8>
	mov	r0, r3
	cmp	ip, #0
	rsbmi	r1, r1, #0
	lsls	ip, ip, #1
	bicmi	r0, r0, #-2147483648	; 0x80000000
	rsbmi	r0, r0, #0
	mov	pc, lr
	tst	ip, #268435456	; 0x10000000
	lsl	r1, r1, #1
	orrne	r1, r1, #1
	lsl	r3, r3, #1
	cmp	r1, r0
	subcs	r1, r1, r0
	addcs	r3, r3, r2
	mov	r0, r3
	mov	pc, lr


hexdigits-0x8c
	andeq	r0, r0, sl
	strcs	r3, [r0, #-3646]!	; 0xe3e
	svcvs	0x00622073
	subpl	r7, ip, #1862270976	; 0x6f000000
	eorscc	r6, r2, r9, lsr r7
	ldrbvs	r2, [r2, #-44]!	; 0x2c
	ldmdbvs	r3!, {r1, r2, r4, r5, r6, r8, fp, sp, lr}^
	strcs	r6, [r0, #-3695]!	; 0xe6f
	andeq	r0, r0, r3, ror sl
	eorscc	r6, r2, r9, lsr r7
	svcvs	0x006f6220
	ldrbvs	r2, [r4, #-116]!	; 0x74
	andeq	r7, r0, r3, ror r4
	mrccs	14, 1, r2, cr0, cr0, {1}
	andeq	r0, r0, r1, lsr r0
	andeq	r0, r0, fp, lsr r0
	ldmdbvs	r9!, {r2, r4, r6, r9, ip, sp, lr}^
	eorcs	r6, r0, #28835840	; 0x1b80000
	cdpcs	3, 2, cr7, cr2, cr5, {1}
	andeq	r2, sl, lr, lsr #28
	stfvse	f6, [r9], #-280	; 0xfffffee8
	strtvc	r6, [r0], #-1125	; 0x465
	svcvs	0x006c206f
	blvs	2121a30c __bss_end__+0x8190bc>
	strbvs	r7, [lr, #-613]!	; 0x265
	andeq	r0, r0, ip, ror #20
	cmnvs	r5, #6619136	; 0x650000
	strbtvc	r7, [r5], #-544	; 0x220
	strbvs	r7, [lr, #-629]!	; 0x275
	eorvc	r2, r0, #25600	; 0x6400
	cmnvs	r4, r5, ror #6
	mcrvs	4, 3, r7, cr9, cr2, {3}
	cdpcs	14, 2, cr2, cr14, cr7, {3}
	andeq	r0, r0, sl
	andeq	r0, r0, sl

hexdigits
	teqcc	r2, #12
			; UNDEFINED> instruction: 0x37363534
	rsbvs	r3, r1, #917504	; 0xe0000
	strbtvs	r6, [r5], -r3, ror #8

ly of section .bss:

paniced.1218
	andeq	r0, r0, r0

sbuf
	andeq	r0, r0, r0

ebuf
	andeq	r0, r0, r0

bi_next
	andeq	r0, r0, r0

bi_size
	andeq	r0, r0, r0

bootinfo
	andeq	r0, r0, r0

pclk
	andeq	r0, r0, r0

files


errno
	andeq	r0, r0, r0

Disassembly of section .comment:

00000000 .comment
   0:	bcc	10d0d24 _start-0x1f92f2dc>
   4:	strbvs	r2, [lr, #-2080]	; 0x820
   8:	ldrbmi	r4, [r3], #-628	; 0x274
   c:	rsbcc	r6, r2, #512	; 0x200
  10:	teqcc	r0, r0, lsr #4
  14:	eorscc	r3, r2, r1, lsr r1
  18:	strtcc	r2, [r0], #-2354	; 0x932
  1c:	teqcc	lr, #192937984	; 0xb800000
	...

Disassembly of section .debug_aranges:

00000000 .debug_aranges
   0:	andeq	r0, r0, ip, lsl r0
   4:	andeq	r0, r0, r2
   8:	andeq	r0, r4, r0
   c:	andeq	r0, r0, r0
  10:	strdcs	r0, [r0], ip	; UNPREDICTABLE>
  14:	andeq	r0, r0, r4, lsl r3
	...
  20:	andeq	r0, r0, ip, lsl r0
  24:	rsbseq	r0, fp, #2
  28:	andeq	r0, r4, r0
  2c:	andeq	r0, r0, r0
  30:	adccs	r0, r0, r0, lsl r4
  34:	andeq	r0, r0, r0, rrx
	...
  40:	andeq	r0, r0, ip, lsl r0
  44:	cmpeq	r8, #2
  48:	andeq	r0, r4, r0
  4c:	andeq	r0, r0, r0
  50:	adccs	r0, r0, r0, ror r4
  54:	andeq	r0, r0, r0, ror r0
	...
  60:	andeq	r0, r0, ip, lsl r0
  64:	stmdaeq	r3, {r1}^
  68:	andeq	r0, r4, r0
  6c:	andeq	r0, r0, r0
  70:	adccs	r0, r0, r0, ror #9
  74:	andeq	r0, r0, r4, lsr r0
	...
  80:	andeq	r0, r0, ip, lsl r0
  84:	stmdbeq	pc, {r1}	; UNPREDICTABLE>
  88:	andeq	r0, r4, r0
  8c:	andeq	r0, r0, r0
  90:	adccs	r0, r0, r4, lsl r5
  94:	andeq	r0, r0, ip, asr r1
	...
  a0:	andeq	r0, r0, ip, lsl r0
  a4:	cdpeq	0, 4, cr0, cr1, cr2, {0}
  a8:	andeq	r0, r4, r0
  ac:	andeq	r0, r0, r0
  b0:	adccs	r0, r0, r0, ror r6
  b4:	andeq	r0, r0, r4, ror #10
	...
  c0:	andeq	r0, r0, ip, lsl r0
  c4:	strbne	r0, [pc], -r2
  c8:	andeq	r0, r4, r0
  cc:	andeq	r0, r0, r0
  d0:	ldrdcs	r0, [r0], r4	; UNPREDICTABLE>
  d4:	strdeq	r0, [r0], -r0	; UNPREDICTABLE>
	...

Disassembly of section .debug_pubnames:

00000000 .debug_pubnames
   0:	andeq	r0, r0, fp, rrx
   4:	andeq	r0, r0, r2
   8:	rsbseq	r0, fp, #0
   c:	addseq	r0, fp, r0
  10:	cmnvs	sp, r0
  14:	bmi	1b9c0 _start-0x209e4640>
  18:	stcvs	0, cr0, [r0], {1}
  1c:	rsbcc	r3, r7, #1867776	; 0x1c8000
  20:	cmnvs	r0, r0, lsr pc
  24:	rsbeq	r6, r3, lr, ror #18
  28:			; UNDEFINED> instruction: 0x000001b5
  2c:	cmnvs	r4, #469762048	; 0x1c000000
  30:	rsbseq	r6, r2, r8, ror #2
  34:	andeq	r0, r0, ip, ror #3
  38:	ldrbtvc	r7, [r4], #-607	; 0x25f
  3c:	andeq	r3, r2, r0, lsl #4
  40:	svcvs	0x006f6200
  44:			; UNDEFINED> instruction: 0x666e6974
  48:	subeq	r0, r4, #111	; 0x6f
  4c:	stmdbvs	r2!, {}^	; UNPREDICTABLE>
  50:	bvc	1a5cdd4 _start-0x1efa322c>
  54:	subseq	r0, r6, #101	; 0x65
  58:	stmdbvs	r2!, {}^	; UNPREDICTABLE>
  5c:	stmdavc	r5!, {r0, r1, r2, r3, r4, r6, r9, sl, fp, sp, lr}^
  60:	rsbeq	r0, r8, #116	; 0x74
  64:	cmnvs	r0, #0
  68:	andeq	r6, r0, ip, ror #22
  6c:	stmdane	r0, {}	; UNPREDICTABLE>
  70:	andeq	r0, r0, #0
  74:	andeq	r7, r2, r0, lsl #22
  78:	andeq	sp, r0, r0, lsl #26
  7c:	andeq	r9, r0, r0, lsl #18
  80:	cdpvs	0, 6, cr7, cr1, cr0, {0}
  84:	andeq	r6, r0, r9, ror #6
  88:	blne	90 _start-0x209fff70>
  8c:	andeq	r0, r0, #0
  90:	andeq	r5, r3, r0, lsl #16
  94:	andeq	lr, r4, r0, lsl #22
  98:	andeq	r9, r4, r0, lsl #30
  9c:	svcvs	0x006c6300
  a0:	cfstr64vs	mvdx6, [r1], #-460	; 0xfffffe34
  a4:	andeq	r0, r0, ip, rrx
  a8:	andseq	r0, r9, r0
  ac:	andeq	r0, r2, r0
  b0:	andeq	r0, r0, r3, asr #16
  b4:	andeq	r0, r0, ip, asr #1
  b8:	muleq	r0, r9, r0
  bc:	mcrvs	2, 3, r7, cr9, cr0, {3}
  c0:	andeq	r6, r0, r4, ror r6
  c4:	stmdane	r0, {}	; UNPREDICTABLE>
  c8:	andeq	r0, r0, #0
  cc:	andeq	r0, r9, r0, lsl #30
  d0:	andeq	r3, r5, r0, lsl #4
  d4:	andeq	r9, r4, r0, lsl #30
  d8:	svcvs	0x006c6300
  dc:	andeq	r6, r0, r3, ror r5
  e0:	strcc	r0, [r0], -r0
  e4:	andeq	r0, r0, #0
  e8:	andeq	r4, lr, r0, lsl #2
  ec:	andeq	ip, r2, r0, lsl #14
  f0:	andeq	sp, r0, r0, lsl #22
  f4:	rsbsvc	r7, r0, #0
  f8:	ldrbtvs	r6, [r4], -r9, ror #28
  fc:	andeq	r1, r1, r0
 100:	cdpvs	6, 7, cr7, cr3, cr0, {0}
 104:	mcrvs	2, 3, r7, cr9, cr0, {3}
 108:	svcge	0x00006674
 10c:	stmdavs	r0, {r1}
 110:	stmdbvs	r4!, {r0, r2, r5, r6, fp, ip, sp, lr}^
 114:	cmnvc	r4, #1687552	; 0x19c000
 118:	andeq	r0, r0, r0
 11c:	andeq	r1, r0, r0, lsl #16
 120:	stmdaeq	r0, {r9}
 124:	andgt	r0, r0, #17
 128:	svcge	0x00000004
 12c:	strvs	r0, [r0], -r4
 130:	cmnvc	r5, #26880	; 0x6900
 134:	andeq	r0, r0, r0
 138:	andeq	r1, r0, r0, lsl #16
 13c:	bgt	944 _start-0x209ff6bc>
 140:	strhi	r0, [r0, #-21]
 144:	andvc	r0, r0, #0
 148:	strvs	r0, [r0]
 14c:	svcvs	0x006e7272
 150:	andeq	r0, r0, r0
 154:	andeq	r1, r0, r0, lsl #18
 158:	svcmi	0x00000200
 15c:	streq	r0, [r0, #-22]
 160:	stmdavc	r0, {r0}
 164:	movwvc	r0, #0
 168:	ldrbvs	r7, [r3, #-628]!	; 0x274
 16c:	andeq	r0, r0, r0, ror r0
	...

Disassembly of section .debug_info:

00000000 .debug_info
       0:	andeq	r0, r0, r7, ror r2
       4:	andeq	r0, r0, r2
       8:	mrseq	r0, (UNDEF: 4)
       c:	andeq	r0, r0, r2, lsl r0
      10:	andeq	r1, r1, r1, lsl #16
      14:	andeq	ip, r0, r0, lsl #26
      18:	andge	pc, r0, r0, lsl #24
      1c:	andge	r1, r4, r0, lsr #32
      20:	andeq	r0, r0, r0, lsr #32
      24:	streq	r0, [r1], -r0, lsl #4
      28:	andeq	r0, r0, r2, lsl #1
      2c:	andhi	r0, r8, r2, lsl #2
      30:	andeq	r0, r0, #0
      34:	teqeq	r7, r2, lsl #10
      38:	andeq	r0, r2, #0
      3c:	andeq	r3, r0, r7, lsl #12
      40:	streq	r0, [r4, #-768]	; 0x300
      44:	rsbseq	r6, r4, r9, ror #28
      48:	andeq	r8, r0, r4, lsl #28
      4c:	teqpl	r2, #0
      50:	andeq	r0, r0, #0
      54:	adceq	r0, r8, r4, lsl #14
      58:	stmdaeq	r2, {}	; UNPREDICTABLE>
      5c:	andeq	r0, r1, r5, lsl #20
      60:	streq	r0, [r8, -r0, lsl #4]
      64:	muleq	r0, lr, r0
      68:	svceq	0x00050402
      6c:	andeq	r0, r0, #1
      70:	adceq	r0, r3, r4, lsl #14
      74:	movwvc	r0, #16384	; 0x4000
      78:	movweq	r0, #0
      7c:	andeq	r6, r0, r6, lsr pc
      80:	strhi	r0, [r4, -r0, lsl #10]
      84:	andeq	r0, r0, #0
      88:	addeq	r0, r9, r1, lsl #16
      8c:	cdpne	0, 0, cr0, cr4, cr0, {0}
      90:	streq	r0, [r0]
      94:	andeq	r4, r0, pc, asr r8
      98:	streq	r0, [r4, -r0, lsl #12]
      9c:	andeq	r9, r0, r1, lsl #18
      a0:	cmpeq	fp, r0, lsl #2
      a4:	strdcs	r0, [r0], ip	; UNPREDICTABLE>
      a8:	adccs	r0, r0, r0, lsr r2
      ac:	andeq	r0, r0, r0
      b0:	andeq	r0, r0, r6, lsl r1
      b4:	andeq	r0, r1, r8, lsl #10
      b8:	cmpmi	fp, r0, lsl #2
      bc:	andeq	r0, r0, #0
      c0:			; UNDEFINED> instruction: 0x31085491
      c4:	tsteq	r0, r1
      c8:	andeq	r1, r1, fp, asr r6
      cc:	addspl	r0, r1, r0, lsl #4
      d0:	andeq	r5, r1, r9, lsl #2
      d4:	cmpmi	sp, r0, lsl #2
      d8:	andeq	r0, r0, #0
      dc:	muleq	r9, r1, r4
      e0:	tsteq	r0, r1
      e4:	andeq	r4, r0, sp, asr r1
      e8:	addsvs	r0, r1, r0, lsl #4
      ec:	andeq	r4, r1, r9, lsl #16
      f0:	cmnhi	r3, r0, lsl #2
      f4:	andeq	r0, r0, #0
      f8:	andvs	r6, sl, #9502720	; 0x910000
      fc:	strvs	r0, [r1], #-102	; 0x66
     100:	andeq	r0, r0, r1, lsl #1
     104:	ldmdbeq	ip, {r1, r8, ip, pc}^
     108:	andeq	r0, r0, r8, lsr #32
     10c:	tsteq	ip, r1, lsl #10
     110:	mrsls	r0, (UNDEF: 2)
     114:	streq	r0, [r5], #-111	; 0x6f
     118:	andeq	r0, r0, r1, lsl #1
     11c:	strcc	r0, [r2], -r2, lsl #2
     120:	bleq	12c _start-0x209ffed4>
     124:	andeq	r0, r0, r6, asr r0
     128:	andcc	ip, r1, r1, lsl #8
     12c:	eorgt	sl, r0, r2
     130:	stccs	0, cr10, [r0], #-8
     134:	bmi	13c _start-0x209ffec4>
     138:	stmdaeq	r0, {r0}
     13c:	andeq	r0, r0, fp, ror r0
     140:	subeq	ip, r8, r1, lsl #8
     144:	mrsls	r0, (UNDEF: 2)
     148:	tsteq	ip, ip, rrx
     14c:	andeq	r0, r0, r5
     150:	sbceq	ip, r0, #256	; 0x100
     154:	rsceq	r2, ip, #160	; 0xa0
     158:	subseq	r2, r8, r0, lsr #1
     15c:	strlt	r0, [fp]
     160:	mrseq	r0, (UNDEF: 0)
     164:	rsceq	r0, ip, #53	; 0x35
     168:	cmneq	r0, #160	; 0xa0
     16c:	addeq	r2, r4, r0, lsr #1
     170:			; UNDEFINED> instruction: 0x01af0000
     174:	stccc	0, cr0, [r8], {0}
     178:	tsteq	r0, r1
     17c:	ldrdeq	r7, [r0], -r4
     180:	lfmvs	f0, 4, [r1], {0}
     184:	andeq	r5, r1, r8, lsl #2
     188:	svcge	0x00d40100
     18c:	andeq	r0, r0, #1
     190:	muleq	r8, r1, r8
     194:	tsteq	r0, r1
     198:	ldrdeq	sl, [r1], -r4
     19c:	ldrvs	r0, [r1], #512	; 0x200
     1a0:	andeq	r7, r0, r8, lsl #22
     1a4:	svcge	0x00d40100
     1a8:	andeq	r0, r0, #1
     1ac:	streq	r6, [r0, #-145]	; 0x91
     1b0:	andeq	r4, r0, r4, lsl #2
     1b4:	bne	435bc _start-0x209bca44>
     1b8:	tsteq	r0, r5
     1bc:	andvs	r0, r1, r2, lsl r1
     1c0:	eorgt	sl, r0, r3
     1c4:	eorlt	sl, r0, r3
     1c8:	stc	0, cr0, [r0], {0}
     1cc:	cdpeq	0, 0, cr0, cr0, cr1, {0}
     1d0:	andne	r0, r1, #99	; 0x63
     1d4:	andeq	r4, r0, r1, lsl #2
     1d8:	ldrvs	r0, [r1], #512	; 0x200
     1dc:	andeq	r0, r0, pc
     1e0:	tsteq	r4, r0, lsl #2
     1e4:	andeq	r0, r0, r8, asr #32
     1e8:	rsbeq	r9, ip, r2, lsl #2
     1ec:	subseq	r0, r1, sp, lsl #2
     1f0:	andcs	r0, r1, #0
     1f4:	biceq	r0, r0, #1073741824	; 0x40000000
     1f8:	ldreq	r2, [r0], #-160	; 0xa0
     1fc:	sbcseq	r2, ip, r0, lsr #1
     200:	eoreq	r0, r5, #0
     204:	stmdbvs	pc, {}	; UNPREDICTABLE>
     208:	mrseq	r0, (UNDEF: 0)
     20c:	subeq	r0, r1, r4, lsr #2
     210:	mrsls	r0, (UNDEF: 2)
     214:	ldclvs	0, cr1, [r4, #-400]!	; 0xfffffe70
     218:	strcs	r0, [r1], #-112	; 0x70
     21c:	andeq	r4, r0, r1, lsl #2
     220:	addsvs	r0, r1, r0, lsl #4
     224:	rsbseq	r1, fp, r0, lsl #2
     228:	andpl	r0, r1, #0
     22c:	andeq	r0, r0, r1, asr #32
     230:	andsvs	r0, r2, r1, lsl #2
     234:	mrseq	r0, (UNDEF: 0)
     238:	andeq	r9, r0, fp, lsr r9
     23c:	movweq	r0, #20736	; 0x5100
     240:	ldrdcs	r1, [r0], r4	; UNPREDICTABLE>
     244:	andeq	r4, r0, r2, lsl r9
     248:	teqmi	ip, r0, lsl #2
     24c:	mrseq	r0, (UNDEF: 0)
     250:	bicsne	r0, r0, r5, lsl #6
     254:	svcne	0x001220a0
     258:	tsteq	r0, r1
     25c:	andeq	r8, r0, sp, lsr r1
     260:	movweq	r0, #20736	; 0x5100
     264:	adccs	r1, r0, ip, asr #3
     268:	andeq	r7, r0, r2, lsl fp
     26c:	cmpmi	r2, r0, lsl #2
     270:	mrseq	r0, (UNDEF: 0)
     274:	bicsne	r0, r8, r5, lsl #6
     278:	stmdble	r0, {r5, r7, sp}
     27c:	andeq	r0, r0, #0
     280:	andeq	r1, r1, r0, lsl #18
     284:	andne	r0, r1, #0
     288:	mrseq	r0, (UNDEF: 0)
     28c:			; UNDEFINED> instruction: 0x000001b4
     290:	andeq	r0, r0, r0, ror r1
     294:	adccs	r0, r0, r0, lsl r4
     298:	adccs	r0, r0, r0, ror r4
     29c:	andeq	r0, r0, r7, lsl #2
     2a0:	andhi	r0, r6, #-2147483648	; 0x80000000
     2a4:	andeq	r0, r0, #0
     2a8:	addeq	r0, r0, r1, lsl #16
     2ac:	andeq	r0, r2, #0
     2b0:	andeq	r2, r1, r5, lsl #14
     2b4:	streq	r0, [r2, -r0, lsl #4]
     2b8:	andeq	r0, r0, r6, lsr r0
     2bc:	stmdbvs	r5, {r0, r1, sl}
     2c0:	andeq	r7, r0, #1845493760	; 0x6e000000
     2c4:	adceq	r0, r8, r4, lsl #14
     2c8:	stmdaeq	r2, {}	; UNPREDICTABLE>
     2cc:	andeq	r0, r1, r5, lsl #20
     2d0:	streq	r0, [r8, -r0, lsl #4]
     2d4:	muleq	r0, lr, r0
     2d8:	svceq	0x00050402
     2dc:	andeq	r0, r0, #1
     2e0:	adceq	r0, r3, r4, lsl #14
     2e4:	mrseq	r0, (UNDEF: 2)
     2e8:	andeq	r8, r0, r8, lsl #18
     2ec:			; UNDEFINED> instruction: 0x01aa0400
     2f0:	stmdami	r2, {}	; UNPREDICTABLE>
     2f4:	andeq	r0, r0, sp, ror r0
     2f8:	cmpeq	r6, r5, lsl #8
     2fc:	stcge	0, cr0, [r4], {0}
     300:	movweq	r0, #1
     304:	andeq	r7, r0, r3, lsr r2
     308:	strls	r0, [r4], #-1536	; 0x600
     30c:	streq	r0, [r0, -r0]
     310:	andeq	r0, r0, fp, rrx
     314:	andeq	r0, ip, r8, lsl #2
     318:	movwcs	r0, #4096	; 0x1000
     31c:	andge	r1, r4, r1
     320:	andge	r7, r4, r0, lsr #32
     324:	andeq	r0, r1, r0, lsr #16
     328:	stclvs	9, cr0, [r6]
     32c:	movwcs	r0, #4212	; 0x1074
     330:	andeq	r0, r0, lr, lsl #1
     334:	beq	1c24744 _start-0x1eddb8bc>
     338:	rsbseq	r6, r0, fp, lsl #2
     33c:	addeq	r2, r3, r1, lsl #10
     340:	mrsls	r0, (UNDEF: 2)
     344:	cmneq	r8, ip, asr ip
     348:	strcs	r0, [r1, -r0]
     34c:	andeq	r0, r0, r1, asr #32
     350:	bicne	r0, r0, r5, lsl #6
     354:	andeq	r2, r0, r0, lsr #1
     358:	andeq	r0, r0, r7, ror #9
     35c:	movseq	r0, r2
     360:	mrseq	r0, (UNDEF: 4)
     364:	andeq	r0, r0, r2, lsl r0
     368:	andeq	r9, r2, r1, lsl #2
     36c:	andeq	r7, r1, r0
     370:	andge	r7, r4, r0
     374:	andge	lr, r4, r0, lsr #32
     378:	andeq	lr, r1, r0, lsr #14
     37c:	streq	r0, [r1], -r0, lsl #4
     380:	andeq	r0, r0, r2, lsl #1
     384:	andhi	r0, r8, r2, lsl #2
     388:	andeq	r0, r0, #0
     38c:	teqeq	r7, r2, lsl #10
     390:	andeq	r0, r2, #0
     394:	andeq	r3, r0, r7, lsl #12
     398:	streq	r0, [r4, #-768]	; 0x300
     39c:	rsbseq	r6, r4, r9, ror #28
     3a0:	andeq	r8, r0, r4, lsl #28
     3a4:	teqpl	r2, #0
     3a8:	andeq	r0, r0, #0
     3ac:	adceq	r0, r8, r4, lsl #14
     3b0:	str	r0, [r4]
     3b4:	andeq	r0, r0, #2
     3b8:	andeq	r6, r0, r8, lsr r5
     3bc:	streq	r0, [r8, #-512]	; 0x200
     3c0:	andeq	r0, r0, sl, lsl #2
     3c4:	andeq	r5, r3, r4, lsl #26
     3c8:	ldrvc	r0, [sl, -r0, lsl #4]!
     3cc:	andeq	r0, r0, #0
     3d0:	addseq	r0, lr, r8, lsl #14
     3d4:	streq	r0, [r2]
     3d8:	andeq	r0, r1, r5, lsl #30
     3dc:	streq	r0, [r4, -r0, lsl #4]
     3e0:	andeq	r0, r0, r3, lsr #1
     3e4:	addseq	r0, r2, r5, lsl #8
     3e8:	mrseq	r0, (UNDEF: 2)
     3ec:	andeq	r8, r0, r8, lsl #18
     3f0:	streq	r0, [r4], #-1024	; 0x400
     3f4:	strcs	r0, [r3], -r0
     3f8:	andeq	r0, r0, r8, asr #32
     3fc:	andeq	r8, r2, r4, lsl #4
     400:	stmdami	r9!, {r8, r9}
     404:	streq	r0, [r0]
     408:	andeq	r0, r0, r7, ror r3
     40c:	subseq	r2, sl, r3, lsl #20
     410:	bge	100418 _start-0x208ffbe8>
     414:	movweq	r0, #3
     418:	andeq	r4, r0, lr, lsr #16
     41c:	subseq	r0, r1, #0
     420:	stmdavs	r4, {}	; UNPREDICTABLE>
     424:	andeq	r0, r0, r5, lsl #1
     428:	andeq	r8, r3, r4, lsl #26
     42c:	bpl	fe041434 __bss_end__+0xdd6401e4>
     430:	streq	r0, [r0]
     434:	andeq	r0, r0, r4, lsr #4
     438:	subeq	r8, r8, r4, lsl #4
     43c:	movwmi	r0, #16384	; 0x4000
     440:	streq	r0, [r0], #-2
     444:	muleq	r0, sl, sl
     448:	movweq	r0, #41984	; 0xa400
     44c:	stcls	0, cr0, [r4]
     450:	andeq	r0, r0, ip, rrx
     454:	andeq	r8, r2, r4, lsl #22
     458:	cfstrsvs	mvf0, [r7]
     45c:	streq	r0, [r0]
     460:	andeq	r0, r0, r8, ror #6
     464:	subeq	sl, r8, r4, lsl #30
     468:	strcs	r0, [r6, -r0]
     46c:	streq	r0, [r0], #-2
     470:	addeq	r0, r5, r5, lsl r1
     474:	mrscs	r0, (UNDEF: 6)
     478:	streq	r0, [r0], #-3
     47c:	subseq	r0, sl, r0, lsr #2
     480:	mrsge	r0, (UNDEF: 7)
     484:	stceq	0, cr0, [r0], {3}
     488:	cmpeq	r3, r5, lsl #8
     48c:	stcne	0, cr0, [r8]
     490:	streq	r0, [r0, #-2]
     494:	andeq	r1, r1, r5, lsr lr
     498:	eoreq	r0, r3, r0, lsl #4
     49c:	andeq	r0, r2, r8, lsl #10
     4a0:	cfabs32vc	mvfx0, mvfx6
     4a4:	andeq	r0, r0, #0
     4a8:	streq	r0, [r0, -r3, lsr #16]
     4ac:	andeq	r0, r0, r0
     4b0:	mrcmi	6, 1, r0, cr1, cr12, {3}
     4b4:	stmdaeq	r0, {r1}
     4b8:	andeq	r0, r0, sp, asr #6
     4bc:	rscseq	r3, r1, r6, lsl #4
     4c0:	movwcs	r0, #8192	; 0x2000
     4c4:			; UNDEFINED> instruction: 0x03bc0800
     4c8:	movwcc	r0, #24576	; 0x6000
     4cc:	andeq	r0, r0, r4, lsr #1
     4d0:	stmdaeq	r8, {r1, r8, r9, sp}
     4d4:	andeq	r0, r0, r8, lsr #6
     4d8:	rscseq	r3, ip, r6, lsl #8
     4dc:	movwcs	r0, #8192	; 0x2000
     4e0:	eorseq	r0, sl, #786432	; 0xc0000
     4e4:	strcc	r0, [r6]
     4e8:	andeq	r0, r0, r7, lsl #2
     4ec:	ldmdaeq	r4, {r1, r8, r9, sp}
     4f0:	andeq	r0, r0, r0, ror r3
     4f4:	adcseq	r3, sl, r6, lsl #12
     4f8:	movwcs	r0, #8192	; 0x2000
     4fc:	rsbseq	r0, fp, #1572864	; 0x180000
     500:	strcc	r0, [r6, -r0]
     504:	muleq	r0, r9, r0
     508:	ldmdaeq	ip, {r1, r8, r9, sp}
     50c:	andeq	r0, r0, r5, lsl #7
     510:	rscseq	r3, r1, r6, lsl #16
     514:	movwcs	r0, #8192	; 0x2000
     518:	orrseq	r0, sp, #2097152	; 0x200000
     51c:	bcc	180524 _start-0x2087fadc>
     520:	andeq	r0, r0, sl, lsr #2
     524:	stmdaeq	r8!, {r1, r8, r9, sp}
     528:	andeq	r0, r0, r8, asr r2
     52c:	teqeq	sl, r6, lsl #22
     530:	movwcs	r0, #8192	; 0x2000
     534:	biceq	r0, r4, #3407872	; 0x340000
     538:	stccc	0, cr0, [r6], {0}
     53c:	andeq	r0, r0, sl, lsr #2
     540:	stmdaeq	r0, {r1, r8, r9, sp}^
     544:	andeq	r0, r0, r9, ror #7
     548:	teqeq	sl, r6, lsl #26
     54c:	movwcs	r0, #8192	; 0x2000
     550:	andeq	r0, sp, #4980736	; 0x4c0000
     554:	stmdami	r6, {}	; UNPREDICTABLE>
     558:	andeq	r0, r0, pc, lsr #1
     55c:	ldmdaeq	r8, {r1, r8, r9, sp}^
     560:	andeq	r0, r0, r6, lsr r3
     564:	sbcseq	r4, r0, r6, lsl #18
     568:	movwcs	r0, #8192	; 0x2000
     56c:	rsbeq	r0, fp, #6291456	; 0x600000
     570:	bmi	180578 _start-0x2087fa88>
     574:	ldrdeq	r0, [r0], -fp
     578:	stmdaeq	r8!, {r1, r8, r9, sp}^
     57c:	andeq	r0, r0, r0, lsl r3
     580:	subeq	r4, r8, r6, lsl #22
     584:	movwcs	r0, #8192	; 0x2000
     588:	orrseq	r0, r6, #7077888	; 0x6c0000
     58c:	stcmi	0, cr0, [r6], {0}
     590:	andeq	r0, r0, r8, asr #32
     594:	ldmdaeq	r0!, {r1, r8, r9, sp}^
     598:	ldrdeq	r0, [r0], -r1
     59c:	subeq	r4, lr, #384	; 0x180
     5a0:	movwcs	r0, #8192	; 0x2000
     5a4:	stmdami	r9, {r2, r4, r5, r6}
     5a8:	cdppl	0, 0, cr0, cr0, cr0, {0}
     5ac:	beq	5bc _start-0x209ffa44>
     5b0:	andeq	r0, r0, r5, lsl #1
     5b4:	svccs	0x00070001
     5b8:	stmdane	r0, {r0, r1}
     5bc:	adcseq	r7, pc, #117440512	; 0x7000000
     5c0:	stcne	0, cr0, [r8], {0}
     5c4:	streq	r0, [r0, -r3]
     5c8:	andeq	r4, r3, r5, ror r6
     5cc:	eoreq	r0, r3, r0, lsl #4
     5d0:	andeq	pc, r2, r8, lsl #4
     5d4:	ldclpl	7, cr0, [r6]
     5d8:	andeq	r0, r0, #3
     5dc:	strvc	r0, [r8], -r3, lsr #8
     5e0:	streq	r0, [r0, -r2]
     5e4:	andeq	r8, r3, r7, ror r9
     5e8:	stmdaeq	r3!, {r9}
     5ec:	andeq	r4, r2, r8, lsl #22
     5f0:	ldmdbhi	r8!, {r8, r9, sl}^
     5f4:	andeq	r0, r0, #3
     5f8:	andmi	r0, r8, r3, lsr #24
     5fc:	streq	r0, [r0, -r3]
     600:	andeq	sl, r3, r9, ror r9
     604:	eorne	r0, r3, r0, lsl #4
     608:	andeq	r0, r0, r8
     60c:	bgt	1e82214 _start-0x1eb7ddec>
     610:	andeq	r0, r0, #3
     614:	bleq	56a8 _start-0x209fa958>
     618:	andeq	r4, r0, r1, lsl #2
     61c:	andeq	sp, r2, r0, lsl #8
     620:	sbcseq	r0, r4, #0
     624:	svcle	0x000c0000
     628:	andeq	r0, r0, r2
     62c:	sbcseq	r0, sl, #83886080	; 0x5000000
     630:	andls	r0, sp, #0
     634:	streq	r0, [r0]
     638:	andeq	lr, r2, r4, lsl #10
     63c:	mvnseq	r0, #0
     640:	ldreq	r0, [ip, -r0]
     644:	ldrdeq	r4, [r3], -r9
     648:	movteq	r0, #22528	; 0x5800
     64c:	ble	1c0654 _start-0x2083f9ac>
     650:	andeq	r0, r0, r1, asr #32
     654:	stmdaeq	r0, {r1, r8, r9, sp}
     658:	andeq	r0, r0, r5, ror #4
     65c:	streq	sp, [r9], #3079	; 0xc07
     660:	movwcs	r0, #8192	; 0x2000
     664:			; UNDEFINED> instruction: 0x03b20804
     668:	cdple	0, 0, cr0, cr7, cr0, {0}
     66c:	andeq	r0, r0, r1, lsl #7
     670:	stmdaeq	r8, {r1, r8, r9, sp}
     674:	ldrdeq	r0, [r0], -sl
     678:	ldreq	lr, [r4], #7
     67c:	movwcs	r0, #8192	; 0x2000
     680:	mvneq	r0, #786432	; 0xc0000
     684:	and	r0, r7, #0
     688:	andeq	r0, r0, r1, lsl #7
     68c:	ldmdaeq	r0, {r1, r8, r9, sp}
     690:	andeq	r0, r0, r4, asr r3
     694:	adceq	lr, pc, r7, lsl #8
     698:	movwcs	r0, #8192	; 0x2000
     69c:	streq	r0, [r5], #-20
     6a0:			; UNDEFINED> instruction: 0x000002bf
     6a4:	subeq	r0, r1, fp, lsl #2
     6a8:	cmpeq	ip, #0
     6ac:	svcle	0x000c0000
     6b0:	andeq	r0, r0, r2
     6b4:	movteq	r0, #50181	; 0xc405
     6b8:	mrseq	r0, (UNDEF: 11)
     6bc:	andeq	r0, r0, r1, asr #32
     6c0:	andeq	r0, r0, r1, lsl #7
     6c4:	andeq	sp, r2, ip, lsl #30
     6c8:	orreq	r0, r1, #0
     6cc:	andne	r0, ip, #0
     6d0:	stceq	0, cr0, [r0], {1}
     6d4:	andeq	r0, r0, r3, lsl #7
     6d8:	streq	r0, [r4, #-3584]	; 0xe00
     6dc:	andeq	r1, r1, r4, lsl #4
     6e0:	andvs	r0, r4, #0
     6e4:	bleq	6f8 _start-0x209ff908>
     6e8:	andeq	sl, r0, r1, lsl #30
     6ec:	andeq	sl, r3, r0, lsl #18
     6f0:	sbcseq	r0, pc, #0
     6f4:	svcge	0x000c0000
     6f8:	stceq	0, cr0, [r0], {0}
     6fc:	andeq	r0, r0, r1, asr #32
     700:	svchi	0x00040500
     704:	bleq	718 _start-0x209ff8e8>
     708:	andeq	r4, r0, r1, lsl #2
     70c:	andeq	ip, r3, r0, lsl #8
     710:	sbcseq	r0, pc, #0
     714:	strgt	r0, [ip]
     718:	andeq	r0, r0, r3
     71c:	cmpeq	r3, r5, lsl #8
     720:	streq	r0, [r5]
     724:	andeq	r0, r0, pc, lsr #7
     728:	andeq	r7, r3, r7, lsl #30
     72c:	stmdalt	r7, {sl, ip}
     730:	andeq	r0, r0, r3, lsr #8
     734:	andeq	r1, r2, r8, lsl #10
     738:	ldchi	7, cr0, [r9]
     73c:	andeq	r0, r0, #0
     740:	cdpcs	0, 0, cr0, cr8, cr3, {1}
     744:	streq	r0, [r0, -r2]
     748:			; UNDEFINED> instruction: 0x00044cba
     74c:	strteq	r0, [r3], #-512	; 0x200
     750:	andeq	r1, r3, r8, lsl #18
     754:			; UNDEFINED> instruction: 0x63bb0700
     758:	andeq	r0, r0, #4
     75c:	svc	0x00080823
     760:	streq	r0, [r0, -r2]
     764:			; UNDEFINED> instruction: 0x00035cbc
     768:	sfmeq	f0, 4, [r3]
     76c:	andeq	r0, r3, r8, lsl #2
     770:			; UNDEFINED> instruction: 0x83bd0700
     774:	andeq	r0, r0, #4
     778:	bleq	480c _start-0x209fb7f4>
     77c:	andeq	r4, r0, r1, lsl #2
     780:	andeq	r4, r4, r0, lsl #24
     784:	orreq	r0, r1, #0
     788:	mrsmi	r0, (UNDEF: 12)
     78c:	stceq	0, cr0, [r0], {0}
     790:	andeq	r0, r0, r6, ror #1
     794:	andeq	r1, r1, ip, lsl #4
     798:	orreq	r0, r1, #0
     79c:	movwhi	r0, #49152	; 0xc000
     7a0:	andeq	r0, r0, r3
     7a4:	strteq	r0, [r3], #-1029	; 0x405
     7a8:	mrseq	r0, (UNDEF: 11)
     7ac:	andeq	r0, r0, r1, asr #32
     7b0:	andeq	r0, r0, r3, ror #8
     7b4:	andeq	sp, r2, ip, lsl #30
     7b8:	streq	r0, [r0, #-3840]	; 0xf00
     7bc:	andeq	r5, r4, r4, lsl #4
     7c0:	tstmi	r1, r0, lsl #22
     7c4:	movwhi	r0, #0
     7c8:	stceq	0, cr0, [r0], {4}
     7cc:	ldrdeq	r0, [r0], -pc	; UNPREDICTABLE>
     7d0:	andeq	ip, r0, ip, lsl #10
     7d4:	orreq	r0, r1, #0
     7d8:	streq	r0, [r0]
     7dc:	andeq	r6, r4, r4, lsl #18
     7e0:	svchi	0x00040500
     7e4:	stceq	0, cr0, [r0, #-16]
     7e8:	ldrdeq	r0, [r0], -r0	; UNPREDICTABLE>
     7ec:	ldreq	r0, [sl], #1029	; 0x405
     7f0:	cdppl	0, 0, cr0, cr13, cr0, {0}
     7f4:	andne	r0, r0, r2
     7f8:	andeq	pc, r2, r1, lsl #16
     7fc:	mrseq	r0, (UNDEF: 82)
     800:	adccs	r0, r0, r0, ror r4
     804:	adccs	r0, r0, r0, ror #9
     808:	andeq	r0, r0, r4, lsr r1
     80c:	andeq	r0, r0, r5, asr #9
     810:	tsteq	r0, r1, lsl r9
     814:	andeq	r4, r0, r4, asr #2
     818:	lfmvs	f0, 4, [r1], {0}
     81c:	rsceq	r0, r5, #0
     820:	ldrbeq	r0, [r0]
     824:	andseq	r0, r2, r0
     828:	andeq	r0, r4, r3, lsl ip
     82c:	strbgt	r0, [r9, #1792]!	; 0x700
     830:	tsteq	r0, r4
     834:	streq	r1, [ip], #-769	; 0x301
     838:	stmdb	r7, {}	; UNPREDICTABLE>
     83c:	andeq	r0, r0, r5, asr #9
     840:	stmdagt	r0, {r0, r8}
     844:	andeq	r0, r0, #0
     848:	andeq	r8, r2, r0, lsl #28
     84c:	andne	r0, r1, #0
     850:	mrseq	r0, (UNDEF: 0)
     854:	andeq	r0, r0, r2, lsl r4
     858:	andeq	r0, r0, r0, ror r1
     85c:	adccs	r0, r0, r0, ror #9
     860:	adccs	r0, r0, r4, lsl r5
     864:	andeq	r0, r0, sl, lsl #6
     868:	andhi	r0, r6, #-2147483648	; 0x80000000
     86c:	andeq	r0, r0, #0
     870:	addeq	r0, r0, r1, lsl #16
     874:	andeq	r0, r2, #0
     878:	andeq	r2, r1, r5, lsl #14
     87c:	streq	r0, [r2, -r0, lsl #4]
     880:	andeq	r0, r0, r6, lsr r0
     884:	stmdbvs	r5, {r0, r1, sl}
     888:	andeq	r7, r0, #1845493760	; 0x6e000000
     88c:	adceq	r0, r8, r4, lsl #14
     890:	stmdaeq	r2, {}	; UNPREDICTABLE>
     894:	andeq	r0, r1, r5, lsl #20
     898:	streq	r0, [r8, -r0, lsl #4]
     89c:	muleq	r0, lr, r0
     8a0:	svceq	0x00050402
     8a4:	andeq	r0, r0, #1
     8a8:	adceq	r0, r3, r4, lsl #14
     8ac:	mrseq	r0, (UNDEF: 2)
     8b0:	andeq	r8, r0, r8, lsl #18
     8b4:			; UNDEFINED> instruction: 0x01aa0400
     8b8:	stmdami	r2, {}	; UNPREDICTABLE>
     8bc:	andeq	r0, r0, sp, ror r0
     8c0:	cmpeq	r6, r5, lsl #8
     8c4:	stcge	0, cr0, [r4], {0}
     8c8:	movweq	r0, #1
     8cc:	andeq	r7, r0, r3, lsr r2
     8d0:	strls	r0, [r4], #-1536	; 0x600
     8d4:	streq	r0, [r0, -r0]
     8d8:	andeq	r0, r0, fp, rrx
     8dc:	streq	r0, [r5, #-264]!	; 0x108
     8e0:	stmdbcs	r1, {}	; UNPREDICTABLE>
     8e4:	andge	lr, r4, r1
     8e8:	andge	r1, r5, r0, lsr #8
     8ec:	andeq	r6, r1, r0, lsr #32
     8f0:	stclvs	9, cr0, [r6]
     8f4:	stmdbcs	r1, {r2, r4, r5, r6}
     8f8:	andeq	r0, r0, lr, lsl #1
     8fc:	beq	1c24d0c _start-0x1eddb2f4>
     900:	rsbseq	r6, r0, fp, lsl #2
     904:	addeq	r2, r3, r1, lsl #22
     908:	mrsls	r0, (UNDEF: 2)
     90c:	mcrcs	0, 0, r0, cr0, cr12, {2}
     910:	andeq	r0, r0, #5
     914:	andeq	r1, r3, r0, lsl #12
     918:	andne	r0, r1, #0
     91c:	mrseq	r0, (UNDEF: 0)
     920:	andeq	r0, r0, r4, ror #8
     924:	andeq	r0, r0, r0, ror r1
     928:	adccs	r0, r0, r4, lsl r5
     92c:	adccs	r0, r0, r0, ror r6
     930:	andeq	r0, r0, r7, ror #7
     934:	andhi	r0, r6, #-2147483648	; 0x80000000
     938:	andeq	r0, r0, #0
     93c:	addeq	r0, r0, r1, lsl #16
     940:	andeq	r0, r2, #0
     944:	andeq	r2, r1, r5, lsl #14
     948:	streq	r0, [r2, -r0, lsl #4]
     94c:	andeq	r0, r0, r6, lsr r0
     950:	stmdbvs	r5, {r0, r1, sl}
     954:	streq	r7, [r0], #-1134	; 0x46e
     958:	andeq	r0, r0, lr, lsl #1
     95c:	subseq	r3, r3, r2, lsl #4
     960:	streq	r0, [r2]
     964:	andeq	sl, r0, r7, lsl #16
     968:	rsceq	r0, r5, #0
     96c:	stmdacc	r2, {}	; UNPREDICTABLE>
     970:	andeq	r0, r0, r5, rrx
     974:	beq	142984 _start-0x208bd67c>
     978:	streq	r0, [r0], #-1
     97c:	andeq	r0, r0, sp, asr r3
     980:	rsbseq	r3, r7, r2, lsl #20
     984:	stmdaeq	r2, {}	; UNPREDICTABLE>
     988:	andeq	r9, r0, r7, lsl #28
     98c:	streq	r0, [r4, #-512]	; 0x200
     990:	andeq	r0, r0, pc, lsl #2
     994:	movwge	r0, #29698	; 0x7402
     998:	streq	r0, [r0]
     99c:	andeq	r9, r0, r4, lsl #4
     9a0:	stmdaeq	r1, {r9}
     9a4:	andeq	r0, r0, r9, lsl #1
     9a8:	andeq	r0, r4, r4, lsl #8
     9ac:	stmdami	r6!, {r8, r9}
     9b0:	streq	r0, [r0]
     9b4:	andeq	r0, r0, r2, lsl #5
     9b8:	subeq	r2, r8, r3, lsl #18
     9bc:	strvc	r0, [r4, -r0]
     9c0:	movweq	r0, #3
     9c4:	andeq	r5, r0, sl, lsr #20
     9c8:			; UNDEFINED> instruction: 0x03aa0400
     9cc:	cdpcs	0, 0, cr0, cr3, cr0, {0}
     9d0:	andeq	r0, r0, r8, asr #32
     9d4:	andeq	r5, r2, r4, lsl #2
     9d8:	strbhi	r0, [r8, #-1024]!	; 0x400
     9dc:	streq	r0, [r0]
     9e0:	andeq	r0, r0, sp, lsl #7
     9e4:	subseq	r8, sl, r4, lsl #2
     9e8:	strcs	r0, [r4]
     9ec:	streq	r0, [r0], #-2
     9f0:	andeq	r4, r0, r2, lsl #17
     9f4:	subeq	r0, r3, #0
     9f8:	bls	100a00 _start-0x208ff600>
     9fc:	andeq	r0, r0, sl, asr r0
     a00:	andeq	r0, r3, r4, lsl #20
     a04:	cfldrsvs	mvf0, [sp], {0}
     a08:	streq	r0, [r0]
     a0c:	andeq	r0, r0, fp, lsl #5
     a10:	rsbeq	sl, ip, r4, lsl #14
     a14:	stmdavs	r4, {}	; UNPREDICTABLE>
     a18:	streq	r0, [r0], #-3
     a1c:	andeq	r4, r0, pc, lsr #17
     a20:	eoreq	r0, r7, #0
     a24:	strne	r0, [r4]
     a28:	andeq	r8, r0, r1, lsl #10
     a2c:	teqeq	r1, #0
     a30:	andcs	r0, r4, r0
     a34:	andeq	r5, r0, r1, lsl #20
     a38:			; UNDEFINED> instruction: 0x03a10700
     a3c:	streq	r0, [ip]
     a40:	andeq	r5, r1, r4, lsr r3
     a44:	andseq	r0, sp, #0
     a48:	strcc	r0, [r5]
     a4c:	andeq	r0, r0, lr, lsl r1
     a50:	stmdaeq	r0, {r1, r8, r9, sp}
     a54:	andeq	r0, r0, r5, lsl #4
     a58:	rsbseq	r3, lr, r5, lsl #12
     a5c:	movwcs	r0, #8192	; 0x2000
     a60:	andeq	r0, r7, r8
     a64:	stcvc	0, cr0, [r0], {0}
     a68:	subeq	r3, lr, #-2147483647	; 0x80000001
     a6c:	stcmi	0, cr0, [r8]
     a70:	streq	r0, [r0], -r3
     a74:	andeq	pc, r0, r2, lsr r1	; UNPREDICTABLE>
     a78:	eoreq	r0, r3, r0, lsl #4
     a7c:	andeq	fp, r3, r8, lsl #24
     a80:	ldrtge	r0, [r3], #-1536	; 0x600
     a84:	andeq	r0, r0, #0
     a88:	stmdacs	r8, {r0, r1, r5, fp}
     a8c:	streq	r0, [r0], -r3
     a90:	andeq	pc, r0, r4, lsr ip	; UNPREDICTABLE>
     a94:	sfmeq	f0, 4, [r3]
     a98:	andeq	r3, r2, r8, lsl #20
     a9c:	ldreq	r0, [r5, -r0, lsl #12]!
     aa0:	andeq	r0, r0, #1
     aa4:	andvc	r1, r8, r3, lsr #8
     aa8:	streq	r0, [r0], -r3
     aac:	andeq	fp, r0, r6, lsr sl
     ab0:	stmdane	r3!, {r9}
     ab4:	andeq	r7, r2, r8, lsl #22
     ab8:	ldmdbls	r7!, {r9, sl}
     abc:	andeq	r0, r0, #0
     ac0:	strhi	r1, [r8, #-3107]	; 0xc23
     ac4:	streq	r0, [r0], -r3
     ac8:	andeq	pc, r0, r8, lsr r1	; UNPREDICTABLE>
     acc:	eorcs	r0, r3, r0, lsl #4
     ad0:	andeq	r9, r3, r8, lsl #26
     ad4:	bcs	e822dc _start-0x1fb7dd24>
     ad8:	andeq	r0, r0, #1
     adc:	stmdapl	r8, {r0, r1, r5, fp, sp}
     ae0:	streq	r0, [r0], -r2
     ae4:	andeq	r2, r1, fp, lsr sl
     ae8:	strtcc	r0, [r3], #-512	; 0x200
     aec:	andeq	ip, r3, r8, lsl #8
     af0:	bcs	f022f8 _start-0x1fafdd08>
     af4:	andeq	r0, r0, #1
     af8:	stmdb	r8, {r0, r1, r5, lr}
     afc:	streq	r0, [r0], -r3
     b00:	andeq	r2, r1, sp, lsr sl
     b04:	sfmmi	f0, 4, [r3]
     b08:	andeq	r0, r2, r8, lsl #26
     b0c:	svcge	0x00480600
     b10:	andeq	r0, r0, #0
     b14:	strcc	r5, [r8], -r3, lsr #16
     b18:	streq	r0, [r0], -r3
     b1c:	andeq	sp, r0, r9, asr #32
     b20:	eorvs	r0, r3, r0, lsl #4
     b24:	andeq	r6, r2, r8, lsl #22
     b28:	blle	1282330 _start-0x1f77dcd0>
     b2c:	andeq	r0, r0, #0
     b30:	andne	r6, r8, r3, lsr #16
     b34:	streq	r0, [r0], -r3
     b38:	andeq	r4, r0, fp, asr #16
     b3c:	sfmvs	f0, 4, [r3]
     b40:	andeq	r9, r3, r8, lsl #12
     b44:	stmdami	ip, {r9, sl}^
     b48:	andeq	r0, r0, #0
     b4c:	tstle	r8, r3, lsr #32
     b50:	streq	r0, [r0], -r3
     b54:	andeq	r4, r2, sp, asr #28
     b58:	strtvc	r0, [r3], #-512	; 0x200
     b5c:	subeq	r0, r8, r0, lsl #18
     b60:	subseq	r0, lr, #0
     b64:	strhi	r0, [sl]
     b68:	mrseq	r0, (UNDEF: 0)
     b6c:	teqeq	pc, #0
     b70:	ldreq	r0, [r8, -r0]
     b74:	andeq	fp, r2, r4, ror pc
     b78:	tsteq	ip, #0
     b7c:	strvc	r0, [r7]
     b80:	andeq	r0, r0, r6, asr #6
     b84:	stmdaeq	r0, {r1, r8, r9, sp}
     b88:	strdeq	r0, [r0], -r2
     b8c:	cmpeq	ip, #7340032	; 0x700000
     b90:	movwcs	r0, #8192	; 0x2000
     b94:	rsbseq	r0, r6, #262144	; 0x40000
     b98:	strvc	r0, [r7, -r0]
     b9c:	andeq	r0, r0, r9, lsl #7
     ba0:	stmdaeq	r8, {r1, r8, r9, sp}
     ba4:	andeq	r0, r0, fp, asr #4
     ba8:	orreq	r7, r9, #458752	; 0x70000
     bac:	movwcs	r0, #8192	; 0x2000
     bb0:	movteq	r0, #2060	; 0x80c
     bb4:	stmdbvc	r7, {}	; UNPREDICTABLE>
     bb8:	andeq	r0, r0, r9, lsr #7
     bbc:	ldmdaeq	r0, {r1, r8, r9, sp}
     bc0:	andeq	r0, r0, r0
     bc4:	biceq	r7, sl, #28672	; 0x7000
     bc8:	movwcs	r0, #8192	; 0x2000
     bcc:	tsteq	fp, r4, lsl r0
     bd0:	andeq	r0, r0, r1, asr #32
     bd4:	ldrdeq	r0, [r0], -r4
     bd8:	andeq	sp, r2, ip, lsl #8
     bdc:	sbcseq	r0, pc, #0
     be0:	streq	r0, [r0]
     be4:	andeq	sp, r2, r4, lsl #20
     be8:	addseq	r0, r2, r0, lsl #26
     bec:	streq	r0, [r5]
     bf0:	andeq	r0, r0, r5, ror #5
     bf4:	andeq	pc, r3, r7, lsl #20
     bf8:	stmdble	r7, {sl, fp, ip}
     bfc:	andeq	r0, r0, r6, asr #6
     c00:	andeq	r4, r3, r8, lsl #10
     c04:	bicsmi	r0, sl, r0, lsl #14
     c08:	andeq	r0, r0, #0
     c0c:	strvs	r0, [r8, #-35]	; 0x23
     c10:	streq	r0, [r0, -r2]
     c14:	ldrdeq	r8, [r4], -ip
     c18:	strteq	r0, [r3], #-512	; 0x200
     c1c:	andeq	fp, r3, r8, lsl #4
     c20:	bicshi	r0, lr, r0, lsl #14
     c24:	andeq	r0, r0, #3
     c28:	ble	202cbc _start-0x207fd344>
     c2c:	streq	r0, [r0, -r3]
     c30:	andeq	r9, r4, r0, ror #9
     c34:	sfmeq	f0, 4, [r3]
     c38:	andeq	lr, r3, r8
     c3c:	mvnhi	r0, r0, lsl #14
     c40:	andeq	r0, r0, #3
     c44:	strpl	r1, [r8], #-35	; 0x23
     c48:	streq	r0, [r0, -r3]
     c4c:	andeq	sl, r0, r4, ror #31
     c50:	strtne	r0, [r3], #-512	; 0x200
     c54:	svclt	0x00040500
     c58:	bleq	c68 _start-0x209ff398>
     c5c:	andeq	r4, r0, r1, lsl #2
     c60:	andeq	r5, r3, r0, lsl #24
     c64:	sbcseq	r0, pc, #0
     c68:	streq	r0, [r0]
     c6c:	andeq	r4, r3, r4, lsl #24
     c70:	tstmi	r1, r0, lsl #22
     c74:	mrshi	r0, (UNDEF: 0)
     c78:	stceq	0, cr0, [r0], {3}
     c7c:	ldrdeq	r0, [r0], -pc	; UNPREDICTABLE>
     c80:	andeq	r8, r3, ip, lsl #2
     c84:	tsteq	r2, r0, lsl #24
     c88:	movwhi	r0, #49152	; 0xc000
     c8c:	andeq	r0, r0, r3
     c90:	streq	r0, [r5], #-1038	; 0x40e
     c94:	andeq	r0, r0, r2, lsl r1
     c98:	cmneq	r2, #83886080	; 0x5000000
     c9c:	mrseq	r0, (UNDEF: 11)
     ca0:	andeq	r0, r0, pc, lsr #1
     ca4:	andeq	r0, r0, r9, lsr #7
     ca8:	andeq	sp, r2, ip, lsl #30
     cac:	adceq	r0, pc, r0, lsl #24
     cb0:	mrsmi	r0, (UNDEF: 12)
     cb4:	andeq	r0, r0, r0
     cb8:	orreq	r0, pc, #83886080	; 0x5000000
     cbc:	mrseq	r0, (UNDEF: 11)
     cc0:	andeq	r0, r0, r1, asr #32
     cc4:	andeq	r0, r0, r4, asr #7
     cc8:	andeq	sp, r2, ip, lsl #30
     ccc:	biceq	r0, r4, #0
     cd0:	streq	r0, [r0]
     cd4:	andeq	r5, r1, r4, lsl #6
     cd8:	svcge	0x00040500
     cdc:	streq	r0, [r0, -r3]
     ce0:	andeq	r0, r0, pc, ror r3
     ce4:			; UNDEFINED> instruction: 0x23b80714
     ce8:	stmdaeq	r0, {r2}
     cec:	andeq	r0, r0, r5, lsl r2
     cf0:	addeq	fp, ip, r7, lsl #18
     cf4:	movwcs	r0, #8192	; 0x2000
     cf8:	eoreq	r0, lr, #0
     cfc:	blt	1c0d04 _start-0x2083f2fc>
     d00:	andeq	r0, r0, ip, asr #8
     d04:	stmdaeq	r4, {r1, r8, r9, sp}
     d08:	andeq	r0, r0, r9, lsl r3
     d0c:	strbteq	fp, [r3], #-2823	; 0xb07
     d10:	movwcs	r0, #8192	; 0x2000
     d14:	rsceq	r0, pc, #524288	; 0x80000
     d18:	stclt	0, cr0, [r7], {0}
     d1c:	andeq	r0, r0, ip, asr r3
     d20:	stmdaeq	ip, {r1, r8, r9, sp}
     d24:	andeq	r0, r0, r1, lsl #6
     d28:	streq	fp, [r3], #3335	; 0xd07
     d2c:	movwcs	r0, #8192	; 0x2000
     d30:	tsteq	fp, r0, lsl r0
     d34:	andeq	r0, r0, r1, asr #32
     d38:	andeq	r0, r0, ip, asr #8
     d3c:	andeq	r8, r3, ip, lsl #2
     d40:	subeq	r0, r1, r0, lsl #24
     d44:	str	r0, [ip], -r0
     d48:	stceq	0, cr0, [r0], {0}
     d4c:	andeq	r0, r0, r2, lsl r1
     d50:	andeq	r8, r3, ip, lsl #2
     d54:	orreq	r0, r3, #0
     d58:	streq	r0, [r0]
     d5c:	andeq	r2, r4, r4, lsl #6
     d60:	tstmi	r1, r0, lsl #22
     d64:	movwvs	r0, #0
     d68:	stceq	0, cr0, [r0], {4}
     d6c:	ldrdeq	r0, [r0], -pc	; UNPREDICTABLE>
     d70:	streq	r0, [r5], #-15
     d74:	andeq	r0, r0, r2, asr r4
     d78:	subeq	r0, r1, fp, lsl #2
     d7c:	streq	r0, [r3]
     d80:	svcle	0x000c0000
     d84:	stceq	0, cr0, [r0], {2}
     d88:	andeq	r0, r0, r5, asr #1
     d8c:	andeq	r8, r3, ip, lsl #2
     d90:	streq	r0, [r5]
     d94:	andeq	r0, r0, r9, ror #8
     d98:	streq	r0, [pc], #1029	; da0 _start-0x209ff260>
     d9c:	andle	r0, sp, r0
     da0:	streq	r0, [r0, #-3]
     da4:	andeq	r9, r4, r4, lsl #20
     da8:	subseq	r0, lr, #0
     dac:	tsteq	r0, r0
     db0:	strdeq	r0, [r0], -r2
     db4:	tstmi	r1, r1, lsl #6
     db8:	strne	r0, [r0]
     dbc:	eorvc	sl, r0, r5
     dc0:	stchi	0, cr10, [r0], #-24	; 0xffffffe8
     dc4:	vhadd.s8	d0, d0, d1
     dc8:	tstne	r0, r4
     dcc:	tsteq	r0, r6, ror #8
     dd0:	andeq	r4, r0, r3, asr #2
     dd4:	lfmpl	f0, 4, [r1], {0}
     dd8:	tsteq	r0, r2, lsl r6
     ddc:	andeq	sp, r2, r8, asr #30
     de0:	ldrvs	r0, [r1], #512	; 0x200
     de4:	andeq	fp, r4, r3, lsl r5
     de8:	mrsmi	r0, (UNDEF: 89)
     dec:	andeq	r0, r0, #0
     df0:	blt	4dc03c _start-0x20523fc4>
     df4:	tsteq	r0, r4
     df8:	andeq	r4, r0, r9, asr #2
     dfc:	ldmvs	r1, {r9}
     e00:	ldrteq	r1, [pc], #1024	; e08 _start-0x209ff1f8>
     e04:	strcs	r0, [r8]
     e08:	andeq	r0, r0, r1, asr #32
     e0c:	str	r0, [r9, #-257]	; 0x101
     e10:	beq	e20 _start-0x209ff1e0>
     e14:	strne	r0, [r0, #-5]
     e18:	streq	r1, [ip], #-1024	; 0x400
     e1c:	stmdb	r7, {}	; UNPREDICTABLE>
     e20:	strdeq	r0, [r0], -pc	; UNPREDICTABLE>
     e24:	svclt	0x00140101
     e28:	stmdaeq	r0, {r2}
     e2c:	andeq	r4, r0, r4, lsr #2
     e30:	strne	r0, [r1], #-256	; 0x100
     e34:	andeq	r0, r0, ip, lsl #8
     e38:	ldrbteq	lr, [pc], #2311	; e40 _start-0x209ff1c0>
     e3c:	mrseq	r0, (UNDEF: 1)
     e40:	andeq	ip, r2, r0, lsl #6
     e44:	strne	r0, [r0], #-512	; 0x200
     e48:	streq	r0, [r0], #-4
     e4c:	andeq	r1, r0, r1, lsl #4
     e50:	strbeq	r0, [r5], #256	; 0x100
     e54:	cmneq	r0, r0
     e58:	ldrbteq	r0, [r0], -r0
     e5c:	bleq	ff5090e4 __bss_end__+0xdeb07e94>
     e60:	streq	r2, [r3, #-160]!	; 0xa0
     e64:	mrseq	r0, (UNDEF: 2)
     e68:	andeq	r8, r0, r6, lsl #4
     e6c:	stmdaeq	r1, {r9}
     e70:	andeq	r0, r0, r0, lsl #1
     e74:	strcs	r0, [r5, -r2, lsl #4]
     e78:	andeq	r0, r0, #1
     e7c:	eorseq	r0, r6, r2, lsl #14
     e80:	streq	r0, [r3]
     e84:	strbtvc	r6, [lr], #-2309	; 0x905
     e88:	streq	r0, [r4, -r0, lsl #4]
     e8c:	andeq	r0, r0, r8, lsr #1
     e90:	beq	142ea0 _start-0x208bd160>
     e94:	andeq	r0, r0, #1
     e98:	addseq	r0, lr, r8, lsl #14
     e9c:	streq	r0, [r2]
     ea0:	andeq	r0, r1, r5, lsl #30
     ea4:	streq	r0, [r4, -r0, lsl #4]
     ea8:	andeq	r0, r0, r3, lsr #1
     eac:	rsbseq	r0, r1, r4, lsl #8
     eb0:	mrseq	r0, (UNDEF: 2)
     eb4:	andeq	r8, r0, r8, lsl #18
     eb8:			; UNDEFINED> instruction: 0x01aa0500
     ebc:	stmdami	r2, {}	; UNPREDICTABLE>
     ec0:	andeq	r0, r0, r3, lsl #1
     ec4:	cmpeq	r6, r6, lsl #8
     ec8:	mrspl	r0, (UNDEF: 5)
     ecc:	movweq	r0, #2
     ed0:	andeq	r6, r0, r8, ror #8
     ed4:	eoreq	r0, r7, #0
     ed8:	strne	r0, [r3]
     edc:	andeq	r6, r0, r1, lsl #8
     ee0:			; UNDEFINED> instruction: 0x01ac0500
     ee4:	movwcc	r0, #16384	; 0x4000
     ee8:	andeq	r0, r0, r8, ror r0
     eec:	adcseq	r0, r1, r4, lsl #8
     ef0:	mrsvc	r0, (UNDEF: 8)
     ef4:	stmdbeq	r0, {}	; UNPREDICTABLE>
     ef8:	andeq	r0, r0, r9, lsl r5
     efc:	andvc	r8, r1, r1, lsl #4
     f00:	stmdagt	r0!, {r1, r2, sp, pc}
     f04:	stmdalt	r0!, {r1, r2, sp, pc}
     f08:	blle	f14 _start-0x209ff0ec>
     f0c:	beq	f14 _start-0x209ff0ec>
     f10:	andhi	r0, r1, #99	; 0x63
     f14:	andeq	r0, r0, r1, asr #32
     f18:	rsbeq	r9, ip, r2, lsl #2
     f1c:	ldreq	r0, [r6, #-267]!	; 0x10b
     f20:	bhi	40f28 _start-0x209bf0d8>
     f24:	andge	ip, r6, r1, lsl #16
     f28:	andge	pc, r6, r0, lsr #24
     f2c:	andeq	lr, r1, r0, lsr #8
     f30:	andeq	r1, r1, r0
     f34:	vstmdbvs	r6!, {s1-s0}
     f38:	bhi	41110 _start-0x209beef0>
     f3c:	andeq	r0, r0, fp, lsr #1
     f40:	beq	1b25350 _start-0x1eedacb0>
     f44:	tsteq	r0, r1, rrx
     f48:	andeq	sl, r0, sl, lsl #1
     f4c:	ldmvs	r1, {r9}
     f50:	andcs	r0, r1, #0
     f54:	tsteq	r0, r5
     f58:	umaaleq	r0, r1, r1, r1
     f5c:	ldrbteq	r0, [ip], r0
     f60:	streq	r2, [ip, r0, lsr #1]
     f64:	andseq	r2, r0, #160	; 0xa0
     f68:	cmneq	r5, r0
     f6c:	andvs	r0, sl, #0
     f70:	tsteq	r0, r5, ror r6
     f74:	muleq	r0, r1, fp
     f78:	lfmvs	f0, 4, [r1], {0}
     f7c:	andeq	r4, r0, sp, lsl #24
     f80:	ldrls	r0, [r1], #256	; 0x100
     f84:	andeq	r0, r0, #0
     f88:			; UNDEFINED> instruction: 0x660a6891
     f8c:	tsteq	r0, sp, ror #8
     f90:	muleq	r0, r1, fp
     f94:	ldrvs	r0, [r1], #512	; 0x200
     f98:	rsbseq	r6, r0, sl, lsl #2
     f9c:	adceq	r9, r0, r1, lsl #2
     fa0:	mrsls	r0, (UNDEF: 2)
     fa4:	strpl	r0, [r9], -r0, rrx
     fa8:	tsteq	r0, r5
     fac:			; UNDEFINED> instruction: 0x078c019c
     fb0:	bleq	509238 _start-0x204f6dc8>
     fb4:	eorseq	r2, ip, #160	; 0xa0
     fb8:	mvneq	r0, r0
     fbc:	andvc	r0, sl, r0
     fc0:	tsteq	r0, r5, ror r4
     fc4:	muleq	r1, ip, r2
     fc8:	lfmpl	f0, 4, [r1], {0}
     fcc:	strbtvc	r6, [sp], #-1546	; 0x60a
     fd0:	blge	fe7013d8 __bss_end__+0xddd00188>
     fd4:	andeq	r0, r0, #0
     fd8:			; UNDEFINED> instruction: 0x610a5891
     fdc:	stcls	0, cr0, [r1], {112}	; 0x70
     fe0:	andeq	r0, r0, r0, lsr #1
     fe4:	logeqs	f1, f2
     fe8:	mcrls	0, 0, r0, cr1, cr0, {3}
     fec:	andeq	r0, r0, fp, rrx
     ff0:	lgneqe	f1, f2
     ff4:	tsteq	r0, r3, ror #16
     ff8:	muleq	r0, pc, r1	; UNPREDICTABLE>
     ffc:	addsvs	r0, r1, r0, lsl #4
    1000:	rsbeq	r7, ip, lr, lsl #10
    1004:	addeq	sl, r9, r1
    1008:	mrsls	r0, (UNDEF: 2)
    100c:	strbeq	r0, [fp, #-3944]	; 0xf68
    1010:	mrsge	r0, (UNDEF: 1)
    1014:	andeq	r0, r0, r1, asr #32
    1018:	rsbne	r9, r4, r2, lsl #2
    101c:	andeq	r0, r0, lr, asr r5
    1020:	stmdaeq	r4, {r0, r8, ip, sp, pc}
    1024:	smlatbne	r0, r0, r0, r2
    1028:	andeq	pc, r1, r1, lsl #4
    102c:	subeq	r1, r1, r0, lsl #4
    1030:	streq	r0, [r0]
    1034:	andeq	lr, r1, r4, lsl #12
    1038:	strbeq	r1, [r3, #-768]	; 0x300
    103c:	movwcs	r0, #4096	; 0x1000
    1040:	bleq	50144c _start-0x204febb4>
    1044:	bleq	ff5092cc __bss_end__+0xdeb0807c>
    1048:	rsbeq	r2, r8, #160	; 0xa0
    104c:	subseq	r0, sl, #0
    1050:	andsvc	r0, r4, r0
    1054:	tsteq	r0, r5, ror r4
    1058:	mvnseq	r0, r3, lsr #2
    105c:	mrsls	r0, (UNDEF: 2)
    1060:	cfldrdvs	mvd1, [r5], #-336	; 0xfffffeb0
    1064:	teqeq	r3, r0, lsl #2
    1068:	andeq	r0, r0, r9, lsl #1
    106c:	ldrbne	r9, [r0, #-258]	; 0x102
    1070:	andeq	r0, r0, r3, asr #2
    1074:	tstmi	r1, r1, lsl #6
    1078:	andeq	r0, r0, #0
    107c:	mulsvc	r6, r1, ip
    1080:	teqeq	r7, r0, lsl #2
    1084:	andeq	r0, r0, fp, rrx
    1088:	strbtne	r9, [ip], -r2, lsl #2
    108c:	rsbeq	r7, r6, r2, ror #10
    1090:	bpl	4ac9c _start-0x209b5364>
    1094:	andeq	r0, r0, #2
    1098:			; UNDEFINED> instruction: 0x17005c91
    109c:	andeq	r0, r0, r1, ror r0
    10a0:	andeq	r0, r0, sl, ror #4
    10a4:	andeq	r6, r0, r8, lsl r4
    10a8:	strne	r0, [r0, -r0, lsl #24]
    10ac:	andeq	r0, r0, r1, ror r0
    10b0:	andeq	r0, r0, sl, ror r2
    10b4:	andeq	r6, r0, r8, lsl r4
    10b8:	stmdbne	r0, {r8, r9, sl, fp}
    10bc:	andeq	r0, r0, ip, lsr #10
    10c0:	stmdahi	r1, {r0, r2, lr}
    10c4:	tsteq	r0, r2
    10c8:	rsbeq	r0, sl, #65536	; 0x10000
    10cc:	cdpcc	0, 0, cr0, cr15, cr0, {0}
    10d0:	tsteq	r0, r5
    10d4:	andeq	r6, r0, r2, asr #22
    10d8:	strgt	r0, [r3], #-1280	; 0x500
    10dc:	svceq	0x0020a011
    10e0:	andeq	r0, r0, r1, asr r5
    10e4:	rsbeq	r4, fp, r1, lsl #4
    10e8:	movweq	r0, #20480	; 0x5000
    10ec:	adccs	r1, r0, r8, asr #3
    10f0:	andeq	r2, r5, sl, lsl ip
    10f4:	mrsgt	r0, (UNDEF: 84)
    10f8:	tsteq	r0, r2
    10fc:	lslsne	r0, r5, #6
    1100:	bvs	209388 _start-0x207f6c78>
    1104:	andeq	r0, r0, r2
    1108:			; UNDEFINED> instruction: 0x000004be
    110c:	streq	r0, [r5, #2]
    1110:	mrseq	r0, (UNDEF: 4)
    1114:	andeq	r0, r0, r2, lsl r0
    1118:	andeq	r6, r5, r1, lsl #14
    111c:	andeq	r7, r1, r0
    1120:	andge	sp, fp, r0, lsl #8
    1124:	andge	sp, fp, r0, lsr #8
    1128:	andeq	sp, r6, r0, lsr #2
    112c:	streq	r0, [r1], -r0, lsl #4
    1130:	andeq	r0, r0, r2, lsl #1
    1134:	andhi	r0, r8, r2, lsl #2
    1138:	andeq	r0, r0, #0
    113c:	teqeq	r7, r2, lsl #10
    1140:	andeq	r0, r2, #0
    1144:	andeq	r3, r0, r7, lsl #12
    1148:	streq	r0, [r4, #-768]	; 0x300
    114c:	rsbseq	r6, r4, r9, ror #28
    1150:	andeq	r8, r0, r4, lsl #28
    1154:	teqpl	r2, #0
    1158:	andeq	r0, r0, #0
    115c:	adceq	r0, r8, r4, lsl #14
    1160:	str	r0, [r4]
    1164:	tsteq	r0, r2
    1168:	andeq	r6, r0, r8, lsr r5
    116c:	streq	r0, [r8, #-512]	; 0x200
    1170:	andeq	r0, r0, sl, lsl #2
    1174:	andeq	r5, r3, r4, lsl #26
    1178:	ldrvc	r0, [sl, -r0, lsl #2]!
    117c:	andeq	r0, r0, #0
    1180:	addseq	r0, lr, r8, lsl #14
    1184:	streq	r0, [r2]
    1188:	andeq	r0, r1, r5, lsl #30
    118c:	streq	r0, [r4, -r0, lsl #4]
    1190:	andeq	r0, r0, r3, lsr #1
    1194:	addseq	r0, r2, r5, lsl #8
    1198:	mrseq	r0, (UNDEF: 2)
    119c:	andeq	r8, r0, r8, lsl #18
    11a0:	streq	r0, [r4], #-1024	; 0x400
    11a4:	strcs	r0, [r2], -r0
    11a8:	andeq	r0, r0, r8, asr #32
    11ac:	andeq	r8, r2, r4, lsl #4
    11b0:	stmdami	r9!, {r9}
    11b4:	streq	r0, [r0]
    11b8:	andeq	r0, r0, r7, ror r3
    11bc:	subseq	r2, sl, r2, lsl #20
    11c0:	bge	1011c8 _start-0x208fee38>
    11c4:	andeq	r0, r0, #3
    11c8:	andeq	r4, r0, lr, lsr #16
    11cc:	subseq	r0, r1, #0
    11d0:	stmdavs	r3, {}	; UNPREDICTABLE>
    11d4:	andeq	r0, r0, r5, lsl #1
    11d8:	andeq	r8, r3, r4, lsl #26
    11dc:	bpl	fe041de4 __bss_end__+0xdd640b94>
    11e0:	streq	r0, [r0]
    11e4:	andeq	r0, r0, r4, lsr #4
    11e8:	subeq	r8, r8, r3, lsl #4
    11ec:	movwmi	r0, #16384	; 0x4000
    11f0:	movweq	r0, #2
    11f4:	muleq	r0, sl, sl
    11f8:	movweq	r0, #41984	; 0xa400
    11fc:	stcls	0, cr0, [r3]
    1200:	andeq	r0, r0, ip, rrx
    1204:	andeq	r8, r2, r4, lsl #22
    1208:	stcvs	3, cr0, [r7]
    120c:	streq	r0, [r0]
    1210:	andeq	r0, r0, r8, ror #6
    1214:	subeq	sl, r8, r3, lsl #30
    1218:	strcs	r0, [r6, -r0]
    121c:	movweq	r0, #2
    1220:	addeq	r0, r5, r5, lsl r1
    1224:	mrscs	r0, (UNDEF: 6)
    1228:	movweq	r0, #3
    122c:	subseq	r0, sl, r0, lsr #2
    1230:	mrsge	r0, (UNDEF: 7)
    1234:	stceq	0, cr0, [r0], {3}
    1238:	cmpeq	r3, r4, lsl #8
    123c:	stcne	0, cr0, [r8]
    1240:	streq	r0, [r0], #-2
    1244:	andeq	r1, r1, r5, lsr lr
    1248:	eoreq	r0, r3, r0, lsl #4
    124c:	andeq	r0, r2, r8, lsl #10
    1250:	cfabssvc	mvf0, mvf6
    1254:	andeq	r0, r0, #0
    1258:	streq	r0, [r0, -r3, lsr #16]
    125c:	andeq	r0, r0, r0
    1260:	mrcmi	5, 1, r0, cr1, cr12, {3}
    1264:	stmdaeq	r0, {r1}
    1268:	andeq	r0, r0, sp, asr #6
    126c:	rscseq	r3, r1, r5, lsl #4
    1270:	movwcs	r0, #8192	; 0x2000
    1274:			; UNDEFINED> instruction: 0x03bc0800
    1278:	movwcc	r0, #20480	; 0x5000
    127c:	andeq	r0, r0, r4, lsr #1
    1280:	stmdaeq	r8, {r1, r8, r9, sp}
    1284:	andeq	r0, r0, r8, lsr #6
    1288:	rscseq	r3, ip, r5, lsl #8
    128c:	movwcs	r0, #8192	; 0x2000
    1290:	eorseq	r0, sl, #786432	; 0xc0000
    1294:	strcc	r0, [r5]
    1298:	andeq	r0, r0, r7, lsl #2
    129c:	ldmdaeq	r4, {r1, r8, r9, sp}
    12a0:	andeq	r0, r0, r0, ror r3
    12a4:	adcseq	r3, sl, r5, lsl #12
    12a8:	movwcs	r0, #8192	; 0x2000
    12ac:	rsbseq	r0, fp, #1572864	; 0x180000
    12b0:	strcc	r0, [r5, -r0]
    12b4:	muleq	r0, r9, r0
    12b8:	ldmdaeq	ip, {r1, r8, r9, sp}
    12bc:	andeq	r0, r0, r5, lsl #7
    12c0:	rscseq	r3, r1, r5, lsl #16
    12c4:	movwcs	r0, #8192	; 0x2000
    12c8:	orrseq	r0, sp, #2097152	; 0x200000
    12cc:	bcc	1412d4 _start-0x208bed2c>
    12d0:	andeq	r0, r0, sl, lsr #2
    12d4:	stmdaeq	r8!, {r1, r8, r9, sp}
    12d8:	andeq	r0, r0, r8, asr r2
    12dc:	teqeq	sl, r5, lsl #22
    12e0:	movwcs	r0, #8192	; 0x2000
    12e4:	biceq	r0, r4, #3407872	; 0x340000
    12e8:	stccc	0, cr0, [r5], {0}
    12ec:	andeq	r0, r0, sl, lsr #2
    12f0:	stmdaeq	r0, {r1, r8, r9, sp}^
    12f4:	andeq	r0, r0, r9, ror #7
    12f8:	teqeq	sl, r5, lsl #26
    12fc:	movwcs	r0, #8192	; 0x2000
    1300:	andeq	r0, sp, #4980736	; 0x4c0000
    1304:	stmdami	r5, {}	; UNPREDICTABLE>
    1308:	andeq	r0, r0, pc, lsr #1
    130c:	ldmdaeq	r8, {r1, r8, r9, sp}^
    1310:	andeq	r0, r0, r6, lsr r3
    1314:	sbcseq	r4, r0, r5, lsl #18
    1318:	movwcs	r0, #8192	; 0x2000
    131c:	rsbeq	r0, fp, #6291456	; 0x600000
    1320:	bmi	141328 _start-0x208becd8>
    1324:	ldrdeq	r0, [r0], -fp
    1328:	stmdaeq	r8!, {r1, r8, r9, sp}^
    132c:	andeq	r0, r0, r0, lsl r3
    1330:	subeq	r4, r8, r5, lsl #22
    1334:	movwcs	r0, #8192	; 0x2000
    1338:	orrseq	r0, r6, #7077888	; 0x6c0000
    133c:	stcmi	0, cr0, [r5], {0}
    1340:	andeq	r0, r0, r8, asr #32
    1344:	ldmdaeq	r0!, {r1, r8, r9, sp}^
    1348:	ldrdeq	r0, [r0], -r1
    134c:	subeq	r4, lr, #320	; 0x140
    1350:	movwcs	r0, #8192	; 0x2000
    1354:	stmdami	r9, {r2, r4, r5, r6}
    1358:	cdppl	0, 0, cr0, cr0, cr0, {0}
    135c:	beq	136c _start-0x209fec94>
    1360:	andeq	r0, r0, r5, lsl #1
    1364:	svccs	0x00070001
    1368:	stmdane	r0, {r0, r1}
    136c:	adcseq	r7, pc, #100663296	; 0x6000000
    1370:	stcne	0, cr0, [r8], {0}
    1374:	streq	r0, [r0], -r3
    1378:	andeq	r4, r3, r5, ror r6
    137c:	eoreq	r0, r3, r0, lsl #4
    1380:	andeq	pc, r2, r8, lsl #4
    1384:	ldclpl	6, cr0, [r6]
    1388:	andeq	r0, r0, #3
    138c:	strvc	r0, [r8], -r3, lsr #8
    1390:	streq	r0, [r0], -r2
    1394:	andeq	r8, r3, r7, ror r9
    1398:	stmdaeq	r3!, {r9}
    139c:	andeq	r4, r2, r8, lsl #22
    13a0:	ldmdbhi	r8!, {r9, sl}^
    13a4:	andeq	r0, r0, #3
    13a8:	andmi	r0, r8, r3, lsr #24
    13ac:	streq	r0, [r0], -r3
    13b0:	andeq	sl, r3, r9, ror r9
    13b4:	eorne	r0, r3, r0, lsl #4
    13b8:	andeq	r0, r0, r8
    13bc:	bgt	1e82bc4 _start-0x1eb7d43c>
    13c0:	andeq	r0, r0, #3
    13c4:	bleq	6458 _start-0x209f9ba8>
    13c8:	andeq	r4, r0, r1, lsl #2
    13cc:	andeq	sp, r2, r0, lsl #8
    13d0:	sbcseq	r0, r4, #0
    13d4:	svcle	0x000c0000
    13d8:	andeq	r0, r0, r2
    13dc:	sbcseq	r0, sl, #83886080	; 0x5000000
    13e0:	andls	r0, sp, #0
    13e4:	streq	r0, [r0]
    13e8:	andeq	lr, r2, r4, lsl #10
    13ec:	mvnseq	r0, #0
    13f0:	ldreq	r0, [ip], -r0
    13f4:	ldrdeq	r4, [r3], -r9
    13f8:	movteq	r0, #22528	; 0x5800
    13fc:	ble	181404 _start-0x2087ebfc>
    1400:	andeq	r0, r0, r1, asr #32
    1404:	stmdaeq	r0, {r1, r8, r9, sp}
    1408:	andeq	r0, r0, r5, ror #4
    140c:	streq	sp, [r9], #3078	; 0xc06
    1410:	movwcs	r0, #8192	; 0x2000
    1414:			; UNDEFINED> instruction: 0x03b20804
    1418:	cdple	0, 0, cr0, cr6, cr0, {0}
    141c:	andeq	r0, r0, r1, lsl #7
    1420:	stmdaeq	r8, {r1, r8, r9, sp}
    1424:	ldrdeq	r0, [r0], -sl
    1428:	ldreq	lr, [r4], #6
    142c:	movwcs	r0, #8192	; 0x2000
    1430:	mvneq	r0, #786432	; 0xc0000
    1434:	and	r0, r6, #0
    1438:	andeq	r0, r0, r1, lsl #7
    143c:	ldmdaeq	r0, {r1, r8, r9, sp}
    1440:	andeq	r0, r0, r4, asr r3
    1444:	adceq	lr, pc, r6, lsl #8
    1448:	movwcs	r0, #8192	; 0x2000
    144c:	streq	r0, [r5], #-20
    1450:			; UNDEFINED> instruction: 0x000002bf
    1454:	subeq	r0, r1, fp, lsl #2
    1458:	cmpeq	ip, #0
    145c:	svcle	0x000c0000
    1460:	andeq	r0, r0, r2
    1464:	movteq	r0, #50181	; 0xc405
    1468:	mrseq	r0, (UNDEF: 11)
    146c:	andeq	r0, r0, r1, asr #32
    1470:	andeq	r0, r0, r1, lsl #7
    1474:	andeq	sp, r2, ip, lsl #30
    1478:	orreq	r0, r1, #0
    147c:	andne	r0, ip, #0
    1480:	stceq	0, cr0, [r0], {1}
    1484:	andeq	r0, r0, r3, lsl #7
    1488:	streq	r0, [r4, #-3584]	; 0xe00
    148c:	andeq	r1, r1, r4, lsl #4
    1490:	andvs	r0, r4, #0
    1494:	bleq	14a8 _start-0x209feb58>
    1498:	andeq	sl, r0, r1, lsl #30
    149c:	andeq	sl, r3, r0, lsl #18
    14a0:	sbcseq	r0, pc, #0
    14a4:	svcge	0x000c0000
    14a8:	stceq	0, cr0, [r0], {0}
    14ac:	andeq	r0, r0, r1, asr #32
    14b0:	svchi	0x00040500
    14b4:	bleq	14c8 _start-0x209feb38>
    14b8:	andeq	r4, r0, r1, lsl #2
    14bc:	andeq	ip, r3, r0, lsl #8
    14c0:	sbcseq	r0, pc, #0
    14c4:	strgt	r0, [ip]
    14c8:	andeq	r0, r0, r3
    14cc:	cmpeq	r3, r5, lsl #8
    14d0:	streq	r0, [r5]
    14d4:	andeq	r0, r0, pc, lsr #7
    14d8:	andeq	r7, r3, r7, lsl #30
    14dc:	stmdalt	r6, {sl, ip}
    14e0:	andeq	r0, r0, r3, lsr #8
    14e4:	andeq	r1, r2, r8, lsl #10
    14e8:	ldchi	6, cr0, [r9]
    14ec:	andeq	r0, r0, #0
    14f0:	cdpcs	0, 0, cr0, cr8, cr3, {1}
    14f4:	streq	r0, [r0], -r2
    14f8:			; UNDEFINED> instruction: 0x00044cba
    14fc:	strteq	r0, [r3], #-512	; 0x200
    1500:	andeq	r1, r3, r8, lsl #18
    1504:			; UNDEFINED> instruction: 0x63bb0600
    1508:	andeq	r0, r0, #4
    150c:	svc	0x00080823
    1510:	streq	r0, [r0], -r2
    1514:			; UNDEFINED> instruction: 0x00035cbc
    1518:	sfmeq	f0, 4, [r3]
    151c:	andeq	r0, r3, r8, lsl #2
    1520:			; UNDEFINED> instruction: 0x83bd0600
    1524:	andeq	r0, r0, #4
    1528:	bleq	55bc _start-0x209faa44>
    152c:	andeq	r4, r0, r1, lsl #2
    1530:	andeq	r4, r4, r0, lsl #24
    1534:	orreq	r0, r1, #0
    1538:	mrsmi	r0, (UNDEF: 12)
    153c:	stceq	0, cr0, [r0], {0}
    1540:	andeq	r0, r0, r6, ror #1
    1544:	andeq	r1, r1, ip, lsl #4
    1548:	orreq	r0, r1, #0
    154c:	movwhi	r0, #49152	; 0xc000
    1550:	andeq	r0, r0, r3
    1554:	strteq	r0, [r3], #-1029	; 0x405
    1558:	mrseq	r0, (UNDEF: 11)
    155c:	andeq	r0, r0, r1, asr #32
    1560:	andeq	r0, r0, r3, ror #8
    1564:	andeq	sp, r2, ip, lsl #30
    1568:	streq	r0, [r0, #-3840]	; 0xf00
    156c:	andeq	r5, r4, r4, lsl #4
    1570:	tstmi	r1, r0, lsl #22
    1574:	movwhi	r0, #0
    1578:	stceq	0, cr0, [r0], {4}
    157c:	ldrdeq	r0, [r0], -pc	; UNPREDICTABLE>
    1580:	andeq	ip, r0, ip, lsl #10
    1584:	orreq	r0, r1, #0
    1588:	streq	r0, [r0]
    158c:	andeq	r6, r4, r4, lsl #18
    1590:	svchi	0x00040500
    1594:	stceq	0, cr0, [r0, #-16]
    1598:	ldrdeq	r0, [r0], -r0	; UNPREDICTABLE>
    159c:	ldreq	r0, [sl], #1029	; 0x405
    15a0:	cdppl	0, 0, cr0, cr13, cr0, {0}
    15a4:	stmdbeq	r0, {r1}
    15a8:	andeq	r0, r0, r5, ror #5
    15ac:	andeq	r0, r0, pc, lsr #9
    15b0:	andeq	r8, r0, sl, lsl #10
    15b4:	andne	r0, r0, r0, lsl #6
    15b8:	andeq	r0, r0, ip, lsl #8
    15bc:	ldreq	r0, [pc], #3079	; 15c4 _start-0x209fea3c>
    15c0:	streq	r0, [r1]
    15c4:	andsge	sp, r1, r3, lsl #24
    15c8:	addeq	r0, r1, r0, lsr #32
    15cc:	andeq	r0, r2, r0
    15d0:	andeq	r0, r0, r8, lsr r6
    15d4:	andseq	r0, r2, r4, lsl #2
    15d8:	stmdalt	r1, {}	; UNPREDICTABLE>
    15dc:	andvc	r0, r0, r5
    15e0:	strle	r0, [r0], #-1
    15e4:	strtle	sl, [r0], #-11
    15e8:	strtle	sl, [r0], #-11
    15ec:	andeq	r0, r0, #7
    15f0:	addeq	r0, r2, r1, lsl #12
    15f4:	mrseq	r0, (UNDEF: 2)
    15f8:	andeq	r8, r0, r8
    15fc:	streq	r0, [r2, #-512]	; 0x200
    1600:	andeq	r0, r0, r7, lsr #2
    1604:	strcc	r0, [r7], -r2, lsl #4
    1608:	movweq	r0, #0
    160c:	cdpvs	5, 6, cr0, cr9, cr4, {0}
    1610:	streq	r0, [r2], #-116	; 0x74
    1614:	andeq	sl, r0, r7, lsl #16
    1618:	streq	r0, [r8, #-512]	; 0x200
    161c:	andeq	r0, r0, sl, lsl #2
    1620:	cdpls	8, 0, cr0, cr7, cr2, {0}
    1624:	andeq	r0, r0, #0
    1628:	tsteq	pc, r4, lsl #10
    162c:	streq	r0, [r2]
    1630:	andeq	sl, r0, r7, lsl #6
    1634:	stmdaeq	r1, {r9}
    1638:	andeq	r0, r0, r9, lsl #1
    163c:	andeq	fp, r4, r4, lsl #30
    1640:	teqmi	r4, r0, lsl #2
    1644:	mrseq	r0, (UNDEF: 0)
    1648:	subne	r0, ip, #335544320	; 0x14000000
    164c:	smlatbeq	r0, r0, r0, r2
    1650:	andeq	r0, r0, #1
    1654:	andeq	r7, r6, r0, lsl #6
    1658:	andne	r0, r1, #0
    165c:	mrseq	r0, (UNDEF: 0)
    1660:	andeq	r0, r0, r0, ror #12
    1664:	andeq	r0, r0, r4, lsr #12
    1668:	ldrdcs	r0, [r0], r4	; UNPREDICTABLE>
    166c:	adccs	r0, r0, r4, asr #25
    1670:	andeq	r0, r0, r5, asr #16
    1674:	andhi	r0, r6, #-2147483648	; 0x80000000
    1678:	andeq	r0, r0, #0
    167c:	addeq	r0, r0, r1, lsl #16
    1680:	andeq	r0, r2, #0
    1684:	andeq	r2, r1, r5, lsl #14
    1688:	streq	r0, [r2, -r0, lsl #4]
    168c:	andeq	r0, r0, r6, lsr r0
    1690:	stmdbvs	r5, {r0, r1, sl}
    1694:	andeq	r7, r0, #1845493760	; 0x6e000000
    1698:	adceq	r0, r8, r4, lsl #14
    169c:	stmdaeq	r2, {}	; UNPREDICTABLE>
    16a0:	andeq	r0, r1, r5, lsl #20
    16a4:	streq	r0, [r8, -r0, lsl #4]
    16a8:	muleq	r0, lr, r0
    16ac:	svceq	0x00050402
    16b0:	andeq	r0, r0, #1
    16b4:	adceq	r0, r3, r4, lsl #14
    16b8:	streq	r0, [r4]
    16bc:	andeq	r0, r0, r1, ror r0
    16c0:	stmdbhi	r8, {r1, r8}
    16c4:	streq	r0, [r0]
    16c8:	andeq	r1, r6, r1, lsl #14
    16cc:	mrseq	r0, (UNDEF: 85)
    16d0:	andeq	r0, r0, fp, rrx
    16d4:	ldrdcs	r0, [r0], r4	; UNPREDICTABLE>
    16d8:	adccs	r0, r0, r4, asr #25
    16dc:	muleq	r0, r4, r2
    16e0:	strdeq	r0, [r0], -r3
    16e4:	andeq	r0, r6, r6, lsl #18
    16e8:	vrhadd.u8	d16, d5, d0
    16ec:	andeq	r0, r0, #0
    16f0:	mcrne	4, 0, r5, cr6, cr1, {4}
    16f4:	tsteq	r0, r6
    16f8:	andeq	pc, r0, r5, asr #18
    16fc:	addspl	r0, r1, r0, lsl #4
    1700:	tsteq	r0, r7, lsl #6
    1704:	andeq	r6, r0, r7, asr #22
    1708:	lfmvs	f0, 4, [r1], {0}
    170c:	andeq	r1, r6, r8, lsl #2
    1710:			; UNDEFINED> instruction: 0xf9480100
    1714:	andeq	r0, r0, #0
    1718:	movwvs	r6, #30865	; 0x7891
    171c:	mrsmi	r0, (UNDEF: 89)
    1720:	andeq	r0, r0, #0
    1724:	movwvc	r6, #28817	; 0x7091
    1728:	stmdbmi	r1, {r0, r1, r5, r6}
    172c:	andeq	r0, r0, r1, asr #32
    1730:	ldrbeq	r9, [ip, -r2, lsl #2]
    1734:	rsbeq	r6, fp, r4, ror pc
    1738:	rsbeq	r4, fp, r1, lsl #20
    173c:	mrsls	r0, (UNDEF: 2)
    1740:	streq	r0, [r4], #-100	; 0x64
    1744:	andeq	r0, r0, fp, rrx
    1748:	rscseq	r0, pc, r4, lsl #8
    174c:	mrsvc	r0, (UNDEF: 9)
    1750:	andeq	r0, r0, r0

Disassembly of section .debug_abbrev:

00000000 .debug_abbrev
   0:	strcs	r1, [r1, #-257]	; 0x101
   4:	movweq	r1, #45838	; 0xb30e
   8:	tstne	lr, lr, lsl #22
   c:	andne	r1, r1, r1, lsl #4
  10:	andeq	r0, r0, #6
  14:	bleq	2c00ac _start-0x2073ff54>
  18:	vmoveq.16	d3[0], r0
  1c:	strcs	r0, [r3]
  20:	vmlacc.f64	d0, d11, d0
  24:	andeq	r0, r8, fp, lsl #6
  28:	andseq	r0, r6, r0, lsl #8
  2c:	bleq	e83840 _start-0x1fb7c7c0>
  30:	movtne	r0, #39739	; 0x9b3b
  34:	svceq	0x00050000
  38:	stmdbmi	fp, {r8, r9, fp}
  3c:			; UNDEFINED> instruction: 0x06000013
  40:	bleq	2c0084 _start-0x2073ff7c>
  44:	cdpcs	0, 0, cr0, cr7, cr0, {0}
  48:	movweq	r3, #52993	; 0xcf01
  4c:	blcc	2ce88c _start-0x20731774>
  50:	tstne	ip, fp, lsl #14
  54:	andmi	r1, r1, r1, lsl #4
  58:	andseq	r0, r3, r6, lsl #2
  5c:	andeq	r0, r5, r0, lsl #16
  60:	bleq	e83874 _start-0x1fb7c78c>
  64:	movtne	r0, #39739	; 0x9b3b
  68:	andeq	r0, r0, r2, lsl #20
  6c:	movweq	r3, #1033	; 0x409
  70:	blcc	2ce8b0 _start-0x20731750>
  74:	andseq	r4, r3, #180224	; 0x2c000
  78:	beq	a8 _start-0x209fff58>
  7c:	stmdaeq	r3, {r2, r4, r5}
  80:	bleq	ec2d70 _start-0x1fb3d290>
  84:	beq	84db0 _start-0x2097b250>
  88:	cdpcs	0, 0, cr0, cr11, cr0, {0}
  8c:	bcc	380c98 _start-0x2067f368>
  90:	strcs	r3, [fp, -fp, lsl #22]
  94:	andne	r1, r1, #3
  98:	tsteq	r6, r1
  9c:	stceq	0, cr0, [r0], {19}
  a0:	ldceq	0, cr0, [pc], #-184	; fffffff0 __bss_end__+0xdf5feda0>
  a4:	bleq	e838b8 _start-0x1fb7c748>
  a8:	tsteq	r1, fp, lsr fp
  ac:			; UNDEFINED> instruction: 0x06400112
  b0:	cdpcs	0, 0, cr0, cr13, cr0, {0}
  b4:	movweq	r3, #52993	; 0xcf01
  b8:	blcc	2ce8f8 _start-0x20731708>
  bc:	tstne	ip, r5, lsl #14
  c0:	andmi	r1, r1, r1, lsl #4
  c4:	andseq	r0, r3, r6, lsl #2
  c8:	andeq	r0, r5, r0, lsl #28
  cc:	bleq	e820e0 _start-0x1fb7df20>
  d0:	movtne	r0, #38203	; 0x953b
  d4:	andeq	r0, r0, r2, lsl #20
  d8:	movweq	r3, #1039	; 0x40f
  dc:	blcc	2ce91c _start-0x207316e4>
  e0:	andseq	r4, r3, #81920	; 0x14000
  e4:	andne	r0, r0, sl
  e8:	stmdaeq	r3, {r2, r4, r5}
  ec:	ldreq	r0, [fp, #-2874]!	; 0xb3a
  f0:	beq	84e1c _start-0x2097b1e4>
  f4:	ldrcc	r0, [r1]
  f8:	bcc	380d00 _start-0x2067f300>
  fc:	stmdbmi	fp, {r0, r1, r3, r8, r9, fp, ip, sp}
 100:	stccc	15, cr3, [ip], {19}
 104:	andne	r0, r0, #12
 108:	mcreq	0, 0, r0, cr3, cr4, {1}
 10c:	bleq	ec2dfc _start-0x1fb3d204>
 110:	ldceq	3, cr1, [pc], #-292	; fffffff4 __bss_end__+0xdf5feda4>
 114:	andeq	r0, r0, r2, lsl #20
 118:	tsteq	r1, r0, lsl #2
 11c:	bleq	4c39b8 _start-0x2053c648>
 120:	cdpeq	14, 1, cr0, cr11, cr3, {0}
 124:	tsteq	r2, r1, lsl r1
 128:	andeq	r0, r0, r0, lsl r6
 12c:	bleq	913c _start-0x209f6ec4>
 130:	movweq	r3, #48651	; 0xbe0b
 134:	movweq	r0, #14
 138:	bleq	2c01d0 _start-0x2073fe30>
 13c:	stmdaeq	r3, {r1, r2, r3, r4, r5, r8, r9, fp}
 140:	strne	r0, [r4], -r0
 144:	bcc	380d4c _start-0x2067f2b4>
 148:	stmdbmi	fp, {r0, r1, r3, r8, r9, fp, ip, sp}
 14c:	streq	r0, [r0, #-19]
 150:	bleq	2c0194 _start-0x2073fe6c>
 154:	andeq	r0, r0, r3, lsl #28
 158:	bleq	3d78 _start-0x209fc288>
 15c:	andseq	r4, r3, fp, lsl #18
 160:	eoreq	r0, r6, r0, lsl #14
 164:	andeq	r1, r0, r9, asr #6
 168:	svccc	0x00012e08
 16c:	bcc	380da4 _start-0x2067f25c>
 170:	strcs	r3, [fp, -fp, lsl #22]
 174:	andne	r1, r1, #3
 178:	andeq	r4, r6, r1
 17c:	andeq	r0, r5, r0, lsl #18
 180:	bleq	e82194 _start-0x1fb7de6c>
 184:	movtne	r0, #39739	; 0x9b3b
 188:	andeq	r0, r0, r2, lsl #20
 18c:	andeq	r1, r0, sl, lsl #16
 190:	eorseq	r0, r4, r0, lsl #22
 194:	bleq	e821a8 _start-0x1fb7de58>
 198:	movtne	r0, #39739	; 0x9b3b
 19c:	andeq	r0, r0, r2, lsl #20
 1a0:	movweq	r3, #1036	; 0x40c
 1a4:	blcc	2ce9e4 _start-0x2073161c>
 1a8:	andseq	r4, r3, #180224	; 0x2c000
 1ac:	andeq	r0, r0, sl
 1b0:	strcs	r1, [r1, #-257]	; 0x101
 1b4:	movweq	r1, #45838	; 0xb30e
 1b8:	tstne	lr, lr, lsl #22
 1bc:	andne	r1, r1, r1, lsl #4
 1c0:	andeq	r0, r0, #6
 1c4:	bleq	2c025c _start-0x2073fda4>
 1c8:	vmoveq.16	d3[0], r0
 1cc:	strcs	r0, [r3]
 1d0:	vmlacc.f64	d0, d11, d0
 1d4:	andeq	r0, r8, fp, lsl #6
 1d8:	andseq	r0, r6, r0, lsl #8
 1dc:	bleq	e839f0 _start-0x1fb7c610>
 1e0:	movtne	r0, #39739	; 0x9b3b
 1e4:	svceq	0x00050000
 1e8:	stmdbmi	fp, {r8, r9, fp}
 1ec:			; UNDEFINED> instruction: 0x06000013
 1f0:	mcreq	0, 0, r0, cr3, cr6, {0}
 1f4:	ldreq	r0, [fp, #-2874]!	; 0xb3a
 1f8:	andeq	r1, r0, r9, asr #6
 1fc:	movweq	r1, #4871	; 0x1307
 200:	bcc	2c2e40 _start-0x2073d1c0>
 204:	tsteq	fp, fp, lsl #22
 208:	stmdaeq	r0, {r0, r1, r4}
 20c:	cdpeq	0, 0, cr0, cr3, cr13, {0}
 210:	bleq	ec2f00 _start-0x1fb3d100>
 214:	beq	e04f40 _start-0x1fbfb0c0>
 218:	mrseq	r0, (UNDEF: 9)
 21c:	tsteq	r3, r1, lsl #18
 220:	beq	274 _start-0x209ffd8c>
 224:	movtne	r0, #36897	; 0x9021
 228:	andeq	r0, r0, pc, lsr #22
 22c:	strcs	r1, [r1, -fp, lsl #10]
 230:	tsteq	r3, ip, lsl #18
 234:	stceq	0, cr0, [r0], {19}
 238:	movtne	r0, #36869	; 0x9005
 23c:	strcs	r0, [sp], -r0
 240:	andseq	r4, r3, r0, lsl #18
 244:	andeq	r0, pc, r0, lsl #28
 248:	andeq	r0, r0, fp, lsl #22
 24c:	andeq	r1, r0, pc, lsl #16
 250:	teqeq	lr, r0
 254:	mcreq	12, 0, r0, cr3, cr15, {1}
 258:	bleq	ec2f48 _start-0x1fb3d0b8>
 25c:	tsteq	r1, r7, lsr #24
 260:			; UNDEFINED> instruction: 0x06400112
 264:	andeq	r1, r0, r1, lsl #6
 268:	movweq	r3, #1041	; 0x411
 26c:	blcc	2cea94 _start-0x2073156c>
 270:	andseq	r4, r3, #180224	; 0x2c000
 274:	andne	r0, r0, #10
 278:	andeq	r0, r0, r1, lsr #32
 27c:	movweq	r3, #1043	; 0x413
 280:	blcc	2ceac0 _start-0x20731540>
 284:	svccc	0x0013490b
 288:	andeq	r3, ip, ip, lsl #24
 28c:	mrsne	r0, (UNDEF: 1)
 290:	movwne	r2, #58625	; 0xe501
 294:	blne	380ec8 _start-0x2067f138>
 298:	andne	r1, r1, #-2147483645	; 0x80000003
 29c:	andeq	r1, r6, r1
 2a0:	eoreq	r0, r4, r0, lsl #4
 2a4:	bleq	f82ed8 _start-0x1fa7d128>
 2a8:	andeq	r0, r0, r3, lsl #28
 2ac:	bleq	92c0 _start-0x209f6d40>
 2b0:	movweq	r3, #48651	; 0xbe0b
 2b4:	streq	r0, [r0], #-8
 2b8:	mcreq	0, 0, r0, cr3, cr6, {0}
 2bc:	bleq	ec2fac _start-0x1fb3d054>
 2c0:	andeq	r1, r0, r9, asr #6
 2c4:	bleq	3ee0 _start-0x209fc120>
 2c8:	andeq	r0, lr, fp, lsl #6
 2cc:	andeq	r0, pc, r0, lsl #12
 2d0:	movtne	r0, #39691	; 0x9b0b
 2d4:	strcs	r0, [r7], -r0
 2d8:	andseq	r4, r3, r0, lsl #18
 2dc:	teqeq	lr, r0, lsl #16
 2e0:	mcreq	12, 0, r0, cr3, cr15, {1}
 2e4:	bleq	ec2fd4 _start-0x1fb3d02c>
 2e8:	tsteq	r1, r7, lsr #24
 2ec:			; UNDEFINED> instruction: 0x06400112
 2f0:	streq	r0, [r9]
 2f4:	bcc	200efc _start-0x207ff104>
 2f8:	stmdbmi	fp, {r0, r1, r3, r8, r9, fp, ip, sp}
 2fc:	andeq	r0, sl, r3, lsl r2
 300:	andseq	r0, r8, r0, lsl #20
 304:	strcc	r0, [fp]
 308:	bcc	200f10 _start-0x207ff0f0>
 30c:	stmdbmi	fp, {r0, r1, r3, r8, r9, fp, ip, sp}
 310:	andeq	r0, sl, r3, lsl r2
 314:	mrsne	r0, (UNDEF: 1)
 318:	movwne	r2, #58625	; 0xe501
 31c:	blne	380f50 _start-0x2067f0b0>
 320:	andne	r1, r1, #-2147483645	; 0x80000003
 324:	andeq	r1, r6, r1
 328:	eoreq	r0, r4, r0, lsl #4
 32c:	bleq	f82f60 _start-0x1fa7d0a0>
 330:	andeq	r0, r0, r3, lsl #28
 334:	bleq	9348 _start-0x209f6cb8>
 338:	movweq	r3, #48651	; 0xbe0b
 33c:	streq	r0, [r0], #-8
 340:	mcreq	0, 0, r0, cr3, cr6, {0}
 344:	bleq	ec3034 _start-0x1fb3cfcc>
 348:	andeq	r1, r0, r9, asr #6
 34c:	bleq	3f68 _start-0x209fc098>
 350:	andseq	r4, r3, fp, lsl #18
 354:	andseq	r0, r6, r0, lsl #12
 358:	bleq	e83b6c _start-0x1fb7c494>
 35c:	movtne	r0, #38203	; 0x953b
 360:	movwne	r0, #28672	; 0x7000
 364:	bleq	380f70 _start-0x2067f090>
 368:	blcc	2ceb9c _start-0x20731464>
 36c:	andseq	r0, r3, fp, lsl #2
 370:	andeq	r0, sp, r0, lsl #16
 374:	bleq	e83b88 _start-0x1fb7c478>
 378:	movtne	r0, #39739	; 0x9b3b
 37c:	andeq	r0, r0, r8, lsr sl
 380:	stmdbmi	r1, {r0, r3, r8}
 384:	andseq	r0, r3, r3, lsl r1
 388:	eoreq	r0, r1, r0, lsl #20
 38c:	bleq	bc50b8 _start-0x1fe3af48>
 390:	strne	r0, [fp]
 394:	stmdbmi	ip, {r0, r8, r9, sl, sp}
 398:	andseq	r0, r3, r3, lsl r1
 39c:	andeq	r0, r5, r0, lsl #24
 3a0:	andeq	r1, r0, r9, asr #6
 3a4:	stmdbmi	r0, {r0, r2, r3, r9, sl, sp}
 3a8:	mcreq	0, 0, r0, cr0, cr3, {0}
 3ac:	bleq	2c03f0 _start-0x2073fc10>
 3b0:	stmdane	pc, {}	; UNPREDICTABLE>
 3b4:	andne	r0, r0, r0
 3b8:	ldfeqs	f0, [pc], #-184	; 308 _start-0x209ffcf8>
 3bc:	bleq	e83bd0 _start-0x1fb7c430>
 3c0:	stceq	11, cr0, [r7], #-236	; 0xffffff14
 3c4:	tsteq	r1, r9, asr #6
 3c8:			; UNDEFINED> instruction: 0x06400112
 3cc:	andeq	r1, r0, r1, lsl #6
 3d0:	movweq	r0, #1297	; 0x511
 3d4:	blcc	2cebfc _start-0x20731404>
 3d8:	andseq	r4, r3, #180224	; 0x2c000
 3dc:	andne	r0, r0, #10
 3e0:	stmdaeq	r3, {r2, r4, r5}
 3e4:	bleq	ec30d4 _start-0x1fb3cf2c>
 3e8:	beq	85114 _start-0x2097aeec>
 3ec:	ldrcc	r0, [r3]
 3f0:	bcc	380ff8 _start-0x2067f008>
 3f4:	stmdbmi	fp, {r0, r1, r3, r8, r9, fp, ip, sp}
 3f8:	andeq	r0, sl, r3, lsl r2
 3fc:	eorseq	r1, r4, r0, lsl #8
 400:	bleq	e83c14 _start-0x1fb7c3ec>
 404:	movtne	r0, #39739	; 0x9b3b
 408:	ldceq	12, cr0, [ip], #-252	; 0xffffff04
 40c:	tstcs	r5, r0
 410:	andeq	r0, r0, r0
 414:	strcs	r1, [r1, #-257]	; 0x101
 418:	movweq	r1, #45838	; 0xb30e
 41c:	tstne	lr, lr, lsl #22
 420:	andne	r1, r1, r1, lsl #4
 424:	andeq	r0, r0, #6
 428:	bleq	2c04c0 _start-0x2073fb40>
 42c:	vmoveq.16	d3[0], r0
 430:	strcs	r0, [r3]
 434:	vmlacc.f64	d0, d11, d0
 438:	andeq	r0, r8, fp, lsl #6
 43c:	andeq	r0, pc, r0, lsl #8
 440:	movtne	r0, #39691	; 0x9b0b
 444:	strne	r0, [r5], -r0
 448:	bcc	381050 _start-0x2067efb0>
 44c:	stmdbmi	fp, {r0, r1, r3, r8, r9, fp, ip, sp}
 450:			; UNDEFINED> instruction: 0x06000013
 454:	bleq	2c0498 _start-0x2073fb68>
 458:	andeq	r0, r0, r3, lsl #28
 45c:	movweq	r1, #1543	; 0x607
 460:	blcc	2ceca0 _start-0x20731360>
 464:	andseq	r4, r3, r5, lsl #18
 468:	eoreq	r0, r6, r0, lsl #16
 46c:	andeq	r1, r0, r9, asr #6
 470:	movweq	r2, #7689	; 0x1e09
 474:	blcc	2cecb4 _start-0x2073134c>
 478:	tstne	ip, fp, lsl #14
 47c:	andmi	r1, r1, r1, lsl #4
 480:	andseq	r0, r3, r6, lsl #2
 484:	andeq	r0, r5, r0, lsl #20
 488:	bleq	e8249c _start-0x1fb7db64>
 48c:	movtne	r0, #39739	; 0x9b3b
 490:	andeq	r0, r0, r2, lsl #20
 494:	svccc	0x00012e0b
 498:	bcc	3810d0 _start-0x2067ef30>
 49c:	strcs	r3, [fp, -fp, lsl #22]
 4a0:	andne	r1, r1, #3
 4a4:	tsteq	r6, r1
 4a8:	stceq	0, cr0, [r0], {19}
 4ac:	ldfeqs	f0, [pc], #-184	; 3fc _start-0x209ffc04>
 4b0:	bleq	e83cc4 _start-0x1fb7c33c>
 4b4:	stceq	11, cr0, [r7], #-236	; 0xffffff14
 4b8:	tsteq	r1, r9, asr #6
 4bc:			; UNDEFINED> instruction: 0x06400112
 4c0:	andeq	r1, r0, r1, lsl #6
 4c4:	movweq	r0, #1293	; 0x50d
 4c8:	blcc	2ced08 _start-0x207312f8>
 4cc:	andseq	r4, r3, #180224	; 0x2c000
 4d0:	cdpeq	0, 0, cr0, cr0, cr10, {0}
 4d4:	stmdaeq	r3, {r2, r4, r5}
 4d8:	bleq	ec31c8 _start-0x1fb3ce38>
 4dc:	beq	85208 _start-0x2097adf8>
 4e0:	strcc	r0, [pc], #0	; 4e8 _start-0x209ffb18>
 4e4:	bcc	3810ec _start-0x2067ef14>
 4e8:	stmdbmi	fp, {r0, r1, r3, r8, r9, fp, ip, sp}
 4ec:	andeq	r0, sl, r3, lsl r2
 4f0:	andeq	r1, sl, r0
 4f4:	bleq	e83d08 _start-0x1fb7c2f8>
 4f8:	tsteq	r1, fp, lsr fp
 4fc:	ldrne	r0, [r1]
 500:	tsteq	ip, r1, lsl #14
 504:	andne	r0, r0, #19
 508:	movtne	r0, #36869	; 0x9005
 50c:	cdpcs	0, 1, cr0, cr3, cr0, {0}
 510:	bcc	38111c _start-0x2067eee4>
 514:	strcs	r3, [r5, -fp, lsl #22]
 518:	andne	r1, r1, #3
 51c:	tsteq	r6, r1
 520:	strne	r0, [r0], #-19
 524:	stmdaeq	r3, {r0, r2}
 528:	ldreq	r0, [fp, #-2874]!	; 0xb3a
 52c:	beq	85258 _start-0x2097ada8>
 530:	ldreq	r0, [r5]
 534:	bcc	38113c _start-0x2067eec4>
 538:	stmdbmi	r5, {r0, r1, r3, r8, r9, fp, ip, sp}
 53c:	andeq	r0, sl, r3, lsl r2
 540:	eorseq	r1, r4, r0, lsl #12
 544:	bleq	e82558 _start-0x1fb7daa8>
 548:	movtne	r0, #38203	; 0x953b
 54c:	andeq	r0, r0, r2, lsl #20
 550:	stmdbmi	r1, {r0, r1, r2, r4, r8}
 554:	andseq	r0, r3, r3, lsl r1
 558:	eoreq	r1, r1, r0, lsl #16
 55c:	bleq	bc5288 _start-0x1fe3ad78>
 560:	ldrcc	r0, [r9]
 564:	bcc	38116c _start-0x2067ee94>
 568:	stmdbmi	r5, {r0, r1, r3, r8, r9, fp, ip, sp}
 56c:	stccc	15, cr3, [ip], {19}
 570:	bne	5a8 _start-0x209ffa58>
 574:	mcreq	0, 0, r0, cr3, cr4, {1}
 578:	bleq	ec3268 _start-0x1fb3cd98>
 57c:	ldceq	3, cr1, [pc], #-292	; 460 _start-0x209ffba0>
 580:	andeq	r0, r0, r2, lsl #20
 584:	tsteq	r1, r0, lsl #2
 588:	bleq	4c3e24 _start-0x2053c1dc>
 58c:	cdpeq	14, 1, cr0, cr11, cr3, {0}
 590:	tsteq	r2, r1, lsl r1
 594:	andeq	r0, r0, r0, lsl r6
 598:	bleq	95a8 _start-0x209f6a58>
 59c:	movweq	r3, #48651	; 0xbe0b
 5a0:	movweq	r0, #14
 5a4:	bleq	2c063c _start-0x2073f9c4>
 5a8:	stmdaeq	r3, {r1, r2, r3, r4, r5, r8, r9, fp}
 5ac:	strne	r0, [r4], -r0
 5b0:	bcc	3811b8 _start-0x2067ee48>
 5b4:	stmdbmi	fp, {r0, r1, r3, r8, r9, fp, ip, sp}
 5b8:	streq	r0, [r0, #-19]
 5bc:	bleq	2c0600 _start-0x2073fa00>
 5c0:	andeq	r1, r0, r9, asr #6
 5c4:	movweq	r1, #1542	; 0x606
 5c8:	blcc	2cee08 _start-0x207311f8>
 5cc:	andseq	r4, r3, r5, lsl #18
 5d0:	tsteq	r3, r0, lsl #14
 5d4:	bleq	2c3de8 _start-0x2073c218>
 5d8:	bleq	ec32c8 _start-0x1fb3cd38>
 5dc:	andeq	r1, r0, r1, lsl #6
 5e0:	movweq	r0, #3336	; 0xd08
 5e4:	blcc	2cee24 _start-0x207311dc>
 5e8:	ldmdacc	r3, {r0, r1, r3, r8, fp, lr}
 5ec:	stmdbeq	r0, {r1, r3}
 5f0:	movtne	r0, #37121	; 0x9101
 5f4:	andeq	r1, r0, r1, lsl #6
 5f8:	stmdbmi	r0, {r1, r3, r8, sp}
 5fc:	andeq	r2, fp, r3, lsl pc
 600:	tsteq	r5, r0, lsl #22
 604:	movtne	r0, #39975	; 0x9c27
 608:	andeq	r1, r0, r1, lsl #6
 60c:	stmdbmi	r0, {r2, r3, r8, sl}
 610:	stceq	0, cr0, [r0, #-76]	; 0xffffffb4
 614:	movtne	r0, #36902	; 0x9026
 618:	svceq	0x000e0000
 61c:	andeq	r0, fp, r0, lsl #22
 620:	andseq	r0, r8, r0, lsl #30
 624:	ldrcc	r0, [r0]
 628:	bcc	381230 _start-0x2067edd0>
 62c:	stmdbmi	fp, {r0, r1, r3, r8, r9, fp, ip, sp}
 630:	andeq	r3, ip, #76	; 0x4c
 634:	andeq	r0, r0, sl
 638:	strcs	r1, [r1, #-257]	; 0x101
 63c:	movweq	r1, #45838	; 0xb30e
 640:	tstne	lr, lr, lsl #22
 644:	andne	r1, r1, r1, lsl #4
 648:	andeq	r0, r0, #6
 64c:	bleq	2c06e4 _start-0x2073f91c>
 650:	vmoveq.16	d3[0], r0
 654:	strcs	r0, [r3]
 658:	vmlacc.f64	d0, d11, d0
 65c:	andeq	r0, r8, fp, lsl #6
 660:	eorseq	r0, r4, r0, lsl #8
 664:	bleq	e83e78 _start-0x1fb7c188>
 668:	movtne	r0, #39739	; 0x9b3b
 66c:	beq	83770 _start-0x2097c890>
 670:	mrseq	r0, (UNDEF: 0)
 674:	mcreq	1, 1, r0, cr5, cr1, {0}
 678:	vmoveq.32	d3[0], r0
 67c:	tsteq	r1, fp, lsl lr
 680:			; UNDEFINED> instruction: 0x06100112
 684:	strcs	r0, [r2]
 688:	vmlacc.f64	d0, d11, d0
 68c:	andeq	r0, lr, fp, lsl #6
 690:	eoreq	r0, r4, r0, lsl #6
 694:	bleq	f832c8 _start-0x1fa7cd38>
 698:	andeq	r0, r0, r3, lsl #16
 69c:	bleq	42b4 _start-0x209fbd4c>
 6a0:	andseq	r4, r3, fp, lsl #18
 6a4:	teqeq	lr, r0, lsl #10
 6a8:	mcreq	12, 0, r0, cr3, cr15, {1}
 6ac:	bleq	ec339c _start-0x1fb3cc64>
 6b0:	movtne	r0, #39975	; 0x9c27
 6b4:	tsteq	r2, r1, lsl r1
 6b8:	movwne	r0, #5696	; 0x1640
 6bc:	streq	r0, [r6]
 6c0:	bcc	3812c8 _start-0x2067ed38>
 6c4:	stmdbmi	fp, {r0, r1, r3, r8, r9, fp, ip, sp}
 6c8:	andeq	r0, sl, r3, lsl r2
 6cc:	eorseq	r0, r4, r0, lsl #14
 6d0:	bleq	e826e4 _start-0x1fb7d91c>
 6d4:	movtne	r0, #39739	; 0x9b3b
 6d8:	andeq	r0, r0, r2, lsl #20
 6dc:	movweq	r3, #1032	; 0x408
 6e0:	blcc	2cef20 _start-0x207310e0>
 6e4:	andseq	r4, r3, #180224	; 0x2c000
 6e8:	stmdbeq	r0, {r1, r3}
 6ec:	movtne	r0, #36902	; 0x9026
 6f0:	Address 0x00000000000006f0 is out of bounds.


Disassembly of section .debug_line:

00000000 .debug_line
   0:	andeq	r0, r0, r3, lsl #2
   4:	addeq	r0, fp, r2
   8:	mrseq	r0, (UNDEF: 2)
   c:	strdeq	r0, [sp], -fp
  10:	tsteq	r1, r1, lsl #2
  14:	mrseq	r0, (UNDEF: 0)
  18:	cdpcs	0, 0, cr0, cr1, cr0, {0}
  1c:	ldfvse	f6, [r2, #-188]!	; 0xffffff44
  20:	svcvs	0x00682f00
  24:	cfstr32vs	mvfx6, [pc], #-436	; fffffe78 __bss_end__+0xdf5fec28>
  28:	svccs	0x006a6369
  2c:	rsbsmi	r6, r4, #461373440	; 0x1b800000
  30:	teqvc	pc, #1392508928	; 0x53000000
  34:	teqvs	pc, r9, ror r3	; UNPREDICTABLE>
  38:	svccs	0x00686372
  3c:	cmnvs	r2, r5, ror #12
  40:	teqvc	pc, #7296	; 0x1c80
  44:	strbtvs	r6, [lr], #-372	; 0x174
  48:	svcvs	0x006f622f
  4c:	ldmdbcc	r2, {r2, r4, r5, r6, sl, fp, lr}^
  50:	svccs	0x00303267
  54:	cdpcs	14, 2, cr2, cr15, cr14, {1}
  58:	cdpcs	15, 2, cr2, cr14, cr14, {1}
  5c:	svccs	0x002e2e2f
  60:	rsbseq	r7, r3, r3, ror r9
  64:	stmdbvs	r1!, {r8, sl, fp, sp, lr}^
  68:	rsbeq	r2, r3, lr, ror #28
  6c:	stmdbvs	r0, {}	; UNPREDICTABLE>
  70:	ldrbvc	r7, [pc], #-1134	; 78 _start-0x209fff88>
  74:	cmnvc	r5, #121	; 0x79
  78:	tsteq	r0, lr, lsr #16
  7c:	ldmdbvc	r4!, {}^	; UNPREDICTABLE>
  80:	mrccs	5, 3, r6, cr3, cr0, {3}
  84:	andeq	r0, r1, r8, rrx
  88:	rsbsvc	r7, r9, r0, lsl #8
  8c:	stmdavs	lr!, {r0, r2, r5, r6, r8, r9, ip, sp, lr}
  90:	andeq	r0, r0, r0, lsl #4
  94:	andeq	r0, r5, #0
  98:	strdcs	r0, [r0], ip	; UNPREDICTABLE>
  9c:	tsteq	r0, r3, lsl #22
  a0:	ldrle	r0, [sl, r3, lsl #26]!
  a4:	ldrbhi	sp, [r4, #2263]!	; 0x8d7
  a8:	andeq	r8, r0, #19660800	; 0x12c0000
  ac:	subeq	r0, ip, r4, lsl #2
  b0:	svcls	0x00010402
  b4:	mrseq	r0, R12_usr
  b8:	stmdavs	r6!, {r0, r1, r9, sl, fp}^
  bc:	bmi	cc0f40 _start-0x1fd3f0c0>
  c0:	svcls	0x0041084b
  c4:	andspl	r3, r3, r2, lsl #20
  c8:	mrseq	r0, R12_usr
  cc:	streq	r0, [r2], #-104	; 0x68
  d0:			; UNDEFINED> instruction: 0xf733d701
  d4:	mrseq	r0, R12_usr
  d8:	strvs	r6, [r6, -r6, lsl #12]
  dc:	mrseq	r0, R12_usr
  e0:	strvs	r6, [r6, -r6, lsl #12]
  e4:	mrseq	r0, R12_usr
  e8:	movweq	r6, #26118	; 0x6606
  ec:	cmpge	lr, r3, lsr r2
  f0:	streq	r0, [r2], #-103	; 0x67
  f4:	andeq	r4, r0, #4
  f8:	orrhi	r0, r3, #1
  fc:	strge	r4, [r5], r3, lsl #29
 100:	streq	r9, [r2], #-3978	; 0xf8a
 104:	stfles	f0, [r1], {0}
 108:	andeq	r0, r0, #0
 10c:	andeq	ip, r0, r0
 110:	blx	4091a _start-0x209bf6e6>
 114:	tsteq	r0, lr, lsl #26
 118:	andeq	r0, r1, r1, lsl #2
 11c:	andeq	r0, r1, r0
 120:	stmdavs	pc!, {r8}	; UNPREDICTABLE>
 124:	svccs	0x00656d6f
 128:	bvs	18da6e0 _start-0x1f125920>
 12c:	strbtvc	r6, [r5], #-3631	; 0xe2f
 130:	svccs	0x00445342
 134:	svccs	0x00737973
 138:	stmdavs	r3!, {r0, r5, r6, r9, ip, sp, lr}^
 13c:	rsbsvs	r6, r6, #197132288	; 0xbc00000
 140:	svccs	0x006d7261
 144:	mcrvs	4, 3, r7, cr1, cr3, {3}
 148:	svcvs	0x00622f64
 14c:	subpl	r7, ip, #1862270976	; 0x6f000000
 150:	eorscc	r6, r2, r9, lsr r7
 154:	svccs	0x002e2e2f
 158:	cdpcs	14, 2, cr2, cr15, cr14, {1}
 15c:	cdpcs	15, 2, cr2, cr14, cr14, {1}
 160:	rsbvs	r6, r9, #12032	; 0x2f00
 164:	rsbvs	r6, r9, #12032	; 0x2f00
 168:	svccs	0x00006173
 16c:	strbvs	r6, [sp, #-3944]!	; 0xf68
 170:	cmnvs	r9, #12032	; 0x2f00
 174:	strbvs	r2, [lr, #-3946]!	; 0xf6a
 178:	ldrbmi	r4, [r3], #-628	; 0x274
 17c:	cmnvc	r9, #-1140850688	; 0xbc000000
 180:	cmnvs	r2, #-1073741813	; 0xc000000b
 184:	strbtvc	r2, [r5], -r8, ror #30
 188:	ldfvse	f6, [r2, #-392]!	; 0xfffffe78
 18c:	cmnvs	r4, pc, lsr #6
 190:	eorvs	r6, pc, #1845493760	; 0x6e000000
 194:	ldclmi	15, cr6, [r4], #-444	; 0xfffffe44
 198:	rsbcc	r3, r7, #1343488	; 0x148000
 19c:	mcrcs	15, 1, r2, cr14, cr0, {1}
 1a0:	svccs	0x002e2e2f
 1a4:	cdpcs	14, 2, cr2, cr15, cr14, {1}
 1a8:	ldmdbvc	r3!, {r1, r2, r3, r5, r8, r9, sl, fp, sp}^
 1ac:	andvc	r0, r0, r3, ror r0
 1b0:	cmnvs	r9, #1552	; 0x610
 1b4:	tsteq	r0, lr, lsr #6
 1b8:	cdpvs	0, 6, cr0, cr1, cr0, {0}
 1bc:	stmdavs	lr!, {r0, r1, r4, r5, r6, r8, fp, sp, lr}
 1c0:	andeq	r0, r0, r0, lsl #4
 1c4:	smcvs	18243	; 0x4743
 1c8:	stmdavs	lr!, {r1, r4, r5, r6, r8, r9, sl, sp, lr}
 1cc:	andeq	r0, r0, r0, lsl #4
 1d0:	andeq	r0, r5, #0
 1d4:	adccs	r0, r0, r0, lsl r4
 1d8:	movwge	r2, #4867	; 0x1303
 1dc:	blmi	c99ff0 _start-0x1fd66010>
 1e0:	streq	r4, [r2], -r3, lsl #25
 1e4:	svcne	0x00010100
 1e8:	andeq	r0, r0, #1
 1ec:	andeq	pc, r0, r0, lsl #24
 1f0:	blx	409fa _start-0x209bf606>
 1f4:	tsteq	r0, lr, lsl #26
 1f8:	andeq	r0, r1, r1, lsl #2
 1fc:	andeq	r0, r1, r0
 200:	stmdavs	pc!, {r8}	; UNPREDICTABLE>
 204:	svccs	0x00656d6f
 208:	bvs	18da7c0 _start-0x1f125840>
 20c:	strbtvc	r6, [r5], #-3631	; 0xe2f
 210:	svccs	0x00445342
 214:	svccs	0x00737973
 218:	stmdavs	r3!, {r0, r5, r6, r9, ip, sp, lr}^
 21c:	rsbsvs	r6, r6, #197132288	; 0xbc00000
 220:	svccs	0x006d7261
 224:	mcrvs	4, 3, r7, cr1, cr3, {3}
 228:	svcvs	0x00622f64
 22c:	subpl	r7, ip, #1862270976	; 0x6f000000
 230:	eorscc	r6, r2, r9, lsr r7
 234:	svccs	0x002e2e2f
 238:	cdpcs	14, 2, cr2, cr15, cr14, {1}
 23c:	cdpcs	15, 2, cr2, cr14, cr14, {1}
 240:	rsbvs	r6, r9, #12032	; 0x2f00
 244:	rsbvs	r6, r9, #12032	; 0x2f00
 248:	mcrcs	1, 0, r6, cr0, cr3, {3}
 24c:	cdpcs	15, 2, cr2, cr14, cr14, {1}
 250:	teqvs	pc, pc, lsr #28
 254:	svccs	0x00006d72
 258:	strbvs	r6, [sp, #-3944]!	; 0xf68
 25c:	cmnvs	r9, #12032	; 0x2f00
 260:	strbvs	r2, [lr, #-3946]!	; 0xf6a
 264:	ldrbmi	r4, [r3], #-628	; 0x274
 268:	cmnvc	r9, #-1140850688	; 0xbc000000
 26c:	cmnvs	r2, #-1073741813	; 0xc000000b
 270:	strbtvc	r2, [r5], -r8, ror #30
 274:	ldfvse	f6, [r2, #-392]!	; 0xfffffe78
 278:	cmnvs	r4, pc, lsr #6
 27c:	eorvs	r6, pc, #1845493760	; 0x6e000000
 280:	ldclmi	15, cr6, [r4], #-444	; 0xfffffe44
 284:	rsbcc	r3, r7, #1343488	; 0x148000
 288:	mcrcs	15, 1, r2, cr14, cr0, {1}
 28c:	svccs	0x002e2e2f
 290:	cdpcs	14, 2, cr2, cr15, cr14, {1}
 294:	ldmdbvc	r3!, {r1, r2, r3, r5, r8, r9, sl, fp, sp}^
 298:	movwvs	r0, #115	; 0x73
 29c:	ldrbvs	r6, [r3, #-3948]!	; 0xf6c
 2a0:	cdpcs	12, 6, cr6, cr12, cr1, {3}
 2a4:	andeq	r0, r1, r3, rrx
 2a8:	strbtvc	r6, [lr], #-2304	; 0x900
 2ac:	rsbsvc	r7, r9, pc, asr r4
 2b0:	stmdavs	lr!, {r0, r2, r5, r6, r8, r9, ip, sp, lr}
 2b4:	andeq	r0, r0, r0, lsl #4
 2b8:	ldmdbvs	r3!, {r0, r5, r6, r9, sl, fp, sp, lr}^
 2bc:	movweq	r6, #2094	; 0x82e
 2c0:	ldmdbvc	r4!, {}^	; UNPREDICTABLE>
 2c4:	mrccs	5, 3, r6, cr3, cr0, {3}
 2c8:	andeq	r0, r3, r8, rrx
 2cc:	cfstrdvs	mvd7, [r9]
 2d0:	rsbeq	r2, r8, r5, ror #28
 2d4:	movwvc	r0, #3
 2d8:	mrccs	1, 3, r6, cr4, cr4, {3}
 2dc:	andeq	r0, r3, r8, rrx
 2e0:	cmnvs	r4, r0, lsl #6
 2e4:	stmdavs	lr!, {r1, r2, r3, r5, r6, sl, sp, lr}
 2e8:	andeq	r0, r0, r0, lsl #2
 2ec:	andeq	r0, r5, #0
 2f0:	adccs	r0, r0, r0, ror r4
 2f4:	tsteq	r0, r3, lsl #4
 2f8:	stccc	7, cr6, [r8, #-532]	; 0xfffffdec
 2fc:	streq	r0, [r2], #-72	; 0x48
 300:	strbteq	r0, [r6], -r1, lsl #12
 304:	andeq	r0, r6, r9, ror #4
 308:	sbcseq	r0, r9, r1, lsl #2
 30c:	andeq	r0, r2, r0
 310:	andeq	r0, r0, r1, asr #1
 314:	cdpeq	1, 15, cr0, cr11, cr2, {0}
 318:	tsteq	r1, sp
 31c:	andeq	r0, r0, r1, lsl #2
 320:	andeq	r0, r0, r0, lsl #2
 324:	svcvs	0x00682f01
 328:	cfstr32vs	mvfx6, [pc], #-436	; 17c _start-0x209ffe84>
 32c:	svccs	0x006a6369
 330:	rsbsmi	r6, r4, #461373440	; 0x1b800000
 334:	teqvc	pc, #1392508928	; 0x53000000
 338:	teqvs	pc, r9, ror r3	; UNPREDICTABLE>
 33c:	svccs	0x00686372
 340:	cmnvs	r2, r5, ror #12
 344:	teqvc	pc, #7296	; 0x1c80
 348:	strbtvs	r6, [lr], #-372	; 0x174
 34c:	svcvs	0x006f622f
 350:	ldmdbcc	r2, {r2, r4, r5, r6, sl, fp, lr}^
 354:	svccs	0x00303267
 358:	cdpcs	14, 2, cr2, cr15, cr14, {1}
 35c:	cdpcs	15, 2, cr2, cr14, cr14, {1}
 360:	svccs	0x002e2e2f
 364:	svccs	0x0062696c
 368:	cmnvc	r2, #1769472	; 0x1b0000
 36c:	stmdavs	pc!, {r0, r5, r6}	; UNPREDICTABLE>
 370:	svccs	0x00656d6f
 374:	bvs	18da92c _start-0x1f1256d4>
 378:	strbtvc	r6, [r5], #-3631	; 0xe2f
 37c:	svccs	0x00445342
 380:	svccs	0x00737973
 384:	stmdavs	r3!, {r0, r5, r6, r9, ip, sp, lr}^
 388:	rsbsvs	r6, r6, #197132288	; 0xbc00000
 38c:	svccs	0x006d7261
 390:	mcrvs	4, 3, r7, cr1, cr3, {3}
 394:	svcvs	0x00622f64
 398:	subpl	r7, ip, #1862270976	; 0x6f000000
 39c:	eorscc	r6, r2, r9, lsr r7
 3a0:	svccs	0x002e2e2f
 3a4:	cdpcs	14, 2, cr2, cr15, cr14, {1}
 3a8:	cdpcs	15, 2, cr2, cr14, cr14, {1}
 3ac:	cmnvc	r9, #-1140850688	; 0xbc000000
 3b0:	rsbsvc	r0, r0, #0
 3b4:	ldrbtvs	r6, [r4], -r9, ror #28
 3b8:	tsteq	r0, lr, lsr #6
 3bc:	cdpvs	0, 6, cr0, cr1, cr0, {0}
 3c0:	stmdavs	lr!, {r0, r1, r4, r5, r6, r8, fp, sp, lr}
 3c4:	andeq	r0, r0, r0, lsl #4
 3c8:	smcvs	18243	; 0x4743
 3cc:	stmdavs	lr!, {r1, r4, r5, r6, r8, r9, sl, sp, lr}
 3d0:	andeq	r0, r0, r0, lsl #4
 3d4:	andeq	r0, r5, #0
 3d8:	adccs	r0, r0, r0, ror #9
 3dc:	tstge	r1, r3, lsl #18
 3e0:	streq	r8, [r2], #-1099	; 0x44b
 3e4:	stmdacc	r1, {r8}
 3e8:	andeq	r0, r0, #1
 3ec:	andeq	r0, r1, r0, lsl #12
 3f0:	blx	40bfa _start-0x209bf406>
 3f4:	tsteq	r0, lr, lsl #26
 3f8:	andeq	r0, r1, r1, lsl #2
 3fc:	andeq	r0, r1, r0
 400:	stmdavs	pc!, {r8}	; UNPREDICTABLE>
 404:	svccs	0x00656d6f
 408:	bvs	18da9c0 _start-0x1f125640>
 40c:	strbtvc	r6, [r5], #-3631	; 0xe2f
 410:	svccs	0x00445342
 414:	svccs	0x00737973
 418:	stmdavs	r3!, {r0, r5, r6, r9, ip, sp, lr}^
 41c:	rsbsvs	r6, r6, #197132288	; 0xbc00000
 420:	svccs	0x006d7261
 424:	mcrvs	4, 3, r7, cr1, cr3, {3}
 428:	svcvs	0x00622f64
 42c:	subpl	r7, ip, #1862270976	; 0x6f000000
 430:	eorscc	r6, r2, r9, lsr r7
 434:	svccs	0x002e2e2f
 438:	cdpcs	14, 2, cr2, cr15, cr14, {1}
 43c:	cdpcs	15, 2, cr2, cr14, cr14, {1}
 440:	rsbvs	r6, r9, #12032	; 0x2f00
 444:	rsbvs	r6, r9, #12032	; 0x2f00
 448:	mcrcs	1, 0, r6, cr0, cr3, {3}
 44c:	cdpcs	15, 2, cr2, cr14, cr14, {1}
 450:	teqvs	pc, pc, lsr #28
 454:	svccs	0x00006d72
 458:	strbvs	r6, [sp, #-3944]!	; 0xf68
 45c:	cmnvs	r9, #12032	; 0x2f00
 460:	strbvs	r2, [lr, #-3946]!	; 0xf6a
 464:	ldrbmi	r4, [r3], #-628	; 0x274
 468:	cmnvc	r9, #-1140850688	; 0xbc000000
 46c:	cmnvs	r2, #-1073741813	; 0xc000000b
 470:	strbtvc	r2, [r5], -r8, ror #30
 474:	ldfvse	f6, [r2, #-392]!	; 0xfffffe78
 478:	cmnvs	r4, pc, lsr #6
 47c:	eorvs	r6, pc, #1845493760	; 0x6e000000
 480:	ldclmi	15, cr6, [r4], #-444	; 0xfffffe44
 484:	rsbcc	r3, r7, #1343488	; 0x148000
 488:	mcrcs	15, 1, r2, cr14, cr0, {1}
 48c:	svccs	0x002e2e2f
 490:	cdpcs	14, 2, cr2, cr15, cr14, {1}
 494:	ldmdbvc	r3!, {r1, r2, r3, r5, r8, r9, sl, fp, sp}^
 498:	movwvs	r0, #115	; 0x73
 49c:	ldrbvs	r6, [r3, #-3948]!	; 0xf6c
 4a0:	tsteq	r0, lr, lsr #6
 4a4:	cdpvs	0, 6, cr0, cr9, cr0, {0}
 4a8:	ldmdbvc	r4!, {r2, r4, r5, r6, r8, r9, sl, fp, ip, lr}^
 4ac:	mrccs	5, 3, r6, cr3, cr0, {3}
 4b0:	andeq	r0, r2, r8, rrx
 4b4:	cmnvc	lr, #0
 4b8:	rsbeq	r2, r8, r9, ror #28
 4bc:	strvc	r0, [r0], #-3
 4c0:	cmnvc	r5, #121	; 0x79
 4c4:	movweq	r6, #2094	; 0x82e
 4c8:	ldmdbvs	r4!, {}^	; UNPREDICTABLE>
 4cc:	stmdavs	lr!, {r0, r2, r3, r5, r6, r8, sl, sp, lr}
 4d0:	andeq	r0, r0, r0, lsl #6
 4d4:	strbtvc	r7, [r1], #-1139	; 0x473
 4d8:	movweq	r6, #2094	; 0x82e
 4dc:	ldrbtvc	r0, [r3]
 4e0:	cdpcs	14, 6, cr6, cr4, cr1, {3}
 4e4:	andeq	r0, r1, r8, rrx
 4e8:	strbvs	r7, [r1, #-768]!	; 0x300
 4ec:	svcvs	0x006e7272
 4f0:	tsteq	r0, lr, lsr #16
 4f4:	andeq	r0, r0, r0
 4f8:	ldreq	r0, [r4, #-517]	; 0x205
 4fc:	strgt	r2, [r3], -r0, lsr #1
 500:	ldmeq	pc, {r8}	; UNPREDICTABLE>
 504:	andeq	r8, r0, #138412032	; 0x8400000
 508:	strvs	r0, [r6], -r4, lsl #2
 50c:	cdpmi	3, 6, cr8, cr7, cr6, {0}
 510:	sbcsge	r8, r7, r1, lsr #9
 514:	strbvs	sp, [r7, -r4, lsl #15]!
 518:	strbvs	r4, [r7, -r7, ror #24]!
 51c:	beq	8c254 _start-0x20973dac>
 520:	bge	40928 _start-0x209bf6d8>
 524:	andeq	r0, r0, #1
 528:	andeq	sp, r0, r0, lsl #18
 52c:	blx	40d36 _start-0x209bf2ca>
 530:	tsteq	r0, lr, lsl #26
 534:	andeq	r0, r1, r1, lsl #2
 538:	andeq	r0, r1, r0
 53c:	stmdavs	pc!, {r8}	; UNPREDICTABLE>
 540:	svccs	0x00656d6f
 544:	bvs	18daafc _start-0x1f125504>
 548:	strbtvc	r6, [r5], #-3631	; 0xe2f
 54c:	svccs	0x00445342
 550:	svccs	0x00737973
 554:	stmdavs	r3!, {r0, r5, r6, r9, ip, sp, lr}^
 558:	rsbsvs	r6, r6, #197132288	; 0xbc00000
 55c:	svccs	0x006d7261
 560:	mcrvs	4, 3, r7, cr1, cr3, {3}
 564:	svcvs	0x00622f64
 568:	subpl	r7, ip, #1862270976	; 0x6f000000
 56c:	eorscc	r6, r2, r9, lsr r7
 570:	svccs	0x002e2e2f
 574:	cdpcs	14, 2, cr2, cr15, cr14, {1}
 578:	cdpcs	15, 2, cr2, cr14, cr14, {1}
 57c:	rsbvs	r6, r9, #12032	; 0x2f00
 580:	rsbvs	r6, r9, #12032	; 0x2f00
 584:	svccs	0x00006173
 588:	strbvs	r6, [sp, #-3944]!	; 0xf68
 58c:	cmnvs	r9, #12032	; 0x2f00
 590:	strbvs	r2, [lr, #-3946]!	; 0xf6a
 594:	ldrbmi	r4, [r3], #-628	; 0x274
 598:	cmnvc	r9, #-1140850688	; 0xbc000000
 59c:	cmnvs	r2, #-1073741813	; 0xc000000b
 5a0:	strbtvc	r2, [r5], -r8, ror #30
 5a4:	ldfvse	f6, [r2, #-392]!	; 0xfffffe78
 5a8:	cmnvs	r4, pc, lsr #6
 5ac:	eorvs	r6, pc, #1845493760	; 0x6e000000
 5b0:	ldclmi	15, cr6, [r4], #-444	; 0xfffffe44
 5b4:	rsbcc	r3, r7, #1343488	; 0x148000
 5b8:	mcrcs	15, 1, r2, cr14, cr0, {1}
 5bc:	svccs	0x002e2e2f
 5c0:	cdpcs	14, 2, cr2, cr15, cr14, {1}
 5c4:	ldmdbvc	r3!, {r1, r2, r3, r5, r8, r9, sl, fp, sp}^
 5c8:	movwvc	r0, #115	; 0x73
 5cc:	svcpl	0x00726275
 5d0:	mcrcs	2, 3, r7, cr6, cr0, {3}
 5d4:	andeq	r0, r1, r3, rrx
 5d8:	cmnvc	lr, #0
 5dc:	rsbeq	r2, r8, r9, ror #28
 5e0:	strvc	r0, [r0], #-2
 5e4:	cmnvc	r5, #121	; 0x79
 5e8:	andeq	r6, r0, #3014656	; 0x2e0000
 5ec:	ldrbtvc	r0, [r3]
 5f0:	ldrbvs	r6, [r2, -r4, ror #2]!
 5f4:	andeq	r6, r0, #3014656	; 0x2e0000
 5f8:	ldrbtvc	r0, [r3]
 5fc:	cdpcs	14, 6, cr6, cr4, cr1, {3}
 600:	andeq	r0, r1, r8, rrx
 604:	streq	r0, [r0]
 608:	andge	r7, r6, r2
 60c:	orreq	r0, r2, r0, lsr #6
 610:	vaddl.uillegal width 64>	q5, d11, d1
 614:	bvs	fe0ef7c4 __bss_end__+0xdd6ee574>
 618:			; UNDEFINED> instruction: 0x83bb67f4
 61c:			; UNDEFINED> instruction: 0x03be9f83
 620:	stmdavs	pc!, {r0, r1, r3, r9, sl, ip, lr, pc}	; UNPREDICTABLE>
 624:	mrseq	r0, R12_usr
 628:	svcmi	0x0095087f
 62c:	strmi	r2, [r2], -r3, lsl #8
 630:	ldrvs	r6, [r1, -r1, lsl #14]!
 634:	teqge	r0, #12845056	; 0xc40000
 638:	svccs	0x00a530bc
 63c:	mrseq	r0, R12_usr
 640:	ldrcc	r0, [r3], #2177	; 0x881
 644:	andeq	r4, r0, #1568	; 0x620
 648:	adflss	f0, f6, f4
 64c:	andeq	r0, r4, #0
 650:	andeq	r7, r0, #96	; 0x60
 654:	ldrvs	r0, [r3, -r4, lsl #4]!
 658:	addcc	r8, r3, sl, ror #10
 65c:	mrseq	r0, R12_usr
 660:	andeq	r9, r0, #96	; 0x60
 664:	addseq	r0, lr, r4, lsl #4
 668:	andhi	r0, r3, #33554432	; 0x2000000
 66c:	movweq	r0, #16896	; 0x4200
 670:	eorseq	r9, r0, r6, lsl #30
 674:	streq	r0, [r1], -r2, lsl #8
 678:	streq	r0, [r2], #-158	; 0x9e
 67c:	andeq	r9, r0, #32
 680:	addeq	r0, r2, r4, lsl #6
 684:	streq	r0, [r3], -r2, lsl #8
 688:	pkhbthi	r3, r3, pc, lsl #7	; UNPREDICTABLE>
 68c:	mrseq	r0, R12_usr
 690:	andeq	r9, r0, #96	; 0x60
 694:	addseq	r0, lr, r4, lsl #4
 698:	andhi	r0, r3, #33554432	; 0x2000000
 69c:	movweq	r0, #16896	; 0x4200
 6a0:	ldmdavs	r0!, {r1, r2, r8, r9, sl, fp, ip, pc}
 6a4:	stchi	0, cr3, [r3], {131}	; 0x83
 6a8:	teqeq	r0, #2032	; 0x7f0
 6ac:	movtcc	r0, #41198	; 0xa0ee
 6b0:	andeq	sp, r0, #5248	; 0x1480
 6b4:	subeq	r0, ip, r4, lsl #2
 6b8:	stmdaeq	r1, {r1, sl}
 6bc:	streq	r0, [r2], #-145	; 0x91
 6c0:	ldmdaeq	sl, {r0, r8, r9}
 6c4:	streq	r0, [r2], #-32
 6c8:	ldrthi	r0, [sp], #-2049	; 0x801
 6cc:	tsteq	r0, r2, lsl #12
 6d0:	andeq	pc, r0, r1, lsl #30
 6d4:			; UNDEFINED> instruction: 0xf9000200
 6d8:	andeq	r0, r0, #0
 6dc:	vstreq	d15, [lr, #-4]
 6e0:	mrseq	r0, (UNDEF: 17)
 6e4:	andeq	r0, r0, r1
 6e8:	tsteq	r0, r1
 6ec:	cdpcs	14, 2, cr2, cr15, cr14, {1}
 6f0:	svccs	0x002e2f2e
 6f4:	rsbeq	r7, sp, r1, ror #4
 6f8:	stclvs	8, cr6, [pc, #-188]!	; 644 _start-0x209ff9bc>
 6fc:	stmdbvs	ip!, {r0, r2, r5, r6, r8, r9, sl, fp, sp}^
 700:	vnmulvs.f32	s12, s30, s7
 704:	movtpl	r7, #9317	; 0x2465
 708:	ldmdbvc	r3!, {r2, r6, r8, r9, sl, fp, sp}^
 70c:	rsbvc	r2, r1, #460	; 0x1cc
 710:	strvs	r6, [pc, #-2147]!	; fffffeb5 __bss_end__+0xdf5fec65>
 714:	rsbvc	r6, r1, #1610612743	; 0x60000007
 718:	ldrbtvc	r2, [r3], #-3949	; 0xf6d
 71c:	svccs	0x00646e61
 720:	strbtvc	r6, [pc], #-3938	; 728 _start-0x209ff8d8>
 724:	ldrvs	r5, [r9, -ip, asr #4]!
 728:	mcrcs	0, 1, r3, cr15, cr2, {1}
 72c:	cdpcs	15, 2, cr2, cr14, cr14, {1}
 730:	svccs	0x002e2e2f
 734:	teqvc	pc, #736	; 0x2e0
 738:	svccs	0x00007379
 73c:	strbvs	r6, [sp, #-3944]!	; 0xf68
 740:	cmnvs	r9, #12032	; 0x2f00
 744:	strbvs	r2, [lr, #-3946]!	; 0xf6a
 748:	ldrbmi	r4, [r3], #-628	; 0x274
 74c:	cmnvc	r9, #-1140850688	; 0xbc000000
 750:	cmnvs	r2, #-1073741813	; 0xc000000b
 754:	strbtvc	r2, [r5], -r8, ror #30
 758:	ldfvse	f6, [r2, #-392]!	; 0xfffffe78
 75c:	cmnvs	r4, pc, lsr #6
 760:	eorvs	r6, pc, #1845493760	; 0x6e000000
 764:	ldclmi	15, cr6, [r4], #-444	; 0xfffffe44
 768:	rsbcc	r3, r7, #1343488	; 0x148000
 76c:	mcrcs	15, 1, r2, cr14, cr0, {1}
 770:	svccs	0x002e2e2f
 774:	cdpcs	14, 2, cr2, cr15, cr14, {1}
 778:	stmdbvs	ip!, {r1, r2, r3, r5, r8, r9, sl, fp, sp}^
 77c:	stmdbvs	ip!, {r1, r5, r6, r8, r9, sl, fp, sp}^
 780:	rsbeq	r7, r1, r2, ror #6
 784:	strbtvc	r6, [lr], #-2304	; 0x900
 788:	rsbsvc	r7, r9, pc, asr r4
 78c:	stmdavs	lr!, {r0, r2, r5, r6, r8, r9, ip, sp, lr}
 790:	andeq	r0, r0, r0, lsl #2
 794:	ldmdbvs	r3!, {r0, r5, r6, r9, sl, fp, sp, lr}^
 798:	andeq	r6, r0, #3014656	; 0x2e0000
 79c:	ldmdbvc	r4!, {}^	; UNPREDICTABLE>
 7a0:	mrccs	5, 3, r6, cr3, cr0, {3}
 7a4:	andeq	r0, r2, r8, rrx
 7a8:	cfstrdvs	mvd7, [r9]
 7ac:	rsbeq	r2, r8, r5, ror #28
 7b0:	movwvc	r0, #2
 7b4:	mrccs	1, 3, r6, cr4, cr4, {3}
 7b8:	andeq	r0, r2, r8, rrx
 7bc:	cmnvs	r4, r0, lsl #6
 7c0:	stmdavs	lr!, {r1, r2, r3, r5, r6, sl, sp, lr}
 7c4:	andeq	r0, r0, r0, lsl #6
 7c8:	strbvs	r6, [ip, #-2406]!	; 0x966
 7cc:	rsbeq	r2, r3, r3, ror lr
 7d0:	andeq	r0, r0, r3
 7d4:	andeq	r0, r0, sp, rrx
 7d8:	rsbeq	r0, r7, r2
 7dc:	mrseq	r0, (UNDEF: 2)
 7e0:	strdeq	r0, [sp], -fp
 7e4:	tsteq	r1, r1, lsl #2
 7e8:	mrseq	r0, (UNDEF: 0)
 7ec:	svccs	0x00010000
 7f0:	strbvs	r6, [sp, #-3944]!	; 0xf68
 7f4:	cmnvs	r9, #12032	; 0x2f00
 7f8:	strbvs	r2, [lr, #-3946]!	; 0xf6a
 7fc:	ldrbmi	r4, [r3], #-628	; 0x274
 800:	cmnvc	r9, #-1140850688	; 0xbc000000
 804:	cmnvs	r2, #-1073741813	; 0xc000000b
 808:	strbtvc	r2, [r5], -r8, ror #30
 80c:	ldfvse	f6, [r2, #-392]!	; 0xfffffe78
 810:	cmnvs	r4, pc, lsr #6
 814:	eorvs	r6, pc, #1845493760	; 0x6e000000
 818:	ldclmi	15, cr6, [r4], #-444	; 0xfffffe44
 81c:	rsbcc	r3, r7, #1343488	; 0x148000
 820:	mcrcs	15, 1, r2, cr14, cr0, {1}
 824:	svccs	0x002e2e2f
 828:	cdpcs	14, 2, cr2, cr15, cr14, {1}
 82c:	stmdbvs	ip!, {r1, r2, r3, r5, r8, r9, sl, fp, sp}^
 830:	stmdbvs	ip!, {r1, r5, r6, r8, r9, sl, fp, sp}^
 834:	rsbeq	r7, r1, r2, ror #6
 838:	rsbsvc	r6, r2, #0
 83c:	teqvs	lr, #440	; 0x1b8
 840:	andeq	r0, r0, r0, lsl #2
 844:	andeq	fp, r0, r0, lsl #2
 848:	bhi	1050 _start-0x209fefb0>
 84c:	andeq	r0, r0, #0
 850:	vstreq	d15, [lr, #-4]
 854:	mrseq	r0, (UNDEF: 17)
 858:	andeq	r0, r0, r1
 85c:	tsteq	r0, r1
 860:	stclvs	8, cr6, [pc, #-188]!	; 7ac _start-0x209ff854>
 864:	stmdbvs	ip!, {r0, r2, r5, r6, r8, r9, sl, fp, sp}^
 868:	vnmulvs.f32	s12, s30, s7
 86c:	movtpl	r7, #9317	; 0x2465
 870:	ldmdbvc	r3!, {r2, r6, r8, r9, sl, fp, sp}^
 874:	rsbvc	r2, r1, #460	; 0x1cc
 878:	strvs	r6, [pc, #-2147]!	; 1d _start-0x209fffe3>
 87c:	rsbvc	r6, r1, #1610612743	; 0x60000007
 880:	ldrbtvc	r2, [r3], #-3949	; 0xf6d
 884:	svccs	0x00646e61
 888:	strbtvc	r6, [pc], #-3938	; 890 _start-0x209ff770>
 88c:	ldrvs	r5, [r9, -ip, asr #4]!
 890:	mcrcs	0, 1, r3, cr15, cr2, {1}
 894:	cdpcs	15, 2, cr2, cr14, cr14, {1}
 898:	svccs	0x002e2e2f
 89c:	stcvs	14, cr2, [pc], #-184	; 7ec _start-0x209ff814>
 8a0:	sfmvs	f6, 4, [pc], #-420	; 704 _start-0x209ff8fc>
 8a4:	strbvs	r6, [fp, #-617]!	; 0x269
 8a8:	mcrcs	14, 1, r6, cr15, cr2, {3}
 8ac:	cdpcs	15, 2, cr2, cr14, cr14, {1}
 8b0:	svccs	0x002e2e2f
 8b4:	stclvs	15, cr6, [sp, #-396]!	; 0xfffffe74
 8b8:	stcvs	14, cr6, [pc], #-444	; 704 _start-0x209ff8fc>
 8bc:	sfmvs	f6, 4, [pc], #-420	; 720 _start-0x209ff8e0>
 8c0:	svccs	0x00636269
 8c4:	ldmdbvs	r2!, {r0, r1, r4, r5, r6, sl, ip, sp, lr}^
 8c8:	andeq	r6, r0, lr, ror #14
 8cc:	cmnvc	r2, #1929379840	; 0x73000000
 8d0:	teqvs	lr, #101	; 0x65
 8d4:	andeq	r0, r0, r0, lsl #2
 8d8:	andeq	r0, r5, #0
 8dc:	ldrdcs	r0, [r0], r4	; UNPREDICTABLE>
 8e0:	tsteq	r0, r3, lsl #10
 8e4:	bllt	fee82cf8 __bss_end__+0xde481aa8>
 8e8:	fldmiaxmi	fp!, {d4-d40}	;@ Deprecated
 8ec:	stmdavs	r7!, {r3, r8, sl, fp, sp, pc}^
 8f0:	strbvs	r6, [ip, -r3, lsl #15]
 8f4:	andeq	r0, r6, r0, lsr r2
 8f8:	Address 0x00000000000008f8 is out of bounds.


Disassembly of section .debug_frame:

00000000 .debug_frame
   0:	andeq	r0, r0, ip
   4:			; UNDEFINED> instruction: 0xffffffff
   8:	stcvc	0, cr0, [r2], {1}
   c:	andeq	r0, sp, lr, lsl #24
  10:	andeq	r0, r0, ip, lsl r0
  14:	andeq	r0, r0, r0
  18:	strdcs	r0, [r0], ip	; UNPREDICTABLE>
  1c:	andeq	r0, r0, r4, lsr r1
  20:	strmi	r0, [ip], #-3394	; 0xd42
  24:	orreq	r0, sp, #-536870904	; 0xe0000008
  28:	bleq	30125c _start-0x206feda4>
  2c:	andeq	r0, r0, r4
  30:	andeq	r0, r0, ip, lsl r0
  34:	andeq	r0, r0, r0
  38:	adccs	r0, r0, r0, lsr r2
  3c:	muleq	r0, r0, r0
  40:	strmi	r0, [ip], #-3394	; 0xd42
  44:	orreq	r0, sp, #-536870904	; 0xe0000008
  48:	bleq	30127c _start-0x206fed84>
  4c:	andeq	r0, r0, r4
  50:	andeq	r0, r0, ip, lsl r0
  54:	andeq	r0, r0, r0
  58:	adccs	r0, r0, r0, asr #5
  5c:	andeq	r0, r0, ip, lsr #32
  60:	strmi	r0, [ip], #-3394	; 0xd42
  64:	orreq	r0, sp, #-536870904	; 0xe0000008
  68:	bleq	30129c _start-0x206fed64>
  6c:	andeq	r0, r0, r4
  70:	andeq	r0, r0, ip, lsl r0
  74:	andeq	r0, r0, r0
  78:	adccs	r0, r0, ip, ror #5
  7c:	andeq	r0, r0, r4, ror r0
  80:	strmi	r0, [ip], #-3394	; 0xd42
  84:	orreq	r0, sp, #-536870904	; 0xe0000008
  88:	bleq	3012bc _start-0x206fed44>
  8c:	andeq	r0, r0, r4
  90:	andeq	r0, r0, ip, lsl r0
  94:	andeq	r0, r0, r0
  98:	adccs	r0, r0, r0, ror #6
  9c:	andeq	r0, r0, r0, rrx
  a0:	strmi	r0, [ip], #-3394	; 0xd42
  a4:	orreq	r0, sp, #-536870904	; 0xe0000008
  a8:	bleq	3012dc _start-0x206fed24>
  ac:	andeq	r0, r0, r4
  b0:	andeq	r0, r0, r0, lsr #32
  b4:	andeq	r0, r0, r0
  b8:	adccs	r0, r0, r0, asr #7
  bc:	andeq	r0, r0, r0, asr r0
  c0:	strmi	r0, [ip], #-3394	; 0xd42
  c4:	orreq	r0, sp, #-536870904	; 0xe0000008
  c8:	streq	r0, [r5, #1163]	; 0x48b
  cc:	bleq	301ae4 _start-0x206fe51c>
  d0:	andeq	r0, r0, r4
  d4:	andeq	r0, r0, ip
  d8:			; UNDEFINED> instruction: 0xffffffff
  dc:	stcvc	0, cr0, [r2], {1}
  e0:	andeq	r0, sp, lr, lsl #24
  e4:	andeq	r0, r0, r4, lsr #32
  e8:	ldrdeq	r0, [r0], -r4
  ec:	adccs	r0, r0, r0, lsl r4
  f0:	andeq	r0, r0, r0, rrx
  f4:	strmi	r0, [ip], -r2, asr #26
  f8:	streq	r0, [sp, lr, lsl #13]
  fc:	orreq	r0, r3, fp, lsl #17
 100:	orreq	r0, r1, #536870920	; 0x20000008
 104:	bleq	30130c _start-0x206fecf4>
 108:	andeq	r0, r0, r4, lsl r0
 10c:	andeq	r0, r0, ip
 110:			; UNDEFINED> instruction: 0xffffffff
 114:	stcvc	0, cr0, [r2], {1}
 118:	andeq	r0, sp, lr, lsl #24
 11c:	andeq	r0, r0, ip, lsl r0
 120:	andeq	r0, r0, ip, lsl #2
 124:	adccs	r0, r0, r0, ror r4
 128:	andeq	r0, r0, r0, ror r0
 12c:	strmi	r0, [ip], #-3394	; 0xd42
 130:	orreq	r0, sp, #-536870904	; 0xe0000008
 134:	bleq	301368 _start-0x206fec98>
 138:	andeq	r0, r0, r4
 13c:	andeq	r0, r0, ip
 140:			; UNDEFINED> instruction: 0xffffffff
 144:	stcvc	0, cr0, [r2], {1}
 148:	andeq	r0, sp, lr, lsl #24
 14c:	andeq	r0, r0, r4, lsr #32
 150:	andeq	r0, r0, ip, lsr r1
 154:	adccs	r0, r0, r0, ror #9
 158:	andeq	r0, r0, r4, lsr r0
 15c:	strmi	r0, [ip], -r2, asr #26
 160:	streq	r0, [sp, lr, lsl #13]
 164:	orreq	r0, r3, fp, lsl #17
 168:	orreq	r0, r1, #536870920	; 0x20000008
 16c:	bleq	301374 _start-0x206fec8c>
 170:	andeq	r0, r0, r4, lsl r0
 174:	andeq	r0, r0, ip
 178:			; UNDEFINED> instruction: 0xffffffff
 17c:	stcvc	0, cr0, [r2], {1}
 180:	andeq	r0, sp, lr, lsl #24
 184:	andeq	r0, r0, ip, lsl r0
 188:	andeq	r0, r0, r4, ror r1
 18c:	adccs	r0, r0, r4, lsl r5
 190:	andeq	r0, r0, ip, asr r1
 194:	strmi	r0, [ip], #-3394	; 0xd42
 198:	orreq	r0, sp, #-536870904	; 0xe0000008
 19c:	bleq	3013d0 _start-0x206fec30>
 1a0:	andeq	r0, r0, r4
 1a4:	andeq	r0, r0, ip
 1a8:			; UNDEFINED> instruction: 0xffffffff
 1ac:	stcvc	0, cr0, [r2], {1}
 1b0:	andeq	r0, sp, lr, lsl #24
 1b4:	andeq	r0, r0, ip, lsl r0
 1b8:	andeq	r0, r0, r4, lsr #3
 1bc:	adccs	r0, r0, r0, ror r6
 1c0:	andeq	r0, r0, r8, asr r0
 1c4:	strmi	r0, [ip], #-3394	; 0xd42
 1c8:	orreq	r0, sp, #-536870904	; 0xe0000008
 1cc:	bleq	301400 _start-0x206fec00>
 1d0:	andeq	r0, r0, r4
 1d4:	andeq	r0, r0, ip, lsl r0
 1d8:	andeq	r0, r0, r4, lsr #3
 1dc:	adccs	r0, r0, r8, asr #13
 1e0:	andeq	r0, r0, r4, lsr r0
 1e4:	strmi	r0, [ip], #-3394	; 0xd42
 1e8:	orreq	r0, sp, #-536870904	; 0xe0000008
 1ec:	bleq	301420 _start-0x206febe0>
 1f0:	andeq	r0, r0, r4
 1f4:	andeq	r0, r0, ip, lsl r0
 1f8:	andeq	r0, r0, r4, lsr #3
 1fc:	strdcs	r0, [r0], ip	; UNPREDICTABLE>
 200:	muleq	r0, r0, r0
 204:	strmi	r0, [ip], #-3394	; 0xd42
 208:	orreq	r0, sp, #-536870904	; 0xe0000008
 20c:	bleq	301440 _start-0x206febc0>
 210:	andeq	r0, r0, r4
 214:	andeq	r0, r0, ip, lsl r0
 218:	andeq	r0, r0, r4, lsr #3
 21c:	adccs	r0, r0, ip, lsl #15
 220:	andeq	r0, r0, r8, lsl #7
 224:	strmi	r0, [ip], #-3394	; 0xd42
 228:	orreq	r0, sp, #-536870904	; 0xe0000008
 22c:	bleq	301460 _start-0x206feba0>
 230:	andeq	r0, r0, r4
 234:	andeq	r0, r0, ip, lsl r0
 238:	andeq	r0, r0, r4, lsr #3
 23c:	adccs	r0, r0, r4, lsl fp
 240:	andeq	r0, r0, r0, asr #1
 244:	strmi	r0, [ip], #-3394	; 0xd42
 248:	orreq	r0, sp, #-536870904	; 0xe0000008
 24c:	bleq	301480 _start-0x206feb80>
 250:	andeq	r0, r0, r4
 254:	andeq	r0, r0, ip
 258:			; UNDEFINED> instruction: 0xffffffff
 25c:	stcvc	0, cr0, [r2], {1}
 260:	andeq	r0, sp, lr, lsl #24
 264:	andeq	r0, r0, ip, lsl r0
 268:	andeq	r0, r0, r4, asr r2
 26c:	ldrdcs	r0, [r0], r4	; UNPREDICTABLE>
 270:	strdeq	r0, [r0], -r0	; UNPREDICTABLE>
 274:	strmi	r0, [ip], #-3394	; 0xd42
 278:	orreq	r0, sp, #-536870904	; 0xe0000008
 27c:	bleq	3014b0 _start-0x206feb50>
 280:	andeq	r0, r0, r4

Disassembly of section .debug_str:

00000000 .debug_str
   0:	strbtvc	r7, [r1], #-1139	; 0x473
   4:	ldmdbcc	r2!, {sl, fp, sp, lr}^
   8:	svcpl	0x00303267
   c:	stmdbvs	lr!, {r4, r5, r6, r8, sp, lr}^
  10:	cdpmi	0, 4, cr0, cr7, cr3, {3}
  14:	subcs	r2, r3, r5, asr r0
  18:	mrccs	14, 1, r2, cr5, cr4, {1}
  1c:	svcpl	0x00750033
  20:	cmncc	r4, #1680	; 0x690
  24:	rsbseq	r5, r4, r2, lsr pc
  28:	cdpvs	5, 7, cr6, cr2, cr11, {3}
  2c:	mrrcvs	12, 6, r6, pc, cr5	; UNPREDICTABLE>
  30:	strbvs	r6, [r4, #-367]!	; 0x16f
  34:	ldmdavs	r3!, {r2, r5, r6}^
  38:	rsbscs	r7, r4, pc, ror #4
  3c:	ldmdbvs	r3!, {r0, r2, r4, r5, r6, r9, sl, fp, sp, lr}^
  40:	strbtvs	r6, [r5], #-3687	; 0xe67
  44:	strbtvc	r6, [lr], #-2336	; 0x920
  48:	svcpl	0x00696200
  4c:	ldrbvs	r6, [sl, #-2419]!	; 0x973
  50:	ldrbtvc	r5, [r2], #-3840	; 0xf00
  54:	cmnvs	r5, r4, ror r0
  58:	ldmdbvs	pc, {r1, r4, r5, r6, sl, ip, sp, lr}^	; UNPREDICTABLE>
  5c:	rsbseq	r6, r4, lr, ror #18
  60:	strbtvc	r6, [pc], #-3938	; 68 _start-0x209fff98>
  64:	svcvs	0x00666e69
  68:	cmnvc	r0, #0
  6c:	cmnvs	r3, r2, ror pc
  70:			; UNDEFINED> instruction: 0x76006576
  74:	rsbvc	r6, r4, #1627389952	; 0x61000000
  78:	andvc	r7, r0, pc, asr r4
  7c:	rsbeq	r6, fp, r3, ror #24
  80:	ldmdbvs	r3!, {r0, r2, r4, r5, r6, r9, sl, fp, sp, lr}^
  84:	strbtvs	r6, [r5], #-3687	; 0xe67
  88:	cmnvs	r8, r0, lsr #6
  8c:	svcpl	0x005f0072
  90:	strbtvc	r6, [lr], #-2421	; 0x975
  94:	ldrbvc	r3, [pc], #-563	; 9c _start-0x209fff64>
  98:	stmdbvs	r1!, {r8, sl, fp, sp, lr}^
  9c:	svcvs	0x006c006e
  a0:	stcvs	7, cr6, [r0], #-440	; 0xfffffe48
  a4:	rsbcs	r6, r7, pc, ror #28
  a8:	ldmdbvs	r3!, {r0, r2, r4, r5, r6, r9, sl, fp, sp, lr}^
  ac:	strbtvs	r6, [r5], #-3687	; 0xe67
  b0:	strbtvc	r6, [lr], #-2336	; 0x920
  b4:	ldmdbcc	r4!, {r8, sp, lr}^
  b8:	stclvs	3, cr7, [r1, #-196]!	; 0xffffff3c
  bc:	eorscc	r6, r2, r9, lsr r7
  c0:	svcvs	0x006c635f
  c4:	ldrbvs	r6, [pc], -r3, ror #22
  c8:	rsbscc	r6, r1, #478150656	; 0x1c800000
  cc:	svcvs	0x00682f00
  d0:	cfstr32vs	mvfx6, [pc], #-436	; ffffff24 __bss_end__+0xdf5fecd4>
  d4:	svccs	0x006a6369
  d8:	rsbsmi	r6, r4, #461373440	; 0x1b800000
  dc:	teqvc	pc, #1392508928	; 0x53000000
  e0:	teqvs	pc, r9, ror r3	; UNPREDICTABLE>
  e4:	svccs	0x00686372
  e8:	cmnvs	r2, r5, ror #12
  ec:	teqvc	pc, #7296	; 0x1c80
  f0:	strbtvs	r6, [lr], #-372	; 0x174
  f4:	svcvs	0x006f622f
  f8:	ldmdbcc	r2, {r2, r4, r5, r6, sl, fp, lr}^
  fc:	eorseq	r3, r0, r7, ror #4
 100:	blvs	1b18ea8 _start-0x1eee7158>
 104:	ldrbvs	r6, [r2, -r0, lsl #2]!
 108:	svcvs	0x006c0063
 10c:	stcvs	7, cr6, [r0], #-440	; 0xfffffe48
 110:	rsbcs	r6, r7, pc, ror #28
 114:	rsbseq	r6, r4, r9, ror #28
 118:	powvsez	f6, f1, #5.0
 11c:	andvs	r6, r0, #-1207959552	; 0xb8000000
 120:	strbvs	r5, [lr, #-3945]!	; 0xf69
 124:	movwvc	r7, #1144	; 0x478
 128:	ldrbtvc	r6, [r2], #-3944	; 0xf68
 12c:	strbtvc	r6, [lr], #-2336	; 0x920
 130:	ldrbvs	r6, [r2, -r0, lsl #2]!
 134:	subsmi	r0, pc, #118	; 0x76
 138:	rsbeq	r6, ip, pc, ror #30
 13c:	stclvs	12, cr6, [fp, #-396]!	; 0xfffffe74
 140:	subsvs	r6, pc, #1552	; 0x610
 144:	rsbeq	r7, r5, r1, ror #6
 148:	strbtvc	r6, [pc], #-3938	; 150 _start-0x209ffeb0>
 14c:	strbvs	r6, [ip, #-2406]!	; 0x966
 150:	stclvs	6, cr6, [r3]
 154:	svcpl	0x005f006b
 158:	cfstr64vs	mvdx7, [r9], #-392	; 0xfffffe78
 15c:	svcpl	0x006e6974
 160:	ldfvse	f6, [pc], {118}	; 0x76
 164:	rsbseq	r7, r4, r9, ror #6
 168:	stmdbvs	lr!, {r4, r5, r6, r8, sp, lr}^
 16c:	rsbeq	r6, r4, r3, ror #10
 170:	stclvs	8, cr6, [pc, #-188]!	; bc _start-0x209fff44>
 174:	stmdbvs	ip!, {r0, r2, r5, r6, r8, r9, sl, fp, sp}^
 178:	vnmulvs.f32	s12, s30, s7
 17c:	movtpl	r7, #9317	; 0x2465
 180:	ldmdbvc	r3!, {r2, r6, r8, r9, sl, fp, sp}^
 184:	rsbvc	r2, r1, #460	; 0x1cc
 188:	strvs	r6, [pc, #-2147]!	; fffff92d __bss_end__+0xdf5fe6dd>
 18c:	rsbvc	r6, r1, #1610612743	; 0x60000007
 190:	ldrbtvc	r2, [r3], #-3949	; 0xf6d
 194:	svccs	0x00646e61
 198:	strbtvc	r6, [pc], #-3938	; 1a0 _start-0x209ffe60>
 19c:	ldrvs	r5, [r9, -ip, asr #4]!
 1a0:	stcvs	0, cr3, [pc], #-200	; e0 _start-0x209fff20>
 1a4:	teqvc	pc, #-1879048186	; 0x90000006
 1a8:	svcpl	0x005f0061
 1ac:	ldfvse	f6, [pc], {118}	; 0x76
 1b0:	rsbseq	r7, r4, r9, ror #6
 1b4:	stclvs	8, cr6, [pc, #-188]!	; 100 _start-0x209fff00>
 1b8:	stmdbvs	ip!, {r0, r2, r5, r6, r8, r9, sl, fp, sp}^
 1bc:	vnmulvs.f32	s12, s30, s7
 1c0:	movtpl	r7, #9317	; 0x2465
 1c4:	ldmdbvc	r3!, {r2, r6, r8, r9, sl, fp, sp}^
 1c8:	rsbvc	r2, r1, #460	; 0x1cc
 1cc:	strvs	r6, [pc, #-2147]!	; fffff971 __bss_end__+0xdf5fe721>
 1d0:	rsbvc	r6, r1, #1610612743	; 0x60000007
 1d4:	ldrbtvc	r2, [r3], #-3949	; 0xf6d
 1d8:	svccs	0x00646e61
 1dc:	strbtvc	r6, [pc], #-3938	; 1e4 _start-0x209ffe1c>
 1e0:	ldrvs	r5, [r9, -ip, asr #4]!
 1e4:	mcrcs	0, 1, r3, cr15, cr2, {1}
 1e8:	cdpcs	15, 2, cr2, cr14, cr14, {1}
 1ec:	svccs	0x002e2e2f
 1f0:	stcvs	14, cr2, [pc], #-184	; 140 _start-0x209ffec0>
 1f4:	sfmvs	f6, 4, [pc], #-420	; 58 _start-0x209fffa8>
 1f8:	cmnvs	r3, r9, ror #4
 1fc:	cdpvs	0, 6, cr7, cr1, cr15, {1}
 200:	teqvs	lr, #-1543503871	; 0xa4000001
 204:	svcpl	0x00767400
 208:	cmnvs	r5, #-1207959551	; 0xb8000001
 20c:	svcpl	0x00747300
 210:	ldrbvs	r6, [sl, #-2419]!	; 0x973
 214:	svcpl	0x00766400
 218:	strbvs	r6, [sp, #-366]!	; 0x16e
 21c:	svcpl	0x00767400
 220:	rsbeq	r6, r3, r3, ror r5
 224:	cmnvc	fp, #25088	; 0x6200
 228:	svcpl	0x00657a69
 22c:			; UNDEFINED> instruction: 0x76640074
 230:	rsbsvc	r7, r4, #2080374785	; 0x7c000001
 234:	strbvs	r7, [r5, -r1, ror #8]!
 238:	ldrbtvc	r0, [r3], #-121	; 0x79
 23c:	stmdbvs	ip!, {r0, r1, r2, r3, r4, r6, r9, sl, fp, sp, lr}^
 240:	strvs	r6, [r0], #-2926	; 0xb6e
 244:	rsbvc	r6, r4, #1627389952	; 0x61000000
 248:	smlsdvc	r0, pc, r4, r7	; UNPREDICTABLE>
 24c:	ldrbvs	r6, [r4, #-2418]!	; 0x972
 250:	cfldr64vs	mvdx7, [pc], {0}
 254:	rsbeq	r6, r7, pc, ror #28
 258:	cfldrdvs	mvd7, [pc, #-460]	; 94 _start-0x209fff6c>
 25c:	strbvs	r6, [sp, #-2420]!	; 0x974
 260:	cmnvs	r5, #115	; 0x73
 264:	ldrbvs	r6, [pc], #-1536	; 26c _start-0x209ffd94>
 268:	movwvc	r7, #1637	; 0x665
 26c:	stclvs	15, cr5, [r2], #-464	; 0xfffffe30
 270:	bvc	1a5d024 _start-0x1efa2fdc>
 274:	ldrbvs	r0, [r2, #-101]!	; 0x65
 278:	movwvc	r6, #1121	; 0x461
 27c:	stmdbvs	r7!, {r2, r4, r5, r6, r8, r9, sl, fp, ip, lr}^
 280:	svcpl	0x005f0064
 284:	strbvs	r6, [r4, #-3949]!	; 0xf6d
 288:	stmdbvs	r0, {r0, r1, r2, r3, r4, r6, sl, ip, sp, lr}
 28c:	ldrbvc	r6, [pc], #-3950	; 294 _start-0x209ffd6c>
 290:	svcvs	0x00682f00
 294:	cfstr32vs	mvfx6, [pc], #-436	; e8 _start-0x209fff18>
 298:	svccs	0x006a6369
 29c:	rsbsmi	r6, r4, #461373440	; 0x1b800000
 2a0:	teqvc	pc, #1392508928	; 0x53000000
 2a4:	teqvs	pc, r9, ror r3	; UNPREDICTABLE>
 2a8:	svccs	0x00686372
 2ac:	cmnvs	r2, r5, ror #12
 2b0:	teqvc	pc, #7296	; 0x1c80
 2b4:	strbtvs	r6, [lr], #-372	; 0x174
 2b8:	svcvs	0x006f622f
 2bc:	ldmdbcc	r2, {r2, r4, r5, r6, sl, fp, lr}^
 2c0:	svccs	0x00303267
 2c4:	cdpcs	14, 2, cr2, cr15, cr14, {1}
 2c8:	cdpcs	15, 2, cr2, cr14, cr14, {1}
 2cc:	svccs	0x002e2e2f
 2d0:	svccs	0x0062696c
 2d4:	cmnvc	r2, #1769472	; 0x1b0000
 2d8:	stclvs	15, cr2, [r3], #-388	; 0xfffffe7c
 2dc:	cmnvs	r5, pc, ror #6
 2e0:	teqvs	lr, #27648	; 0x6c00
 2e4:	ldmdbvs	pc, {r8, r9, sl, fp, ip, lr}^	; UNPREDICTABLE>
 2e8:	ldrtcc	r7, [r6], #-1134	; 0x46e
 2ec:	strvs	r7, [r0], #-1119	; 0x45f
 2f0:	stclvs	15, cr5, [r3], #-472	; 0xfffffe28
 2f4:	rsbeq	r7, r5, pc, ror #6
 2f8:	cmnvc	pc, #25344	; 0x6300
 2fc:	stfvse	f6, [ip], #-404	; 0xfffffe6c
 300:	svcpl	0x00766400
 304:	strbtvc	r6, [r3], #-3945	; 0xf69
 308:	strbvs	r0, [r4, #-108]!	; 0x6c
 30c:	rsbseq	r5, r4, r6, ror pc
 310:			; UNDEFINED> instruction: 0x665f7473
 314:	cmnvc	r7, #27
 318:	svcpl	0x00766400
 31c:	cdpvs	0, 6, cr7, cr5, cr15, {3}
 320:	cfstrdvs	mvd7, [r9]
 324:	rsbseq	r5, r4, r5, ror #30
 328:	ldmdbvs	pc, {r0, r1, r4, r5, r6, sl, ip, sp, lr}^	; UNPREDICTABLE>
 32c:	strvs	r6, [r0], -lr, ror #30
 330:	rsbvc	r5, pc, r3, ror pc	; UNPREDICTABLE>
 334:	ldrbtvc	r0, [r3], #-115	; 0x73
 338:	svcvs	0x006c625f
 33c:	rsbseq	r6, r3, r3, ror #22
 340:	blvs	1959914 _start-0x1f0a66ec>
 344:	ldrbvs	r6, [pc], -r0, lsl #12
 348:	cmnvc	r7, #27
 34c:	svcpl	0x00747300
 350:	rsbseq	r6, r6, r4, ror #10
 354:	strbtvs	r5, [pc], -r6, ror #30
 358:	strbtvc	r7, [r5], #-870	; 0x366
 35c:	ldrbvc	r5, [pc, #-3840]	; fffff464 __bss_end__+0xdf5fe214>
 360:	ldrbtcc	r6, [r4], -r9, ror #28
 364:	rsbseq	r5, r4, r4, lsr pc
 368:	cdpvs	12, 6, cr6, cr9, cr14, {3}
 36c:	rsbseq	r5, r4, fp, ror #30
 370:	ldrbvc	r7, [pc, #-1139]	; ffffff05 __bss_end__+0xdf5fecb5>
 374:	svcpl	0x00006469
 378:	uqsaxvs	r6, r6, pc	; UNPREDICTABLE>
 37c:	strvs	r7, [r0], #-1119	; 0x45f
 380:	ldrbvc	r7, [r3, -r5, ror #12]!
 384:	svcpl	0x00747300
 388:			; UNDEFINED> instruction: 0x76656472
 38c:	blvs	1b18b94 _start-0x1eee746c>
 390:	svcpl	0x00746e63
 394:	ldrbtvc	r0, [r3], #-116	; 0x74
 398:	mcrvs	7, 3, r6, cr5, cr15, {2}
 39c:	svcpl	0x00747300
 3a0:	cfstrdvs	mvd7, [r9, #-388]!	; 0xfffffe7c
 3a4:	ldrbvs	r7, [r0, #-869]!	; 0x365
 3a8:	svcpl	0x005f0063
 3ac:	svcpl	0x00646975
 3b0:	svcpl	0x00660074
 3b4:	ldrbtvs	r6, [r6], #-1380	; 0x564
 3b8:	rsbeq	r7, r1, r1, ror #8
 3bc:	cfldrdvs	mvd7, [pc, #-460]	; 1f8 _start-0x209ffe08>
 3c0:	rsbeq	r6, r5, pc, ror #8
 3c4:	cmpvs	pc, #1929379840	; 0x73000000
 3c8:	strbvs	r6, [sp, #-2420]!	; 0x974
 3cc:	cmnvs	r5, #115	; 0x73
 3d0:	svcpl	0x00747300
 3d4:	rsbvc	r7, r1, #115	; 0x73
 3d8:	svcpl	0x00660065
 3dc:	rsbseq	r7, r3, pc, rrx
 3e0:	cmnvc	r6, #408	; 0x198
 3e4:	cmnvs	r4, r4, ror #2
 3e8:	svcpl	0x00747300
 3ec:	ldrbtvc	r6, [r2], #-2402	; 0x962
 3f0:	cfstrdvs	mvd7, [r9, #-416]!	; 0xfffffe60
 3f4:	ldrbvs	r7, [r0, #-869]!	; 0x365
 3f8:	rsbvc	r0, pc, r3, rrx
 3fc:	ldrbvs	r6, [pc], -r5, ror #28
 400:	rsbeq	r6, r5, r9, ror #24
 404:	stmdbvs	r7!, {r0, r1, r2, r3, r4, r6, r8, r9, sl, fp, ip, lr}^
 408:	rsbseq	r5, r4, r4, ror #30
 40c:	strbvs	r6, [ip, #-2406]!	; 0x966
 410:	stmdavs	pc!, {r0, r1, r4, r5, r6}	; UNPREDICTABLE>
 414:	svccs	0x00656d6f
 418:	bvs	18da9d0 _start-0x1f125630>
 41c:	strbtvc	r6, [r5], #-3631	; 0xe2f
 420:	svccs	0x00445342
 424:	svccs	0x00737973
 428:	stmdavs	r3!, {r0, r5, r6, r9, ip, sp, lr}^
 42c:	rsbsvs	r6, r6, #197132288	; 0xbc00000
 430:	svccs	0x006d7261
 434:	mcrvs	4, 3, r7, cr1, cr3, {3}
 438:	svcvs	0x00622f64
 43c:	subpl	r7, ip, #1862270976	; 0x6f000000
 440:	eorscc	r6, r2, r9, lsr r7
 444:	svccs	0x002e2e2f
 448:	cdpcs	14, 2, cr2, cr15, cr14, {1}
 44c:	cdpcs	15, 2, cr2, cr14, cr14, {1}
 450:	rsbvs	r6, r9, #12032	; 0x2f00
 454:	rsbvs	r6, r9, #12032	; 0x2f00
 458:	eorvc	r6, pc, r3, ror r1	; UNPREDICTABLE>
 45c:	strbtvc	r6, [lr], #-2418	; 0x972
 460:	rsbeq	r2, r3, r6, ror #28
 464:	stclvs	8, cr6, [pc, #-188]!	; 3b0 _start-0x209ffc50>
 468:	stmdbvs	ip!, {r0, r2, r5, r6, r8, r9, sl, fp, sp}^
 46c:	vnmulvs.f32	s12, s30, s7
 470:	movtpl	r7, #9317	; 0x2465
 474:	ldmdbvc	r3!, {r2, r6, r8, r9, sl, fp, sp}^
 478:	rsbvc	r2, r1, #460	; 0x1cc
 47c:	strvs	r6, [pc, #-2147]!	; fffffc21 __bss_end__+0xdf5fe9d1>
 480:	rsbvc	r6, r1, #1610612743	; 0x60000007
 484:	ldrbtvc	r2, [r3], #-3949	; 0xf6d
 488:	svccs	0x00646e61
 48c:	strbtvc	r6, [pc], #-3938	; 494 _start-0x209ffb6c>
 490:	ldrvs	r5, [r9, -ip, asr #4]!
 494:	mcrcs	0, 1, r3, cr15, cr2, {1}
 498:	cdpcs	15, 2, cr2, cr14, cr14, {1}
 49c:	svccs	0x002e2e2f
 4a0:	stcvs	14, cr2, [pc], #-184	; 3f0 _start-0x209ffc10>
 4a4:	sfmvs	f6, 4, [pc], #-420	; 308 _start-0x209ffcf8>
 4a8:	cmnvs	r3, r9, ror #4
 4ac:	svcvs	0x006c632f
 4b0:	teqvs	lr, #482344960	; 0x1cc00000
 4b4:	rsbsvc	r6, r2, #0
 4b8:	rsbvc	r0, r5, #49	; 0x31
 4bc:	strvs	r3, [r0, #-626]	; 0x272
 4c0:	svcvs	0x006e7272
 4c4:	svcvs	0x00682f00
 4c8:	cfstr32vs	mvfx6, [pc], #-436	; 31c _start-0x209ffce4>
 4cc:	svccs	0x006a6369
 4d0:	rsbsmi	r6, r4, #461373440	; 0x1b800000
 4d4:	teqvc	pc, #1392508928	; 0x53000000
 4d8:	teqvs	pc, r9, ror r3	; UNPREDICTABLE>
 4dc:	svccs	0x00686372
 4e0:	cmnvs	r2, r5, ror #12
 4e4:	teqvc	pc, #7296	; 0x1c80
 4e8:	strbtvs	r6, [lr], #-372	; 0x174
 4ec:	svcvs	0x006f622f
 4f0:	ldmdbcc	r2, {r2, r4, r5, r6, sl, fp, lr}^
 4f4:	svccs	0x00303267
 4f8:	cdpcs	14, 2, cr2, cr15, cr14, {1}
 4fc:	cdpcs	15, 2, cr2, cr14, cr14, {1}
 500:	svccs	0x002e2e2f
 504:	svccs	0x0062696c
 508:	cmnvc	r2, #1769472	; 0x1b0000
 50c:	ldrbvc	r2, [r3, #-3937]!	; 0xf61
 510:	subsvc	r7, pc, r2, ror #4
 514:	teqvs	lr, #119537664	; 0x7200000
 518:	ldrbvc	r7, [r0, #-768]!	; 0x300
 51c:	smcvs	34356	; 0x8634
 520:	cmnvc	r6, #114	; 0x72
 524:	ldmdbvs	r2!, {r1, r2, r3, r5, r6, ip, sp, lr}^
 528:	rsbeq	r7, r6, lr, ror #8
 52c:	ldrbtvs	r6, [r8], #-1384	; 0x568
 530:	strbtvc	r6, [r9], #-1897	; 0x769
 534:	rsbsvc	r0, r6, r3, ror r0
 538:	strbtvc	r6, [lr], #-2418	; 0x972
 53c:	rsbsvs	r0, r3, #102	; 0x66
 540:	blvs	19f1c _start-0x209e60e4>
 544:	mcrvs	2, 3, r7, cr9, cr0, {3}
 548:	stcvs	14, cr6, [r0], {116}	; 0x74
 54c:	strbvs	r6, [r1, -r6, ror #24]!
 550:	strbvc	r6, [r2, #-1280]!	; 0x500
 554:	strbtvs	r0, [fp], #-102	; 0x66
 558:	cdpvs	0, 7, cr7, cr2, cr15, {3}
 55c:	ldrbvs	r0, [r2, #-116]!	; 0x74
 560:	strbtvc	r7, [r9], #-1907	; 0x773
 564:	svccs	0x00006863
 568:	strbvs	r6, [sp, #-3944]!	; 0xf68
 56c:	cmnvs	r9, #12032	; 0x2f00
 570:	strbvs	r2, [lr, #-3946]!	; 0xf6a
 574:	ldrbmi	r4, [r3], #-628	; 0x274
 578:	cmnvc	r9, #-1140850688	; 0xbc000000
 57c:	cmnvs	r2, #-1073741813	; 0xc000000b
 580:	strbtvc	r2, [r5], -r8, ror #30
 584:	ldfvse	f6, [r2, #-392]!	; 0xfffffe78
 588:	cmnvs	r4, pc, lsr #6
 58c:	eorvs	r6, pc, #1845493760	; 0x6e000000
 590:	ldclmi	15, cr6, [r4], #-444	; 0xfffffe44
 594:	rsbcc	r3, r7, #1343488	; 0x148000
 598:	mcrcs	15, 1, r2, cr14, cr0, {1}
 59c:	svccs	0x002e2e2f
 5a0:	cdpcs	14, 2, cr2, cr15, cr14, {1}
 5a4:	stmdbvs	ip!, {r1, r2, r3, r5, r8, r9, sl, fp, sp}^
 5a8:	stmdbvs	ip!, {r1, r5, r6, r8, r9, sl, fp, sp}^
 5ac:	svccs	0x00617362
 5b0:	strbvs	r6, [ip, #-2406]!	; 0x966
 5b4:	rsbeq	r2, r3, r3, ror lr
 5b8:	stclvs	8, cr6, [pc, #-188]!	; 504 _start-0x209ffafc>
 5bc:	stmdbvs	ip!, {r0, r2, r5, r6, r8, r9, sl, fp, sp}^
 5c0:	vnmulvs.f32	s12, s30, s7
 5c4:	movtpl	r7, #9317	; 0x2465
 5c8:	ldmdbvc	r3!, {r2, r6, r8, r9, sl, fp, sp}^
 5cc:	rsbvc	r2, r1, #460	; 0x1cc
 5d0:	strvs	r6, [pc, #-2147]!	; fffffd75 __bss_end__+0xdf5feb25>
 5d4:	rsbvc	r6, r1, #1610612743	; 0x60000007
 5d8:	ldrbtvc	r2, [r3], #-3949	; 0xf6d
 5dc:	svccs	0x00646e61
 5e0:	strbtvc	r6, [pc], #-3938	; 5e8 _start-0x209ffa18>
 5e4:	ldrvs	r5, [r9, -ip, asr #4]!
 5e8:	mcrcs	0, 1, r3, cr15, cr2, {1}
 5ec:	cdpcs	15, 2, cr2, cr14, cr14, {1}
 5f0:	svccs	0x002e2e2f
 5f4:	stcvs	14, cr2, [pc], #-184	; 544 _start-0x209ffabc>
 5f8:	sfmvs	f6, 4, [pc], #-420	; 45c _start-0x209ffba4>
 5fc:	cmnvs	r3, r9, ror #4
 600:	rsbsvc	r6, r2, #197132288	; 0xbc00000
 604:	teqvs	lr, #440	; 0x1b8
 608:	rsbsvc	r7, r4, #0
 60c:	rsbvc	r6, r7, r9, ror #28
 610:	cmnvs	r0, r0, lsl #6
 614:	movwvc	r7, #110	; 0x6e
 618:	ldrbvs	r7, [r3, #-628]!	; 0x274
 61c:	strbvs	r0, [r4, #-112]!	; 0x70
 620:	rsbeq	r6, sp, ip, ror #18
 624:	stclvs	8, cr6, [pc, #-188]!	; 570 _start-0x209ffa90>
 628:	stmdbvs	ip!, {r0, r2, r5, r6, r8, r9, sl, fp, sp}^
 62c:	vnmulvs.f32	s12, s30, s7
 630:	movtpl	r7, #9317	; 0x2465
 634:	ldmdbvc	r3!, {r2, r6, r8, r9, sl, fp, sp}^
 638:	rsbvc	r2, r1, #460	; 0x1cc
 63c:	strvs	r6, [pc, #-2147]!	; fffffde1 __bss_end__+0xdf5feb91>
 640:	rsbvc	r6, r1, #1610612743	; 0x60000007
 644:	ldrbtvc	r2, [r3], #-3949	; 0xf6d
 648:	svccs	0x00646e61
 64c:	strbtvc	r6, [pc], #-3938	; 654 _start-0x209ff9ac>
 650:	ldrvs	r5, [r9, -ip, asr #4]!
 654:	stcvs	0, cr3, [pc], #-200	; 594 _start-0x209ffa6c>
 658:	blvs	bd9004 _start-0x1fe26ffc>
 65c:	rsbeq	r7, lr, r5, ror #4
 660:	stclvs	8, cr6, [pc, #-188]!	; 5ac _start-0x209ffa54>
 664:	stmdbvs	ip!, {r0, r2, r5, r6, r8, r9, sl, fp, sp}^
 668:	vnmulvs.f32	s12, s30, s7
 66c:	movtpl	r7, #9317	; 0x2465
 670:	ldmdbvc	r3!, {r2, r6, r8, r9, sl, fp, sp}^
 674:	rsbvc	r2, r1, #460	; 0x1cc
 678:	strvs	r6, [pc, #-2147]!	; fffffe1d __bss_end__+0xdf5febcd>
 67c:	rsbvc	r6, r1, #1610612743	; 0x60000007
 680:	ldrbtvc	r2, [r3], #-3949	; 0xf6d
 684:	svccs	0x00646e61
 688:	strbtvc	r6, [pc], #-3938	; 690 _start-0x209ff970>
 68c:	ldrvs	r5, [r9, -ip, asr #4]!
 690:	mcrcs	0, 1, r3, cr15, cr2, {1}
 694:	cdpcs	15, 2, cr2, cr14, cr14, {1}
 698:	svccs	0x002e2e2f
 69c:	stcvs	14, cr2, [pc], #-184	; 5ec _start-0x209ffa14>
 6a0:	sfmvs	f6, 4, [pc], #-420	; 504 _start-0x209ffafc>
 6a4:	strbvs	r6, [fp, #-617]!	; 0x269
 6a8:	mcrcs	14, 1, r6, cr15, cr2, {3}
 6ac:	cdpcs	15, 2, cr2, cr14, cr14, {1}
 6b0:	svccs	0x002e2e2f
 6b4:	stclvs	15, cr6, [sp, #-396]!	; 0xfffffe74
 6b8:	stcvs	14, cr6, [pc], #-444	; 504 _start-0x209ffafc>
 6bc:	sfmvs	f6, 4, [pc], #-420	; 520 _start-0x209ffae0>
 6c0:	svccs	0x00636269
 6c4:	ldmdbvs	r2!, {r0, r1, r4, r5, r6, sl, ip, sp, lr}^
 6c8:	teqvc	pc, #28835840	; 0x1b80000
 6cc:	ldrbvs	r7, [r3, #-628]!	; 0x274
 6d0:	rsbeq	r2, r3, r0, ror lr

Disassembly of section .debug_loc:

00000000 .debug_loc
   0:	andeq	r0, r0, r0
   4:	andeq	r0, r0, r4
   8:	rsbseq	r0, sp, r2
   c:	andeq	r0, r0, r4
  10:	andeq	r0, r0, ip
  14:	rsbseq	r0, ip, r2
  18:	andeq	r0, r0, ip
  1c:	andeq	r0, r0, r4, lsr r1
  20:	ldrbteq	r0, [fp], #-2
	...
  2c:	andeq	r0, r0, r4, lsr r1
  30:	andeq	r0, r0, r8, lsr r1
  34:	rsbseq	r0, sp, r2
  38:	andeq	r0, r0, r8, lsr r1
  3c:	andeq	r0, r0, r0, asr #2
  40:	rsbseq	r0, ip, r2
  44:	andeq	r0, r0, r0, asr #2
  48:	andeq	r0, r0, r4, asr #3
  4c:	ldrbteq	r0, [fp], #-2
	...
  58:	andeq	r0, r0, r4, asr #3
  5c:	andeq	r0, r0, r8, asr #3
  60:	rsbseq	r0, sp, r2
  64:	andeq	r0, r0, r8, asr #3
  68:	ldrdeq	r0, [r0], -r0	; UNPREDICTABLE>
  6c:	rsbseq	r0, ip, r2
  70:	ldrdeq	r0, [r0], -r0	; UNPREDICTABLE>
  74:	strdeq	r0, [r0], -r0	; UNPREDICTABLE>
  78:	ldrbteq	r0, [fp], #-2
	...
  84:	strdeq	r0, [r0], -r0	; UNPREDICTABLE>
  88:	strdeq	r0, [r0], -r4
  8c:	rsbseq	r0, sp, r2
  90:	strdeq	r0, [r0], -r4
  94:	strdeq	r0, [r0], -ip
  98:	rsbseq	r0, ip, r2
  9c:	strdeq	r0, [r0], -ip
  a0:	andeq	r0, r0, r4, ror #4
  a4:	ldrbteq	r0, [fp], #-2
	...
  b0:	andeq	r0, r0, r4, ror #4
  b4:	andeq	r0, r0, r8, ror #4
  b8:	rsbseq	r0, sp, r2
  bc:	andeq	r0, r0, r8, ror #4
  c0:	andeq	r0, r0, r0, ror r2
  c4:	rsbseq	r0, ip, r2
  c8:	andeq	r0, r0, r0, ror r2
  cc:	andeq	r0, r0, r4, asr #5
  d0:	ldrbteq	r0, [fp], #-2
	...
  dc:	andeq	r0, r0, r4, asr #5
  e0:	andeq	r0, r0, r8, asr #5
  e4:	rsbseq	r0, sp, r2
  e8:	andeq	r0, r0, r8, asr #5
  ec:	ldrdeq	r0, [r0], -r0	; UNPREDICTABLE>
  f0:	rsbseq	r0, ip, r2
  f4:	ldrdeq	r0, [r0], -r0	; UNPREDICTABLE>
  f8:	andeq	r0, r0, r4, lsl r3
  fc:	ldrbteq	r0, [fp], #-2
	...
 10c:	andeq	r0, r0, r4
 110:	rsbseq	r0, sp, r2
 114:	andeq	r0, r0, r4
 118:	andeq	r0, r0, r0, lsl r0
 11c:	rsbseq	r0, ip, r2
 120:	andeq	r0, r0, r0, lsl r0
 124:	andeq	r0, r0, r0, rrx
 128:	ldrbtne	r0, [fp], #-2
	...
 138:	andeq	r0, r0, r4
 13c:	rsbseq	r0, sp, r2
 140:	andeq	r0, r0, r4
 144:	andeq	r0, r0, ip
 148:	rsbseq	r0, ip, r2
 14c:	andeq	r0, r0, ip
 150:	andeq	r0, r0, r0, ror r0
 154:	ldrbteq	r0, [fp], #-2
	...
 164:	andeq	r0, r0, r4
 168:	rsbseq	r0, sp, r2
 16c:	andeq	r0, r0, r4
 170:	andeq	r0, r0, r0, lsl r0
 174:	rsbseq	r0, ip, r2
 178:	andeq	r0, r0, r0, lsl r0
 17c:	andeq	r0, r0, r4, lsr r0
 180:	ldrbtne	r0, [fp], #-2
	...
 190:	andeq	r0, r0, r4
 194:	rsbseq	r0, sp, r2
 198:	andeq	r0, r0, r4
 19c:	andeq	r0, r0, ip
 1a0:	rsbseq	r0, ip, r2
 1a4:	andeq	r0, r0, ip
 1a8:	andeq	r0, r0, ip, asr r1
 1ac:	ldrbteq	r0, [fp], #-2
	...
 1bc:	andeq	r0, r0, r4
 1c0:	rsbseq	r0, sp, r2
 1c4:	andeq	r0, r0, r4
 1c8:	andeq	r0, r0, ip
 1cc:	rsbseq	r0, ip, r2
 1d0:	andeq	r0, r0, ip
 1d4:	andeq	r0, r0, r8, asr r0
 1d8:	ldrbteq	r0, [fp], #-2
	...
 1e4:	andeq	r0, r0, r8, asr r0
 1e8:	andeq	r0, r0, ip, asr r0
 1ec:	rsbseq	r0, sp, r2
 1f0:	andeq	r0, r0, ip, asr r0
 1f4:	andeq	r0, r0, r4, rrx
 1f8:	rsbseq	r0, ip, r2
 1fc:	andeq	r0, r0, r4, rrx
 200:	andeq	r0, r0, ip, lsl #1
 204:	ldrbteq	r0, [fp], #-2
	...
 210:	andeq	r0, r0, ip, lsl #1
 214:	muleq	r0, r0, r0
 218:	rsbseq	r0, sp, r2
 21c:	muleq	r0, r0, r0
 220:	muleq	r0, r8, r0
 224:	rsbseq	r0, ip, r2
 228:	muleq	r0, r8, r0
 22c:	andeq	r0, r0, ip, lsl r1
 230:	ldrbteq	r0, [fp], #-2
	...
 23c:	andeq	r0, r0, ip, lsl r1
 240:	andeq	r0, r0, r0, lsr #2
 244:	rsbseq	r0, sp, r2
 248:	andeq	r0, r0, r0, lsr #2
 24c:	andeq	r0, r0, r8, lsr #2
 250:	rsbseq	r0, ip, r2
 254:	andeq	r0, r0, r8, lsr #2
 258:	andeq	r0, r0, r4, lsr #9
 25c:	ldrbteq	r0, [fp], #-2
	...
 268:	andeq	r0, r0, r4, lsr #9
 26c:	andeq	r0, r0, r8, lsr #9
 270:	rsbseq	r0, sp, r2
 274:	andeq	r0, r0, r8, lsr #9
 278:			; UNDEFINED> instruction: 0x000004b0
 27c:	rsbseq	r0, ip, r2
 280:			; UNDEFINED> instruction: 0x000004b0
 284:	andeq	r0, r0, r4, ror #10
 288:	ldrbteq	r0, [fp], #-2
	...
 298:	andeq	r0, r0, r4
 29c:	rsbseq	r0, sp, r2
 2a0:	andeq	r0, r0, r4
 2a4:	andeq	r0, r0, ip
 2a8:	rsbseq	r0, ip, r2
 2ac:	andeq	r0, r0, ip
 2b0:	strdeq	r0, [r0], -r0	; UNPREDICTABLE>
 2b4:	ldrbteq	r0, [fp], #-2
	...

Disassembly of section .debug_pubtypes:

00000000 .debug_pubtypes
   0:	andeq	r0, r0, r7, lsr r0
   4:	andeq	r0, r0, r2
   8:	rsbseq	r0, fp, #0
   c:	subeq	r0, r8, r0
  10:	svcpl	0x005f0000
  14:	strbtvc	r6, [lr], #-2421	; 0x975
  18:	ldrbvc	r3, [pc], #-563	; 20 _start-0x209fffe0>
  1c:	andeq	r7, r0, r0, lsl #12
  20:	strbtvs	r7, [r1], #-1536	; 0x600
  24:	ldrbvc	r7, [pc], #-612	; 2c _start-0x209fffd4>
  28:	andeq	r8, r0, r0, lsl #28
  2c:	ldmdbvs	pc, {r8, sl, ip, sp, lr}^	; UNPREDICTABLE>
  30:	eorscc	r7, r3, #1845493760	; 0x6e000000
  34:	andeq	r7, r0, pc, asr r4
  38:	stmdacs	r0, {}	; UNPREDICTABLE>
  3c:	andeq	r0, r0, #0
  40:	andeq	r7, r2, r0, lsl #22
  44:	andeq	sp, r0, r0, lsl #26
  48:	andeq	r7, r0, r0, lsl #4
  4c:	ldrbvc	r5, [pc], -r0, lsl #30
  50:	stmdbvs	ip!, {r0, r5, r6, r8, r9, sl, fp, ip, lr}^
  54:	movwhi	r7, #1139	; 0x473
  58:	strvc	r0, [r0], -r0
  5c:	stmdbvs	ip!, {r0, r5, r6, r8, r9, sl, fp, ip, lr}^
  60:	andeq	r7, r0, r3, ror r4
  64:	stceq	0, cr0, [r0], {0}
  68:	andeq	r0, r0, #1
  6c:	andeq	r5, r3, r0, lsl #16
  70:	andeq	lr, r4, r0, lsl #22
  74:	andeq	r4, r0, r0, lsl #16
  78:	ldrbvc	r5, [pc, #-3840]	; fffff180 __bss_end__+0xdf5fdf30>
  7c:	cmncc	r4, #1680	; 0x690
  80:	rsbseq	r5, r4, r2, lsr pc
  84:	andeq	r0, r0, sl, asr r0
  88:	mcrvs	15, 3, r5, cr9, cr15, {2}
  8c:	svcpl	0x00343674
  90:	rsbeq	r0, ip, r4, ror r0
  94:	svcpl	0x005f0000
  98:	strbtvc	r6, [lr], #-2421	; 0x975
  9c:	ldrbvc	r3, [pc], #-1078	; a4 _start-0x209fff5c>
  a0:	andeq	r9, r0, r0, lsl #18
  a4:	ldrbvs	r5, [pc, -r0, lsl #30]
  a8:	ldrbvc	r6, [pc], #-1129	; b0 _start-0x209fff50>
  ac:	andeq	sl, r0, r0, lsl #8
  b0:	ldclvs	15, cr5, [pc]	; b8 _start-0x209fff48>
  b4:	svcpl	0x0065646f
  b8:	adceq	r0, pc, r4, ror r0	; UNPREDICTABLE>
  bc:	svcpl	0x005f0000
  c0:	svcpl	0x0066666f
  c4:	adcseq	r0, sl, r4, ror r0
  c8:	svcpl	0x005f0000
  cc:	svcpl	0x00646975
  d0:	sbceq	r0, r5, r4, ror r0
  d4:	svcpl	0x00750000
  d8:	strbvs	r6, [lr, -ip, ror #30]!
  dc:	andeq	sp, r0, r0
  e0:	blvs	1b188e8 _start-0x1eee7718>
  e4:	svcpl	0x00746e63
  e8:	sbcseq	r0, fp, r4, ror r0
  ec:	stclvs	0, cr0, [r2]
  f0:	bvc	1a5cea4 _start-0x1efa315c>
  f4:	rsbseq	r5, r4, r5, ror #30
  f8:	andeq	r0, r0, r6, ror #1
  fc:	strbtvs	r6, [r4], #-356	; 0x164
 100:	rsbseq	r5, r4, r2, ror pc
 104:	strdeq	r0, [r0], -r1
 108:	svcpl	0x00766564
 10c:	rscseq	r0, ip, r4, ror r0
 110:	cdpvs	0, 6, cr0, cr9, cr0, {0}
 114:	rsbseq	r5, r4, pc, ror #30
 118:	andeq	r0, r0, r7, lsl #2
 11c:	cdpvs	12, 6, cr6, cr9, cr14, {3}
 120:	rsbseq	r5, r4, fp, ror #30
 124:	andeq	r0, r0, r2, lsl r1
 128:	ldrbvs	r6, [sl, #-2419]!	; 0x973
 12c:	cfmvsrne	mvf0, r7
 130:	strvc	r0, [r0], #-1
 134:	svcpl	0x00656d69
 138:	teqeq	sl, r4, ror r0
 13c:	ldmdbvs	r4!, {}^	; UNPREDICTABLE>
 140:	rsbsvc	r6, r3, sp, ror #10
 144:	movwpl	r6, #869	; 0x365
 148:	movwvc	r0, #1
 14c:	rsbseq	r6, r4, r4, ror r1
 150:	andeq	r0, r0, lr, asr r2
 154:	svcvs	0x005f7366
 158:	andle	r7, r0, r0, ror r3
 15c:	strvs	r0, [r0], #-3
 160:	ldrbvc	r7, [r3, -r5, ror #12]!
 164:	andeq	lr, r2, r0, lsl #10
 168:	ldrbvs	r6, [r0, #-3840]!	; 0xf00
 16c:	stmdbvs	r6!, {r1, r2, r3, r5, r6, r8, r9, sl, fp, ip, lr}^
 170:	andeq	r6, r0, ip, ror #10
 174:	stmdacs	r0, {}	; UNPREDICTABLE>
 178:	andeq	r0, r0, #0
 17c:	andeq	r4, r8, r0, lsl #6
 180:	andeq	ip, r0, r0, lsl #24
 184:	andeq	r7, r0, r0, lsl #4
 188:	ldrbvc	r5, [pc], -r0, lsl #30
 18c:	stmdbvs	ip!, {r0, r5, r6, r8, r9, sl, fp, ip, lr}^
 190:	movwhi	r7, #1139	; 0x473
 194:	strvc	r0, [r0], -r0
 198:	stmdbvs	ip!, {r0, r5, r6, r8, r9, sl, fp, ip, lr}^
 19c:	andeq	r7, r0, r3, ror r4
 1a0:	stceq	0, cr0, [r0], {0}
 1a4:	andeq	r0, r0, #1
 1a8:	andeq	r0, r9, r0, lsl #30
 1ac:	andeq	r3, r5, r0, lsl #4
 1b0:	andeq	r4, r0, r0, lsl #16
 1b4:	ldrbvc	r5, [pc, #-3840]	; fffff2bc __bss_end__+0xdf5fe06c>
 1b8:	cmncc	r4, #1680	; 0x690
 1bc:	rsbseq	r5, r4, r2, lsr pc
 1c0:	andeq	r0, r0, sl, asr r0
 1c4:	mcrvs	15, 3, r5, cr9, cr15, {2}
 1c8:	svcpl	0x00343674
 1cc:	rsbeq	r0, ip, r4, ror r0
 1d0:	svcpl	0x005f0000
 1d4:	strbtvc	r6, [lr], #-2421	; 0x975
 1d8:	ldrbvc	r3, [pc], #-1078	; 1e0 _start-0x209ffe20>
 1dc:	andeq	r9, r0, r0, lsl #18
 1e0:	ldrbvs	r5, [pc, -r0, lsl #30]
 1e4:	ldrbvc	r6, [pc], #-1129	; 1ec _start-0x209ffe14>
 1e8:	andeq	sl, r0, r0, lsl #8
 1ec:	ldclvs	15, cr5, [pc]	; 1f4 _start-0x209ffe0c>
 1f0:	svcpl	0x0065646f
 1f4:	adceq	r0, pc, r4, ror r0	; UNPREDICTABLE>
 1f8:	svcpl	0x005f0000
 1fc:	svcpl	0x0066666f
 200:	adcseq	r0, sl, r4, ror r0
 204:	svcpl	0x005f0000
 208:	svcpl	0x00646975
 20c:	sbceq	r0, r5, r4, ror r0
 210:	svcpl	0x00750000
 214:	strbvs	r6, [lr, -ip, ror #30]!
 218:	andeq	sp, r0, r0
 21c:	blvs	1b18a24 _start-0x1eee75dc>
 220:	svcpl	0x00746e63
 224:	sbcseq	r0, fp, r4, ror r0
 228:	stclvs	0, cr0, [r2]
 22c:	bvc	1a5cfe0 _start-0x1efa3020>
 230:	rsbseq	r5, r4, r5, ror #30
 234:	andeq	r0, r0, r6, ror #1
 238:	strbtvs	r6, [r4], #-356	; 0x164
 23c:	rsbseq	r5, r4, r2, ror pc
 240:	strdeq	r0, [r0], -r1
 244:	svcpl	0x00766564
 248:	rscseq	r0, ip, r4, ror r0
 24c:	cdpvs	0, 6, cr0, cr9, cr0, {0}
 250:	rsbseq	r5, r4, pc, ror #30
 254:	andeq	r0, r0, r7, lsl #2
 258:	cdpvs	12, 6, cr6, cr9, cr14, {3}
 25c:	rsbseq	r5, r4, fp, ror #30
 260:	andeq	r0, r0, r2, lsl r1
 264:	ldrbvs	r6, [sl, #-2419]!	; 0x973
 268:	cfmvsrne	mvf0, r7
 26c:	strvc	r0, [r0], #-1
 270:	svcpl	0x00656d69
 274:	teqeq	sl, r4, ror r0
 278:	ldmdbvs	r4!, {}^	; UNPREDICTABLE>
 27c:	rsbsvc	r6, r3, sp, ror #10
 280:	movwpl	r6, #869	; 0x365
 284:	movwvc	r0, #1
 288:	rsbseq	r6, r4, r4, ror r1
 28c:	andeq	r0, r0, lr, asr r2
 290:	svcvs	0x005f7366
 294:	andle	r7, r0, r0, ror r3
 298:	strvs	r0, [r0], #-3
 29c:	ldrbvc	r7, [r3, -r5, ror #12]!
 2a0:	andeq	lr, r2, r0, lsl #10
 2a4:	ldrbvs	r6, [r0, #-3840]!	; 0xf00
 2a8:	stmdbvs	r6!, {r1, r2, r3, r5, r6, r8, r9, sl, fp, ip, lr}^
 2ac:	andeq	r6, r0, ip, ror #10
 2b0:	cdpcc	0, 0, cr0, cr0, cr0, {0}
 2b4:	andeq	r0, r0, #0
 2b8:	andeq	r4, lr, r0, lsl #2
 2bc:	andeq	ip, r2, r0, lsl #14
 2c0:	andeq	r7, r0, r0, lsl #16
 2c4:	ldrbvc	r5, [pc], -r0, lsl #30
 2c8:	stmdbvs	ip!, {r0, r5, r6, r8, r9, sl, fp, ip, lr}^
 2cc:	stmdbhi	r0, {r0, r1, r4, r5, r6, sl, ip, sp, lr}
 2d0:	strvc	r0, [r0]
 2d4:	mcrvs	12, 3, r6, cr15, cr15, {2}
 2d8:	addseq	r0, r4, r7, rrx
 2dc:	ldmdbvs	r3!, {}^	; UNPREDICTABLE>
 2e0:	ldrbvc	r6, [pc], #-1402	; 2e8 _start-0x209ffd18>
 2e4:	andeq	sl, r0, r0
 2e8:	svcpl	0x00617600
 2ec:	ldrbtvc	r6, [r3], #-2412	; 0x96c
 2f0:	andeq	r0, r0, r0
 2f4:	andeq	r0, r1, r0, lsl #24
 2f8:	stmdaeq	r0, {r9}
 2fc:	andgt	r0, r0, #17
 300:	stmdami	r0, {r2}
 304:	svcpl	0x00000000
 308:	mcrvs	5, 3, r7, cr9, cr15, {2}
 30c:	svcpl	0x00323374
 310:	subseq	r0, sl, r4, ror r0
 314:	svcpl	0x005f0000
 318:	ldrbtcc	r6, [r4], -r9, ror #28
 31c:	rsbseq	r5, r4, r4, lsr pc
 320:	andeq	r0, r0, ip, rrx
 324:	ldmdbvs	r5!, {r0, r1, r2, r3, r4, r6, r8, r9, sl, fp, ip, lr}^
 328:	ldrtcc	r7, [r6], #-1134	; 0x46e
 32c:	stmdbls	r0, {r0, r1, r2, r3, r4, r6, sl, ip, sp, lr}
 330:	svcpl	0x00000000
 334:	strbtvs	r6, [r9], #-1887	; 0x75f
 338:	strge	r7, [r0], #-1119	; 0x45f
 33c:	svcpl	0x00000000
 340:	strbtvs	r6, [pc], #-3423	; 348 _start-0x209ffcb8>
 344:	rsbseq	r5, r4, r5, ror #30
 348:	andeq	r0, r0, pc, lsr #1
 34c:	uqsaxvs	r5, pc, pc	; UNPREDICTABLE>
 350:	rsbseq	r5, r4, r6, ror #30
 354:	strheq	r0, [r0], -sl
 358:	ldmdbvs	r5!, {r0, r1, r2, r3, r4, r6, r8, r9, sl, fp, ip, lr}^
 35c:	rsbseq	r5, r4, r4, ror #30
 360:	andeq	r0, r0, r5, asr #1
 364:	svcvs	0x006c5f75
 368:	andle	r6, r0, lr, ror #14
 36c:	andvs	r0, r0, #0
 370:	vnmulvs.f64	d22, d3, d28
 374:	rsbseq	r5, r4, r4, ror pc
 378:	ldrdeq	r0, [r0], -fp
 37c:	cmnvc	fp, #25088	; 0x6200
 380:	svcpl	0x00657a69
 384:	rsceq	r0, r6, r4, ror r0
 388:	cmnvs	r4, r0
 38c:	svcpl	0x00726464
 390:	rscseq	r0, r1, r4, ror r0
 394:	strbvs	r0, [r4]!
 398:	rsbseq	r5, r4, r6, ror pc
 39c:	strdeq	r0, [r0], -ip
 3a0:	svcpl	0x006f6e69
 3a4:	tsteq	r7, r4, ror r0
 3a8:	stclvs	0, cr0, [lr]
 3ac:	svcpl	0x006b6e69
 3b0:	tsteq	r2, r4, ror r0
 3b4:	ldmdbvs	r3!, {}^	; UNPREDICTABLE>
 3b8:	ldrbvc	r6, [pc], #-1402	; 3c0 _start-0x209ffc40>
 3bc:	andeq	r1, r1, r0, lsl #28
 3c0:	cfstrdvs	mvd7, [r9]
 3c4:	rsbseq	r5, r4, r5, ror #30
 3c8:	andeq	r0, r0, sl, lsr #2
 3cc:	strbvs	r6, [sp, #-2420]!	; 0x974
 3d0:	cmnvs	r5, #115	; 0x73
 3d4:	andeq	r5, r1, r0, lsl #6
 3d8:	cmnvs	r4, r0, lsl #6
 3dc:	subseq	r0, lr, #116	; 0x74
 3e0:	cmnvc	r6, #0
 3e4:	cmnvc	r0, #380	; 0x17c
 3e8:	andeq	sp, r3, r0
 3ec:	strbtvc	r6, [r5], -r0, lsl #8
 3f0:	str	r7, [r0, #-1907]	; 0x773
 3f4:	svcvs	0x00000002
 3f8:	svcpl	0x006e6570
 3fc:	strbvs	r6, [ip, #-2406]!	; 0x966
 400:	andeq	r0, r0, r0
 404:	andeq	r0, r0, r0, lsl #28
 408:	bgt	c10 _start-0x209ff3f0>
 40c:	strhi	r0, [r0, #-21]
 410:	andeq	r0, r0, r0
 414:	cdpeq	0, 0, cr0, cr0, cr0, {0}
 418:	andeq	r0, r0, #0
 41c:	andseq	r4, r6, r0, lsl #30
 420:	andeq	r0, r1, r0, lsl #10
 424:	andeq	r0, r0, r0
	...

Disassembly of section .ARM.attributes:

00000000 .ARM.attributes
   0:	andeq	r0, r0, r1, asr #30
   4:	cmnvs	r5, r0, lsl #2
   8:	tsteq	r0, r2, ror #18
   c:	andeq	r0, r0, r5
