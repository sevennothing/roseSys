# $NetBSD: Makefile,v 1.1.2.2 2012/12/15 23:45:58 riz Exp $

.include <bsd.own.mk>

LIBISMODULE= yes
.if defined(MLIBDIR)
LIBDIR=		/usr/lib/${MLIBDIR}/npf
SHLIBDIR=	/usr/lib/${MLIBDIR}/npf
SHLIBINSTALLDIR=/usr/lib/${MLIBDIR}/npf
.else
LIBDIR=		/usr/lib/npf
SHLIBDIR=	/usr/lib/npf
SHLIBINSTALLDIR=/usr/lib/npf
.endif

LIB=	ext_rndblock

SRCS=	npfext_rndblock.c
WARNS=	5

.include <bsd.lib.mk>
