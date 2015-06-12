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

#line 4 "/home/licj/software/netBSD/source/netBSD/usr/src/crypto/external/bsd/heimdal/dist/lib/sl/slc-gram.y"
/*
 * Copyright (c) 2004-2006 Kungliga Tekniska Högskolan
 * (Royal Institute of Technology, Stockholm, Sweden).
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the Institute nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE INSTITUTE AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE INSTITUTE OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

#include <config.h>

#include <stdio.h>
#include <stdlib.h>
#include <err.h>
#include <ctype.h>
#include <limits.h>
#include <getarg.h>
#include <vers.h>
#include <roken.h>

#include "slc.h"
extern FILE *yyin;
extern struct assignment *assignment;

/* Declarations for Bison:
 */
#define YYMALLOC        malloc
#define YYFREE          free

#line 59 "/home/licj/software/netBSD/source/netBSD/usr/src/crypto/external/bsd/heimdal/dist/lib/sl/slc-gram.y"
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union {
	char *string;
	struct assignment *assignment;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 90 "slc-gram.c"

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


#define LITERAL 257
#define STRING 258
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    2,    2,    1,    1,
};
static const short yylen[] = {                            2,
    1,    2,    1,    3,    5,
};
static const short yydefred[] = {                         0,
    0,    0,    0,    1,    0,    2,    4,    0,    0,    5,
};
static const short yydgoto[] = {                          2,
    3,    4,
};
static const short yysindex[] = {                      -254,
  -57,    0, -254,    0, -123,    0,    0, -254, -120,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    1,    0,    0,    0,    0,    0,    0,    0,
};
static const short yygindex[] = {                         0,
    0,   -1,
};
#define YYTABLESIZE 135
static const short yytable[] = {                          8,
    3,    6,    1,    5,   10,    0,    9,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    3,    0,    0,    0,    0,
    0,    0,    0,    0,    7,
};
static const short yycheck[] = {                        123,
    0,    3,  257,   61,  125,   -1,    8,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  125,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  258,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 258
#if YYDEBUG
static const char *yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"'='",0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,"'{'",0,"'}'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"LITERAL","STRING",
};
static const char *yyrule[] = {
"$accept : start",
"start : assignments",
"assignments : assignment assignments",
"assignments : assignment",
"assignment : LITERAL '=' STRING",
"assignment : LITERAL '=' '{' assignments '}'",

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
#line 107 "/home/licj/software/netBSD/source/netBSD/usr/src/crypto/external/bsd/heimdal/dist/lib/sl/slc-gram.y"
char *filename;
FILE *cfile, *hfile;
int error_flag;
struct assignment *assignment;


static void
ex(struct assignment *a, const char *fmt, ...)
{
    va_list ap;
    fprintf(stderr, "%s:%d: ", a->name, a->lineno);
    va_start(ap, fmt);
    vfprintf(stderr, fmt, ap);
    va_end(ap);
    fprintf(stderr, "\n");
}



static int
check_option(struct assignment *as)
{
    struct assignment *a;
    int seen_long = 0;
    int seen_name = 0;
    int seen_short = 0;
    int seen_type = 0;
    int seen_argument = 0;
    int seen_help = 0;
    int seen_default = 0;
    int ret = 0;

    for(a = as; a != NULL; a = a->next) {
	if(strcmp(a->name, "long") == 0)
	    seen_long++;
	else if(strcmp(a->name, "short") == 0)
	    seen_short++;
	else if(strcmp(a->name, "name") == 0)
	    seen_name++;
	else if(strcmp(a->name, "type") == 0)
	    seen_type++;
	else if(strcmp(a->name, "argument") == 0)
	    seen_argument++;
	else if(strcmp(a->name, "help") == 0)
	    seen_help++;
	else if(strcmp(a->name, "default") == 0)
	    seen_default++;
	else {
	    ex(a, "unknown name %s", a->name);
	    ret++;
	}
    }
    if(seen_long == 0 && seen_short == 0) {
	ex(as, "neither long nor short option");
	ret++;
    }
    if (seen_long == 0 && seen_name == 0) {
	ex(as, "either of long or name option must be used");
	ret++;
    }
    if(seen_long > 1) {
	ex(as, "multiple long options");
	ret++;
    }
    if(seen_short > 1) {
	ex(as, "multiple short options");
	ret++;
    }
    if(seen_type > 1) {
	ex(as, "multiple types");
	ret++;
    }
    if(seen_argument > 1) {
	ex(as, "multiple arguments");
	ret++;
    }
    if(seen_help > 1) {
	ex(as, "multiple help strings");
	ret++;
    }
    if(seen_default > 1) {
	ex(as, "multiple default values");
	ret++;
    }
    return ret;
}

static int
check_command(struct assignment *as)
{
	struct assignment *a;
	int seen_name = 0;
	int seen_function = 0;
	int seen_help = 0;
	int seen_argument = 0;
	int seen_minargs = 0;
	int seen_maxargs = 0;
	int ret = 0;
	for(a = as; a != NULL; a = a->next) {
		if(strcmp(a->name, "name") == 0)
			seen_name++;
		else if(strcmp(a->name, "function") == 0) {
			seen_function++;
		} else if(strcmp(a->name, "option") == 0)
			ret += check_option(a->u.assignment);
		else if(strcmp(a->name, "help") == 0) {
			seen_help++;
		} else if(strcmp(a->name, "argument") == 0) {
			seen_argument++;
		} else if(strcmp(a->name, "min_args") == 0) {
			seen_minargs++;
		} else if(strcmp(a->name, "max_args") == 0) {
			seen_maxargs++;
		} else {
			ex(a, "unknown name: %s", a->name);
			ret++;
		}
	}
	if(seen_name == 0) {
		ex(as, "no command name");
		ret++;
	}
	if(seen_function > 1) {
		ex(as, "multiple function names");
		ret++;
	}
	if(seen_help > 1) {
		ex(as, "multiple help strings");
		ret++;
	}
	if(seen_argument > 1) {
		ex(as, "multiple argument strings");
		ret++;
	}
	if(seen_minargs > 1) {
		ex(as, "multiple min_args strings");
		ret++;
	}
	if(seen_maxargs > 1) {
		ex(as, "multiple max_args strings");
		ret++;
	}
	
	return ret;
}

static int
check(struct assignment *as)
{
    struct assignment *a;
    int ret = 0;
    for(a = as; a != NULL; a = a->next) {
	if(strcmp(a->name, "command")) {
	    fprintf(stderr, "unknown type %s line %d\n", a->name, a->lineno);
	    ret++;
	    continue;
	}
	if(a->type != a_assignment) {
	    fprintf(stderr, "bad command definition %s line %d\n", a->name, a->lineno);
	    ret++;
	    continue;
	}
	ret += check_command(a->u.assignment);
    }
    return ret;
}

static struct assignment *
find_next(struct assignment *as, const char *name)
{
    for(as = as->next; as != NULL; as = as->next) {
	if(strcmp(as->name, name) == 0)
	    return as;
    }
    return NULL;
}

static struct assignment *
find(struct assignment *as, const char *name)
{
    for(; as != NULL; as = as->next) {
	if(strcmp(as->name, name) == 0)
	    return as;
    }
    return NULL;
}

static void
space(FILE *f, int level)
{
    fprintf(f, "%*.*s", level * 4, level * 4, " ");
}

static void
cprint(int level, const char *fmt, ...)
{
    va_list ap;
    va_start(ap, fmt);
    space(cfile, level);
    vfprintf(cfile, fmt, ap);
    va_end(ap);
}

static void
hprint(int level, const char *fmt, ...)
{
    va_list ap;
    va_start(ap, fmt);
    space(hfile, level);
    vfprintf(hfile, fmt, ap);
    va_end(ap);
}

static void gen_name(char *str);

static void
gen_command(struct assignment *as)
{
    struct assignment *a, *b;
    char *f;
    a = find(as, "name");
    f = strdup(a->u.value);
    gen_name(f);
    cprint(1, "    { ");
    fprintf(cfile, "\"%s\", ", a->u.value);
    fprintf(cfile, "%s_wrap, ", f);
    b = find(as, "argument");
    if(b)
	fprintf(cfile, "\"%s %s\", ", a->u.value, b->u.value);
    else
	fprintf(cfile, "\"%s\", ", a->u.value);
    b = find(as, "help");
    if(b)
	fprintf(cfile, "\"%s\"", b->u.value);
    else
	fprintf(cfile, "NULL");
    fprintf(cfile, " },\n");
    for(a = a->next; a != NULL; a = a->next)
	if(strcmp(a->name, "name") == 0)
	    cprint(1, "    { \"%s\" },\n", a->u.value);
    cprint(0, "\n");
}

static void
gen_name(char *str)
{
    char *p;
    for(p = str; *p != '\0'; p++)
	if(!isalnum((unsigned char)*p))
	    *p = '_';
}

static char *
make_name(struct assignment *as)
{
    struct assignment *lopt;
    struct assignment *type;
    char *s;

    lopt = find(as, "long");
    if(lopt == NULL)
	lopt = find(as, "name");
    if(lopt == NULL)
	return NULL;

    type = find(as, "type");
    if(strcmp(type->u.value, "-flag") == 0)
	asprintf(&s, "%s_flag", lopt->u.value);
    else
	asprintf(&s, "%s_%s", lopt->u.value, type->u.value);
    gen_name(s);
    return s;
}


static void defval_int(const char *name, struct assignment *defval)
{
    if(defval != NULL)
	cprint(1, "opt.%s = %s;\n", name, defval->u.value);
    else
	cprint(1, "opt.%s = 0;\n", name);
}
static void defval_neg_flag(const char *name, struct assignment *defval)
{
    if(defval != NULL)
	cprint(1, "opt.%s = %s;\n", name, defval->u.value);
    else
	cprint(1, "opt.%s = 1;\n", name);
}
static void defval_string(const char *name, struct assignment *defval)
{
    if(defval != NULL)
	cprint(1, "opt.%s = \"%s\";\n", name, defval->u.value);
    else
	cprint(1, "opt.%s = NULL;\n", name);
}
static void defval_strings(const char *name, struct assignment *defval)
{
    cprint(1, "opt.%s.num_strings = 0;\n", name);
    cprint(1, "opt.%s.strings = NULL;\n", name);
}

static void free_strings(const char *name)
{
    cprint(1, "free_getarg_strings (&opt.%s);\n", name);
}

struct type_handler {
    const char *typename;
    const char *c_type;
    const char *getarg_type;
    void (*defval)(const char*, struct assignment*);
    void (*free)(const char*);
} type_handlers[] = {
	{ "integer",
	  "int",
	  "arg_integer",
	  defval_int,
	  NULL
	},
	{ "string",
	  "char*",
	  "arg_string",
	  defval_string,
	  NULL
	},
	{ "strings",
	  "struct getarg_strings",
	  "arg_strings",
	  defval_strings,
	  free_strings
	},
	{ "flag",
	  "int",
	  "arg_flag",
	  defval_int,
	  NULL
	},
	{ "-flag",
	  "int",
	  "arg_negative_flag",
	  defval_neg_flag,
	  NULL
	},
	{ NULL }
};

static struct type_handler *find_handler(struct assignment *type)
{
    struct type_handler *th;
    for(th = type_handlers; th->typename != NULL; th++)
	if(strcmp(type->u.value, th->typename) == 0)
	    return th;
    ex(type, "unknown type \"%s\"", type->u.value);
    exit(1);
}

static void
gen_options(struct assignment *opt1, const char *name)
{
    struct assignment *tmp;

    hprint(0, "struct %s_options {\n", name);

    for(tmp = opt1;
	tmp != NULL;
	tmp = find_next(tmp, "option")) {
	struct assignment *type;
	struct type_handler *th;
	char *s;
	
	s = make_name(tmp->u.assignment);
	type = find(tmp->u.assignment, "type");
	th = find_handler(type);
	hprint(1, "%s %s;\n", th->c_type, s);
	free(s);
    }
    hprint(0, "};\n");
}

static void
gen_wrapper(struct assignment *as)
{
    struct assignment *name;
    struct assignment *arg;
    struct assignment *opt1;
    struct assignment *function;
    struct assignment *tmp;
    char *n, *f;
    int nargs = 0;

    name = find(as, "name");
    n = strdup(name->u.value);
    gen_name(n);
    arg = find(as, "argument");
    opt1 = find(as, "option");
    function = find(as, "function");
    if(function)
	f = function->u.value;
    else
	f = n;


    if(opt1 != NULL) {
	gen_options(opt1, n);
	hprint(0, "int %s(struct %s_options*, int, char **);\n", f, n);
    } else {
	hprint(0, "int %s(void*, int, char **);\n", f);
    }

    fprintf(cfile, "static int\n");
    fprintf(cfile, "%s_wrap(int argc, char **argv)\n", n);
    fprintf(cfile, "{\n");
    if(opt1 != NULL)
	cprint(1, "struct %s_options opt;\n", n);
    cprint(1, "int ret;\n");
    cprint(1, "int optidx = 0;\n");
    cprint(1, "struct getargs args[] = {\n");
    for(tmp = find(as, "option");
	tmp != NULL;
	tmp = find_next(tmp, "option")) {
	struct assignment *type = find(tmp->u.assignment, "type");
	struct assignment *lopt = find(tmp->u.assignment, "long");
	struct assignment *sopt = find(tmp->u.assignment, "short");
	struct assignment *aarg = find(tmp->u.assignment, "argument");
	struct assignment *help = find(tmp->u.assignment, "help");

	struct type_handler *th;
	
	cprint(2, "{ ");
	if(lopt)
	    fprintf(cfile, "\"%s\", ", lopt->u.value);
	else
	    fprintf(cfile, "NULL, ");
	if(sopt)
	    fprintf(cfile, "'%c', ", *sopt->u.value);
	else
	    fprintf(cfile, "0, ");
	th = find_handler(type);
	fprintf(cfile, "%s, ", th->getarg_type);
	fprintf(cfile, "NULL, ");
	if(help)
	    fprintf(cfile, "\"%s\", ", help->u.value);
	else
	    fprintf(cfile, "NULL, ");
	if(aarg)
	    fprintf(cfile, "\"%s\"", aarg->u.value);
	else
	    fprintf(cfile, "NULL");
	fprintf(cfile, " },\n");
    }
    cprint(2, "{ \"help\", 'h', arg_flag, NULL, NULL, NULL }\n");
    cprint(1, "};\n");
    cprint(1, "int help_flag = 0;\n");

    for(tmp = find(as, "option");
	tmp != NULL;
	tmp = find_next(tmp, "option")) {
	char *s;
	struct assignment *type = find(tmp->u.assignment, "type");

	struct assignment *defval = find(tmp->u.assignment, "default");

	struct type_handler *th;
	
	s = make_name(tmp->u.assignment);
	th = find_handler(type);
	(*th->defval)(s, defval);
	free(s);
    }

    for(tmp = find(as, "option");
	tmp != NULL;
	tmp = find_next(tmp, "option")) {
	char *s;
	s = make_name(tmp->u.assignment);
	cprint(1, "args[%d].value = &opt.%s;\n", nargs++, s);
	free(s);
    }
    cprint(1, "args[%d].value = &help_flag;\n", nargs++);
    cprint(1, "if(getarg(args, %d, argc, argv, &optidx))\n", nargs);
    cprint(2, "goto usage;\n");

    {
	int min_args = -1;
	int max_args = -1;
	char *end;
	if(arg == NULL) {
	    max_args = 0;
	} else {
	    if((tmp = find(as, "min_args")) != NULL) {
		min_args = strtol(tmp->u.value, &end, 0);
		if(*end != '\0') {
		    ex(tmp, "min_args is not numeric");
		    exit(1);
		}
		if(min_args < 0) {
		    ex(tmp, "min_args must be non-negative");
		    exit(1);
		}
	    }
	    if((tmp = find(as, "max_args")) != NULL) {
		max_args = strtol(tmp->u.value, &end, 0);
		if(*end != '\0') {
		    ex(tmp, "max_args is not numeric");
		    exit(1);
		}
		if(max_args < 0) {
		    ex(tmp, "max_args must be non-negative");
		    exit(1);
		}
	    }
	}
	if(min_args != -1 || max_args != -1) {
	    if(min_args == max_args) {
		cprint(1, "if(argc - optidx != %d) {\n",
		       min_args);
		cprint(2, "fprintf(stderr, \"Need exactly %u parameters (%%u given).\\n\\n\", argc - optidx);\n", min_args);
		cprint(2, "goto usage;\n");
		cprint(1, "}\n");
	    } else {
		if(max_args != -1) {
		    cprint(1, "if(argc - optidx > %d) {\n", max_args);
		    cprint(2, "fprintf(stderr, \"Arguments given (%%u) are more than expected (%u).\\n\\n\", argc - optidx);\n", max_args);
		    cprint(2, "goto usage;\n");
		    cprint(1, "}\n");
		}
		if(min_args != -1) {
		    cprint(1, "if(argc - optidx < %d) {\n", min_args);
		    cprint(2, "fprintf(stderr, \"Arguments given (%%u) are less than expected (%u).\\n\\n\", argc - optidx);\n", min_args);
		    cprint(2, "goto usage;\n");
		    cprint(1, "}\n");
		}
	    }
	}
    }

    cprint(1, "if(help_flag)\n");
    cprint(2, "goto usage;\n");

    cprint(1, "ret = %s(%s, argc - optidx, argv + optidx);\n",
	   f, opt1 ? "&opt": "NULL");

    /* free allocated data */
    for(tmp = find(as, "option");
	tmp != NULL;
	tmp = find_next(tmp, "option")) {
	char *s;
	struct assignment *type = find(tmp->u.assignment, "type");
	struct type_handler *th;
	th = find_handler(type);
	if(th->free == NULL)
	    continue;
	s = make_name(tmp->u.assignment);
	(*th->free)(s);
	free(s);
    }
    cprint(1, "return ret;\n");

    cprint(0, "usage:\n");
    cprint(1, "arg_printusage (args, %d, \"%s\", \"%s\");\n", nargs,
	   name->u.value, arg ? arg->u.value : "");
    /* free allocated data */
    for(tmp = find(as, "option");
	tmp != NULL;
	tmp = find_next(tmp, "option")) {
	char *s;
	struct assignment *type = find(tmp->u.assignment, "type");
	struct type_handler *th;
	th = find_handler(type);
	if(th->free == NULL)
	    continue;
	s = make_name(tmp->u.assignment);
	(*th->free)(s);
	free(s);
    }
    cprint(1, "return 0;\n");
    cprint(0, "}\n");
    cprint(0, "\n");
}

char cname[PATH_MAX];
char hname[PATH_MAX];

static void
gen(struct assignment *as)
{
    struct assignment *a;
    cprint(0, "#include <stdio.h>\n");
    cprint(0, "#include <krb5/getarg.h>\n");
    cprint(0, "#include <krb5/sl.h>\n");
    cprint(0, "#include \"%s\"\n\n", hname);

    hprint(0, "#include <stdio.h>\n");
    hprint(0, "#include <krb5/sl.h>\n");
    hprint(0, "\n");


    for(a = as; a != NULL; a = a->next)
	gen_wrapper(a->u.assignment);

    cprint(0, "SL_cmd commands[] = {\n");
    for(a = as; a != NULL; a = a->next)
	gen_command(a->u.assignment);
    cprint(1, "{ NULL }\n");
    cprint(0, "};\n");

    hprint(0, "extern SL_cmd commands[];\n");
}

int version_flag;
int help_flag;
struct getargs args[] = {
    { "version", 0, arg_flag, &version_flag },
    { "help", 0, arg_flag, &help_flag }
};
int num_args = sizeof(args) / sizeof(args[0]);

static void
usage(int code)
{
    arg_printusage(args, num_args, NULL, "command-table");
    exit(code);
}

int
main(int argc, char **argv)
{
    char *p;

    int optidx = 0;

    setprogname(argv[0]);
    if(getarg(args, num_args, argc, argv, &optidx))
	usage(1);
    if(help_flag)
	usage(0);
    if(version_flag) {
	print_version(NULL);
	exit(0);
    }

    if(argc == optidx)
	usage(1);

    filename = argv[optidx];
    yyin = fopen(filename, "r");
    if(yyin == NULL)
	err(1, "%s", filename);
    p = strrchr(filename, '/');
    if(p)
	strlcpy(cname, p + 1, sizeof(cname));
    else
	strlcpy(cname, filename, sizeof(cname));
    p = strrchr(cname, '.');
    if(p)
	*p = '\0';
    strlcpy(hname, cname, sizeof(hname));
    strlcat(cname, ".c", sizeof(cname));
    strlcat(hname, ".h", sizeof(hname));
    yyparse();
    if(error_flag)
	exit(1);
    if(check(assignment) == 0) {
	cfile = fopen(cname, "w");
	if(cfile == NULL)
	  err(1, "%s", cname);
	hfile = fopen(hname, "w");
	if(hfile == NULL)
	  err(1, "%s", hname);
	gen(assignment);
	fclose(cfile);
	fclose(hfile);
    }
    fclose(yyin);
    return 0;
}
#line 915 "slc-gram.c"

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
#line 73 "/home/licj/software/netBSD/source/netBSD/usr/src/crypto/external/bsd/heimdal/dist/lib/sl/slc-gram.y"
	{
			assignment = yystack.l_mark[0].assignment;
		}
break;
case 2:
#line 79 "/home/licj/software/netBSD/source/netBSD/usr/src/crypto/external/bsd/heimdal/dist/lib/sl/slc-gram.y"
	{
			yystack.l_mark[-1].assignment->next = yystack.l_mark[0].assignment;
			yyval.assignment = yystack.l_mark[-1].assignment;
		}
break;
case 4:
#line 87 "/home/licj/software/netBSD/source/netBSD/usr/src/crypto/external/bsd/heimdal/dist/lib/sl/slc-gram.y"
	{
			yyval.assignment = malloc(sizeof(*yyval.assignment));
			yyval.assignment->name = yystack.l_mark[-2].string;
			yyval.assignment->type = a_value;
			yyval.assignment->lineno = lineno;
			yyval.assignment->u.value = yystack.l_mark[0].string;
			yyval.assignment->next = NULL;
		}
break;
case 5:
#line 96 "/home/licj/software/netBSD/source/netBSD/usr/src/crypto/external/bsd/heimdal/dist/lib/sl/slc-gram.y"
	{
			yyval.assignment = malloc(sizeof(*yyval.assignment));
			yyval.assignment->name = yystack.l_mark[-4].string;
			yyval.assignment->type = a_assignment;
			yyval.assignment->lineno = lineno;
			yyval.assignment->u.assignment = yystack.l_mark[-1].assignment;
			yyval.assignment->next = NULL;
		}
break;
#line 1156 "slc-gram.c"
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
