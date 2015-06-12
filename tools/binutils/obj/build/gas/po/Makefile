# Makefile for program source directory in GNU NLS utilities package.
# Copyright (C) 1995, 1996, 1997 by Ulrich Drepper <drepper@gnu.ai.mit.edu>
# Copyright 2003, 2006, 2007, 2009 Free Software Foundation, Inc.
#
# This file may be copied and used freely without restrictions.  It can
# be used in projects which are not available under the GNU Public License
# but which still want to provide support for the GNU gettext functionality.
# Please note that the actual code is *not* freely available.

PACKAGE = gas
VERSION = 2.21.1

SHELL = /bin/sh
MAKE=/home/licj/software/netBSD/source/netBSD/usr/src/obj/tooldir.Linux-2.6.32-358.el6.x86_64-x86_64/bin/nbmake

srcdir = /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/po
top_srcdir = /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas
VPATH = /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/po
top_builddir = ..

prefix = /home/licj/software/netBSD/source/netBSD/usr/src/obj/tooldir.Linux-2.6.32-358.el6.x86_64-x86_64
exec_prefix = ${prefix}
datadir = $(prefix)/
localedir = $(datadir)/locale
gnulocaledir = $(prefix)/share/locale
gettextsrcdir = $(prefix)/share/gettext/po
subdir = po

DESTDIR =

INSTALL = /home/licj/software/netBSD/source/netBSD/usr/src/obj/tooldir.Linux-2.6.32-358.el6.x86_64-x86_64/bin/arm--netbsdelf-install -c  -r
INSTALL_DATA = ${INSTALL} -m 644
MKINSTALLDIRS = /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/../mkinstalldirs

CC = cc
GENCAT = 
GMSGFMT = PATH=../src:$$PATH /usr/bin/msgfmt
MSGFMT = /usr/bin/msgfmt
XGETTEXT = PATH=../src:$$PATH /usr/bin/xgettext
MSGMERGE = PATH=../src:$$PATH msgmerge

DEFS = -DHAVE_CONFIG_H
CFLAGS = -O
CPPFLAGS = 

INCLUDES = -I.. -I$(top_srcdir)/intl

COMPILE = $(CC) -c $(DEFS) $(INCLUDES) $(CPPFLAGS) $(CFLAGS) $(XCFLAGS)

SOURCES = cat-id-tbl.c
POFILES =  $(srcdir)/fr.po $(srcdir)/tr.po $(srcdir)/es.po $(srcdir)/rw.po $(srcdir)/id.po $(srcdir)/ru.po
GMOFILES =  $(srcdir)/fr.gmo $(srcdir)/tr.gmo $(srcdir)/es.gmo $(srcdir)/rw.gmo $(srcdir)/id.gmo $(srcdir)/ru.gmo
DISTFILES = ChangeLog Makefile.in.in POTFILES.in $(PACKAGE).pot \
stamp-cat-id $(POFILES) $(GMOFILES) $(SOURCES)

