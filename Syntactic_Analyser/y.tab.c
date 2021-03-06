/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "syntactic_analyser.y" /* yacc.c:339  */

void yyerror(char *s);
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

extern int yylex();
extern int yylineno();
extern void create_hash();
extern char* yytext;
extern int nlines;

int yydebug=1; 

#line 81 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    DIGITO = 258,
    NUMERO_INT = 259,
    NUMERO_REAL = 260,
    IDENT = 261,
    COMENTARIO = 262,
    SIMBOLO_PROGRAM = 263,
    SIMBOLO_BEGIN = 264,
    SIMBOLO_END = 265,
    SIMBOLO_CONST = 266,
    SIMBOLO_VAR = 267,
    SIMBOLO_REAL = 268,
    SIMBOLO_INTEGER = 269,
    SIMBOLO_PROCEDURE = 270,
    SIMBOLO_ELSE = 271,
    SIMBOLO_READ = 272,
    SIMBOLO_WRITE = 273,
    SIMBOLO_WHILE = 274,
    SIMBOLO_IF = 275,
    SIMBOLO_THEN = 276,
    SIMBOLO_DO = 277,
    SIMBOLO_FOR = 278,
    SIMBOLO_TO = 279,
    DOIS_PONTOS = 280,
    IGUAL = 281,
    PONTO_VIRGULA = 282,
    VIRGULA = 283,
    MULT = 284,
    DIV = 285,
    SOMA = 286,
    SUBTRACAO = 287,
    ABRE_P = 288,
    FECHA_P = 289,
    MAIOR = 290,
    MENOR = 291,
    PONTO = 292
  };
#endif
/* Tokens.  */
#define DIGITO 258
#define NUMERO_INT 259
#define NUMERO_REAL 260
#define IDENT 261
#define COMENTARIO 262
#define SIMBOLO_PROGRAM 263
#define SIMBOLO_BEGIN 264
#define SIMBOLO_END 265
#define SIMBOLO_CONST 266
#define SIMBOLO_VAR 267
#define SIMBOLO_REAL 268
#define SIMBOLO_INTEGER 269
#define SIMBOLO_PROCEDURE 270
#define SIMBOLO_ELSE 271
#define SIMBOLO_READ 272
#define SIMBOLO_WRITE 273
#define SIMBOLO_WHILE 274
#define SIMBOLO_IF 275
#define SIMBOLO_THEN 276
#define SIMBOLO_DO 277
#define SIMBOLO_FOR 278
#define SIMBOLO_TO 279
#define DOIS_PONTOS 280
#define IGUAL 281
#define PONTO_VIRGULA 282
#define VIRGULA 283
#define MULT 284
#define DIV 285
#define SOMA 286
#define SUBTRACAO 287
#define ABRE_P 288
#define FECHA_P 289
#define MAIOR 290
#define MENOR 291
#define PONTO 292

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 206 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   642

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  38
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  155
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  310

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   292

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    26,    26,    27,    28,    29,    30,    31,    32,    34,
      35,    36,    37,    38,    39,    41,    42,    43,    44,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    66,    67,    68,
      70,    72,    73,    74,    75,    76,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    88,    89,    90,    91,    92,
      93,    95,    96,    97,    98,    99,   100,   102,   103,   104,
     105,   107,   108,   109,   110,   111,   112,   113,   115,   117,
     118,   119,   120,   121,   122,   124,   125,   126,   127,   129,
     130,   131,   132,   134,   135,   136,   137,   138,   140,   141,
     142,   143,   144,   145,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   157,   158,   159,   160,   161,   163,   164,
     165,   166,   167,   168,   170,   171,   172,   173,   175,   176,
     177,   179,   180,   181,   182,   183,   184,   186,   187,   189,
     190,   191,   192,   193,   195,   196,   197,   199,   200,   201,
     203,   204,   205,   207,   208,   209
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "DIGITO", "NUMERO_INT", "NUMERO_REAL",
  "IDENT", "COMENTARIO", "SIMBOLO_PROGRAM", "SIMBOLO_BEGIN", "SIMBOLO_END",
  "SIMBOLO_CONST", "SIMBOLO_VAR", "SIMBOLO_REAL", "SIMBOLO_INTEGER",
  "SIMBOLO_PROCEDURE", "SIMBOLO_ELSE", "SIMBOLO_READ", "SIMBOLO_WRITE",
  "SIMBOLO_WHILE", "SIMBOLO_IF", "SIMBOLO_THEN", "SIMBOLO_DO",
  "SIMBOLO_FOR", "SIMBOLO_TO", "DOIS_PONTOS", "IGUAL", "PONTO_VIRGULA",
  "VIRGULA", "MULT", "DIV", "SOMA", "SUBTRACAO", "ABRE_P", "FECHA_P",
  "MAIOR", "MENOR", "PONTO", "$accept", "programa", "corpo", "dc", "dc_c",
  "dc_v", "tipo_var", "variaveis", "mais_var", "dc_p", "parametros",
  "lista_par", "mais_par", "corpo_p", "dc_loc", "lista_arg", "argumentos",
  "mais_ident", "pfalsa", "comandos", "cmd", "condicao", "relacao",
  "expressao", "op_un", "outros_termos", "op_ad", "termo", "mais_fatores",
  "op_mul", "fator", "numero", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292
};
# endif

#define YYPACT_NINF -141

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-141)))

