/*	$Id: lr9g20_spi.c,v 1.2 2008/07/03 01:15:39 matt Exp $	*/
/*	$NetBSD: lr9g20_spi.c,v 1.2 2008/07/03 01:15:39 matt Exp $	*/

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
__KERNEL_RCSID(0, "$NetBSD: lr9g20_spi.c,v 1.2 2008/07/03 01:15:39 matt Exp $");

#include <sys/param.h>
#include <sys/systm.h>
#include <sys/kernel.h>
#include <sys/device.h>
#include <sys/lock.h>
#include <arm/at91/at91reg.h>
#include <arm/at91/at91var.h>
#include <arm/at91/at91spivar.h>
#include <arm/at91/at91piovar.h>

#ifdef MPCSA_SPI_DEBUG
int lr9g20_spi_debug = MPCSA_SPI_DEBUG;
#define DPRINTFN(n,x)	if (lr9g20_spi_debug>(n)) printf x;
#else
#define DPRINTFN(n,x)   
#endif  

struct at91pio_softc;

struct lr9g20_spi_softc {
	struct at91spi_softc	sc_dev;
	struct at91pio_softc	*sc_pioa, *sc_piod;
};

static int lr9g20_spi_match(struct device *, struct cfdata *, void *);
static void lr9g20_spi_attach(struct device *, struct device *, void *);

CFATTACH_DECL(lr9g20_spi, sizeof(struct lr9g20_spi_softc),
	      lr9g20_spi_match, lr9g20_spi_attach, NULL, NULL);

static int lr9g20_spi_select(void *self, int sel);

struct at91spi_machdep lr9g20_spi_tag = {
	lr9g20_spi_select
};

static int
lr9g20_spi_match(struct device *parent, struct cfdata *match, void *aux)
{
	printf("%s:spi attach,  cf_name= %s , cf_atname=%s\n",__FUNCTION__,match->cf_name ,match->cf_atname);
	if (strcmp(match->cf_name, "at91spi") == 0 && strcmp(match->cf_atname, "lr9g20_spi") == 0)
		return 2;
	return 0;
}

#define	GPIO_SPICS0(func)	(func)(sc->sc_pioa, 3)
#define	GPIO_SPICS1(func)	(func)(sc->sc_pioa, 4)
#define	GPIO_SPICS2(func)	(func)(sc->sc_piod, 19)


static void
lr9g20_spi_attach(struct device *parent, struct device *self, void *aux)
{
	struct lr9g20_spi_softc *sc = (struct lr9g20_spi_softc *)self;

	printf("%s:spi attach\n",__FUNCTION__);

	// do some checks
	if ((sc->sc_pioa = at91pio_sc(AT91_PIOA)) == NULL) {
		printf("no PIOA!\n");
		return;
	}
	if ((sc->sc_piod = at91pio_sc(AT91_PIOD)) == NULL) {
		printf("no PIOD!\n");
		return;
	}

	// initialize softc
	sc->sc_dev.sc_spi.sct_nslaves = 3;	// number of slaves

	// configure GPIO
	//GPIO_SPICS0(at91pio_out); GPIO_SPICS0(at91pio_set);
	//GPIO_SPICS1(at91pio_out); GPIO_SPICS1(at91pio_set);
	//GPIO_SPICS2(at91pio_out); GPIO_SPICS2(at91pio_set);

	// and call common routine
	at91spi_attach_common(parent, self, aux, &lr9g20_spi_tag);
}

static int lr9g20_spi_select(void *self, int sel)
{
#if 0
	struct lr9g20_spi_softc *sc = (struct lr9g20_spi_softc *)self;
	/* first deselect everything */
	GPIO_SPICS0(at91pio_set);
	GPIO_SPICS1(at91pio_set);
	GPIO_SPICS2(at91pio_set);

	/* then select wanted target */
	switch (sel) {
	case -1:
	  break;
	case 0:
	  GPIO_SPICS0(at91pio_clear);
	  break;
	case 1:
	  GPIO_SPICS2(at91pio_clear);
	  break;
	case 2:
	  GPIO_SPICS2(at91pio_clear);
	  break;
	default:
	  return EINVAL;
	}
#endif
	return 0;
}