POTFILES = \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/app.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/as.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/as.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/asintl.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/atof-generic.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/bignum.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/bit_fix.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/cgen.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/cgen.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/compress-debug.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/compress-debug.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/cond.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/atof-ieee.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/atof-vax.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/e-crisaout.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/e-criself.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/e-i386aout.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/e-i386coff.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/e-i386elf.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/e-mipsecoff.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/e-mipself.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/obj-aout.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/obj-aout.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/obj-coff.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/obj-coff.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/obj-ecoff.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/obj-ecoff.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/obj-elf.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/obj-elf.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/obj-evax.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/obj-evax.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/obj-fdpicelf.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/obj-fdpicelf.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/obj-macho.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/obj-macho.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/obj-multi.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/obj-multi.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/obj-som.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/obj-som.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-alpha.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-alpha.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-arc.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-arc.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-arm.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-arm.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-avr.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-avr.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-bfin.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-bfin.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-cr16.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-cr16.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-cris.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-cris.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-crx.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-crx.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-d10v.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-d10v.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-d30v.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-d30v.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-dlx.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-dlx.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-fr30.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-fr30.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-frv.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-frv.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-h8300.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-h8300.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-hppa.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-hppa.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-i370.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-i370.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-i386.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-i386.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-i860.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-i860.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-i960.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-i960.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-ia64.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-ia64.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-ip2k.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-ip2k.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-iq2000.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-iq2000.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-lm32.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-lm32.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-m32c.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-m32c.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-m32r.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-m32r.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-m68hc11.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-m68hc11.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-m68k.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-m68k.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-mcore.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-mcore.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-mep.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-mep.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-microblaze.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-microblaze.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-mips.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-mips.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-mmix.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-mmix.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-mn10200.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-mn10200.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-mn10300.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-mn10300.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-moxie.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-msp430.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-msp430.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-mt.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-mt.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-ns32k.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-ns32k.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-openrisc.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-openrisc.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-or32.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-or32.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-pdp11.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-pdp11.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-pj.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-pj.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-ppc.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-ppc.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-rx.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-rx.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-s390.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-s390.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-score.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-score.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-sh.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-sh.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-sh64.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-sh64.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-sparc.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-sparc.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-spu.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-spu.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-tic30.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-tic30.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-tic4x.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-tic4x.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-tic54x.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-tic54x.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-tic6x.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-tic6x.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-v850.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-v850.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-vax.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-vax.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-xc16x.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-xc16x.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-xstormy16.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-xstormy16.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-xtensa.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-xtensa.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-z80.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-z80.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-z8k.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/tc-z8k.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/te-386bsd.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/te-aix5.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/te-armeabi.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/te-armlinuxeabi.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/te-dynix.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/te-epoc-pe.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/te-freebsd.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/te-generic.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/te-gnu.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/te-go32.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/te-hppa.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/te-hppa64.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/te-hppalinux64.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/te-i386aix.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/te-ia64aix.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/te-interix.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/te-lnews.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/te-lynx.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/te-mach.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/te-macos.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/te-nbsd.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/te-nbsd532.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/te-netware.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/te-pc532mach.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/te-pe.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/te-psos.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/te-riscix.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/te-solaris.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/te-sparcaout.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/te-sun3.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/te-svr4.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/te-symbian.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/te-tmips.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/te-vms.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/te-vxworks.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/te-wince-pe.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/xtensa-relax.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/config/xtensa-relax.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/depend.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/dw2gencfi.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/dw2gencfi.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/dwarf2dbg.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/dwarf2dbg.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/ecoff.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/ecoff.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/ehopt.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/emul-target.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/emul.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/expr.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/expr.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/flonum-copy.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/flonum-konst.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/flonum-mult.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/flonum.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/frags.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/frags.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/hash.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/hash.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/input-file.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/input-file.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/input-scrub.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/itbl-lex.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/itbl-ops.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/itbl-ops.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/listing.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/listing.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/literal.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/macro.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/macro.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/messages.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/obj.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/output-file.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/output-file.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/read.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/read.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/remap.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/sb.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/sb.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/stabs.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/struc-symbol.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/subsegs.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/subsegs.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/symbols.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/symbols.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/tc.h \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/write.c \
     /home/licj/software/netBSD/source/netBSD/usr/src/tools/binutils/../../external/gpl3/binutils/dist/gas/write.h

CATALOGS = 
CATOBJEXT = 
INSTOBJEXT = 

.SUFFIXES:
.SUFFIXES: .c .o .po .pox .gmo .mo .msg .cat

.c.o:
	$(COMPILE) $<

.po.pox:
	$(MAKE) $(PACKAGE).pot
	$(MSGMERGE) $< $(srcdir)/$(PACKAGE).pot -o $*.pox

.po.mo:
	$(MSGFMT) -o $@ $<

