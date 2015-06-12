/*	$NetBSD: lr9g20_leds_var.h,v 1.2 2008/07/03 01:15:39 matt Exp $	*/

#ifndef	_MPCSA_LEDS_VAR_H_
#define	_MPCSA_LEDS_VAR_H_

#define	INFINITE_BLINK	8191

void lr9g20_blink_led(int num, int interval);
void lr9g20_comm_led(int num, int count);
void lr9g20_conn_led(int num, int ok);

#endif	// !_MPCSA_LEDS_VAR_H_
