#	$NetBSD: Makefile,v 1.6 2004/05/16 10:25:14 lukem Exp $

.include "../Makefile.serverlib"

.include <bsd.own.mk>

SUBDIR=		raster pcl ps

LIB=		printer
.PATH:		${X11SRCDIR.xc}/programs/Xserver/Xprint
.PATH:		${X11SRCDIR.xc}/lib/X11
.PATH:		${X11SRCDIR.xc}/programs/Xserver/Xext
.PATH:		${X11SRCDIR.xc}/programs/Xserver/mi

SRCS=		Init.c Quarks.c attributes.c Util.c mediaSizes.c Oid.c \
		AttrValid.c

CPPFLAGS+=	-I${DESTDIR}${X11INCDIR}/X11 \
		-I${X11SRCDIR.xc}/programs/Xserver/Xprint \
		-I${X11SRCDIR.xc}/programs/Xserver/mfb \
		-I${X11SRCDIR.xc}/programs/Xserver/mi \
		-I${X11SRCDIR.xc}/programs/Xserver/cfb \
		-I${X11SRCDIR.xc}/programs/Xserver/include \
		-I${X11SRCDIR.xc}/include \
		-I${X11SRCDIR.xc}/include/fonts  \
		-I${DESTDIR}${X11INCDIR}/X11/extensions \
		-I${X11SRCDIR.xc}/lib/X11

CPPFLAGS+=	-DXPRINTDIR=\"${X11ETCDIR}/xserver\" \
		-DXPRASTERDDX -DXPPCLDDX -DXPPSDDX -DHAS_MKSTEMP \
		-UXFree86LOADER -D_XP_PRINT_SERVER_


BUILDOBJS=		ddxInit.o dpmsstubs.o miinitext.o
BUILDCPPFLAGS=		-DPRINT_ONLY_SERVER \
			${X11FLAGS.OS_DEFINES} \
			${X11FLAGS.EXTENSION}

.include "../Makefile.common"

.if ${XSERVER_XFREE86} == "no"
BUILDCPPFLAGS+=		-UDDXTIME
.endif

CPPFLAGS.ddxInit.c=	${BUILDCPPFLAGS}
CPPFLAGS.dpmsstubs.c=	${BUILDCPPFLAGS} -DXPRINT
CPPFLAGS.miinitext.c=	${BUILDCPPFLAGS} -DXPRINT -UGLXEXT
CLEANFILES+=		${BUILDOBJS}
realall: ${BUILDOBJS}


.include <bsd.x11.mk>
.include <bsd.lib.mk>
.include <bsd.subdir.mk>