.po.gmo:
	file=`echo $* | sed 's,.*/,,'`.gmo \
	  && rm -f $$file && $(GMSGFMT) -o $$file $<

.po.cat:
	sed -f ../intl/po2msg.sed < $< > $*.msg \
	  && rm -f $@ && $(GENCAT) $@ $*.msg


all: all-no

all-yes: $(CATALOGS) # $(PACKAGE).pot
all-no:

$(srcdir)/$(PACKAGE).pot: $(POTFILES)
	$(XGETTEXT) --default-domain=$(PACKAGE) --directory=$(top_srcdir) \
	  --add-comments --keyword=_ --keyword=N_ \
	  --msgid-bugs-address=bug-binutils@gnu.org \
	  --files-from=$(srcdir)/POTFILES.in
	rm -f $(srcdir)/$(PACKAGE).pot
	mv $(PACKAGE).po $(srcdir)/$(PACKAGE).pot

$(srcdir)/cat-id-tbl.c: stamp-cat-id; @:
$(srcdir)/stamp-cat-id: $(PACKAGE).pot
	rm -f cat-id-tbl.tmp
	sed -f ../intl/po2tbl.sed $(srcdir)/$(PACKAGE).pot \
		| sed -e "s/@PACKAGE NAME@/$(PACKAGE)/" > cat-id-tbl.tmp
	if cmp -s cat-id-tbl.tmp $(srcdir)/cat-id-tbl.c; then \
	  rm cat-id-tbl.tmp; \
	else \
	  echo cat-id-tbl.c changed; \
	  rm -f $(srcdir)/cat-id-tbl.c; \
	  mv cat-id-tbl.tmp $(srcdir)/cat-id-tbl.c; \
	fi
	cd $(srcdir) && rm -f stamp-cat-id && echo timestamp > stamp-cat-id


install: install-exec install-data
install-exec:
install-info:
install-html:
install-pdf:
install-data: install-data-no
install-data-no: all
install-data-yes: all
	if test -r $(MKINSTALLDIRS); then \
	  $(MKINSTALLDIRS) $(DESTDIR)$(datadir); \
	else \
	  $(top_srcdir)/mkinstalldirs $(DESTDIR)$(datadir); \
	fi
	@catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  case "$$cat" in \
	    *.gmo) destdir=$(gnulocaledir);; \
	    *)     destdir=$(localedir);; \
	  esac; \
	  lang=`echo $$cat | sed 's/\$(CATOBJEXT)$$//'`; \
	  dir=$(DESTDIR)$$destdir/$$lang/LC_MESSAGES; \
	  if test -r $(MKINSTALLDIRS); then \
	    $(MKINSTALLDIRS) $$dir; \
	  else \
	    $(top_srcdir)/mkinstalldirs $$dir; \
	  fi; \
	  if test -r $$cat; then \
	    $(INSTALL_DATA) $$cat $$dir/$(PACKAGE)$(INSTOBJEXT); \
	    echo "installing $$cat as $$dir/$(PACKAGE)$(INSTOBJEXT)"; \
	  else \
	    $(INSTALL_DATA) $(srcdir)/$$cat $$dir/$(PACKAGE)$(INSTOBJEXT); \
	    echo "installing $(srcdir)/$$cat as" \
		 "$$dir/$(PACKAGE)$(INSTOBJEXT)"; \
	  fi; \
	  if test -r $$cat.m; then \
	    $(INSTALL_DATA) $$cat.m $$dir/$(PACKAGE)$(INSTOBJEXT).m; \
	    echo "installing $$cat.m as $$dir/$(PACKAGE)$(INSTOBJEXT).m"; \
	  else \
	    if test -r $(srcdir)/$$cat.m ; then \
	      $(INSTALL_DATA) $(srcdir)/$$cat.m \
		$$dir/$(PACKAGE)$(INSTOBJEXT).m; \
	      echo "installing $(srcdir)/$$cat as" \
		   "$$dir/$(PACKAGE)$(INSTOBJEXT).m"; \
	    else \
	      true; \
	    fi; \
	  fi; \
	done
	if test "$(PACKAGE)" = "gettext"; then \
	  if test -r $(MKINSTALLDIRS); then \
	    $(MKINSTALLDIRS) $(DESTDIR)$(gettextsrcdir); \
	  else \
	    $(top_srcdir)/mkinstalldirs $(DESTDIR)$(gettextsrcdir); \
	  fi; \
	  $(INSTALL_DATA) $(srcdir)/Makefile.in.in \
			  $(DESTDIR)$(gettextsrcdir)/Makefile.in.in; \
	else \
	  : ; \
	fi

