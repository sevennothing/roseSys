#if HAVE_NBTOOL_CONFIG_H
#include "nbtool_config.h"
#endif
#ifndef lint
static const char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#endif

#ifdef _LIBC
#include "namespace.h"
#endif
#include <stdlib.h>
#include <string.h>

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)

#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
/*	$NetBSD: gram.y,v 1.24 2010/04/30 20:47:18 pooka Exp $	*/

/*
 * Copyright (c) 1992, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * This software was developed by the Computer Systems Engineering group
 * at Lawrence Berkeley Laboratory under DARPA contract BG 91-66 and
 * contributed to Berkeley.
 *
 * All advertising materials mentioning features or use of this software
 * must display the following acknowledgement:
 *	This product includes software developed by the University of
 *	California, Lawrence Berkeley Laboratories.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	from: @(#)gram.y	8.1 (Berkeley) 6/6/93
 */

#include <sys/types.h>
#include <sys/param.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include "defs.h"
#include "sem.h"

#define	FORMAT(n) (((n).fmt == 8 && (n).val != 0) ? "0%llo" : \
    ((n).fmt == 16) ? "0x%llx" : "%lld")

#define	stop(s)	cfgerror(s), exit(1)

static	struct	config conf;	/* at most one active at a time */

/* the following is used to recover nvlist space after errors */
static	struct	nvlist *alloc[1000];
static	int	adepth;
#define	new0(n,s,p,i,x)	(alloc[adepth++] = newnv(n, s, p, i, x))
#define	new_n(n)	new0(n, NULL, NULL, 0, NULL)
#define	new_nx(n, x)	new0(n, NULL, NULL, 0, x)
#define	new_ns(n, s)	new0(n, s, NULL, 0, NULL)
#define	new_si(s, i)	new0(NULL, s, NULL, i, NULL)
#define	new_nsi(n,s,i)	new0(n, s, NULL, i, NULL)
#define	new_np(n, p)	new0(n, NULL, p, 0, NULL)
#define	new_s(s)	new0(NULL, s, NULL, 0, NULL)
#define	new_p(p)	new0(NULL, NULL, p, 0, NULL)
#define	new_px(p, x)	new0(NULL, NULL, p, 0, x)
#define	new_sx(s, x)	new0(NULL, s, NULL, 0, x)
#define	new_nsx(n,s,x)	new0(n, s, NULL, 0, x)
#define	new_i(i)	new0(NULL, NULL, NULL, i, NULL)

#define	fx_atom(s)	new0(s, NULL, NULL, FX_ATOM, NULL)
#define	fx_not(e)	new0(NULL, NULL, NULL, FX_NOT, e)
#define	fx_and(e1, e2)	new0(NULL, NULL, e1, FX_AND, e2)
#define	fx_or(e1, e2)	new0(NULL, NULL, e1, FX_OR, e2)

static	void	cleanup(void);
static	void	setmachine(const char *, const char *, struct nvlist *, int);
static	void	check_maxpart(void);

static	void	app(struct nvlist *, struct nvlist *);

static	struct nvlist *mk_nsis(const char *, int, struct nvlist *, int);
static	struct nvlist *mk_ns(const char *, struct nvlist *);

#line 94 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union {
	struct	attr *attr;
	struct	devbase *devb;
	struct	deva *deva;
	struct	nvlist *list;
	const char *str;
	struct	numconst num;
	int64_t	val;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 132 "gram.c"

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#define YYERROR_DECL() yyerror(const char *s)
#define YYERROR_CALL(msg) yyerror(msg)

extern int YYPARSE_DECL();


