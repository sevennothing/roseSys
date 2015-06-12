/*	$Id: lr9g20_cf.c,v 1.2 2008/07/03 01:15:39 matt Exp $	*/
/*	$NetBSD: lr9g20_cf.c,v 1.2 2008/07/03 01:15:39 matt Exp $	*/

/*
 * Copyright (c) 2007 Embedtronics Oy. All rights reserved.
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
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

#include <sys/cdefs.h>
__KERNEL_RCSID(0, "$NetBSD: lr9g20_cf.c,v 1.2 2008/07/03 01:15:39 matt Exp $");

#include <sys/param.h>
#include <sys/systm.h>
#include <sys/kernel.h>
#include <sys/device.h>
#include <arm/at91/at91reg.h>
#include <arm/at91/at91var.h>
#include <arm/at91/at91cfvar.h>
#include <arm/at91/at91piovar.h>

#ifdef MPCA_CF_DEBUG
int lr9g20_cf_debug = MPCA_CF_DEBUG;
#define DPRINTFN(n,x)	if (lr9g20_cf_debug>(n)) printf x;
#else
#define DPRINTFN(n,x)   
#endif  

struct at91_gpio_softc;

struct lr9g20_cf_softc {
	struct at91cf_softc	sc_dev;
	struct at91pio_softc	*sc_pioc;
};

static int lr9g20_cf_match(struct device *, struct cfdata *, void *);
static void lr9g20_cf_attach(struct device *, struct device *, void *);

CFATTACH_DECL_NEW(lr9g20_cf, sizeof(struct lr9g20_cf_softc),
	      lr9g20_cf_match, lr9g20_cf_attach, NULL, NULL);

static int	lr9g20_cf_power_ctl(void *self, int onoff);
static int	lr9g20_cf_card_detect(void *self);
static int	lr9g20_cf_irq_line(void *self);
static void *	lr9g20_cf_intr_establish(void *self, int which, int ipl, int (*ih_func)(void *), void *arg);
static void	lr9g20_cf_intr_disestablish(void *self, int which, void *cookie);

struct at91cf_chipset_tag lr9g20_cf_tag = {
	lr9g20_cf_power_ctl,
	lr9g20_cf_card_detect,
	lr9g20_cf_irq_line,
	lr9g20_cf_intr_establish,
	lr9g20_cf_intr_disestablish
};

static int
lr9g20_cf_match(struct device *parent, struct cfdata *match, void *aux)
{
	if (strcmp(match->cf_name, "at91cf") == 0 && strcmp(match->cf_atname, "lr9g20_cf") == 0)
		return 2;
	return 0;
}

static void
lr9g20_cf_attach(struct device *parent, struct device *self, void *aux)
{
	struct lr9g20_cf_softc *sc = device_private(self);
//	at91cf_chipset_tag_t cscf = sc->sc_dev.sc_cscf;
	struct at91pio_softc *pioc;

	if ((pioc = at91pio_sc(AT91_PIOC)) == NULL) {
		printf("no PIOC!\n");
		return;
	}

	// configure PIO!
	sc->sc_pioc = pioc;
	at91pio_in(sc->sc_pioc, 3);	// CFIRQ
	at91pio_in(sc->sc_pioc, 4);	// CFCD
	at91pio_out(sc->sc_pioc, 5);	// CFRESET

	// and call common routine
	at91cf_attach_common(parent, self, aux, &lr9g20_cf_tag);
}

static int
lr9g20_cf_power_ctl(void *self, int onoff)
{
	struct lr9g20_cf_softc *sc = self;
	if (onoff) {
		at91pio_set(sc->sc_pioc, 5);
		return 20000;
	} else {
		at91pio_clear(sc->sc_pioc, 5);
		return 20000;
	}
}

static int	lr9g20_cf_card_detect(void *self)
{
	struct lr9g20_cf_softc *sc = self;
	return at91pio_read(sc->sc_pioc, 4) == 0;
}

static int	lr9g20_cf_irq_line(void *self)
{
	struct lr9g20_cf_softc *sc = self;
	return at91pio_read(sc->sc_pioc, 3);
}

static void *	lr9g20_cf_intr_establish(void *self, int which, int ipl, int (*ih_func)(void *), void *ih_arg)
{
	struct lr9g20_cf_softc *sc = self;
	return at91pio_intr_establish(sc->sc_pioc, which == CD_IRQ ? 4 : 3,
					ipl, ih_func, ih_arg);
}

static void	lr9g20_cf_intr_disestablish(void *self, int which, void *cookie)
{
	struct lr9g20_cf_softc *sc = self;
	at91pio_intr_disestablish(sc->sc_pioc, which == CD_IRQ ? 4 : 3, cookie);
}