# Define this as empty until I found a useful application.
installcheck:

uninstall:
	catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  lang=`echo $$cat | sed 's/\$(CATOBJEXT)$$//'`; \
	  rm -f $(DESTDIR)$(localedir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT); \
	  rm -f $(DESTDIR)$(localedir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT).m; \
	  rm -f $(DESTDIR)$(gnulocaledir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT); \
	  rm -f $(DESTDIR)$(gnulocaledir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT).m; \
	done
	rm -f $(DESTDIR)$(gettextsrcdir)/po-Makefile.in.in

check: all

cat-id-tbl.o: ../intl/libgettext.h

html dvi pdf ps info tags TAGS ID:

mostlyclean:
	rm -f core core.* *.pox $(PACKAGE).po *.old.po cat-id-tbl.tmp
	rm -fr *.o

clean: mostlyclean

distclean: clean
	rm -f Makefile Makefile.in POTFILES *.mo *.msg *.cat *.cat.m

maintainer-clean: distclean
	@echo "This command is intended for maintainers to use;"
	@echo "it deletes files that may require special tools to rebuild."
	rm -f $(GMOFILES)

distdir = ../$(PACKAGE)-$(VERSION)/$(subdir)
dist distdir: update-po $(DISTFILES)
	dists="$(DISTFILES)"; \
	for file in $$dists; do \
	  ln $(srcdir)/$$file $(distdir) 2> /dev/null \
	    || cp -p $(srcdir)/$$file $(distdir); \
	done

update-po: Makefile
	$(MAKE) $(PACKAGE).pot
	PATH=`pwd`/../src:$$PATH; \
	cd $(srcdir); \
	catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  lang=`echo $$cat | sed 's/\$(CATOBJEXT)$$//'`; \
	  mv $$lang.po $$lang.old.po; \
	  echo "$$lang:"; \
	  if $(MSGMERGE) $$lang.old.po $(PACKAGE).pot -o $$lang.po; then \
	    rm -f $$lang.old.po; \
	  else \
	    echo "msgmerge for $$cat failed!"; \
	    rm -f $$lang.po; \
	    mv $$lang.old.po $$lang.po; \
	  fi; \
	done

POTFILES: POTFILES.in
	( if test 'x$(srcdir)' != 'x.'; then \
	    posrcprefix='$(top_srcdir)/'; \
	  else \
	    posrcprefix="../"; \
	  fi; \
	  rm -f $@-t $@ \
	    && (sed -e '/^#/d' -e '/^[ 	]*$$/d' \
		    -e "s@.*@	$$posrcprefix& \\\\@" < $(srcdir)/$@.in \
		| sed -e '$$s/\\$$//') > $@-t \
	    && chmod a-w $@-t \
	    && mv $@-t $@ )

POTFILES.in: # ../Makefile
	cd .. && $(MAKE) po/POTFILES.in

Makefile: Make-in ../config.status POTFILES
	cd .. \
	  && CONFIG_FILES=$(subdir)/Makefile.in:$(subdir)/Make-in \
	     CONFIG_HEADERS= $(SHELL) ./config.status

# Tell versions [3.59,3.63) of GNU make not to export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