#define AND 257
#define AT 258
#define ATTACH 259
#define BLOCK 260
#define BUILD 261
#define CHAR 262
#define COLONEQ 263
#define COMPILE_WITH 264
#define CONFIG 265
#define DEFFS 266
#define DEFINE 267
#define DEFOPT 268
#define DEFPARAM 269
#define DEFFLAG 270
#define DEFPSEUDO 271
#define DEFPSEUDODEV 272
#define DEVICE 273
#define DEVCLASS 274
#define DUMPS 275
#define DEVICE_MAJOR 276
#define ENDFILE 277
#define XFILE 278
#define FILE_SYSTEM 279
#define FLAGS 280
#define IDENT 281
#define IOCONF 282
#define LINKZERO 283
#define XMACHINE 284
#define MAJOR 285
#define MAKEOPTIONS 286
#define MAXUSERS 287
#define MAXPARTITIONS 288
#define MINOR 289
#define NEEDS_COUNT 290
#define NEEDS_FLAG 291
#define NO 292
#define XOBJECT 293
#define OBSOLETE 294
#define ON 295
#define OPTIONS 296
#define PACKAGE 297
#define PLUSEQ 298
#define PREFIX 299
#define PSEUDO_DEVICE 300
#define PSEUDO_ROOT 301
#define ROOT 302
#define SINGLE 303
#define SOURCE 304
#define TYPE 305
#define VECTOR 306
#define VERSION 307
#define WITH 308
#define NUMBER 309
#define PATHNAME 310
#define QSTRING 311
#define WORD 312
#define EMPTYSTRING 313
#define ENDDEFS 314
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
   58,    0,   54,   54,   59,   59,   59,   55,   55,   55,
   55,   42,   42,   43,   43,   60,   61,   62,   48,   48,
   49,   49,    1,    1,    2,    2,    2,    2,    2,    3,
    5,    5,    6,    6,   50,   50,   50,   51,   51,   53,
   53,   52,    7,    7,    8,    9,    9,   63,   63,   56,
   56,   56,   64,   64,   64,   65,   65,   65,   65,   65,
   65,   65,   65,   65,   65,   65,   65,   65,   65,   65,
   65,   65,   65,   65,   65,   65,   13,   13,   15,   15,
   35,   35,   34,   40,   40,   39,   39,   38,   37,   37,
   36,   36,   36,   36,   11,   12,   12,   14,   14,   16,
   16,   17,   17,   18,   18,   18,   18,   18,   18,   46,
   46,   19,   21,   41,   41,   44,   44,   29,   29,   29,
   29,   45,   45,   20,   20,   32,   32,   22,   22,   23,
   23,   10,   67,   67,   68,   57,   57,   69,   69,   69,
   70,   70,   70,   70,   70,   70,   70,   70,   70,   70,
   70,   70,   70,   70,   70,   70,   70,   70,   72,   72,
   80,   71,   71,   81,   74,   74,   47,   47,   82,   82,
   66,   66,   83,   73,   73,   84,   76,   76,   85,   85,
   75,   75,   86,   77,   78,   88,   88,    4,    4,   79,
   79,   89,   26,   26,   26,   30,   87,   87,   31,   31,
   27,   27,   28,   28,   28,   24,   24,   25,   25,   33,
   33,
};
static const short yylen[] = {                            2,
    0,    6,    2,    0,    3,    3,    1,    3,    5,    3,
    1,    1,    0,    2,    1,    5,    4,    6,    2,    0,
    2,    0,    1,    0,    1,    2,    3,    3,    3,    1,
    2,    0,    1,    1,    3,    1,    0,    1,    3,    3,
    1,    1,    2,    0,    1,    2,    0,    2,    1,    2,
    2,    0,    2,    1,    2,    1,    1,    1,    1,    2,
    3,    4,    4,    4,    4,    4,    4,    4,    6,    2,
    4,    2,    4,    4,    4,    2,    3,    1,    1,    1,
    2,    1,    1,    2,    0,    3,    1,    1,    2,    1,
    1,    3,    3,    5,    1,    2,    0,    3,    0,    1,
    0,    3,    1,    2,    1,    4,    4,    5,    7,    1,
    1,    2,    4,    1,    0,    1,    1,    1,    1,    1,
    1,    1,    1,    3,    1,    1,    2,    2,    0,    3,
    1,    1,    3,    1,    3,    2,    0,    2,    1,    2,
    1,    3,    2,    3,    2,    3,    2,    2,    2,    4,
    3,    3,    3,    2,    4,    4,    2,    5,    3,    1,
    1,    3,    1,    1,    3,    1,    1,    1,    3,    3,
    3,    1,    4,    3,    1,    1,    3,    1,    1,    3,
    3,    1,    1,    1,    4,    2,    0,    1,    1,    2,
    0,    3,    1,    1,    1,    4,    1,    0,    1,    0,
    2,    1,    1,    2,    1,    2,    0,    2,    2,    2,
    0,
};
static const short yydefred[] = {                         4,
    0,    0,   11,    0,    0,    0,    0,    7,   52,    3,
  117,  116,    0,    0,    0,    0,    0,    6,   10,    0,
    8,    5,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   51,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    1,   54,   56,   57,   58,   59,
   50,    0,   15,    0,    0,   55,   95,    0,   83,   82,
    0,    0,    0,  114,    0,    0,    0,    0,    0,   60,
    0,    0,    0,   30,    0,    0,    0,   25,    0,  172,
    0,   70,    0,    0,    0,   48,   76,  137,   53,    9,
   14,    0,    0,   81,   61,    0,    0,    0,   90,    0,
    0,    0,    0,    0,    0,    0,    0,   32,    0,    0,
    0,  134,   26,    0,  167,  168,    0,    0,    0,    0,
    0,   44,    0,    0,    0,   80,   79,    0,   78,   88,
   87,    0,  111,  110,    0,    0,  100,    0,    0,    0,
   62,    0,    0,   89,   63,   66,   64,   73,   74,   68,
   21,    0,    0,    0,    0,    0,   75,   29,    0,   27,
    0,  171,   71,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  139,    0,  141,
  136,    0,    0,    0,    0,    0,    0,   98,    0,    0,
    0,  104,  132,  131,    0,  126,  118,  119,  120,    0,
   93,  121,    0,   19,    0,    0,   33,   34,   31,   16,
  135,  133,  173,   45,   43,  140,  184,    0,  161,    0,
  160,  122,  123,  149,    0,    0,    0,  166,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  178,    0,
  154,  201,    0,  138,   96,   77,   69,   86,    0,    0,
  102,  112,    0,    0,  127,    0,   38,    0,   18,    0,
   46,    0,  191,    0,    0,    0,    0,  151,    0,  164,
    0,  163,  176,    0,  175,  183,    0,  182,  152,    0,
    0,    0,  199,  153,  203,    0,  207,    0,  106,    0,
  130,   94,    0,    0,  197,    0,    0,  159,  170,  169,
  165,  156,    0,    0,    0,  155,  180,  177,  204,    0,
    0,    0,  108,    0,   39,   42,   35,    0,  194,  193,
    0,  195,    0,  190,  162,  174,  181,    0,    0,  206,
  158,    0,    0,    0,    0,    0,  185,    0,  210,  209,
  208,    0,  109,    0,   40,    0,  189,  188,  186,  192,
    0,  113,  196,  124,
};
static const short yydgoto[] = {                          1,
  108,   77,   78,  349,  154,  209,  164,  215,  210,  194,
  110,  185,  128,   97,  129,  136,  137,  138,  192,  341,
  313,  141,  195,  310,  330,  321,  179,  287,  342,  322,
  284,  202,  331,   60,   61,   99,  100,  131,  132,   95,
   63,   54,   55,   64,  224,  139,  226,  153,  107,  259,
  260,  317,  315,    2,    9,   17,  125,   88,   10,   47,
   48,   49,   50,   51,   52,   79,  111,  112,  181,  182,
  271,  220,  274,  227,  277,  238,  218,  263,  297,  221,
  272,  228,   80,  275,  239,  278,  296,  337,  324,
};
static const short yysindex[] = {                         0,
    0,   87,    0, -251, -258, -216, -251,    0,    0,    0,
    0,    0,   89,   97,   11,  105,  -10,    0,    0, -189,
    0,    0,  115, -185, -183, -180, -251, -251, -251, -185,
 -185, -185, -177, -174,    0, -251,   27,  -21, -151, -148,
 -251, -179, -251, -147,    0,    0,    0,    0,    0,    0,
    0,  156,    0,  158, -143,    0,    0,  -88,    0,    0,
  -47,   48, -140,    0, -140, -140,   48,   48,   48,    0,
  -89,  -21, -185,    0, -138,  -21,  -32,    0,  131,    0,
 -133,    0,  -21, -251, -251,    0,    0,    0,    0,    0,
    0, -245, -135,    0,    0,  -83,  120,  -44,    0,  -19,
  -19,  -19,  120,  120,  120, -129,  -79,    0,   -3,  121,
  -14,    0,    0,   -7,    0,    0,  -21,  -21, -115,  -21,
 -125,    0, -140, -140,   40,    0,    0,  -37,    0,    0,
    0,  141,    0,    0, -208,   61,    0,  143,    7, -124,
    0,   63,   63,    0,    0,    0,    0,    0,    0,    0,
    0, -120,  -21, -154, -119, -185,    0,    0,  153,    0,
   63,    0,    0,  -99, -140, -140,  183, -118, -116, -157,
  -24, -114, -153, -113, -112, -111,  155,    0,  -56,    0,
    0,  188, -109, -245,  120, -135,    9,    0,  -83,   63,
 -105,    0,    0,    0,  161,    0,    0,    0,    0, -103,
    0,    0,  -55,    0, -228, -157,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  -95,    0,  165,
    0,    0,    0,    0,    0,  -51,  166,    0, -133, -101,
  -46,  -98,  -97,  -96,  -92,  -45,  157,  173,    0,  -87,
    0,    0, -231,    0,    0,    0,    0,    0,  -86,  128,
    0,    0,  133, -124,    0,   63,    0,  163,    0,  186,
    0,  -68,    0, -116,   63,   63, -155,    0, -231,    0,
  187,    0,    0,  189,    0,    0,  190,    0,    0, -231,
   63, -113,    0,    0,    0,  169,    0,  142,    0,  175,
    0,    0,  -72,  -43,    0,  -60,  -36,    0,    0,    0,
    0,    0,  -98,  -97,  -96,    0,    0,    0,    0, -248,
  175,  118,    0,  180,    0,    0,    0,  -67,    0,    0,
  -62,    0,  -68,    0,    0,    0,    0,  -65,   50,    0,
    0,  160,   63,  -61,  -38,  -39,    0,  -60,    0,    0,
    0,  206,    0,  129,    0,  -35,    0,    0,    0,    0,
   63,    0,    0,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  284,
    0,    0,    0,    0,    0,    0,  -12,  -12,  -12,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  291,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  292,    0,    0,    0,    0,    0,
  314,   30,    0,    0,    0,    0,   30,   30,   30,    0,
   32,   -9,    0,    0,    0,    0,    0,    0,  327,    0,
    0,    0,   -5,  -12,  -12,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  229,  346,    3,    0,  314,
  314,  314,  346,  346,  346,    0,   43,    0,   67,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  360,    0,    0,   36,    0,    0,
    0,  354,    0,    0,    0,    0,    0,  240,  -11,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   -8,  358,    0,    0,    0,    0,   39,    0,
    0,    0,    0,  367,  368,  369,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   12,    0,    0,    0,
    0,    0,    0,    0,  346,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  370,    0,    0,    0,    0,    0,
    0,    0,    8,    0,  371,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  372,
    0,    0,    0,    0,   55,    0,  373,    0,  374,    0,
    0,    0,    0,    0,    0,  375,   41,  376,    0,  377,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  378,
    0,  -40,    0,    0,    0,    0,    0,    0,    0,    0,
  379,    0,    0,  380,    0,    0,  382,    0,    0,    0,
    0,    0,    0,    0,    0,   10,    0,    0,    0,   -1,
    0,    0,    0,    0,    0,    0,  383,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  384,
    0,    0,    0,   45,    0,    0,    0,    0,    0,    0,
   -6,    0,  -40,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    5,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,
};
static const short yygindex[] = {                         0,
  -69,  -31,  320,    0,    0,    0,    0,    0,    0,  144,
  110,    0,    0,   77,  212,    0,  208,    0,  213, -277,
   88,  -76,    0,    0,    0,   64,  -94, -211, -117,    0,
    0,    0,    0,  340,    0,  -64,  -18,  217,    0,   51,
   34,    0,    0,  124,  198,  270,  329,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  282,    0,    0,  252,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  145,
  107,  146,  294,  108,  134,  106,   92,    0,    0,
};
#define YYTABLESIZE 416
static const short yytable[] = {                         46,
   24,   24,  320,  187,   24,  118,  184,  135,   75,  266,
   93,   75,   91,  122,  125,   76,  143,   92,   76,  205,
   21,  202,  198,  348,  201,  203,  148,  149,  150,  156,
  118,  328,  105,  158,  118,  144,  144,  144,   93,   99,
  109,   22,  107,  213,  114,   97,  101,  102,   28,  178,
  179,  109,   20,   14,   41,  344,  126,  302,   11,   12,
   91,   65,   66,  329,   22,   92,  127,  190,  306,  190,
  285,   22,  252,  354,  257,   20,   23,  258,  236,   28,
  286,  241,   20,  205,  179,  159,  160,   99,   41,   84,
   85,  117,   30,   97,  200,   15,    8,  191,   18,  249,
  144,  144,  133,  134,  165,  166,   19,  200,  247,  206,
  157,  230,  340,  105,   22,  168,  117,  123,  124,  231,
  117,  109,   53,  107,   56,  232,   57,   13,   59,  125,
   16,   62,  233,   58,   70,  207,  208,   71,  292,   67,
   68,   69,  234,  103,  104,  105,  235,  299,  300,   73,
  145,  146,  147,  222,  223,  115,  116,   81,  177,   72,
   82,   87,   28,  307,   83,   89,   86,   90,   91,   92,
   96,   98,  106,   74,  120,  121,  130,  140,   30,  151,
  152,  155,  161,  163,  186,  188,  189,  193,  204,  211,
  118,  214,  216,  217,  229,  219,  242,  244,  237,  240,
  177,  243,  245,  253,  254,  255,  262,  256,  264,  267,
  268,  269,  280,  270,  273,  276,  282,  281,  142,  279,
  289,  283,  288,  293,  318,  290,  295,  133,  134,  294,
  303,  309,  304,  305,  311,  312,  314,  334,  323,  316,
  333,  335,  336,  339,  198,   23,  265,  345,   24,  351,
  346,  319,  343,  352,   24,   25,   26,   27,   28,   29,
   30,   31,   32,   33,   59,   34,   35,   36,  187,  202,
  183,  198,  347,  353,   37,   38,   39,   40,  115,  116,
   24,   24,   41,   42,  125,   24,  115,  225,   43,  205,
   74,   22,   98,   13,   24,  167,   44,   24,   24,  115,
   49,   12,   28,   45,  168,   25,   26,   27,   28,   29,
   30,   31,   32,   33,   91,   34,  125,   36,  169,   92,
  170,  205,   20,   85,   37,  171,  172,   40,   28,   28,
   23,  173,   41,   42,   22,  174,   72,   22,   43,  175,
  176,   28,    3,   22,   28,   20,   44,    4,   20,   28,
   28,  177,  168,  101,   20,  129,   23,   23,  196,    2,
  197,  198,  199,   84,  103,   30,   30,   47,    5,   23,
    6,  196,   23,  197,  198,  199,   17,   67,   65,  128,
   37,  143,  145,  148,  157,  147,  200,   36,  142,  144,
    7,  146,  150,  211,  113,  246,  251,  291,  332,  250,
   94,  350,  248,  261,  187,  119,  180,  212,  298,  325,
  327,  326,  301,  162,  338,  308,
};
static const short yycheck[] = {                         10,
   10,   10,   63,   10,   10,   38,   44,   91,   33,   61,
   58,   33,   10,   83,   10,   40,   61,   10,   40,   10,
   10,   10,   63,   63,  142,  143,  103,  104,  105,   44,
   38,  280,   44,   41,   38,  100,  101,  102,   58,   10,
   72,   10,   44,  161,   76,   10,   65,   66,   10,   10,
   10,   83,   10,  312,   10,  333,  302,  269,  310,  311,
   58,   28,   29,  312,   33,   58,  312,   61,  280,   61,
  302,   40,  190,  351,  303,   33,   10,  306,  173,   41,
  312,  176,   40,  153,   44,  117,  118,   58,   44,  269,
  270,  124,   38,   58,   45,  312,   10,   91,   10,   91,
  165,  166,  311,  312,  123,  124,   10,   45,  185,  264,
  125,  265,   63,  125,   10,   61,  124,   84,   85,  273,
  124,  153,  312,  125,   10,  279,  312,    4,  312,  125,
    7,  312,  286,   24,  312,  290,  291,  312,  256,   30,
   31,   32,  296,   67,   68,   69,  300,  265,  266,  123,
  100,  101,  102,  311,  312,  311,  312,  309,  312,   36,
  309,  309,  124,  281,   41,   10,   43,   10,  312,  258,
  123,  312,  262,  312,   44,  309,  312,   58,  124,  309,
  260,   61,  298,  309,   44,  125,   44,  312,  309,  309,
   38,  291,   10,  312,  309,  312,   42,   10,  312,  312,
  312,  258,  312,  309,   44,  309,  302,  263,   44,   44,
  312,  258,  258,  312,  312,  312,   44,   61,  263,  312,
   93,  309,  309,   61,  285,   93,  295,  311,  312,   44,
   44,   63,   44,   44,   93,   61,  309,   58,  275,  283,
  123,  309,  305,  309,  285,  256,  298,  309,  259,   44,
  289,  312,   93,  125,  264,  266,  267,  268,  269,  270,
  271,  272,  273,  274,  312,  276,  277,  278,  275,  258,
  308,  312,  312,  309,  285,  286,  287,  288,  311,  312,
  290,  291,  293,  294,  280,  291,  311,  312,  299,  280,
  312,  260,  312,   10,  303,  256,  307,  306,  259,  312,
   10,   10,  264,  314,  265,  266,  267,  268,  269,  270,
  271,  272,  273,  274,  312,  276,  312,  278,  279,  312,
  281,  312,  312,   10,  285,  286,  287,  288,  290,  291,
  264,  292,  293,  294,  303,  296,   10,  306,  299,  300,
  301,  303,  256,  312,  306,  303,  307,  261,  306,  311,
  312,  312,  298,  125,  312,   10,  290,  291,  309,    0,
  311,  312,  313,   10,  125,  311,  312,   10,  282,  303,
  284,  309,  306,  311,  312,  313,   10,   10,   10,   10,
   10,   10,   10,   10,   10,   10,   10,   10,   10,   10,
  304,   10,   10,   10,   75,  184,  189,  254,  311,  187,
   61,  338,  186,  206,  135,   77,  125,  156,  264,  303,
  305,  304,  267,  120,  323,  282,
};
#define YYFINAL 1
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 314
#if YYDEBUG
static const char *yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,"'\\n'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,"'!'",0,0,0,0,"'&'",0,"'('","')'","'*'",0,"','","'-'",0,0,0,0,0,0,0,0,0,0,0,
0,"':'",0,0,"'='",0,"'?'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
"'['",0,"']'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"'{'",
"'|'","'}'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"AND","AT","ATTACH","BLOCK","BUILD","CHAR",
"COLONEQ","COMPILE_WITH","CONFIG","DEFFS","DEFINE","DEFOPT","DEFPARAM",
"DEFFLAG","DEFPSEUDO","DEFPSEUDODEV","DEVICE","DEVCLASS","DUMPS","DEVICE_MAJOR",
"ENDFILE","XFILE","FILE_SYSTEM","FLAGS","IDENT","IOCONF","LINKZERO","XMACHINE",
"MAJOR","MAKEOPTIONS","MAXUSERS","MAXPARTITIONS","MINOR","NEEDS_COUNT",
"NEEDS_FLAG","NO","XOBJECT","OBSOLETE","ON","OPTIONS","PACKAGE","PLUSEQ",
"PREFIX","PSEUDO_DEVICE","PSEUDO_ROOT","ROOT","SINGLE","SOURCE","TYPE","VECTOR",
"VERSION","WITH","NUMBER","PATHNAME","QSTRING","WORD","EMPTYSTRING","ENDDEFS",
};
static const char *yyrule[] = {
"$accept : Configuration",
"$$1 :",
"Configuration : topthings machine_spec dev_defs ENDDEFS $$1 specs",
"topthings : topthings topthing",
"topthings :",
"topthing : SOURCE filename '\\n'",
"topthing : BUILD filename '\\n'",
"topthing : '\\n'",
"machine_spec : XMACHINE WORD '\\n'",
"machine_spec : XMACHINE WORD WORD subarches_opt '\\n'",
"machine_spec : IOCONF WORD '\\n'",
"machine_spec : error",
"subarches_opt : subarches",
"subarches_opt :",
"subarches : subarches WORD",
"subarches : WORD",
"file : XFILE filename fopts fflgs rule",
"object : XOBJECT filename fopts oflgs",
"device_major : DEVICE_MAJOR WORD device_major_char device_major_block fopts devnodes",
"device_major_block : BLOCK NUMBER",
"device_major_block :",
"device_major_char : CHAR NUMBER",
"device_major_char :",
"fopts : fexpr",
"fopts :",
"fexpr : fatom",
"fexpr : '!' fatom",
"fexpr : fexpr '&' fexpr",
"fexpr : fexpr '|' fexpr",
"fexpr : '(' fexpr ')'",
"fatom : WORD",
"fflgs : fflgs fflag",
"fflgs :",
"fflag : NEEDS_COUNT",
"fflag : NEEDS_FLAG",
"devnodes : devnodetype ',' devnodeflags",
"devnodes : devnodetype",
"devnodes :",
"devnodetype : SINGLE",
"devnodetype : VECTOR '=' devnode_dims",
"devnode_dims : NUMBER ':' NUMBER",
"devnode_dims : NUMBER",
"devnodeflags : LINKZERO",
"oflgs : oflgs oflag",
"oflgs :",
"oflag : NEEDS_FLAG",
"rule : COMPILE_WITH stringvalue",
"rule :",
"prefix : PREFIX filename",
"prefix : PREFIX",
"dev_defs : dev_defs dev_def",
"dev_defs : dev_defs ENDFILE",
"dev_defs :",
"dev_def : one_def '\\n'",
"dev_def : '\\n'",
"dev_def : error '\\n'",
"one_def : file",
"one_def : object",
"one_def : device_major",
"one_def : prefix",
"one_def : DEVCLASS WORD",
"one_def : DEFFS deffses defoptdeps",
"one_def : DEFINE WORD interface_opt attrs_opt",
"one_def : DEFOPT optfile_opt defopts defoptdeps",
"one_def : DEFFLAG optfile_opt defopts defoptdeps",
"one_def : OBSOLETE DEFFLAG optfile_opt defopts",
"one_def : DEFPARAM optfile_opt defopts defoptdeps",
"one_def : OBSOLETE DEFPARAM optfile_opt defopts",
"one_def : DEVICE devbase interface_opt attrs_opt",
"one_def : ATTACH devbase AT atlist devattach_opt attrs_opt",
"one_def : MAXPARTITIONS NUMBER",
"one_def : MAXUSERS NUMBER NUMBER NUMBER",
"one_def : MAKEOPTIONS condmkopt_list",
"one_def : DEFPSEUDO devbase interface_opt attrs_opt",
"one_def : DEFPSEUDODEV devbase interface_opt attrs_opt",
"one_def : MAJOR '{' majorlist '}'",
"one_def : VERSION NUMBER",
"atlist : atlist ',' atname",
"atlist : atname",
"atname : WORD",
"atname : ROOT",
"deffses : deffses deffs",
"deffses : deffs",
"deffs : WORD",
"defoptdeps : ':' optdeps",
"defoptdeps :",
"optdeps : optdeps ',' optdep",
"optdeps : optdep",
"optdep : WORD",
"defopts : defopts defopt",
"defopts : defopt",
"defopt : WORD",
"defopt : WORD '=' value",
"defopt : WORD COLONEQ value",
"defopt : WORD '=' value COLONEQ value",
"devbase : WORD",
"devattach_opt : WITH WORD",
"devattach_opt :",
"interface_opt : '{' loclist_opt '}'",
"interface_opt :",
"loclist_opt : loclist",
"loclist_opt :",
"loclist : locdef ',' loclist",
"loclist : locdef",
"locdef : locname locdefault",
"locdef : locname",
"locdef : '[' locname locdefault ']'",
"locdef : locname '[' NUMBER ']'",
"locdef : locname '[' NUMBER ']' locdefaults",
"locdef : '[' locname '[' NUMBER ']' locdefaults ']'",
"locname : WORD",
"locname : QSTRING",
"locdefault : '=' value",
"locdefaults : '=' '{' values '}'",
"optfile_opt : filename",
"optfile_opt :",
"filename : QSTRING",
"filename : PATHNAME",
"value : QSTRING",
"value : WORD",
"value : EMPTYSTRING",
"value : signed_number",
"stringvalue : QSTRING",
"stringvalue : WORD",
"values : value ',' values",
"values : value",
"signed_number : NUMBER",
"signed_number : '-' NUMBER",
"attrs_opt : ':' attrs",
"attrs_opt :",
"attrs : attrs ',' attr",
"attrs : attr",
"attr : WORD",
"majorlist : majorlist ',' majordef",
"majorlist : majordef",
"majordef : devbase '=' NUMBER",
"specs : specs spec",
"specs :",
"spec : config_spec '\\n'",
"spec : '\\n'",
"spec : error '\\n'",
"config_spec : one_def",
"config_spec : NO FILE_SYSTEM no_fs_list",
"config_spec : FILE_SYSTEM fs_list",
"config_spec : NO MAKEOPTIONS no_mkopt_list",
"config_spec : MAKEOPTIONS mkopt_list",
"config_spec : NO OPTIONS no_opt_list",
"config_spec : OPTIONS opt_list",
"config_spec : MAXUSERS NUMBER",
"config_spec : IDENT stringvalue",
"config_spec : CONFIG conf root_spec sysparam_list",
"config_spec : NO CONFIG WORD",
"config_spec : NO PSEUDO_DEVICE WORD",
"config_spec : PSEUDO_DEVICE WORD npseudo",
"config_spec : PSEUDO_ROOT device_instance",
"config_spec : NO device_instance AT attachment",
"config_spec : NO DEVICE AT attachment",
"config_spec : NO device_instance",
"config_spec : device_instance AT attachment locators flags_opt",
"fs_list : fs_list ',' fsoption",
"fs_list : fsoption",
"fsoption : WORD",
"no_fs_list : no_fs_list ',' no_fsoption",
"no_fs_list : no_fsoption",
"no_fsoption : WORD",
"mkopt_list : mkopt_list ',' mkoption",
"mkopt_list : mkoption",
"mkvarname : QSTRING",
"mkvarname : WORD",
"mkoption : mkvarname '=' value",
"mkoption : mkvarname PLUSEQ value",
"condmkopt_list : condmkopt_list ',' condmkoption",
"condmkopt_list : condmkoption",
"condmkoption : fexpr mkvarname PLUSEQ value",
"no_mkopt_list : no_mkopt_list ',' no_mkoption",
"no_mkopt_list : no_mkoption",
"no_mkoption : WORD",
"opt_list : opt_list ',' option",
"opt_list : option",
"option : WORD",
"option : WORD '=' value",
"no_opt_list : no_opt_list ',' no_option",
"no_opt_list : no_option",
"no_option : WORD",
"conf : WORD",
"root_spec : ROOT on_opt dev_spec fs_spec_opt",
"fs_spec_opt : TYPE fs_spec",
"fs_spec_opt :",
"fs_spec : '?'",
"fs_spec : WORD",
"sysparam_list : sysparam_list sysparam",
"sysparam_list :",
"sysparam : DUMPS on_opt dev_spec",
"dev_spec : '?'",
"dev_spec : WORD",
"dev_spec : major_minor",
"major_minor : MAJOR NUMBER MINOR NUMBER",
"on_opt : ON",
"on_opt :",
"npseudo : NUMBER",
"npseudo :",
"device_instance : WORD '*'",
"device_instance : WORD",
"attachment : ROOT",
"attachment : WORD '?'",
"attachment : WORD",
"locators : locators locator",
"locators :",
"locator : WORD values",
"locator : WORD '?'",
"flags_opt : FLAGS NUMBER",
"flags_opt :",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 500
#define YYMAXDEPTH  500
#endif
#endif

#define YYINITSTACKSIZE 500

typedef struct {
    unsigned stacksize;
    short    *s_base;
    short    *s_mark;
    short    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 615 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"

void
yyerror(const char *s)
{

	cfgerror("%s", s);
}

/*
 * Cleanup procedure after syntax error: release any nvlists
 * allocated during parsing the current line.
 */
static void
cleanup(void)
{
	struct nvlist **np;
	int i;

	for (np = alloc, i = adepth; --i >= 0; np++)
		nvfree(*np);
	adepth = 0;
}

static void
setmachine(const char *mch, const char *mcharch, struct nvlist *mchsubarches,
	int isioconf)
{
	char buf[MAXPATHLEN];
	struct nvlist *nv;

	if (isioconf) {
		fprintf(stderr, "WARNING: ioconf is an experimental feature\n");
		if (include(_PATH_DEVNULL, ENDDEFS, 0, 0) != 0)
			exit(1);
		ioconfname = mch;
		return;
	}

	machine = mch;
	machinearch = mcharch;
	machinesubarches = mchsubarches;

	/*
	 * Define attributes for all the given names
	 */
	if (defattr(machine, NULL, NULL, 0) != 0 ||
	    (machinearch != NULL &&
	     defattr(machinearch, NULL, NULL, 0) != 0))
		exit(1);
	for (nv = machinesubarches; nv != NULL; nv = nv->nv_next) {
		if (defattr(nv->nv_name, NULL, NULL, 0) != 0)
			exit(1);
	}

	/*
	 * Set up the file inclusion stack.  This empty include tells
	 * the parser there are no more device definitions coming.
	 */
	if (include(_PATH_DEVNULL, ENDDEFS, 0, 0) != 0)
		exit(1);

	/* Include arch/${MACHINE}/conf/files.${MACHINE} */
	(void)snprintf(buf, sizeof(buf), "arch/%s/conf/files.%s",
	    machine, machine);
	if (include(buf, ENDFILE, 0, 0) != 0)
		exit(1);

	/* Include any arch/${MACHINE_SUBARCH}/conf/files.${MACHINE_SUBARCH} */
	for (nv = machinesubarches; nv != NULL; nv = nv->nv_next) {
		(void)snprintf(buf, sizeof(buf), "arch/%s/conf/files.%s",
		    nv->nv_name, nv->nv_name);
		if (include(buf, ENDFILE, 0, 0) != 0)
			exit(1);
	}

	/* Include any arch/${MACHINE_ARCH}/conf/files.${MACHINE_ARCH} */
	if (machinearch != NULL)
		(void)snprintf(buf, sizeof(buf), "arch/%s/conf/files.%s",
		    machinearch, machinearch);
	else
		strlcpy(buf, _PATH_DEVNULL, sizeof(buf));
	if (include(buf, ENDFILE, 0, 0) != 0)
		exit(1);

	/*
	 * Include the global conf/files.  As the last thing
	 * pushed on the stack, it will be processed first.
	 */
	if (include("conf/files", ENDFILE, 0, 0) != 0)
		exit(1);

	oktopackage = 1;
}

static void
check_maxpart(void)
{

	if (maxpartitions <= 0 && ioconfname == NULL) {
		stop("cannot proceed without maxpartitions specifier");
	}
}

static void
check_version(void)
{
	/*
	 * In essence, version is 0 and is not supported anymore
	 */
	if (version < CONFIG_MINVERSION)
		stop("your sources are out of date -- please update.");
}

static void
app(struct nvlist *p, struct nvlist *q)
{
	while (p->nv_next)
		p = p->nv_next;
	p->nv_next = q;
}

static struct nvlist *
mk_nsis(const char *name, int count, struct nvlist *adefs, int opt)
{
	struct nvlist *defs = adefs;
	struct nvlist **p;
	char buf[200];
	int i;

	if (count <= 0) {
		fprintf(stderr, "config: array with <= 0 size: %s\n", name);
		exit(1);
	}
	p = &defs;
	for(i = 0; i < count; i++) {
		if (*p == NULL)
			*p = new_s("0");
		snprintf(buf, sizeof(buf), "%s%c%d", name, ARRCHR, i);
		(*p)->nv_name = i == 0 ? name : intern(buf);
		(*p)->nv_num = i > 0 || opt;
		p = &(*p)->nv_next;
	}
	*p = 0;
	return defs;
}


static struct nvlist *
mk_ns(const char *name, struct nvlist *vals)
{
	struct nvlist *p;
	char buf[200];
	int i;

	for(i = 0, p = vals; p; i++, p = p->nv_next) {
		snprintf(buf, sizeof(buf), "%s%c%d", name, ARRCHR, i);
		p->nv_name = i == 0 ? name : intern(buf);
	}
	return vals;
}

#line 930 "gram.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    short *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return -1;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = data->s_mark - data->s_base;
    newss = (short *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return -1;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return -1;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack)) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    yyerror("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 1:
#line 178 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ check_maxpart(); check_version(); }
break;
case 5:
#line 186 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ if (!srcdir) srcdir = yystack.l_mark[-1].str; }
break;
case 6:
#line 187 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ if (!builddir) builddir = yystack.l_mark[-1].str; }
break;
case 8:
#line 191 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ setmachine(yystack.l_mark[-1].str,NULL,NULL,0); }
break;
case 9:
#line 192 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ setmachine(yystack.l_mark[-3].str,yystack.l_mark[-2].str,yystack.l_mark[-1].list,0); }
break;
case 10:
#line 193 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ setmachine(yystack.l_mark[-1].str,NULL,NULL,1); }
break;
case 11:
#line 194 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ stop("cannot proceed without machine or ioconf specifier"); }
break;
case 13:
#line 198 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.list = NULL; }
break;
case 14:
#line 201 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.list = new_nx(yystack.l_mark[0].str, yystack.l_mark[-1].list); }
break;
case 15:
#line 202 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.list = new_n(yystack.l_mark[0].str); }
break;
case 16:
#line 208 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ addfile(yystack.l_mark[-3].str, yystack.l_mark[-2].list, yystack.l_mark[-1].val, yystack.l_mark[0].str); }
break;
case 17:
#line 211 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ addobject(yystack.l_mark[-2].str, yystack.l_mark[-1].list, yystack.l_mark[0].val); }
break;
case 18:
#line 215 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ adddevm(yystack.l_mark[-4].str, yystack.l_mark[-3].val, yystack.l_mark[-2].val, yystack.l_mark[-1].list, yystack.l_mark[0].list); }
break;
case 19:
#line 218 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.val = yystack.l_mark[0].num.val; }
break;
case 20:
#line 219 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.val = -1; }
break;
case 21:
#line 222 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.val = yystack.l_mark[0].num.val; }
break;
case 22:
#line 223 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.val = -1; }
break;
case 23:
#line 227 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.list = yystack.l_mark[0].list; }
break;
case 24:
#line 228 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.list = NULL; }
break;
case 25:
#line 231 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.list = yystack.l_mark[0].list; }
break;
case 26:
#line 232 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.list = fx_not(yystack.l_mark[0].list); }
break;
case 27:
#line 233 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.list = fx_and(yystack.l_mark[-2].list, yystack.l_mark[0].list); }
break;
case 28:
#line 234 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.list = fx_or(yystack.l_mark[-2].list, yystack.l_mark[0].list); }
break;
case 29:
#line 235 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.list = yystack.l_mark[-1].list; }
break;
case 30:
#line 238 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.list = fx_atom(yystack.l_mark[0].str); }
break;
case 31:
#line 241 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.val = yystack.l_mark[-1].val | yystack.l_mark[0].val; }
break;
case 32:
#line 242 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.val = 0; }
break;
case 33:
#line 245 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.val = FI_NEEDSCOUNT; }
break;
case 34:
#line 246 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.val = FI_NEEDSFLAG; }
break;
case 35:
#line 249 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.list = nvcat(yystack.l_mark[-2].list, yystack.l_mark[0].list); }
break;
case 36:
#line 250 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.list = yystack.l_mark[0].list; }
break;
case 37:
#line 251 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.list = new_s("DEVNODE_DONTBOTHER"); }
break;
case 38:
#line 254 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.list = new_s("DEVNODE_SINGLE"); }
break;
case 39:
#line 255 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.list = nvcat(new_s("DEVNODE_VECTOR"), yystack.l_mark[0].list); }
break;
case 40:
#line 258 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ struct nvlist *__nv1, *__nv2;
					  __nv1 = new_i(yystack.l_mark[-2].num.val);
					  __nv2 = new_i(yystack.l_mark[0].num.val);
					  yyval.list = nvcat(__nv1, __nv2); }
break;
case 41:
#line 262 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.list = new_i(yystack.l_mark[0].num.val); }
break;
case 42:
#line 265 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.list = new_s("DEVNODE_FLAG_LINKZERO");}
break;
case 43:
#line 268 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.val = yystack.l_mark[-1].val | yystack.l_mark[0].val; }
break;
case 44:
#line 269 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.val = 0; }
break;
case 45:
#line 272 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.val = OI_NEEDSFLAG; }
break;
case 46:
#line 275 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.str = yystack.l_mark[0].str; }
break;
case 47:
#line 276 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.str = NULL; }
break;
case 48:
#line 279 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ prefix_push(yystack.l_mark[0].str); }
break;
case 49:
#line 280 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ prefix_pop(); }
break;
case 51:
#line 287 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ enddefs(); checkfiles(); }
break;
case 53:
#line 291 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ adepth = 0; }
break;
case 55:
#line 293 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ cleanup(); }
break;
case 58:
#line 298 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ do_devsw = 1; }
break;
case 60:
#line 300 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ (void)defattr(yystack.l_mark[0].str, NULL, NULL, 1); }
break;
case 61:
#line 301 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ deffilesystem(yystack.l_mark[-1].list, yystack.l_mark[0].list); }
break;
case 62:
#line 303 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ (void)defattr(yystack.l_mark[-2].str, yystack.l_mark[-1].list, yystack.l_mark[0].list, 0); }
break;
case 63:
#line 305 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ defoption(yystack.l_mark[-2].str, yystack.l_mark[-1].list, yystack.l_mark[0].list); }
break;
case 64:
#line 307 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ defflag(yystack.l_mark[-2].str, yystack.l_mark[-1].list, yystack.l_mark[0].list, 0); }
break;
case 65:
#line 309 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ defflag(yystack.l_mark[-1].str, yystack.l_mark[0].list, NULL, 1); }
break;
case 66:
#line 311 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ defparam(yystack.l_mark[-2].str, yystack.l_mark[-1].list, yystack.l_mark[0].list, 0); }
break;
case 67:
#line 313 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ defparam(yystack.l_mark[-1].str, yystack.l_mark[0].list, NULL, 1); }
break;
case 68:
#line 315 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ defdev(yystack.l_mark[-2].devb, yystack.l_mark[-1].list, yystack.l_mark[0].list, 0); }
break;
case 69:
#line 317 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ defdevattach(yystack.l_mark[-1].deva, yystack.l_mark[-4].devb, yystack.l_mark[-2].list, yystack.l_mark[0].list); }
break;
case 70:
#line 318 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ maxpartitions = yystack.l_mark[0].num.val; }
break;
case 71:
#line 319 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ setdefmaxusers(yystack.l_mark[-2].num.val, yystack.l_mark[-1].num.val, yystack.l_mark[0].num.val); }
break;
case 73:
#line 323 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ defdev(yystack.l_mark[-2].devb, yystack.l_mark[-1].list, yystack.l_mark[0].list, 1); }
break;
case 74:
#line 325 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ defdev(yystack.l_mark[-2].devb, yystack.l_mark[-1].list, yystack.l_mark[0].list, 2); }
break;
case 76:
#line 327 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ setversion(yystack.l_mark[0].num.val); }
break;
case 77:
#line 330 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.list = new_nx(yystack.l_mark[0].str, yystack.l_mark[-2].list); }
break;
case 78:
#line 331 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.list = new_n(yystack.l_mark[0].str); }
break;
case 79:
#line 334 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.str = yystack.l_mark[0].str; }
break;
case 80:
#line 335 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.str = NULL; }
break;
case 81:
#line 338 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.list = new_nx(yystack.l_mark[0].str, yystack.l_mark[-1].list); }
break;
case 82:
#line 339 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.list = new_n(yystack.l_mark[0].str); }
break;
case 83:
#line 342 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.str = yystack.l_mark[0].str; }
break;
case 84:
#line 345 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.list = yystack.l_mark[0].list; }
break;
case 85:
#line 346 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.list = NULL; }
break;
case 86:
#line 349 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.list = new_nx(yystack.l_mark[0].str, yystack.l_mark[-2].list); }
break;
case 87:
#line 350 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.list = new_n(yystack.l_mark[0].str); }
break;
case 88:
#line 353 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.str = yystack.l_mark[0].str; }
break;
case 89:
#line 356 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.list = nvcat(yystack.l_mark[0].list, yystack.l_mark[-1].list); }
break;
case 90:
#line 357 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.list = yystack.l_mark[0].list; }
break;
case 91:
#line 360 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.list = new_n(yystack.l_mark[0].str); }
break;
case 92:
#line 361 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.list = new_ns(yystack.l_mark[-2].str, yystack.l_mark[0].str); }
break;
case 93:
#line 362 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{
						struct nvlist *__nv =
						    new_n(yystack.l_mark[-2].str);
						yyval.list = new_nsx("", yystack.l_mark[0].str, __nv);
					}