#define YYTABLE_NINF -156

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      35,    78,    32,   100,   114,   125,   171,  -141,   330,   330,
     330,   503,    36,    89,    75,   147,   568,   159,   208,    68,
      34,   232,   246,   510,   253,   523,   250,    91,  -141,   510,
     525,   421,   538,  -141,  -141,  -141,  -141,  -141,    51,   233,
     596,   293,   462,   510,   288,   311,   313,   437,   277,   337,
     186,   352,   170,   374,   273,  -141,   596,   596,   629,   373,
     178,    30,  -141,   374,  -141,   232,   295,  -141,   299,  -141,
    -141,  -141,   372,   510,   141,   381,   358,  -141,   390,   232,
     232,   437,   301,  -141,  -141,   405,    23,    24,   360,   410,
    -141,   510,   540,   299,   299,   349,   185,   185,   210,   412,
     424,   429,   190,  -141,  -141,  -141,  -141,  -141,  -141,  -141,
    -141,  -141,  -141,   430,   598,  -141,    54,    55,   403,   448,
      77,    38,  -141,   438,   439,   452,   102,  -141,  -141,  -141,
    -141,   448,   464,    15,   448,  -141,   461,   322,  -141,   570,
     448,   470,   322,   339,   149,  -141,   471,  -141,   293,  -141,
     473,   478,   494,   226,    26,   396,   495,   496,    69,   228,
     598,   598,   598,   598,   605,   583,   458,  -141,    85,   400,
    -141,    92,  -141,  -141,   413,  -141,  -141,  -141,  -141,  -141,
    -141,   514,   188,   377,   491,  -141,  -141,  -141,  -141,   235,
     389,   244,  -141,  -141,  -141,   173,  -141,   142,  -141,   427,
    -141,  -141,   244,  -141,   533,   583,   583,   583,   583,   610,
     515,   256,   517,   126,    53,   476,   476,   476,   476,   626,
    -141,  -141,  -141,  -141,   458,  -141,  -141,  -141,  -141,   570,
     259,  -141,  -141,  -141,   283,  -141,   322,   490,   585,  -141,
     474,  -141,  -141,  -141,  -141,   232,  -141,   299,   299,   371,
    -141,  -141,  -141,  -141,   201,  -141,   523,   302,   523,   523,
     523,   617,   553,  -141,  -141,  -141,  -141,  -141,   548,   112,
     112,   139,   163,   510,  -141,   510,   555,  -141,  -141,  -141,
    -141,   374,  -141,   544,    93,   449,  -141,  -141,  -141,    96,
    -141,   545,   557,   198,   272,   570,  -141,  -141,   543,   554,
     558,   569,   251,  -141,  -141,  -141,  -141,  -141,  -141,  -141
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     8,     0,     0,     0,     0,     0,     1,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    35,     0,     0,     0,     0,     0,     0,     3,     0,
       0,     0,     0,     4,     5,     6,     7,     2,     0,     0,
       0,   103,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    54,     0,    16,     0,     0,     0,     0,
     103,     0,    17,    18,    15,    45,     0,    40,     0,   155,
     153,   154,     0,     0,     0,     0,     0,   109,     0,     0,
       0,     0,     0,   128,   129,     0,     0,     0,     0,     0,
      10,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   155,     0,    11,    12,    13,     9,    43,    44,    41,
      39,    37,    38,     0,     0,    99,     0,     0,     0,     0,
       0,     0,   110,     0,     0,     0,     0,   150,   118,   137,
     138,     0,   122,   123,     0,   125,     0,     0,   151,     0,
       0,     0,     0,     0,     0,   124,     0,   100,   101,    98,
       0,     0,    39,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    26,    20,     0,     0,
      86,     0,    85,    80,     0,   108,    81,    82,    79,   104,
     105,     0,     0,     0,     0,   120,   121,   119,   114,     0,
       0,   146,   147,   148,   140,     0,   112,     0,   115,     0,
     113,   141,   142,   139,     0,     0,     0,     0,     0,     0,
      66,     0,     0,    66,     0,     0,     0,     0,     0,     0,
      21,    22,    23,    24,    25,    19,    29,    90,    89,     0,
       0,   132,   152,   133,     0,   131,     0,     0,     0,   107,
       0,    30,    31,    32,    33,    34,    28,     0,     0,     0,
      56,    57,    58,    55,    35,    78,     0,     0,     0,     0,
       0,     0,     0,   106,   144,    94,    95,    93,     0,     0,
       0,     0,     0,     0,    47,     0,     0,    48,    49,    50,
      51,    52,    46,     0,     0,     0,    62,    63,    64,     0,
      61,     0,     0,   103,     0,     0,    68,    67,     0,     0,
       0,     0,     0,   111,    72,    73,    74,    75,    76,    71
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -141,  -141,   319,  -141,   -96,    -6,   -86,   -19,  -141,   -28,
     200,  -140,   212,   423,  -141,  -141,   -55,   465,  -141,   -29,
    -128,   531,   529,   248,  -141,   -68,  -141,  -110,  -120,  -141,
     -70,   268
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,    14,    15,    16,   255,   113,   211,    67,    55,
     156,   212,   286,   256,   257,    77,   227,   170,   239,    49,
      50,    85,   134,    86,    87,   135,   136,    88,   194,   195,
     137,   138
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      59,    61,    39,    62,    64,    52,    25,   150,   151,   153,
      32,   197,    39,    25,    78,   214,   183,   143,   167,   118,
     145,   121,   201,   203,   140,   142,   190,   210,    70,    71,
     127,   105,    38,     5,   183,    36,     1,    21,     6,   177,
     106,   186,    22,     2,   115,    23,   107,   109,    24,   128,
     187,   -26,    65,   -60,   252,   168,   171,   131,   132,   133,
     123,   124,   147,   149,   220,   221,   222,   223,   225,    21,
     210,    37,   178,   -14,    22,    38,   -42,    23,   168,    66,
      24,   169,   169,   -26,     4,   -42,   116,   253,   -88,   -91,
      26,   117,    57,   116,   210,    27,   217,   210,   117,    38,
       7,   263,    38,   182,   169,    35,  -130,  -130,  -130,   265,
     267,   176,    28,   284,   228,   231,   264,    58,  -136,   -92,
     183,   233,   235,  -136,   183,   236,   -87,   -70,  -136,  -136,
     -65,  -155,  -155,    83,    84,  -130,  -136,  -136,  -136,   285,
     284,     8,   116,   237,   296,   297,   -69,   117,    29,   296,
     182,   247,     9,  -130,  -130,  -130,    30,   -84,   238,   226,
     251,   269,   270,   272,   289,  -126,   285,   303,   -84,   -96,
    -126,    94,    10,   -39,    69,  -126,  -126,    70,    71,   127,
      83,    84,  -130,  -126,  -126,  -126,   154,    91,   104,    69,
     285,   163,    70,    71,   127,    95,    33,   -69,    11,   241,
     242,   243,   244,   246,  -143,    73,   131,    38,   300,  -143,
     273,   158,   -59,    92,  -143,  -143,   -77,   164,   155,  -143,
    -143,   131,  -143,  -143,  -143,    73,    39,   208,   274,   218,
     277,   278,   279,   280,   282,    39,   126,   -59,    38,    70,
      71,   127,    39,   155,   291,    34,   292,   294,  -149,  -149,
    -149,  -135,   308,   209,    51,   219,  -135,   248,    68,    38,
     182,  -135,  -135,  -130,  -130,  -130,   129,   130,   131,  -135,
    -135,  -135,    40,   301,    97,  -136,    56,  -149,   309,    98,
    -136,   249,   302,    89,   182,  -136,  -136,  -130,  -130,  -130,
      83,    84,  -130,  -136,  -136,  -136,   108,   157,   159,  -134,
     110,    38,   126,   275,  -134,    70,    71,   127,    72,  -134,
    -134,   276,   111,   112,    83,    84,  -130,  -134,  -134,  -134,
      73,    79,  -117,   191,    99,   100,   102,   128,    17,    18,
      20,    12,   129,   130,   131,  -117,   132,   133,  -145,   -27,
     202,    13,   -27,  -145,    80,   -27,    81,    90,  -145,  -145,
     152,   192,   193,  -145,  -145,  -145,  -145,  -145,  -145,   120,
    -145,   144,   111,   112,   117,  -145,  -145,   175,   192,   193,
    -145,  -145,   271,  -145,  -145,  -145,  -135,    93,   230,   184,
      96,  -135,   188,   103,   111,   112,  -135,  -135,   198,   200,
     234,   129,   130,  -135,  -135,  -135,  -135,   213,  -135,   114,
     122,   116,    38,  -135,  -135,  -135,   117,   119,   129,   130,
    -135,  -135,  -135,  -135,   126,  -135,  -135,    70,    71,   127,
     129,   130,    53,  -135,  -135,  -135,   139,    38,   126,  -127,
     -35,    70,    71,   127,  -127,   146,    54,   173,    82,   160,
    -127,  -130,  -130,  -130,   129,   130,   131,  -127,  -116,   174,
     210,   161,  -130,  -130,  -130,    38,   162,   165,   129,   130,
     131,  -116,   189,    74,    22,  -130,  -130,  -130,    83,    84,
    -130,   199,   179,   180,  -130,  -130,  -130,   254,   -83,    83,
      84,  -130,   287,   288,   290,   -36,   181,    75,    24,   -83,
     185,   196,    83,    84,  -130,    76,    42,   204,   268,    43,
     205,    83,    84,  -130,    19,   206,   -97,    44,    45,    46,
      47,    41,   -27,    48,    13,   -27,    42,   -97,   -27,    43,
    -102,   207,   215,   216,    53,   232,    60,    44,    45,    46,
      47,    42,   -53,    48,    43,  -102,   229,   240,    54,    63,
     247,   148,    44,    45,    46,    47,    42,   -53,    48,    43,
    -102,   250,   283,    54,   281,   298,   293,    44,    45,    46,
      47,    42,   -53,    48,    43,  -102,   295,   299,    54,    31,
     304,   196,    44,    45,    46,    47,    42,   -36,    48,    43,
      24,   305,   172,   -36,    21,   306,   266,    44,    45,    46,
      47,    42,   -36,    48,    43,    24,   307,    69,   -36,   166,
      70,    71,    44,    45,    46,    47,   224,   -27,    48,    13,
     -27,   245,   125,   -27,   -27,   141,    13,   -27,    53,   -36,
     -27,     0,    24,    38,     0,   -36,   273,   261,     0,     0,
     101,     0,    54,    70,    71,   -36,     0,     0,    24,   258,
     259,   260,   262
};

