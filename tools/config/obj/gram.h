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
extern YYSTYPE yylval;