break;
case 94:
#line 367 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{
						struct nvlist *__nv =
						    new_n(yystack.l_mark[-4].str);
						yyval.list = new_nsx("", yystack.l_mark[0].str, __nv);
					}
break;
case 95:
#line 374 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.devb = getdevbase(yystack.l_mark[0].str); }
break;
case 96:
#line 377 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.deva = getdevattach(yystack.l_mark[0].str); }
break;
case 97:
#line 378 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.deva = NULL; }
break;
case 98:
#line 381 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.list = new_nx("", yystack.l_mark[-1].list); }
break;
case 99:
#line 382 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.list = NULL; }
break;
case 100:
#line 385 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.list = yystack.l_mark[0].list; }
break;
case 101:
#line 386 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.list = NULL; }
break;
case 102:
#line 390 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.list = yystack.l_mark[-2].list; app(yystack.l_mark[-2].list, yystack.l_mark[0].list); }
break;
case 103:
#line 391 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.list = yystack.l_mark[0].list; }
break;
case 104:
#line 395 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.list = new_nsi(yystack.l_mark[-1].str, yystack.l_mark[0].str, 0); }
break;
case 105:
#line 396 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.list = new_nsi(yystack.l_mark[0].str, NULL, 0); }
break;
case 106:
#line 397 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.list = new_nsi(yystack.l_mark[-2].str, yystack.l_mark[-1].str, 1); }
break;
case 107:
#line 398 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.list = mk_nsis(yystack.l_mark[-3].str, yystack.l_mark[-1].num.val, NULL, 0); }
break;
case 108:
#line 400 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.list = mk_nsis(yystack.l_mark[-4].str, yystack.l_mark[-2].num.val, yystack.l_mark[0].list, 0); }
break;
case 109:
#line 402 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.list = mk_nsis(yystack.l_mark[-5].str, yystack.l_mark[-3].num.val, yystack.l_mark[-1].list, 1); }
break;
case 110:
#line 405 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.str = yystack.l_mark[0].str; }
break;
case 111:
#line 406 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.str = yystack.l_mark[0].str; }
break;
case 112:
#line 409 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.str = yystack.l_mark[0].str; }
break;
case 113:
#line 412 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.list = yystack.l_mark[-1].list; }
break;
case 114:
#line 415 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.str = yystack.l_mark[0].str; }
break;
case 115:
#line 416 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.str = NULL; }
break;
case 116:
#line 419 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.str = yystack.l_mark[0].str; }
break;
case 117:
#line 420 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.str = yystack.l_mark[0].str; }
break;
case 118:
#line 423 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.str = yystack.l_mark[0].str; }
break;
case 119:
#line 424 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.str = yystack.l_mark[0].str; }
break;
case 120:
#line 425 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.str = yystack.l_mark[0].str; }
break;
case 121:
#line 426 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ char bf[40];
					  (void)snprintf(bf, sizeof(bf),
					      FORMAT(yystack.l_mark[0].num), (long long)yystack.l_mark[0].num.val);
					  yyval.str = intern(bf); }