static const yytype_int16 yycheck[] =
{
      29,    30,    21,    31,    32,    24,    12,    93,    94,    95,
      16,   139,    31,    19,    43,   155,   126,    87,   114,    74,
      88,    76,   142,   143,     1,     1,   136,     1,     4,     5,
       6,     1,     6,     1,   144,     1,     1,     1,     6,     1,
      10,    26,     6,     8,    73,     9,    65,    66,    12,    26,
      35,    15,     1,    27,     1,     1,     1,    33,    35,    36,
      79,    80,    91,    92,   160,   161,   162,   163,   164,     1,
       1,    37,    34,    37,     6,     6,    25,     9,     1,    28,
      12,    27,    27,    15,     6,    34,     1,    34,    34,    34,
       1,     6,     1,     1,     1,     6,    27,     1,     6,     6,
       0,   229,     6,     1,    27,    37,     4,     5,     6,   237,
     238,    34,    37,     1,   169,   183,   236,    26,    16,    34,
     230,   189,   190,    21,   234,   195,    34,    34,    26,    27,
      34,    29,    30,    31,    32,    33,    34,    35,    36,    27,
       1,    27,     1,     1,   284,   285,    34,     6,     1,   289,
       1,    25,    27,     4,     5,     6,     9,    16,    16,   165,
      34,   247,   248,   249,     1,    16,    27,   295,    27,    27,
      21,     1,     1,    34,     1,    26,    27,     4,     5,     6,
      31,    32,    33,    34,    35,    36,     1,     1,    10,     1,
      27,     1,     4,     5,     6,    25,    37,    34,    27,   205,
     206,   207,   208,   209,    16,    27,    33,     6,    10,    21,
       9,     1,    27,    27,    26,    27,    15,    27,    33,    31,
      32,    33,    34,    35,    36,    27,   245,     1,   256,     1,
     258,   259,   260,   261,   262,   254,     1,    27,     6,     4,
       5,     6,   261,    33,   273,    37,   275,   276,     4,     5,
       6,    16,     1,    27,     1,    27,    21,     1,    25,     6,
       1,    26,    27,     4,     5,     6,    31,    32,    33,    34,
      35,    36,    26,     1,     1,    16,    26,    33,    27,     6,
      21,    25,    10,     6,     1,    26,    27,     4,     5,     6,
      31,    32,    33,    34,    35,    36,     1,    97,    98,    16,
       1,     6,     1,     1,    21,     4,     5,     6,    40,    26,
      27,     9,    13,    14,    31,    32,    33,    34,    35,    36,
      27,    33,    21,     1,    56,    57,    58,    26,     9,    10,
      11,     1,    31,    32,    33,    34,    35,    36,    16,     9,
       1,    11,    12,    21,    33,    15,    33,    10,    26,    27,
       1,    29,    30,    31,    32,    16,    34,    35,    36,     1,
      21,     1,    13,    14,     6,    26,    27,   119,    29,    30,
      31,    32,     1,    34,    35,    36,    16,    25,     1,   131,
       6,    21,   134,    10,    13,    14,    26,    27,   140,   141,
       1,    31,    32,    16,    34,    35,    36,     1,    21,    27,
      10,     1,     6,    26,    27,    16,     6,    26,    31,    32,
      21,    34,    35,    36,     1,    26,    27,     4,     5,     6,
      31,    32,     1,    34,    35,    36,    21,     6,     1,    16,
       9,     4,     5,     6,    21,    25,    15,    34,     1,    27,
      27,     4,     5,     6,    31,    32,    33,    34,    21,     1,
       1,    27,     4,     5,     6,     6,    27,    27,    31,    32,
      33,    34,     1,     1,     6,     4,     5,     6,    31,    32,
      33,     1,    34,    34,     4,     5,     6,     1,    16,    31,
      32,    33,   270,   271,   272,     9,    34,    25,    12,    27,
      26,     1,    31,    32,    33,    33,     6,    26,    24,     9,
      27,    31,    32,    33,     1,    27,    16,    17,    18,    19,
      20,     1,     9,    23,    11,    12,     6,    27,    15,     9,
      10,    27,    27,    27,     1,    34,     1,    17,    18,    19,
      20,     6,     9,    23,     9,    10,    22,     4,    15,     1,
      25,     1,    17,    18,    19,    20,     6,     9,    23,     9,
      10,    34,     4,    15,     1,    10,     1,    17,    18,    19,
      20,     6,     9,    23,     9,    10,    22,    10,    15,     1,
      27,     1,    17,    18,    19,    20,     6,     9,    23,     9,
      12,    27,   117,    15,     1,    27,     1,    17,    18,    19,
      20,     6,     9,    23,     9,    12,    27,     1,    15,     1,
       4,     5,    17,    18,    19,    20,     1,     9,    23,    11,
      12,     1,    81,    15,     9,    86,    11,    12,     1,     9,
      15,    -1,    12,     6,    -1,    15,     9,     1,    -1,    -1,
       1,    -1,    15,     4,     5,     9,    -1,    -1,    12,   216,
     217,   218,   219
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     8,    39,     6,     1,     6,     0,    27,    27,
       1,    27,     1,    11,    40,    41,    42,    40,    40,     1,
      40,     1,     6,     9,    12,    43,     1,     6,    37,     1,
       9,     1,    43,    37,    37,    37,     1,    37,     6,    45,
      26,     1,     6,     9,    17,    18,    19,    20,    23,    57,
      58,     1,    45,     1,    15,    47,    26,     1,    26,    57,
       1,    57,    47,     1,    47,     1,    28,    46,    25,     1,
       4,     5,    69,    27,     1,    25,    33,    53,    57,    33,
      33,    33,     1,    31,    32,    59,    61,    62,    65,     6,
      10,     1,    27,    25,     1,    25,     6,     1,     6,    69,
      69,     1,    69,    10,    10,     1,    10,    45,     1,    45,
       1,    13,    14,    44,    27,    57,     1,     6,    54,    26,
       1,    54,    10,    45,    45,    59,     1,     6,    26,    31,
      32,    33,    35,    36,    60,    63,    64,    68,    69,    21,
       1,    60,     1,    68,     1,    63,    25,    57,     1,    57,
      44,    44,     1,    44,     1,    33,    48,    48,     1,    48,
      27,    27,    27,     1,    27,    27,     1,    42,     1,    27,
      55,     1,    55,    34,     1,    61,    34,     1,    34,    34,
      34,    34,     1,    65,    61,    26,    26,    35,    61,     1,
      65,     1,    29,    30,    66,    67,     1,    58,    61,     1,
      61,    66,     1,    66,    26,    27,    27,    27,     1,    27,
       1,    45,    49,     1,    49,    27,    27,    27,     1,    27,
      42,    42,    42,    42,     1,    42,    43,    54,    54,    22,
       1,    63,    34,    63,     1,    63,    68,     1,    16,    56,
       4,    43,    43,    43,    43,     1,    43,    25,     1,    25,
      34,    34,     1,    34,     1,    43,    51,    52,    51,    51,
      51,     1,    51,    58,    66,    58,     1,    58,    24,    44,
      44,     1,    44,     9,    47,     1,     9,    47,    47,    47,
      47,     1,    47,     4,     1,    27,    50,    50,    50,     1,
      50,    57,    57,     1,    57,    22,    49,    49,    10,    10,
      10,     1,    10,    58,    27,    27,    27,    27,     1,    27
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    38,    39,    39,    39,    39,    39,    39,    39,    40,
      40,    40,    40,    40,    40,    41,    41,    41,    41,    42,
      42,    42,    42,    42,    42,    42,    42,    42,    43,    43,
      43,    43,    43,    43,    43,    43,    43,    44,    44,    44,
      45,    46,    46,    46,    46,    46,    47,    47,    47,    47,
      47,    47,    47,    47,    47,    48,    48,    48,    48,    48,
      48,    49,    49,    49,    49,    49,    49,    50,    50,    50,
      50,    51,    51,    51,    51,    51,    51,    51,    52,    53,
      53,    53,    53,    53,    53,    54,    54,    54,    54,    55,
      55,    55,    55,    56,    56,    56,    56,    56,    57,    57,
      57,    57,    57,    57,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    59,    59,    59,    59,    59,    60,    60,
      60,    60,    60,    60,    61,    61,    61,    61,    62,    62,
      62,    63,    63,    63,    63,    63,    63,    64,    64,    65,
      65,    65,    65,    65,    66,    66,    66,    67,    67,    67,
      68,    68,    68,    69,    69,    69
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     5,     5,     5,     5,     5,     1,     4,
       4,     4,     4,     4,     1,     3,     3,     3,     3,     6,
       6,     6,     6,     6,     6,     6,     1,     0,     6,     6,
       6,     6,     6,     6,     6,     1,     0,     1,     1,     1,
       2,     2,     0,     2,     2,     1,     6,     6,     6,     6,
       6,     6,     6,     0,     1,     3,     3,     3,     3,     0,
       1,     4,     4,     4,     4,     4,     1,     2,     2,     0,
       1,     5,     5,     5,     5,     5,     5,     1,     1,     3,
       3,     3,     3,     0,     1,     2,     2,     2,     1,     2,
       2,     0,     1,     2,     2,     2,     0,     1,     3,     3,
       3,     3,     0,     1,     4,     4,     6,     5,     4,     2,
       3,     9,     1,     3,     3,     3,     3,     1,     1,     2,
       2,     2,     1,     1,     2,     2,     2,     1,     1,     1,
       0,     3,     3,     3,     3,     0,     1,     1,     1,     3,
       3,     3,     3,     1,     3,     0,     1,     1,     1,     1,
       1,     1,     3,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 26 "syntactic_analyser.y" /* yacc.c:1646  */
    {printf("Programa analisado com sucesso!\n");}
#line 1558 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 27 "syntactic_analyser.y" /* yacc.c:1646  */
    {yyerrok; printf("Erro sintatico: Identificador 'program' não encontrado na linha %d\n", nlines);}
#line 1564 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 28 "syntactic_analyser.y" /* yacc.c:1646  */
    {yyerrok; printf("Erro sintatico: Identificador do programa não encontrado.\n");}
#line 1570 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 29 "syntactic_analyser.y" /* yacc.c:1646  */
    {yyerrok; printf("Erro sintatico: Linha %d: ';' ausente.\n", nlines);}
#line 1576 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 30 "syntactic_analyser.y" /* yacc.c:1646  */
    {yyerrok; printf("Erro sintatico: corpo do programa mal declarado.\n");}
#line 1582 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 31 "syntactic_analyser.y" /* yacc.c:1646  */
    {yyerrok; printf("Erro sintatico: Linha %d: '.' em fim de programa ausente.\n", nlines);}
#line 1588 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 32 "syntactic_analyser.y" /* yacc.c:1646  */
    {printf("Erro sintático 1\n");}
#line 1594 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 35 "syntactic_analyser.y" /* yacc.c:1646  */
    {yyerrok; printf("Erro sintatico: Linha %d: erro na declaracao.\n", nlines);}
#line 1600 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 36 "syntactic_analyser.y" /* yacc.c:1646  */
    {yyerrok; printf("Erro sintatico: Linha %d: ausencia do comando 'begin'.\n", nlines); /*yyerrok; printf("'begin' ausente.\n");*/}
#line 1606 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 37 "syntactic_analyser.y" /* yacc.c:1646  */
    {yyerrok; printf("Erro sintatico na construcao dos comandos.\n");}
#line 1612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 38 "syntactic_analyser.y" /* yacc.c:1646  */
    {yyerrok; printf("Erro sintatico: Linha %d: comando 'end' ausente.\n", nlines); /*yyerrok; printf("'end' ausente.\n");*/}
#line 1618 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 39 "syntactic_analyser.y" /* yacc.c:1646  */
    {printf("Erro sintático 2\n");}
#line 1624 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 42 "syntactic_analyser.y" /* yacc.c:1646  */
    {yyerrok; printf("Erro sintatico: Linha %d: problemas na declaracao de variaveis.\n", nlines);}
#line 1630 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 43 "syntactic_analyser.y" /* yacc.c:1646  */
    {yyerrok; printf("Erro sintatico: Linha %d: problemas na declaracao de constantes.\n", nlines);}
#line 1636 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 44 "syntactic_analyser.y" /* yacc.c:1646  */
    {yyerrok; printf("Erro sintatico: Linha %d: problemas na declaracao de procedimentos. \n", nlines);}
#line 1642 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 47 "syntactic_analyser.y" /* yacc.c:1646  */
    {yyerrok; printf("Erro sintatico: Linha %d: comando 'const' ausente.\n", nlines);}
#line 1648 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 48 "syntactic_analyser.y" /* yacc.c:1646  */
    {yyerrok; printf("Erro sintatico: Linha %d: Identificador ausente.\n", nlines);}
#line 1654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 49 "syntactic_analyser.y" /* yacc.c:1646  */
    {yyerrok; printf("Erro sintatico: Linha %d: '='' ausente. \n", nlines);}
#line 1660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 50 "syntactic_analyser.y" /* yacc.c:1646  */
    {yyerrok; printf("Erro sintatico: Linha %d: Erro na construcao de numero.\n", nlines);}
#line 1666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 51 "syntactic_analyser.y" /* yacc.c:1646  */
    {yyerrok; printf("Erro sintatico: Linha %d: ';' ausente. \n", nlines);}
#line 1672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 52 "syntactic_analyser.y" /* yacc.c:1646  */
    {yyerrok; printf("Erro sintatico: Linha %d: problemas na declaracao de constantes.\n", nlines);}
#line 1678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 53 "syntactic_analyser.y" /* yacc.c:1646  */
    {printf("Erro sintático 3\n");}
#line 1684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 57 "syntactic_analyser.y" /* yacc.c:1646  */
    {yyerrok; printf("Erro sintatico: Linha %d: 'var' ausente. \n", nlines);}
#line 1690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 58 "syntactic_analyser.y" /* yacc.c:1646  */
    {yyerrok; printf("Erro sintatico: Linha %d: problemas na declaracao das variaveis.\n", nlines);}
#line 1696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 59 "syntactic_analyser.y" /* yacc.c:1646  */
    {yyerrok; printf("Erro sintatico: Linha %d: ':' ausente. \n", nlines);}
#line 1702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 60 "syntactic_analyser.y" /* yacc.c:1646  */
    {yyerrok; printf("Erro sintatico: Linha %d: problemas na declaracao do tipo da variavel\n", nlines);}
#line 1708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 61 "syntactic_analyser.y" /* yacc.c:1646  */
    {yyerrok; printf("Erro sintatico: Linha %d: ';' ausente. \n", nlines);}
#line 1714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 62 "syntactic_analyser.y" /* yacc.c:1646  */
    {yyerrok; printf("Erro sintatico: Linha %d: problemas na declaracao de variaveis\n", nlines);}
#line 1720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 63 "syntactic_analyser.y" /* yacc.c:1646  */
    {printf("Erro sintático 4\n");}
#line 1726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 68 "syntactic_analyser.y" /* yacc.c:1646  */
    {printf("Erro sintatico: Linha %d: Tipos permitidos: 'real' ou 'integer'\n", nlines);}
#line 1732 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 74 "syntactic_analyser.y" /* yacc.c:1646  */
    {yyerrok; printf("Erro sintatico: Linha %d: ',' ausente.\n", nlines);}
#line 1738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 75 "syntactic_analyser.y" /* yacc.c:1646  */
    {yyerrok; printf("Erro sintatico: Linha %d: problemas na declaracao de variaveis.\n", nlines);}
#line 1744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 76 "syntactic_analyser.y" /* yacc.c:1646  */
    {printf("Erro sintático 5\n");}
#line 1750 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 79 "syntactic_analyser.y" /* yacc.c:1646  */
    {yyerrok; printf("Erro sintatico: Linha %d: 'procedure' esperado.\n", nlines);}
#line 1756 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 80 "syntactic_analyser.y" /* yacc.c:1646  */
    {yyerrok; printf("Erro sintatico: Linha %d: Identificador esperado.\n", nlines);}
#line 1762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 81 "syntactic_analyser.y" /* yacc.c:1646  */
    {yyerrok; printf("Erro sintatico: Linha %d: problemas na declaracao dos parametros.\n", nlines);}
#line 1768 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 82 "syntactic_analyser.y" /* yacc.c:1646  */
    {yyerrok; printf("Erro sintatico: Linha %d: ';' esperado.\n", nlines);}
#line 1774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 83 "syntactic_analyser.y" /* yacc.c:1646  */
    {yyerrok; printf("Erro sintatico: problemas na declaracao do corpo do programa.\n");}
#line 1780 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 84 "syntactic_analyser.y" /* yacc.c:1646  */
    {yyerrok; printf("Erro sintatico: problemas na declaracao de procedimentos.\n");}
#line 1786 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 86 "syntactic_analyser.y" /* yacc.c:1646  */
    {printf("Erro sintático 6\n");}
#line 1792 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 89 "syntactic_analyser.y" /* yacc.c:1646  */
    {yyerrok; printf("Erro sintatico: Linha %d: '(' esperado.\n", nlines);}
#line 1798 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 90 "syntactic_analyser.y" /* yacc.c:1646  */
    {yyerrok; printf("Erro sintatico: Linha %d: identificador esperado.\n", nlines);}
#line 1804 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 91 "syntactic_analyser.y" /* yacc.c:1646  */
    {yyerrok; printf("Erro sintatico: Linha %d: ')' esperado.\n", nlines);}
#line 1810 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 93 "syntactic_analyser.y" /* yacc.c:1646  */
    {printf("Erro sintático 7\n");}
#line 1816 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 96 "syntactic_analyser.y" /* yacc.c:1646  */
    {yyerrok; printf("Erro sintatico: Linha %d: identificador esperado.\n", nlines);}
#line 1822 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 97 "syntactic_analyser.y" /* yacc.c:1646  */
    {yyerrok; printf("Erro sintatico: Linha %d: ':' esperado.\n", nlines);}
#line 1828 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 98 "syntactic_analyser.y" /* yacc.c:1646  */
    {yyerrok; printf("Erro sintatico: Linha %d: tipo de varável não declarado.\n", nlines);}
#line 1834 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 99 "syntactic_analyser.y" /* yacc.c:1646  */
    {yyerrok; printf("Erro sintatico: Linha %d: declaração inválida.\n", nlines);}
#line 1840 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 100 "syntactic_analyser.y" /* yacc.c:1646  */
    {printf("Erro sintático 8\n");}
#line 1846 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 103 "syntactic_analyser.y" /* yacc.c:1646  */
    {yyerrok; printf("Erro sintatico: Linha %d: ':' esperado.\n", nlines);}
#line 1852 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 105 "syntactic_analyser.y" /* yacc.c:1646  */
    {printf("Erro sintático 9\n");}
#line 1858 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 108 "syntactic_analyser.y" /* yacc.c:1646  */
    {yyerrok; printf("Erro sintatico: Linha %d: declaração esperada.\n", nlines);}
#line 1864 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 109 "syntactic_analyser.y" /* yacc.c:1646  */
    {yyerrok; printf("Erro sintatico: Linha %d: 'BEGIN' esperado.\n", nlines);}
#line 1870 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 110 "syntactic_analyser.y" /* yacc.c:1646  */
    {yyerrok; printf("Erro sintatico: Linha %d: comando válido esperado.\n", nlines);}
#line 1876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 111 "syntactic_analyser.y" /* yacc.c:1646  */
    {yyerrok; printf("Erro sintatico: Linha %d: 'END' esperado.\n", nlines);}
#line 1882 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 112 "syntactic_analyser.y" /* yacc.c:1646  */
    {yyerrok; printf("Erro sintatico: Linha %d: ';' esperado.\n", nlines);}
#line 1888 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 113 "syntactic_analyser.y" /* yacc.c:1646  */
    {printf("Erro sintático 10\n");}
#line 1894 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 118 "syntactic_analyser.y" /* yacc.c:1646  */
    {yyerrok; printf("Erro sintatico: Linha %d: '(' esperado.\n", nlines);}
#line 1900 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 119 "syntactic_analyser.y" /* yacc.c:1646  */
    {yyerrok; printf("Erro sintatico: Linha %d: argumento válido esperado.\n", nlines);}
#line 1906 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 120 "syntactic_analyser.y" /* yacc.c:1646  */
    {yyerrok; printf("Erro sintatico: Linha %d: ')' esperado.\n", nlines);}
#line 1912 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 122 "syntactic_analyser.y" /* yacc.c:1646  */
    {printf("Erro sintático 12\n");}
#line 1918 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 125 "syntactic_analyser.y" /* yacc.c:1646  */
    {yyerrok; printf("Erro sintatico: Linha %d: identificador válido esperado.\n", nlines);}
#line 1924 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 126 "syntactic_analyser.y" /* yacc.c:1646  */
    {yyerrok; printf("Erro sintatico: Linha %d: argumento esperado.\n", nlines);}
#line 1930 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 127 "syntactic_analyser.y" /* yacc.c:1646  */
    {printf("Erro sintático 13\n");}
#line 1936 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 130 "syntactic_analyser.y" /* yacc.c:1646  */
    {yyerrok; printf("Erro sintatico: Linha %d: ';' esperado.\n", nlines);}
#line 1942 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 132 "syntactic_analyser.y" /* yacc.c:1646  */
    {printf("Erro sintático 14\n");}
#line 1948 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 135 "syntactic_analyser.y" /* yacc.c:1646  */
    {yyerrok; printf("Erro sintatico: Linha %d: 'ELSE' esperado.\n", nlines);}
#line 1954 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 136 "syntactic_analyser.y" /* yacc.c:1646  */
    {yyerrok; printf("Erro sintatico: Linha %d: comando válido esperado.\n", nlines);}
#line 1960 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 138 "syntactic_analyser.y" /* yacc.c:1646  */
    {printf("Erro sintático 15\n");}
#line 1966 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 141 "syntactic_analyser.y" /* yacc.c:1646  */
    {yyerrok; printf("Erro sintatico: Linha %d: comando válido esperado.\n", nlines);}
#line 1972 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 142 "syntactic_analyser.y" /* yacc.c:1646  */
    {yyerrok; printf("Erro sintatico: Linha %d: ';' esperado.\n", nlines);}
#line 1978 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 143 "syntactic_analyser.y" /* yacc.c:1646  */
    {yyerrok; printf("Erro sintatico: Linha %d: comando válido esperado.\n", nlines);}
#line 1984 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 145 "syntactic_analyser.y" /* yacc.c:1646  */
    {printf("Erro sintático 16\n");}
#line 1990 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 155 "syntactic_analyser.y" /* yacc.c:1646  */
    {printf("Erro sintático 17\n");}
#line 1996 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 158 "syntactic_analyser.y" /* yacc.c:1646  */
    {yyerrok; printf("Erro sintatico: Linha %d: problemas na construcao da expressao.\n", nlines);}
#line 2002 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 159 "syntactic_analyser.y" /* yacc.c:1646  */
    {yyerrok; printf("Erro sintatico: Linha %d: problemas na construcao da relacao.\n", nlines);}
#line 2008 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 160 "syntactic_analyser.y" /* yacc.c:1646  */
    {yyerrok; printf("Erro sintatico: Linha %d: problemas na construcao da expressao.\n", nlines);}
#line 2014 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 161 "syntactic_analyser.y" /* yacc.c:1646  */
    {printf("Erro sintático 18\n");}
#line 2020 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 171 "syntactic_analyser.y" /* yacc.c:1646  */
    {yyerrok; printf("Erro sintatico: Linha %d: problemas na construcao do termo.\n", nlines);}
#line 2026 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 172 "syntactic_analyser.y" /* yacc.c:1646  */
    {yyerrok; printf("Erro sintatico: Linha %d: problemas na construcao do termo.\n", nlines);}
#line 2032 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 173 "syntactic_analyser.y" /* yacc.c:1646  */
    {printf("Erro sintático 19\n");}
#line 2038 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 180 "syntactic_analyser.y" /* yacc.c:1646  */
    {yyerrok; printf("Erro sintatico: Linha %d: problemas na declaracao de operacao de soma ou subtracao.\n", nlines);}
#line 2044 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 181 "syntactic_analyser.y" /* yacc.c:1646  */
    {yyerrok; printf("Erro sintatico: Linha %d: problema na declaracao dos termos.\n", nlines);}
#line 2050 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 182 "syntactic_analyser.y" /* yacc.c:1646  */
    {yyerrok; printf("Erro sintatico: Linha %d: erro na declaracao de outros termos.\n", nlines);}
#line 2056 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 184 "syntactic_analyser.y" /* yacc.c:1646  */
    {printf("Erro sintático 20\n");}
#line 2062 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 190 "syntactic_analyser.y" /* yacc.c:1646  */
    {yyerrok; printf("Erro sintatico: Linha %d: problemas na declaracao de operacao de soma ou subtracao.\n", nlines);}
#line 2068 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 191 "syntactic_analyser.y" /* yacc.c:1646  */
    {yyerrok; printf("Erro sintatico: Linha %d: problema na declaracao dos termos.\n", nlines);}
#line 2074 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 192 "syntactic_analyser.y" /* yacc.c:1646  */
    {yyerrok; printf("Erro sintatico: Linha %d: erro na declaracao de mais fatores.\n", nlines);}
#line 2080 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 193 "syntactic_analyser.y" /* yacc.c:1646  */
    {printf("Erro sintático 21\n");}
#line 2086 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 197 "syntactic_analyser.y" /* yacc.c:1646  */
    {printf("Erro sintático 22\n");}
#line 2092 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 201 "syntactic_analyser.y" /* yacc.c:1646  */
    {printf("Erro sintático 23\n");}
#line 2098 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 209 "syntactic_analyser.y" /* yacc.c:1646  */
    {printf("Erro sintático 24\n");}
#line 2104 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2108 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 212 "syntactic_analyser.y" /* yacc.c:1906  */


// Função que deveria imprimir a mesagem de erro
void yyerror(char *s){
    //printf("%s\n", s);
    fprintf(stderr, "%s\n", s);
}


int main(int argc, char const *argv[]) {
    create_hash();
  int ntoken, vtoken;

  int result = yyparse();

  return 0;

}
