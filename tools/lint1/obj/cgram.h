#define T_LBRACE 257
#define T_RBRACE 258
#define T_LBRACK 259
#define T_RBRACK 260
#define T_LPARN 261
#define T_RPARN 262
#define T_STROP 263
#define T_UNOP 264
#define T_INCDEC 265
#define T_SIZEOF 266
#define T_ALIGNOF 267
#define T_MULT 268
#define T_DIVOP 269
#define T_ADDOP 270
#define T_SHFTOP 271
#define T_RELOP 272
#define T_EQOP 273
#define T_AND 274
#define T_XOR 275
#define T_OR 276
#define T_LOGAND 277
#define T_LOGOR 278
#define T_QUEST 279
#define T_COLON 280
#define T_ASSIGN 281
#define T_OPASS 282
#define T_COMMA 283
#define T_SEMI 284
#define T_ELLIPSE 285
#define T_REAL 286
#define T_IMAG 287
#define T_SCLASS 288
#define T_TYPE 289
#define T_QUAL 290
#define T_SOU 291
#define T_ENUM 292
#define T_CASE 293
#define T_DEFAULT 294
#define T_IF 295
#define T_ELSE 296
#define T_SWITCH 297
#define T_DO 298
#define T_WHILE 299
#define T_FOR 300
#define T_GOTO 301
#define T_CONTINUE 302
#define T_BREAK 303
#define T_RETURN 304
#define T_ASM 305
#define T_SYMBOLRENAME 306
#define T_PACKED 307
#define T_ATTRIBUTE 308
#define T_AT_ALIGNED 309
#define T_AT_DEPRECATED 310
#define T_AT_MAY_ALIAS 311
#define T_AT_PACKED 312
#define T_AT_TUINION 313
#define T_AT_TUNION 314
#define T_AT_UNUSED 315
#define T_NAME 316
#define T_TYPENAME 317
#define T_CON 318
#define T_STRING 319
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union {
	int	y_int;
	val_t	*y_val;
	sbuf_t	*y_sb;
	sym_t	*y_sym;
	op_t	y_op;
	scl_t	y_scl;
	tspec_t	y_tspec;
	tqual_t	y_tqual;
	type_t	*y_type;
	tnode_t	*y_tnode;
	range_t	y_range;
	strg_t	*y_strg;
	pqinf_t	*y_pqinf;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
extern YYSTYPE yylval;