break;
case 122:
#line 432 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.str = yystack.l_mark[0].str; }
break;
case 123:
#line 433 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.str = yystack.l_mark[0].str; }
break;
case 124:
#line 436 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.list = new_sx(yystack.l_mark[-2].str, yystack.l_mark[0].list); }
break;
case 125:
#line 437 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.list = new_s(yystack.l_mark[0].str); }
break;
case 126:
#line 440 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.num = yystack.l_mark[0].num; }
break;
case 127:
#line 441 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.num.fmt = yystack.l_mark[0].num.fmt; yyval.num.val = -yystack.l_mark[0].num.val; }
break;
case 128:
#line 444 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.list = yystack.l_mark[0].list; }
break;
case 129:
#line 445 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.list = NULL; }
break;
case 130:
#line 448 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.list = new_px(yystack.l_mark[0].attr, yystack.l_mark[-2].list); }
break;
case 131:
#line 449 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.list = new_p(yystack.l_mark[0].attr); }
break;
case 132:
#line 452 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.attr = getattr(yystack.l_mark[0].str); }
break;
case 135:
#line 459 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ setmajor(yystack.l_mark[-2].devb, yystack.l_mark[0].num.val); }
break;
case 138:
#line 470 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ adepth = 0; }
break;
case 140:
#line 472 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ cleanup(); }
break;
case 148:
#line 482 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ setmaxusers(yystack.l_mark[0].num.val); }
break;
case 149:
#line 483 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ setident(yystack.l_mark[0].str); }
break;
case 150:
#line 485 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ addconf(&conf); }
break;
case 151:
#line 486 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ delconf(yystack.l_mark[0].str); }
break;
case 152:
#line 487 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ delpseudo(yystack.l_mark[0].str); }
break;
case 153:
#line 488 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ addpseudo(yystack.l_mark[-1].str, yystack.l_mark[0].val); }
break;
case 154:
#line 489 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ addpseudoroot(yystack.l_mark[0].str); }
break;
case 155:
#line 491 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ deldevi(yystack.l_mark[-2].str, yystack.l_mark[0].str); }
break;
case 156:
#line 492 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ deldeva(yystack.l_mark[0].str); }
break;
case 157:
#line 493 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ deldev(yystack.l_mark[0].str); }
break;
case 158:
#line 495 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ adddev(yystack.l_mark[-4].str, yystack.l_mark[-2].str, yystack.l_mark[-1].list, yystack.l_mark[0].val); }
break;
case 161:
#line 502 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ addfsoption(yystack.l_mark[0].str); }
break;
case 164:
#line 509 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ delfsoption(yystack.l_mark[0].str); }
break;
case 167:
#line 516 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.str = yystack.l_mark[0].str; }
break;
case 168:
#line 517 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.str = yystack.l_mark[0].str; }
break;
case 169:
#line 520 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ addmkoption(yystack.l_mark[-2].str, yystack.l_mark[0].str); }
break;
case 170:
#line 521 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ appendmkoption(yystack.l_mark[-2].str, yystack.l_mark[0].str); }
break;
case 173:
#line 528 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ appendcondmkoption(yystack.l_mark[-3].list, yystack.l_mark[-2].str, yystack.l_mark[0].str); }
break;
case 176:
#line 535 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ delmkoption(yystack.l_mark[0].str); }
break;
case 179:
#line 542 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ addoption(yystack.l_mark[0].str, NULL); }
break;
case 180:
#line 543 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ addoption(yystack.l_mark[-2].str, yystack.l_mark[0].str); }
break;
case 183:
#line 550 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ deloption(yystack.l_mark[0].str); }
break;
case 184:
#line 553 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ conf.cf_name = yystack.l_mark[0].str;
					    conf.cf_lineno = currentline();
					    conf.cf_fstype = NULL;
					    conf.cf_root = NULL;
					    conf.cf_dump = NULL; }
break;
case 185:
#line 561 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ setconf(&conf.cf_root, "root", yystack.l_mark[-1].list); }
break;
case 186:
#line 564 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ setfstype(&conf.cf_fstype, yystack.l_mark[0].str); }
break;
case 188:
#line 568 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.str = intern("?"); }
break;
case 189:
#line 569 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.str = yystack.l_mark[0].str; }
break;
case 192:
#line 576 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ setconf(&conf.cf_dump, "dumps", yystack.l_mark[0].list); }
break;
case 193:
#line 579 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.list = new_si(intern("?"), NODEV); }
break;
case 194:
#line 580 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.list = new_si(yystack.l_mark[0].str, NODEV); }
break;
case 195:
#line 581 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.list = new_si(NULL, yystack.l_mark[0].val); }
break;
case 196:
#line 584 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.val = makedev(yystack.l_mark[-2].num.val, yystack.l_mark[0].num.val); }
break;
case 199:
#line 590 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.val = yystack.l_mark[0].num.val; }
break;
case 200:
#line 591 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.val = 1; }
break;
case 201:
#line 594 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.str = starref(yystack.l_mark[-1].str); }
break;
case 202:
#line 595 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.str = yystack.l_mark[0].str; }
break;
case 203:
#line 598 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.str = NULL; }
break;
case 204:
#line 599 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.str = wildref(yystack.l_mark[-1].str); }
break;
case 205:
#line 600 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.str = yystack.l_mark[0].str; }
break;
case 206:
#line 603 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.list = yystack.l_mark[0].list; app(yystack.l_mark[0].list, yystack.l_mark[-1].list); }
break;
case 207:
#line 604 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.list = NULL; }
break;
case 208:
#line 607 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.list = mk_ns(yystack.l_mark[-1].str, yystack.l_mark[0].list); }
break;
case 209:
#line 608 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.list = new_ns(yystack.l_mark[-1].str, NULL); }
break;
case 210:
#line 611 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.val = yystack.l_mark[0].num.val; }
break;
case 211:
#line 612 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/config/../../usr.bin/config/gram.y"
	{ yyval.val = 0; }
break;
#line 1822 "gram.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = 0;
                if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
                if (!yys) yys = "illegal-symbol";
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (short) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    yyerror("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
