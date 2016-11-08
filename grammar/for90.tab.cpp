/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "for90.y"

#include <stdio.h>
#include <string>
#include <sstream>
#include <iostream>
#include <stdarg.h>
#include <tuple>
#include "../tokenizer.h"
#include "../attribute.h"
#include "../parser.h"
#include "../gen_config.h"
#include "../Function.h"
#include "../codegen.h"


// 前置声明, 不然编译不过
void yyerror(const char* s); 
extern int yylex();
extern void set_buff(const std::string & code);
extern void release_buff();
#define YYDEBUG 1
#define YYERROR_VERBOSE
// static is necessary, or will cause lnk
static char codegen_buf[MAX_CODE_LENGTH];
using namespace std;

/* Line 371 of yacc.c  */
#line 95 "for90.tab.cpp"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
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
   by #include "for90.tab.h".  */
#ifndef YY_YY_FOR90_TAB_H_INCLUDED
# define YY_YY_FOR90_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     _YY_VOID = 258,
     YY_REQ_MORE = 259,
     YY_CRLF = 260,
     _YY_OP = 261,
     YY_GT = 262,
     YY_GE = 263,
     YY_EQ = 264,
     YY_LE = 265,
     YY_LT = 266,
     YY_NEQ = 267,
     YY_NEQV = 268,
     YY_EQV = 269,
     YY_ANDAND = 270,
     YY_OROR = 271,
     YY_NOT = 272,
     YY_POWER = 273,
     YY_DOUBLECOLON = 274,
     YY_NEG = 275,
     YY_POS = 276,
     _YY_TYPE = 277,
     YY_INTEGER = 278,
     YY_FLOAT = 279,
     YY_WORD = 280,
     YY_OPERATOR = 281,
     YY_STRING = 282,
     YY_ILLEGAL = 283,
     YY_COMPLEX = 284,
     YY_TRUE = 285,
     YY_FALSE = 286,
     _YY_CONTROL = 287,
     YY_END = 288,
     YY_IF = 289,
     YY_THEN = 290,
     YY_ELSE = 291,
     YY_ELSEIF = 292,
     YY_ENDIF = 293,
     YY_DO = 294,
     YY_ENDDO = 295,
     YY_CONTINUE = 296,
     YY_BREAK = 297,
     YY_WHILE = 298,
     YY_ENDWHILE = 299,
     YY_WHERE = 300,
     YY_ENDWHERE = 301,
     YY_CASE = 302,
     YY_ENDCASE = 303,
     YY_SELECT = 304,
     YY_ENDSELECT = 305,
     YY_GOTO = 306,
     YY_DOWHILE = 307,
     YY_DEFAULT = 308,
     _YY_DELIM = 309,
     YY_PROGRAM = 310,
     YY_ENDPROGRAM = 311,
     YY_FUNCTION = 312,
     YY_ENDFUNCTION = 313,
     YY_RECURSIVE = 314,
     YY_RESULT = 315,
     YY_SUBROUTINE = 316,
     YY_ENDSUBROUTINE = 317,
     YY_MODULE = 318,
     YY_ENDMODULE = 319,
     YY_BLOCK = 320,
     YY_ENDBLOCK = 321,
     YY_INTERFACE = 322,
     YY_ENDINTERFACE = 323,
     _YY_DESCRIBER = 324,
     YY_IMPLICIT = 325,
     YY_NONE = 326,
     YY_USE = 327,
     YY_PARAMETER = 328,
     YY_FORMAT = 329,
     YY_ENTRY = 330,
     YY_DIMENSION = 331,
     YY_ARRAYINITIAL_START = 332,
     YY_ARRAYINITIAL_END = 333,
     YY_INTENT = 334,
     YY_IN = 335,
     YY_OUT = 336,
     YY_INOUT = 337,
     YY_OPTIONAL = 338,
     YY_LEN = 339,
     YY_KIND = 340,
     _YY_TYPEDEF = 341,
     YY_INTEGER_T = 342,
     YY_FLOAT_T = 343,
     YY_STRING_T = 344,
     YY_COMPLEX_T = 345,
     YY_BOOL_T = 346,
     YY_CHARACTER_T = 347,
     _YY_COMMAND = 348,
     YY_WRITE = 349,
     YY_READ = 350,
     YY_PRINT = 351,
     YY_OPEN = 352,
     YY_CLOSE = 353,
     YY_CALL = 354
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_FOR90_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 260 "for90.tab.cpp"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

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
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  15
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1365

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  111
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  57
/* YYNRULES -- Number of rules.  */
#define YYNRULES  159
/* YYNRULES -- Number of states.  */
#define YYNSTATES  339

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   354

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     109,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     106,   107,   103,   101,   108,   102,     2,   104,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   110,   105,
       2,   100,     2,     2,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     8,    10,    12,    13,    18,
      23,    28,    33,    38,    40,    42,    46,    50,    53,    57,
      58,    60,    62,    64,    66,    68,    70,    73,    75,    77,
      79,    83,    89,    91,    93,    97,    99,   103,   108,   110,
     113,   115,   119,   123,   127,   131,   135,   139,   142,   145,
     149,   153,   157,   161,   165,   169,   172,   176,   180,   184,
     188,   190,   192,   194,   195,   197,   200,   203,   206,   208,
     210,   212,   214,   216,   218,   220,   223,   226,   229,   231,
     233,   235,   238,   241,   244,   249,   253,   255,   258,   259,
     260,   262,   263,   265,   267,   268,   270,   272,   274,   276,
     282,   285,   289,   293,   297,   299,   301,   303,   305,   307,
     309,   314,   319,   324,   329,   334,   339,   341,   346,   348,
     352,   356,   358,   362,   363,   371,   375,   379,   381,   382,
     384,   388,   397,   409,   419,   432,   437,   443,   450,   457,
     469,   483,   491,   502,   509,   511,   514,   519,   520,   522,
     524,   537,   539,   540,   549,   551,   553,   555,   558,   566
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     167,     0,    -1,     5,    -1,   105,    -1,    -1,    59,    -1,
     113,    -1,    -1,    79,   106,    80,   107,    -1,    79,   106,
      81,   107,    -1,    79,   106,    82,   107,    -1,    76,   106,
     121,   107,    -1,    76,   106,   124,   107,    -1,    83,    -1,
      73,    -1,    85,   100,    23,    -1,    84,   100,   124,    -1,
     108,   114,    -1,   108,   114,   116,    -1,    -1,    24,    -1,
      23,    -1,    27,    -1,    30,    -1,    31,    -1,    29,    -1,
       1,   109,    -1,    25,    -1,   118,    -1,   144,    -1,   124,
     110,   124,    -1,   124,   110,   124,   110,   124,    -1,   110,
      -1,   120,    -1,   120,   108,   121,    -1,   124,    -1,   124,
     108,   125,    -1,   119,   106,   125,   107,    -1,   122,    -1,
      99,   122,    -1,   123,    -1,   106,   124,   107,    -1,   124,
     101,   124,    -1,   124,   102,   124,    -1,   124,   103,   124,
      -1,   124,   104,   124,    -1,   124,    18,   124,    -1,   102,
     124,    -1,   101,   124,    -1,   124,    12,   124,    -1,   124,
      13,   124,    -1,   124,     9,   124,    -1,   124,    14,   124,
      -1,   124,    15,   124,    -1,   124,    16,   124,    -1,    17,
     124,    -1,   124,     7,   124,    -1,   124,     8,   124,    -1,
     124,    10,   124,    -1,   124,    11,   124,    -1,   117,    -1,
     119,    -1,   121,    -1,    -1,   112,    -1,   105,   112,    -1,
     124,   126,    -1,   146,   126,    -1,   130,    -1,   128,    -1,
     129,    -1,   133,    -1,   132,    -1,   131,    -1,   166,    -1,
     141,   126,    -1,   142,   126,    -1,   143,   126,    -1,   153,
      -1,   155,    -1,   156,    -1,    41,   126,    -1,    42,   112,
      -1,    51,   112,    -1,   124,   100,   124,   126,    -1,    70,
      71,   112,    -1,   127,    -1,   127,   134,    -1,    -1,    -1,
     106,    -1,    -1,   107,    -1,   108,    -1,    -1,   103,    -1,
      23,    -1,   103,    -1,    27,    -1,   106,   138,   108,   139,
     107,    -1,   139,   137,    -1,    94,   140,   125,    -1,    96,
     140,   125,    -1,    95,   140,   125,    -1,    87,    -1,    88,
      -1,    89,    -1,    90,    -1,    91,    -1,    92,    -1,    87,
     106,   115,   107,    -1,    88,   106,   115,   107,    -1,    89,
     106,   115,   107,    -1,    90,   106,   115,   107,    -1,    91,
     106,   115,   107,    -1,    92,   106,   115,   107,    -1,   144,
      -1,   145,   116,    19,   148,    -1,   118,    -1,   118,   100,
     124,    -1,   118,   100,   152,    -1,   147,    -1,   147,   108,
     148,    -1,    -1,   124,   108,   118,   100,   124,   108,   124,
      -1,    77,   125,    78,    -1,    77,   149,    78,    -1,    35,
      -1,    -1,   150,    -1,   150,   108,   152,    -1,    34,   124,
      35,   112,   134,    33,    34,   112,    -1,    34,   124,    35,
     112,   134,    36,   112,   134,    33,    34,   112,    -1,    34,
     124,    35,   112,   134,   154,    33,    34,   112,    -1,    34,
     124,    35,   112,   134,   154,    36,   112,   134,    33,    34,
     112,    -1,    34,   124,   151,   127,    -1,    37,   124,    35,
     112,   134,    -1,    37,   124,    35,   112,   134,   154,    -1,
      39,   112,   134,    33,    39,   112,    -1,    39,   118,   100,
     124,   108,   124,   112,   134,    33,    39,   112,    -1,    39,
     118,   100,   124,   108,   124,   108,   124,   112,   134,    33,
      39,   112,    -1,    52,   124,   112,   134,    33,    39,   112,
      -1,    49,    47,   135,   124,   136,   112,   158,    33,    49,
     112,    -1,    47,   135,   121,   136,   112,   134,    -1,   157,
      -1,   157,   158,    -1,    60,   106,   118,   107,    -1,    -1,
      57,    -1,    61,    -1,   113,   160,   118,   106,   148,   107,
     159,   112,   134,    33,   160,   112,    -1,    25,    -1,    -1,
      55,   162,   112,   134,    33,    55,   162,   112,    -1,   161,
      -1,   163,    -1,   164,    -1,   164,   165,    -1,    67,   112,
     165,   112,    33,    67,   112,    -1,   165,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    54,    54,    59,    65,    70,    71,    72,    74,    84,
      95,   105,   127,   153,   162,   173,   184,   189,   195,   212,
     221,   228,   234,   242,   248,   254,   263,   266,   273,   279,
     286,   295,   305,   315,   325,   336,   343,   352,   362,   366,
     371,   379,   387,   395,   403,   411,   419,   427,   434,   441,
     449,   457,   465,   473,   481,   489,   496,   504,   512,   520,
     528,   534,   542,   587,   597,   598,   600,   617,   630,   631,
     632,   633,   634,   644,   654,   657,   658,   660,   662,   663,
     664,   666,   667,   668,   670,   679,   688,   698,   712,   724,
     725,   726,   727,   728,   729,   730,   735,   740,   745,   753,
     765,   780,   788,   797,   805,   810,   815,   820,   825,   830,
     836,   843,   848,   853,   858,   863,   868,   871,   882,   890,
     897,   906,   914,   930,   938,   950,   965,   988,   989,   990,
     999,  1011,  1027,  1046,  1064,  1085,  1101,  1118,  1137,  1143,
    1153,  1163,  1171,  1179,  1187,  1196,  1207,  1212,  1218,  1219,
    1221,  1234,  1235,  1237,  1247,  1253,  1260,  1268,  1279,  1288
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "_YY_VOID", "YY_REQ_MORE", "YY_CRLF",
  "_YY_OP", "YY_GT", "YY_GE", "YY_EQ", "YY_LE", "YY_LT", "YY_NEQ",
  "YY_NEQV", "YY_EQV", "YY_ANDAND", "YY_OROR", "YY_NOT", "YY_POWER",
  "YY_DOUBLECOLON", "YY_NEG", "YY_POS", "_YY_TYPE", "YY_INTEGER",
  "YY_FLOAT", "YY_WORD", "YY_OPERATOR", "YY_STRING", "YY_ILLEGAL",
  "YY_COMPLEX", "YY_TRUE", "YY_FALSE", "_YY_CONTROL", "YY_END", "YY_IF",
  "YY_THEN", "YY_ELSE", "YY_ELSEIF", "YY_ENDIF", "YY_DO", "YY_ENDDO",
  "YY_CONTINUE", "YY_BREAK", "YY_WHILE", "YY_ENDWHILE", "YY_WHERE",
  "YY_ENDWHERE", "YY_CASE", "YY_ENDCASE", "YY_SELECT", "YY_ENDSELECT",
  "YY_GOTO", "YY_DOWHILE", "YY_DEFAULT", "_YY_DELIM", "YY_PROGRAM",
  "YY_ENDPROGRAM", "YY_FUNCTION", "YY_ENDFUNCTION", "YY_RECURSIVE",
  "YY_RESULT", "YY_SUBROUTINE", "YY_ENDSUBROUTINE", "YY_MODULE",
  "YY_ENDMODULE", "YY_BLOCK", "YY_ENDBLOCK", "YY_INTERFACE",
  "YY_ENDINTERFACE", "_YY_DESCRIBER", "YY_IMPLICIT", "YY_NONE", "YY_USE",
  "YY_PARAMETER", "YY_FORMAT", "YY_ENTRY", "YY_DIMENSION",
  "YY_ARRAYINITIAL_START", "YY_ARRAYINITIAL_END", "YY_INTENT", "YY_IN",
  "YY_OUT", "YY_INOUT", "YY_OPTIONAL", "YY_LEN", "YY_KIND", "_YY_TYPEDEF",
  "YY_INTEGER_T", "YY_FLOAT_T", "YY_STRING_T", "YY_COMPLEX_T", "YY_BOOL_T",
  "YY_CHARACTER_T", "_YY_COMMAND", "YY_WRITE", "YY_READ", "YY_PRINT",
  "YY_OPEN", "YY_CLOSE", "YY_CALL", "'='", "'+'", "'-'", "'*'", "'/'",
  "';'", "'('", "')'", "','", "'\\n'", "':'", "$accept", "crlf",
  "dummy_function_iden", "variable_desc_elem", "typecast_spec",
  "variable_desc", "literal", "variable", "callable_head", "slice",
  "dimen_slice", "function_array_body", "function_array", "exp",
  "argtable", "_crlf_semicolon", "stmt", "output_stmt", "input_stmt",
  "compound_stmt", "jump_stmt", "let_stmt", "dummy_stmt", "suite",
  "_optional_lbrace", "_optional_rbrace", "_optional_comma",
  "_optional_device", "_optional_formatter", "io_info", "write", "print",
  "read", "type_nospec", "type_spec", "var_def", "keyvalue", "paramtable",
  "_generate_stmt", "array_builder_elem", "_optional_then",
  "array_builder", "if_stmt", "elseif_stmt", "do_stmt", "select_stmt",
  "case_stmt_elem", "case_stmt", "_optional_result", "_optional_function",
  "function_decl", "_optional_name", "program", "wrapper", "wrappers",
  "interface_decl", "fortran_program", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
      61,    43,    45,    42,    47,    59,    40,    41,    44,    10,
      58
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   111,   112,   112,   112,   113,   113,   113,   114,   114,
     114,   114,   114,   114,   114,   115,   115,   116,   116,   116,
     117,   117,   117,   117,   117,   117,   117,   118,   119,   119,
     120,   120,   120,   121,   121,   121,   121,   122,   123,   123,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   125,   125,   126,   126,   127,   127,   127,   127,
     127,   127,   127,   127,   127,   128,   128,   129,   130,   130,
     130,   131,   131,   131,   132,   133,   134,   134,   134,   135,
     135,   136,   136,   137,   137,   138,   138,   139,   139,   140,
     140,   141,   142,   143,   144,   144,   144,   144,   144,   144,
     145,   145,   145,   145,   145,   145,   145,   146,   147,   147,
     147,   148,   148,   148,   149,   150,   150,   151,   151,   152,
     152,   153,   153,   153,   153,   153,   154,   154,   155,   155,
     155,   155,   156,   157,   158,   158,   159,   159,   160,   160,
     161,   162,   162,   163,   164,   164,   165,   165,   166,   167
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     0,     1,     1,     0,     4,     4,
       4,     4,     4,     1,     1,     3,     3,     2,     3,     0,
       1,     1,     1,     1,     1,     1,     2,     1,     1,     1,
       3,     5,     1,     1,     3,     1,     3,     4,     1,     2,
       1,     3,     3,     3,     3,     3,     3,     2,     2,     3,
       3,     3,     3,     3,     3,     2,     3,     3,     3,     3,
       1,     1,     1,     0,     1,     2,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     2,     1,     1,
       1,     2,     2,     2,     4,     3,     1,     2,     0,     0,
       1,     0,     1,     1,     0,     1,     1,     1,     1,     5,
       2,     3,     3,     3,     1,     1,     1,     1,     1,     1,
       4,     4,     4,     4,     4,     4,     1,     4,     1,     3,
       3,     1,     3,     0,     7,     3,     3,     1,     0,     1,
       3,     8,    11,     9,    12,     4,     5,     6,     6,    11,
      13,     7,    10,     6,     1,     2,     4,     0,     1,     1,
      12,     1,     0,     8,     1,     1,     1,     2,     7,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       7,   152,     5,     0,   154,   155,   156,   159,     0,   151,
       4,   148,   149,     0,   157,     1,     2,     3,     0,    27,
       0,     0,     0,    21,    20,    22,    25,    23,    24,     0,
       4,     4,     4,     0,     4,     0,     4,     0,   104,   105,
     106,   107,   108,   109,     0,     0,     0,     0,     0,     0,
       0,    60,    28,    61,    38,    40,     4,     0,    69,    70,
      68,    73,    72,    71,     0,     4,     4,     4,    29,    19,
       4,    78,    79,    80,    74,   123,    26,   104,   105,   106,
     107,   108,   109,    55,    29,   128,     0,     0,     3,    64,
      81,    82,    89,    83,     4,     7,     4,     0,     0,     0,
       0,     0,     0,    98,    97,     0,    94,     0,     0,     0,
       0,    39,    48,    47,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    66,    87,     0,    75,    76,    77,     0,     0,
      67,   118,   121,     0,     4,     0,     0,     0,    65,    90,
       0,     0,     4,    85,     0,     0,     0,     0,     0,     0,
       0,     0,    96,    95,     0,    93,   100,    32,    33,    62,
      35,   101,   103,   102,    41,     0,    56,    57,    51,    58,
      59,    49,    50,    52,    53,    54,    46,     4,    42,    43,
      44,    45,   152,    14,     0,     0,    13,    17,   123,     0,
     123,   147,     0,   135,     0,     0,    91,     0,     0,     0,
       0,   110,   111,   112,   113,   114,   115,     0,     0,     0,
       0,    37,    84,     4,     0,     0,    18,   117,     0,   119,
     129,   120,   122,     0,     4,     0,     4,     0,    92,     4,
       0,     0,    16,    15,     0,    34,    36,    30,   153,     0,
       0,     0,     0,     0,    35,     0,     0,     0,     0,     0,
       0,     4,     0,     0,   138,     4,     0,     4,     4,    99,
       0,    11,    12,     8,     9,    10,     0,   125,   126,   130,
       0,     0,     4,     0,     0,     0,     4,     0,     0,    89,
     144,     0,   141,   158,    31,    28,   146,     0,   131,     0,
       4,     4,     0,     4,     0,     0,   145,     0,     0,     4,
       0,     0,   133,     0,     0,     0,    91,     4,     0,   150,
       4,   136,     0,     0,     4,     4,   142,     0,   132,   137,
       4,     0,   139,     0,   124,   134,     4,   143,   140
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    89,     3,   197,   156,   139,    51,    52,    53,   168,
     169,    54,    55,    56,   246,    90,    57,    58,    59,    60,
      61,    62,    63,    64,   150,   239,   166,   164,   106,   107,
      65,    66,    67,    84,    69,    70,   142,   143,   256,   230,
     145,   231,    71,   263,    72,    73,   290,   291,   234,    13,
       4,    10,     5,     6,     7,    74,     8
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -184
static const yytype_int16 yypact[] =
{
     -11,   -15,  -184,    -7,  -184,  -184,    45,  -184,    36,  -184,
      -2,  -184,  -184,     0,  -184,  -184,  -184,  -184,   802,  -184,
     -49,   -43,   934,  -184,  -184,  -184,  -184,  -184,  -184,   934,
      -4,    12,    -2,    33,    -2,   934,    -2,    34,   -23,    19,
      20,    30,    41,    43,    32,    32,    32,   127,   934,   934,
     934,  -184,  -184,    51,  -184,  -184,  1070,   562,  -184,  -184,
    -184,  -184,  -184,  -184,    97,    12,    12,    12,    -1,    40,
      12,  -184,  -184,  -184,  -184,     0,  -184,  -184,  -184,  -184,
    -184,  -184,  -184,    49,  -184,  1219,   802,    53,    -2,  -184,
    -184,  -184,    73,  -184,  1082,   -11,    -2,    31,    31,    31,
      31,    31,    31,  -184,  -184,    17,    72,   412,   412,   412,
      51,  -184,    42,    42,  1106,    22,   934,   934,   934,   934,
     934,   934,   934,   934,   934,   934,   934,   934,   934,   934,
     934,   934,  -184,  -184,    96,  -184,  -184,  -184,   113,   166,
    -184,    87,    82,    84,    -2,   882,   160,   934,  -184,  -184,
     934,   802,    -2,  -184,    95,    98,    92,    94,    99,   114,
     115,   116,  -184,  -184,   112,  -184,  -184,  -184,   117,  -184,
     480,  -184,  -184,  -184,  -184,   120,    42,    42,    57,    42,
      42,    57,  1249,  1249,    80,  1261,    49,  1094,    15,    15,
      24,    24,   -15,  -184,   122,   124,  -184,    40,     0,   913,
       0,   143,   642,  -184,   165,  1046,  1207,   172,   199,   934,
     210,  -184,  -184,  -184,  -184,  -184,  -184,   -18,   535,   320,
     934,  -184,  -184,    -2,   535,    59,  -184,  -184,   443,  1249,
     126,  -184,  -184,   129,    -2,    -6,    -2,   934,  -184,    -2,
     198,   171,  1249,  -184,   132,  -184,  -184,  1034,  -184,   133,
     692,   134,   135,   136,   852,   169,   170,   167,     0,   802,
     215,    -2,   934,    25,  -184,   772,   205,    -2,    -2,  -184,
     934,  -184,  -184,  -184,  -184,  -184,   443,  -184,  -184,  -184,
     146,   221,    -2,   802,  1231,   227,    -2,   934,   802,    73,
     205,   230,  -184,  -184,  1249,   164,  -184,    -7,  -184,   235,
      -2,    -2,   802,  1082,   237,   535,  -184,   224,   934,    -2,
     243,   642,  -184,   246,   802,   241,   175,    -2,  1058,  -184,
      -2,   248,   249,   253,    -2,    -2,  -184,   934,  -184,  -184,
      -2,   250,  -184,   722,  1249,  -184,    -2,  -184,  -184
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -184,   -10,  -184,  -184,   110,    90,  -184,     2,   245,  -184,
    -183,   247,  -184,    47,  -101,   -54,   150,  -184,  -184,  -184,
    -184,  -184,  -184,   -52,     7,   -13,  -184,  -184,    81,    28,
    -184,  -184,  -184,   -14,  -184,  -184,  -184,  -119,  -184,  -184,
    -184,    44,  -184,   -19,  -184,  -184,  -184,    14,  -184,     8,
    -184,   119,  -184,  -184,    13,  -184,  -184
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -117
static const yytype_int16 yytable[] =
{
      18,    16,   132,    16,    68,   133,   171,   172,   173,   103,
       9,   135,   136,   137,   175,    20,   140,    16,  -116,    14,
      86,    19,    91,    21,    93,    19,    95,   260,   122,   123,
     261,   262,    87,   126,   146,   245,    15,   122,   123,    22,
     162,   249,   126,    68,     1,    23,    24,    19,     2,    25,
      11,    26,    27,    28,    12,   122,   123,    75,   285,   103,
     126,   286,   122,   123,   116,   117,    76,   119,   120,    83,
     122,   123,    68,   108,   109,   126,    85,   141,   148,   227,
      92,   232,    94,    97,   151,   104,   153,   116,   117,   118,
     119,   120,   121,   122,   123,   112,   113,   114,   126,   207,
       1,    17,    -7,    17,     2,    96,    -7,  -116,   152,    77,
      78,    79,    80,    81,    82,   154,   155,    88,   130,   131,
     163,    47,   316,    48,    49,    98,    99,   255,    50,   -63,
     134,    68,   167,   222,   202,   104,   100,    68,   105,   251,
     252,   253,   208,   128,   129,   130,   131,   101,   138,   102,
     235,   192,    19,   147,   170,   170,   170,   115,   128,   129,
     130,   131,   170,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   149,
     165,   128,   129,   130,   131,   198,   193,   199,    68,   194,
     200,   201,   195,   204,   205,   209,   196,   206,   210,   211,
     141,   212,   141,   233,   236,   240,   213,   281,   157,   158,
     159,   160,   161,   248,    77,    78,    79,    80,    81,    82,
     217,   214,   215,   216,   259,   218,   264,   221,   224,   266,
     225,   299,   241,   243,   257,   258,   304,   267,   268,   269,
     271,   273,   274,   275,   228,    68,   229,   277,   278,   282,
     313,   283,   289,   296,   297,   288,   242,   292,   293,   321,
     280,   301,   323,   307,   308,   170,   170,   247,   310,    68,
     315,   250,   298,   317,    68,   254,   302,   320,   295,   322,
     324,   337,   238,   330,   265,   262,   331,   226,    68,   336,
     311,   312,   110,   314,   111,   203,   305,    68,   244,   319,
      68,   279,   329,   325,   306,   309,     0,   326,     0,   284,
     328,   223,     0,     0,   332,   333,     0,   294,     0,    68,
     335,    21,     0,   170,     0,   -63,   338,     0,     0,     0,
       0,     0,     0,     0,   303,     0,     0,    22,     0,     0,
       0,     0,     0,    23,    24,    19,     0,    25,     0,    26,
      27,    28,   170,   -63,   -63,   318,   -63,   -63,     0,   -63,
       0,   -63,   -63,     0,     0,     0,     0,   -63,     0,   -63,
       0,   -63,   -63,     0,   334,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -63,     0,     0,
     -63,     0,     0,     0,     0,     0,     0,     0,   -63,     0,
       0,     0,     0,     0,     0,     0,     0,    77,    78,    79,
      80,    81,    82,    21,   -63,   -63,   -63,   -63,     0,    47,
       0,    48,    49,     0,     0,   -63,    50,   -63,     0,    22,
     167,     0,     0,     0,     0,    23,    24,    19,     0,    25,
       0,    26,    27,    28,    21,   -63,   -63,     0,   -63,   -63,
       0,   -63,     0,   -63,   -63,     0,     0,     0,     0,   -63,
      22,   -63,     0,   -63,   -63,     0,    23,    24,    19,     0,
      25,     0,    26,    27,    28,     0,     0,     0,     0,   -63,
       0,     0,   -63,     0,     0,     0,     0,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,     0,   126,    77,
      78,    79,    80,    81,    82,     0,   -63,   -63,   -63,     0,
       0,    47,     0,    48,    49,     0,     0,   -63,    50,     0,
       0,   -63,   167,     0,     0,     0,     0,     0,     0,     0,
      77,    78,    79,    80,    81,    82,    21,     0,     0,     0,
       0,     0,    47,     0,    48,    49,     0,     0,     0,    50,
       0,     0,    22,   167,     0,     0,     0,     0,    23,    24,
      19,     0,    25,    21,    26,    27,    28,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    22,
       0,   128,   129,   130,   131,    23,    24,    19,   219,    25,
     220,    26,    27,    28,     0,   -86,    29,     0,   -86,   -86,
       0,    30,     0,    31,    32,     0,     0,     0,     0,   -86,
       0,    33,     0,    34,    35,     0,     0,     0,     0,     0,
       0,     0,    77,    78,    79,    80,    81,    82,     0,    36,
       0,     0,    37,     0,    47,     0,    48,    49,     0,     0,
       0,    50,     0,    21,     0,   167,     0,     0,     0,    38,
      39,    40,    41,    42,    43,     0,    44,    45,    46,    22,
       0,    47,     0,    48,    49,    23,    24,    19,    50,    25,
       0,    26,    27,    28,     0,   -88,    29,     0,   -88,   -88,
       0,    30,     0,    31,    32,     0,     0,     0,     0,     0,
       0,    33,     0,    34,    35,     0,     0,     0,     0,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,    36,
     126,     0,    37,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    21,     0,     0,     0,     0,     0,    38,
      39,    40,    41,    42,    43,     0,    44,    45,    46,    22,
       0,    47,     0,    48,    49,    23,    24,    19,    50,    25,
       0,    26,    27,    28,     0,   -88,    29,     0,     0,     0,
       0,    30,     0,    31,    32,     0,     0,     0,     0,   -88,
       0,    33,     0,    34,    35,     0,     0,    16,     0,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,    36,
     126,     0,    37,   128,   129,   130,   131,     0,     0,   272,
     219,     0,   220,    21,     0,     0,     0,     0,     0,    38,
      39,    40,    41,    42,    43,     0,    44,    45,    46,    22,
       0,    47,     0,    48,    49,    23,    24,    19,    50,    25,
       0,    26,    27,    28,     0,   -88,    29,     0,     0,     0,
       0,    30,     0,    31,    32,     0,     0,     0,     0,     0,
       0,    33,     0,    34,    35,     0,     0,     0,     0,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,    36,
     126,     0,    37,   128,   129,   130,   131,    17,     0,     0,
     287,     0,     0,    21,     0,     0,     0,     0,     0,    38,
      39,    40,    41,    42,    43,     0,    44,    45,    46,    22,
       0,    47,     0,    48,    49,    23,    24,    19,    50,    25,
       0,    26,    27,    28,    21,     0,    29,     0,     0,     0,
       0,    30,     0,    31,    32,     0,     0,     0,     0,     0,
      22,    33,     0,    34,    35,    21,    23,    24,    19,     0,
      25,     0,    26,    27,    28,     0,     0,     0,     0,    36,
       0,    22,    37,   128,   129,   130,   131,    23,    24,    19,
     276,    25,   220,    26,    27,    28,     0,     0,     0,    38,
      39,    40,    41,    42,    43,     0,    44,    45,    46,     0,
       0,    47,     0,    48,    49,     0,     0,     0,    50,     0,
     228,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      77,    78,    79,    80,    81,    82,     0,     0,     0,     0,
       0,     0,    47,     0,    48,    49,     0,     0,     0,    50,
       0,    77,    78,    79,    80,    81,    82,     0,     0,     0,
       0,     0,     0,    47,     0,    48,    49,     0,     0,     0,
      50,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,     0,   126,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,     0,   126,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,    16,   126,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,    16,   126,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,    16,
     126,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,     0,   126,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,     0,   126,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   128,   129,   130,   131,     0,
       0,     0,     0,     0,   270,     0,     0,   128,   129,   130,
     131,     0,     0,     0,   237,     0,     0,     0,     0,   128,
     129,   130,   131,     0,     0,     0,   327,     0,     0,     0,
     127,   128,   129,   130,   131,    88,     0,     0,     0,     0,
       0,     0,     0,   128,   129,   130,   131,    17,     0,     0,
       0,     0,     0,     0,     0,   128,   129,   130,   131,    88,
       0,     0,     0,     0,     0,     0,     0,   128,   129,   130,
     131,     0,     0,   174,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,     0,   126,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,     0,   126,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,     0,   126,
       0,     0,     0,     0,   144,     0,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   300,   126,   116,   117,
     118,   119,   120,   121,   122,   123,   124,     0,     0,   126,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   128,   129,
     130,   131,     0,     0,   238,     0,     0,     0,     0,     0,
     128,   129,   130,   131,     0,     0,     0,     0,     0,     0,
       0,     0,   128,   129,   130,   131,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     128,   129,   130,   131,     0,     0,     0,     0,     0,     0,
       0,     0,   128,   129,   130,   131
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-184)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      10,     5,    56,     5,    18,    57,   107,   108,   109,    27,
      25,    65,    66,    67,   115,    13,    70,     5,    19,     6,
      30,    25,    32,     1,    34,    25,    36,    33,    13,    14,
      36,    37,    30,    18,    86,   218,     0,    13,    14,    17,
      23,   224,    18,    57,    55,    23,    24,    25,    59,    27,
      57,    29,    30,    31,    61,    13,    14,   106,    33,    27,
      18,    36,    13,    14,     7,     8,   109,    10,    11,    22,
      13,    14,    86,    45,    46,    18,    29,    75,    88,   198,
      47,   200,    35,   106,    94,   103,    96,     7,     8,     9,
      10,    11,    12,    13,    14,    48,    49,    50,    18,   151,
      55,   105,    57,   105,    59,    71,    61,   108,    95,    87,
      88,    89,    90,    91,    92,    84,    85,   105,   103,   104,
     103,    99,   305,   101,   102,   106,   106,   228,   106,   107,
      33,   145,   110,   187,   144,   103,   106,   151,   106,    80,
      81,    82,   152,   101,   102,   103,   104,   106,   108,   106,
     202,    55,    25,   100,   107,   108,   109,   106,   101,   102,
     103,   104,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   106,
     108,   101,   102,   103,   104,    19,    73,   100,   202,    76,
     108,   107,    79,    33,   147,   100,    83,   150,   100,   107,
     198,   107,   200,    60,    39,    33,   107,   259,    98,    99,
     100,   101,   102,   223,    87,    88,    89,    90,    91,    92,
     108,   107,   107,   107,   234,   108,   236,   107,   106,   239,
     106,   283,    33,    23,   108,   106,   288,    39,    67,   107,
     107,   107,   107,   107,    77,   259,   199,    78,    78,    34,
     302,   261,    47,   107,    33,   265,   209,   267,   268,   311,
     258,    34,   314,    33,   100,   218,   219,   220,    33,   283,
      33,   224,   282,    49,   288,   228,   286,    34,   276,    33,
      39,   333,   107,    34,   237,    37,    33,   197,   302,    39,
     300,   301,    47,   303,    47,   145,   289,   311,   217,   309,
     314,   257,   321,   316,   290,   297,    -1,   317,    -1,   262,
     320,   192,    -1,    -1,   324,   325,    -1,   270,    -1,   333,
     330,     1,    -1,   276,    -1,     5,   336,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   287,    -1,    -1,    17,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    -1,    27,    -1,    29,
      30,    31,   305,    33,    34,   308,    36,    37,    -1,    39,
      -1,    41,    42,    -1,    -1,    -1,    -1,    47,    -1,    49,
      -1,    51,    52,    -1,   327,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    88,    89,
      90,    91,    92,     1,    94,    95,    96,     5,    -1,    99,
      -1,   101,   102,    -1,    -1,   105,   106,   107,    -1,    17,
     110,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,    27,
      -1,    29,    30,    31,     1,    33,    34,    -1,    36,    37,
      -1,    39,    -1,    41,    42,    -1,    -1,    -1,    -1,    47,
      17,    49,    -1,    51,    52,    -1,    23,    24,    25,    -1,
      27,    -1,    29,    30,    31,    -1,    -1,    -1,    -1,    67,
      -1,    -1,    70,    -1,    -1,    -1,    -1,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    87,
      88,    89,    90,    91,    92,    -1,    94,    95,    96,    -1,
      -1,    99,    -1,   101,   102,    -1,    -1,   105,   106,    -1,
      -1,    78,   110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      87,    88,    89,    90,    91,    92,     1,    -1,    -1,    -1,
      -1,    -1,    99,    -1,   101,   102,    -1,    -1,    -1,   106,
      -1,    -1,    17,   110,    -1,    -1,    -1,    -1,    23,    24,
      25,    -1,    27,     1,    29,    30,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      -1,   101,   102,   103,   104,    23,    24,    25,   108,    27,
     110,    29,    30,    31,    -1,    33,    34,    -1,    36,    37,
      -1,    39,    -1,    41,    42,    -1,    -1,    -1,    -1,    47,
      -1,    49,    -1,    51,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    88,    89,    90,    91,    92,    -1,    67,
      -1,    -1,    70,    -1,    99,    -1,   101,   102,    -1,    -1,
      -1,   106,    -1,     1,    -1,   110,    -1,    -1,    -1,    87,
      88,    89,    90,    91,    92,    -1,    94,    95,    96,    17,
      -1,    99,    -1,   101,   102,    23,    24,    25,   106,    27,
      -1,    29,    30,    31,    -1,    33,    34,    -1,    36,    37,
      -1,    39,    -1,    41,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    51,    52,    -1,    -1,    -1,    -1,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    67,
      18,    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,    87,
      88,    89,    90,    91,    92,    -1,    94,    95,    96,    17,
      -1,    99,    -1,   101,   102,    23,    24,    25,   106,    27,
      -1,    29,    30,    31,    -1,    33,    34,    -1,    -1,    -1,
      -1,    39,    -1,    41,    42,    -1,    -1,    -1,    -1,    47,
      -1,    49,    -1,    51,    52,    -1,    -1,     5,    -1,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    67,
      18,    -1,    70,   101,   102,   103,   104,    -1,    -1,   107,
     108,    -1,   110,     1,    -1,    -1,    -1,    -1,    -1,    87,
      88,    89,    90,    91,    92,    -1,    94,    95,    96,    17,
      -1,    99,    -1,   101,   102,    23,    24,    25,   106,    27,
      -1,    29,    30,    31,    -1,    33,    34,    -1,    -1,    -1,
      -1,    39,    -1,    41,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    51,    52,    -1,    -1,    -1,    -1,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    67,
      18,    -1,    70,   101,   102,   103,   104,   105,    -1,    -1,
     108,    -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,    87,
      88,    89,    90,    91,    92,    -1,    94,    95,    96,    17,
      -1,    99,    -1,   101,   102,    23,    24,    25,   106,    27,
      -1,    29,    30,    31,     1,    -1,    34,    -1,    -1,    -1,
      -1,    39,    -1,    41,    42,    -1,    -1,    -1,    -1,    -1,
      17,    49,    -1,    51,    52,     1,    23,    24,    25,    -1,
      27,    -1,    29,    30,    31,    -1,    -1,    -1,    -1,    67,
      -1,    17,    70,   101,   102,   103,   104,    23,    24,    25,
     108,    27,   110,    29,    30,    31,    -1,    -1,    -1,    87,
      88,    89,    90,    91,    92,    -1,    94,    95,    96,    -1,
      -1,    99,    -1,   101,   102,    -1,    -1,    -1,   106,    -1,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      87,    88,    89,    90,    91,    92,    -1,    -1,    -1,    -1,
      -1,    -1,    99,    -1,   101,   102,    -1,    -1,    -1,   106,
      -1,    87,    88,    89,    90,    91,    92,    -1,    -1,    -1,
      -1,    -1,    -1,    99,    -1,   101,   102,    -1,    -1,    -1,
     106,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,     5,    18,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,     5,    18,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,     5,
      18,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   101,   102,   103,   104,    -1,
      -1,    -1,    -1,    -1,   110,    -1,    -1,   101,   102,   103,
     104,    -1,    -1,    -1,   108,    -1,    -1,    -1,    -1,   101,
     102,   103,   104,    -1,    -1,    -1,   108,    -1,    -1,    -1,
     100,   101,   102,   103,   104,   105,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   101,   102,   103,   104,   105,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   101,   102,   103,   104,   105,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,   102,   103,
     104,    -1,    -1,   107,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      -1,    -1,    -1,    -1,    35,    -1,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    35,    18,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    -1,    -1,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,   102,
     103,   104,    -1,    -1,   107,    -1,    -1,    -1,    -1,    -1,
     101,   102,   103,   104,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   101,   102,   103,   104,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     101,   102,   103,   104,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   101,   102,   103,   104
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    55,    59,   113,   161,   163,   164,   165,   167,    25,
     162,    57,    61,   160,   165,     0,     5,   105,   112,    25,
     118,     1,    17,    23,    24,    27,    29,    30,    31,    34,
      39,    41,    42,    49,    51,    52,    67,    70,    87,    88,
      89,    90,    91,    92,    94,    95,    96,    99,   101,   102,
     106,   117,   118,   119,   122,   123,   124,   127,   128,   129,
     130,   131,   132,   133,   134,   141,   142,   143,   144,   145,
     146,   153,   155,   156,   166,   106,   109,    87,    88,    89,
      90,    91,    92,   124,   144,   124,   112,   118,   105,   112,
     126,   112,    47,   112,   124,   112,    71,   106,   106,   106,
     106,   106,   106,    27,   103,   106,   139,   140,   140,   140,
     119,   122,   124,   124,   124,   106,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    18,   100,   101,   102,
     103,   104,   126,   134,    33,   126,   126,   126,   108,   116,
     126,   118,   147,   148,    35,   151,   134,   100,   112,   106,
     135,   112,   165,   112,    84,    85,   115,   115,   115,   115,
     115,   115,    23,   103,   138,   108,   137,   110,   120,   121,
     124,   125,   125,   125,   107,   125,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,    55,    73,    76,    79,    83,   114,    19,   100,
     108,   107,   112,   127,    33,   124,   124,   134,   112,   100,
     100,   107,   107,   107,   107,   107,   107,   108,   108,   108,
     110,   107,   126,   162,   106,   106,   116,   148,    77,   124,
     150,   152,   148,    60,   159,   134,    39,   108,   107,   136,
      33,    33,   124,    23,   139,   121,   125,   124,   112,   121,
     124,    80,    81,    82,   124,   125,   149,   108,   106,   112,
      33,    36,    37,   154,   112,   124,   112,    39,    67,   107,
     110,   107,   107,   107,   107,   107,   108,    78,    78,   152,
     118,   134,    34,   112,   124,    33,    36,   108,   112,    47,
     157,   158,   112,   112,   124,   118,   107,    33,   112,   134,
      35,    34,   112,   124,   134,   135,   158,    33,   100,   160,
      33,   112,   112,   134,   112,    33,   121,    49,   124,   112,
      34,   134,    33,   134,    39,   136,   112,   108,   112,   154,
      34,    33,   112,   112,   124,   112,    39,   134,   112
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

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
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
        break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
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

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

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
      yychar = YYLEX;
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
     `$$ = $1'.

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
/* Line 1792 of yacc.c  */
#line 55 "for90.y"
    {
				(yyval).fs.CurrentTerm = Term{ TokenMeta::CRLF, "\n" };
				update_pos((yyval));
			}
    break;

  case 3:
/* Line 1792 of yacc.c  */
#line 60 "for90.y"
    {
				(yyval).fs.CurrentTerm = Term{ TokenMeta::Semicolon, ";" };
				update_pos((yyval));
			}
    break;

  case 4:
/* Line 1792 of yacc.c  */
#line 65 "for90.y"
    {
				(yyval).fs.CurrentTerm = Term{ TokenMeta::Nop, "" };
				update_pos((yyval));
			}
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 75 "for90.y"
    {
				ParseNode * newnode = new ParseNode();
				newnode->fs.CurrentTerm = Term{ TokenMeta::NT_VARIABLEDESC, "NT_VARIABLEDESC" }; // intent(in)
				newnode->attr = new VariableDescAttr(newnode);
				dynamic_cast<VariableDescAttr *>(newnode->attr)->desc.reference = true;
				dynamic_cast<VariableDescAttr *>(newnode->attr)->desc.constant = true;
				(yyval) = *newnode;
				update_pos((yyval));
			}
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 85 "for90.y"
    {
				ParseNode * newnode = new ParseNode();
				newnode->fs.CurrentTerm = Term{ TokenMeta::NT_VARIABLEDESC, "NT_VARIABLEDESC" }; // intent(out)
				newnode->attr = new VariableDescAttr(newnode);
				dynamic_cast<VariableDescAttr *>(newnode->attr)->desc.reference = true;
				dynamic_cast<VariableDescAttr *>(newnode->attr)->desc.constant = false;
				(yyval) = *newnode;
				update_pos((yyval));
			}
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 96 "for90.y"
    {
				ParseNode * newnode = new ParseNode();
				newnode->fs.CurrentTerm = Term{ TokenMeta::NT_VARIABLEDESC, "NT_VARIABLEDESC" }; // intent(inout)
				newnode->attr = new VariableDescAttr(newnode);
				dynamic_cast<VariableDescAttr *>(newnode->attr)->desc.reference = true;
				dynamic_cast<VariableDescAttr *>(newnode->attr)->desc.constant = false;
				(yyval) = *newnode;
				update_pos((yyval));
			}
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 106 "for90.y"
    {
				/* if write `',' YY_DIMENSION` in `var_def` will cause conflict at ',' */
				/* if is array reduce immediately and goto `var_def` */
				/* do not parse array slices here because it can be dificult */
				ParseNode * newnode = new ParseNode();
				ParseNode * dimen = new ParseNode((yyvsp[(3) - (4)]));
				newnode->addchild(dimen); // def slice
				int sliceid = 0; /* if the array has 2 dimensions, sliceid is 0..1 */
				for (sliceid = 0; sliceid < dimen->child.size(); sliceid++)
				{
					sprintf(codegen_buf, "(%s, %s)"
						/* from, to */
						, dimen->child[sliceid]->child[0]->fs.CurrentTerm.what.c_str()
						, dimen->child[sliceid]->child[1]->fs.CurrentTerm.what.c_str());
					dimen->child[sliceid]->fs.CurrentTerm = Term{ TokenMeta::NT_VARIABLEDESC, string(codegen_buf) };
				}
				newnode->attr = new VariableDescAttr(newnode);
				dynamic_cast<VariableDescAttr *>(newnode->attr)->desc.slice = dimen;
				(yyval) = *newnode;
				update_pos((yyval));
			}
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 128 "for90.y"
    {
				/* define array like a(1) */
				ParseNode * newnode = new ParseNode();
				ParseNode * dimen = new ParseNode();
				ParseNode * slice = new ParseNode();
				ParseNode * exp = new ParseNode();
				exp->fs.CurrentTerm = Term{ TokenMeta::NT_VARIABLEDESC, "1" };
				slice->addchild(exp); // slice from 1
				sprintf(codegen_buf, "%s", /* from 1, to */(yyvsp[(3) - (4)]).fs.CurrentTerm.what.c_str());
				slice->addchild(new ParseNode((yyvsp[(3) - (4)]))); // slice to
				dimen->addchild(slice);
				newnode->addchild(dimen); // def slice

				int sliceid = 0; /* only 1 dimension */
				sprintf(codegen_buf, "(%s, %s)"
					/* from 1, to */
					, dimen->child[sliceid]->child[0]->fs.CurrentTerm.what.c_str()
					, dimen->child[sliceid]->child[1]->fs.CurrentTerm.what.c_str());
				dimen->child[sliceid]->fs.CurrentTerm = Term{ TokenMeta::NT_VARIABLEDESC, string(codegen_buf) };

				newnode->attr = new VariableDescAttr(newnode);
				dynamic_cast<VariableDescAttr *>(newnode->attr)->desc.slice = dimen;
				(yyval) = *newnode;
				update_pos((yyval));
			}
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 154 "for90.y"
    {
				ParseNode * newnode = new ParseNode();
				newnode->fs.CurrentTerm = Term{ TokenMeta::NT_VARIABLEDESC, "NT_VARIABLEDESC" }; // intent(inout)
				newnode->attr = new VariableDescAttr(newnode);
				dynamic_cast<VariableDescAttr *>(newnode->attr)->desc.optional = true;
				(yyval) = *newnode;
				update_pos((yyval));
			}
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 163 "for90.y"
    {
				/* const value */
				ParseNode * newnode = new ParseNode();
				newnode->fs.CurrentTerm = Term{ TokenMeta::NT_VARIABLEDESC, "NT_VARIABLEDESC" }; // const
				newnode->attr = new VariableDescAttr(newnode);
				dynamic_cast<VariableDescAttr *>(newnode->attr)->desc.constant = true;
				(yyval) = *newnode;
				update_pos((yyval));
			}
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 174 "for90.y"
    {
				int kind;
				sscanf((yyvsp[(3) - (3)]).fs.CurrentTerm.what.c_str(), "%d", &kind);
				ParseNode * newnode = new ParseNode();
				newnode->fs.CurrentTerm = Term{ TokenMeta::NT_VARIABLEDESC, "NT_VARIABLEDESC" }; // kind
				newnode->attr = new VariableDescAttr(newnode);
				dynamic_cast<VariableDescAttr *>(newnode->attr)->desc.kind = kind;
				(yyval) = *newnode;
				update_pos((yyval));
			}
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 185 "for90.y"
    {
				// do nothing because we use std::string
			}
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 190 "for90.y"
    {
				ParseNode * newnode = new ParseNode((yyvsp[(1) - (2)]));
				(yyval) = (yyvsp[(2) - (2)]);
				update_pos((yyval));
			}
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 196 "for90.y"
    {				
				ParseNode * newnode = new ParseNode();
				ParseNode * variable_iden = & (yyvsp[(3) - (3)]);
				ParseNode & variable_iden_1 = (yyvsp[(2) - (3)]);
				/* target code of slice depend on context */
				newnode->fs.CurrentTerm = Term{ TokenMeta::NT_VARIABLEDESC, "NT_VARIABLEDESC" };
				/* merge attrs */
				newnode->attr = variable_iden_1.attr->clone();
				VariableDescAttr * new_a = dynamic_cast<VariableDescAttr *>(newnode->attr);
				VariableDescAttr * var_a = dynamic_cast<VariableDescAttr *>(variable_iden->attr);
				new_a->merge(*var_a);
				// TODO do not add child
				(yyval) = *newnode;
				update_pos((yyval));
			}
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 212 "for90.y"
    {
				ParseNode * newnode = new ParseNode();
				newnode->fs.CurrentTerm = Term{ TokenMeta::NT_VARIABLEDESC, "NT_VARIABLEDESC" }; 
				newnode->attr = new VariableDescAttr(newnode);
				(yyval) = *newnode;
				update_pos((yyval));
			}
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 222 "for90.y"
    {
				/* 该条目下的右部全部为单个终结符号(语法树的叶子节点), 因此$1全部来自lex程序 */
				ParseNode * newnode = new ParseNode();
				newnode->fs.CurrentTerm = Term{ TokenMeta::Float, (yyvsp[(1) - (1)]).fs.CurrentTerm.what }; // float number
				(yyval) = *newnode;
			}
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 229 "for90.y"
    {
				ParseNode * newnode = new ParseNode();
				newnode->fs.CurrentTerm = Term{ TokenMeta::Int, (yyvsp[(1) - (1)]).fs.CurrentTerm.what }; // int number
				(yyval) = *newnode;
			}
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 235 "for90.y"
    {
				ParseNode * newnode = new ParseNode();
				// replace `'` with `"`
				string modified = "\"" + (yyvsp[(1) - (1)]).fs.CurrentTerm.what.substr(1, (yyvsp[(1) - (1)]).fs.CurrentTerm.what.size() - 2) + "\"";
				newnode->fs.CurrentTerm = Term{ TokenMeta::String, modified }; // string
				(yyval) = *newnode;
			}
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 243 "for90.y"
    {
				ParseNode * newnode = new ParseNode();
				newnode->fs.CurrentTerm = Term{ TokenMeta::Bool, "true" }; // bool true
				(yyval) = *newnode;
			}
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 249 "for90.y"
    {
				ParseNode * newnode = new ParseNode();
				newnode->fs.CurrentTerm = Term{ TokenMeta::Bool, "false" }; // bool false
				(yyval) = *newnode;
			}
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 255 "for90.y"
    {
				ParseNode * newnode = new ParseNode();
				string strcplx = (yyvsp[(1) - (1)]).fs.CurrentTerm.what;
				int splitter = strcplx.find_first_of('_', 0);
				newnode->fs.CurrentTerm = Term{ TokenMeta::Complex, "forcomplex(" + strcplx.substr(0, splitter) + ", " + strcplx.substr(splitter + 1) + ") "}; // complex
				(yyval) = *newnode;
			}
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 267 "for90.y"
    {
				ParseNode * newnode = new ParseNode();
				newnode->fs.CurrentTerm = Term{ TokenMeta::UnknownVariant, (yyvsp[(1) - (1)]).fs.CurrentTerm.what }; // variant
				(yyval) = *newnode;
			}
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 274 "for90.y"
    {
				/* array index and function name and type cast */
				string x = (yyvsp[(1) - (1)]).fs.CurrentTerm.what;
				(yyval) = (yyvsp[(1) - (1)]);
			}
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 280 "for90.y"
    {
				/* array index and function name and type cast */
				string x = (yyvsp[(1) - (1)]).fs.CurrentTerm.what;
				(yyval) = (yyvsp[(1) - (1)]);
			}
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 287 "for90.y"
    {
				/* arr[from : to] */
				ParseNode & exp1 = (yyvsp[(1) - (3)]);
				ParseNode & exp2 = (yyvsp[(3) - (3)]);
				/* target code of slice depend on context */
				(yyval) = gen_slice(exp1, exp2);
				update_pos((yyval));
			}
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 296 "for90.y"
    {
				/* arr[from : to : step] */
				ParseNode & exp1 = (yyvsp[(1) - (5)]);
				ParseNode & exp2 = (yyvsp[(3) - (5)]);
				ParseNode & exp3 = (yyvsp[(5) - (5)]);
				/* target code of slice depend on context */
				(yyval) = gen_slice(exp1, exp2, exp3);
				update_pos((yyval));
			}
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 306 "for90.y"
    {
				/* arr[from : to : step] */
				ParseNode & lb = gen_exp(gen_token(Term{ TokenMeta::META_INTEGER, "-1" }));
				ParseNode & ub = gen_exp(gen_token(Term{ TokenMeta::META_INTEGER, "-1" }));
				/* target code of slice depend on context */
				(yyval) = gen_slice(lb, ub);
				update_pos((yyval));
			}
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 316 "for90.y"
    {
				/* 1d array */
				/* arr[from : to] */
				/* target code of slice depend on context */
				ParseNode & slice = (yyvsp[(1) - (1)]);
				// only 1 slice
				(yyval) = gen_dimenslice_from_slice(slice);
				update_pos((yyval));
			}
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 326 "for90.y"
    {
				/* multi dimension array */
				/* arr[from:to, from:to, ...] */
				/* target code of slice depend on context */
				ParseNode & slice = (yyvsp[(1) - (3)]);
				ParseNode & dimen_slice = (yyvsp[(3) - (3)]);
				// gen_dimenslice(slice, dimen_slice);
				(yyval) = gen_flattern(slice, dimen_slice, "%s, %s", TokenMeta::NT_DIMENSLICE);
				update_pos((yyval));
			}
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 337 "for90.y"
    {
				/* argtable is used in function call */
				ParseNode & exp = (yyvsp[(1) - (1)]);
				(yyval) = gen_argtable_from_exp(exp);
				update_pos((yyval));
			}
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 344 "for90.y"
    {
				ParseNode & exp = (yyvsp[(1) - (3)]);
				ParseNode & argtable = (yyvsp[(3) - (3)]);
				// gen_argtable(exp, argtable);
				(yyval) = gen_flattern(exp, argtable, "%s, %s", TokenMeta::NT_ARGTABLE);
				update_pos((yyval));
			}
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 353 "for90.y"
    {
				/* function call OR array index */
				/* NOTE that array index can be A(1:2, 3:4) */
				ParseNode & callable_head = (yyvsp[(1) - (4)]);
				ParseNode & argtable = (yyvsp[(3) - (4)]);
				(yyval) = gen_function_array(callable_head, argtable);
				update_pos((yyval));
			}
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 363 "for90.y"
    {
				(yyval) = (yyvsp[(1) - (1)])
			;}
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 367 "for90.y"
    {
				(yyval) = (yyvsp[(2) - (2)])
			;}
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 372 "for90.y"
    {
				/* function call OR array index */
				ParseNode & function_array = (yyvsp[(1) - (1)]);
				(yyval) = gen_exp(function_array);
				update_pos((yyval));
			}
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 380 "for90.y"
    {
				/* `function_array` rule has priority over this rule  */
				ParseNode & exp = (yyvsp[(2) - (3)]);
				ParseNode op = gen_token(Term{ TokenMeta::LB, "(" });
				(yyval) = gen_exp(exp, op, "( %s )");
				update_pos((yyval));
			}
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 388 "for90.y"
    {
				ParseNode & exp1 = (yyvsp[(1) - (3)]);
				ParseNode & op = (yyvsp[(2) - (3)]);
				ParseNode & exp2 = (yyvsp[(3) - (3)]);
				(yyval) = gen_exp(exp1, op, exp2, "%s + %s");
				update_pos((yyval));
			}
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 396 "for90.y"
    {
				ParseNode & exp1 = (yyvsp[(1) - (3)]);
				ParseNode & op = (yyvsp[(2) - (3)]);
				ParseNode & exp2 = (yyvsp[(3) - (3)]);
				(yyval) = gen_exp(exp1, op, exp2, "%s - %s");
				update_pos((yyval));
			}
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 404 "for90.y"
    {
				ParseNode & exp1 = (yyvsp[(1) - (3)]);
				ParseNode & op = (yyvsp[(2) - (3)]);
				ParseNode & exp2 = (yyvsp[(3) - (3)]);
				(yyval) = gen_exp(exp1, op, exp2, "%s * %s");
				update_pos((yyval));
			}
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 412 "for90.y"
    {
				ParseNode & exp1 = (yyvsp[(1) - (3)]);
				ParseNode & op = (yyvsp[(2) - (3)]);
				ParseNode & exp2 = (yyvsp[(3) - (3)]);
				(yyval) = gen_exp(exp1, op, exp2, "%s / %s");
				update_pos((yyval));
			}
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 420 "for90.y"
    {
				ParseNode & exp1 = (yyvsp[(1) - (3)]);
				ParseNode & op = (yyvsp[(2) - (3)]);
				ParseNode & exp2 = (yyvsp[(3) - (3)]);
				(yyval) = gen_exp(exp1, op, exp2, "power(%s, %s)");
				update_pos((yyval));
			}
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 428 "for90.y"
    {
				ParseNode & exp1 = (yyvsp[(2) - (2)]);
				ParseNode & op = (yyvsp[(1) - (2)]);
				(yyval) = gen_exp(exp1, op,  "(-%s)");
				update_pos((yyval));
			}
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 435 "for90.y"
    {
				ParseNode & exp1 = (yyvsp[(2) - (2)]);
				ParseNode & op = (yyvsp[(1) - (2)]);
				(yyval) = gen_exp(exp1, op,  "%s");
				update_pos((yyval));
			}
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 442 "for90.y"
    {
				ParseNode & exp1 = (yyvsp[(1) - (3)]);
				ParseNode & op = (yyvsp[(2) - (3)]);
				ParseNode & exp2 = (yyvsp[(3) - (3)]);
				(yyval) = gen_exp(exp1, op, exp2, "%s != %s");
				update_pos((yyval));
			}
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 450 "for90.y"
    {
				ParseNode & exp1 = (yyvsp[(1) - (3)]);
				ParseNode & op = (yyvsp[(2) - (3)]);
				ParseNode & exp2 = (yyvsp[(3) - (3)]);
				(yyval) = gen_exp(exp1, op, exp2, "%s != %s");
				update_pos((yyval));
			}
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 458 "for90.y"
    {
				ParseNode & exp1 = (yyvsp[(1) - (3)]);
				ParseNode & op = (yyvsp[(2) - (3)]);
				ParseNode & exp2 = (yyvsp[(3) - (3)]);
				(yyval) = gen_exp(exp1, op, exp2, "%s == %s");
				update_pos((yyval));
			}
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 466 "for90.y"
    {
				ParseNode & exp1 = (yyvsp[(1) - (3)]);
				ParseNode & op = (yyvsp[(2) - (3)]);
				ParseNode & exp2 = (yyvsp[(3) - (3)]);
				(yyval) = gen_exp(exp1, op, exp2, "%s == %s");
				update_pos((yyval));
			}
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 474 "for90.y"
    {
				ParseNode & exp1 = (yyvsp[(1) - (3)]);
				ParseNode & op = (yyvsp[(2) - (3)]);
				ParseNode & exp2 = (yyvsp[(3) - (3)]);
				(yyval) = gen_exp(exp1, op, exp2, "%s && %s");
				update_pos((yyval));
			}
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 482 "for90.y"
    {
				ParseNode & exp1 = (yyvsp[(1) - (3)]);
				ParseNode & op = (yyvsp[(2) - (3)]);
				ParseNode & exp2 = (yyvsp[(3) - (3)]);
				(yyval) = gen_exp(exp1, op, exp2, "%s || %s");
				update_pos((yyval));
			}
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 490 "for90.y"
    {
				ParseNode & exp1 = (yyvsp[(2) - (2)]);
				ParseNode & op = (yyvsp[(1) - (2)]);
				(yyval) = gen_exp(exp1, op, "!(%s)");
				update_pos((yyval));
			}
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 497 "for90.y"
    {
				ParseNode & exp1 = (yyvsp[(1) - (3)]);
				ParseNode & op = (yyvsp[(2) - (3)]);
				ParseNode & exp2 = (yyvsp[(3) - (3)]);
				(yyval) = gen_exp(exp1, op, exp2, "%s > %s");
				update_pos((yyval));
			}
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 505 "for90.y"
    {
				ParseNode & exp1 = (yyvsp[(1) - (3)]);
				ParseNode & op = (yyvsp[(2) - (3)]);
				ParseNode & exp2 = (yyvsp[(3) - (3)]);
				(yyval) = gen_exp(exp1, op, exp2, "%s >= %s");
				update_pos((yyval));
			}
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 513 "for90.y"
    {
				ParseNode & exp1 = (yyvsp[(1) - (3)]);
				ParseNode & op = (yyvsp[(2) - (3)]);
				ParseNode & exp2 = (yyvsp[(3) - (3)]);
				(yyval) = gen_exp(exp1, op, exp2, "%s <= %s");
				update_pos((yyval));
			}
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 521 "for90.y"
    {
				ParseNode & exp1 = (yyvsp[(1) - (3)]);
				ParseNode & op = (yyvsp[(2) - (3)]);
				ParseNode & exp2 = (yyvsp[(3) - (3)]);
				(yyval) = gen_exp(exp1, op, exp2, "%s < %s");
				update_pos((yyval));
			}
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 529 "for90.y"
    { 
				// 
				ParseNode & exp = (yyvsp[(1) - (1)]);
				(yyval) = (yyvsp[(1) - (1)]);
			}
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 535 "for90.y"
    {
				// may cause reduction-reduction conflict when use `variable` instead of `callable_head`
				// TODO : i am a little strange that `integer::a, b, c` works well because i am afraid that callable_head will reduce to exp from here. however according to LR(1), `::` is not in FOLLOW(exp)
				ParseNode & exp = (yyvsp[(1) - (1)]);
				(yyval) = (yyvsp[(1) - (1)]);
			}
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 543 "for90.y"
    {
				ParseNode * newnode = new ParseNode();
#ifndef LAZY_GEN
				ParseNode & dimen_slice = (yyvsp[(1) - (1)]);
				bool isdimen = false;
				int sliceid = 0; /* if the array has 2 dimensions, sliceid is 0..1 */
				dimen_slice.fs.CurrentTerm.what = "";
				for (sliceid = 0; sliceid < dimen_slice.child.size(); sliceid++)
				{
					if (sliceid != 0) {
						dimen_slice.fs.CurrentTerm.what += ", ";
					}
					if (dimen_slice.fs.CurrentTerm.token == TokenMeta::NT_DIMENSLICE) {
						// dimen_slice
						isdimen = true;
						newnode->addchild(new ParseNode(*dimen_slice.child[sliceid]));
						sprintf(codegen_buf, "%s, %s"
							/* from, to */
							, dimen_slice.child[sliceid]->child[0]->fs.CurrentTerm.what.c_str()
							, dimen_slice.child[sliceid]->child[1]->fs.CurrentTerm.what.c_str());
					}
					else {
						// exp
						isdimen = false;
						newnode->addchild(new ParseNode(*dimen_slice.child[sliceid]));
						sprintf(codegen_buf, "%s", dimen_slice.child[sliceid]->fs.CurrentTerm.what.c_str());
					}
					dimen_slice.fs.CurrentTerm.what += codegen_buf;
				}
				if (isdimen) {
					//sprintf(codegen_buf, "%s", dimen_slice.fs.CurrentTerm.what.c_str());
					sprintf(codegen_buf, "%%s.slice(%s)", dimen_slice.fs.CurrentTerm.what.c_str());
					newnode->fs.CurrentTerm = Term{ TokenMeta::NT_ARGTABLE_DIMENSLICE, string(codegen_buf) };
				}
				else {
					//sprintf(codegen_buf, "%%s(%s)", dimen_slice.fs.CurrentTerm.what.c_str());
					sprintf(codegen_buf, "%s", dimen_slice.fs.CurrentTerm.what.c_str());
					newnode->fs.CurrentTerm = Term{ TokenMeta::NT_ARGTABLE_PURE, string(codegen_buf) };
				}
#endif // !LAZY_GEN
				(yyval) = *newnode;
				update_pos((yyval));
			}
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 587 "for90.y"
    {
				// TODO : argtable can also be empty
				ParseNode * newnode = new ParseNode();
#ifndef LAZY_GEN
				newnode->fs.CurrentTerm = Term{ TokenMeta::NT_ARGTABLE_PURE, "" };
#endif // !LAZY_GEN
				(yyval) = *newnode;
				update_pos((yyval));
			}
    break;

  case 66:
/* Line 1792 of yacc.c  */
#line 601 "for90.y"
    {
				// TODO IMPORTANT
				/*
					一般来说, 可以不单独建立stmt的ParseNode, 再添加唯一的child(exp, var_def, compound_stmt等).
					但是考虑到在cpp等语言中可能出现使用,分隔多个语句的情况(这种情况是有作用的, 表明编译器可以按照自己的顺序求值)
					所以单独建立stmt节点兵添加$1位stmt节点的唯一的儿子
				*/
				ParseNode * newnode = new ParseNode();
				ParseNode & exp = (yyvsp[(1) - (2)]);
				//(crlf.fs.CurrentTerm.token == TokenMeta::CRLF ? ";" : "")
				sprintf(codegen_buf, "%s ;", exp.fs.CurrentTerm.what.c_str());
				newnode->fs.CurrentTerm = Term{ TokenMeta::NT_STATEMENT, string(codegen_buf) };
				newnode->addchild(new ParseNode(exp)); // exp
				(yyval) = *newnode;
				update_pos((yyval));
			}
    break;

  case 67:
/* Line 1792 of yacc.c  */
#line 618 "for90.y"
    {
				ParseNode * newnode = new ParseNode();
				ParseNode & var_def = (yyvsp[(1) - (2)]);
				/* 因为var_def本身可能生成多行代码, 因此此处生成代码不应当带分号`;` */
#ifndef LAZY_GEN
				sprintf(codegen_buf, "%s ", var_def.fs.CurrentTerm.what.c_str());
				newnode->fs.CurrentTerm = Term{ TokenMeta::NT_STATEMENT, string(codegen_buf) };
#endif // !LAZY_GEN
				newnode->addchild(new ParseNode(var_def)); // var_def
				(yyval) = *newnode;
				update_pos((yyval));
			}
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 635 "for90.y"
    {
				ParseNode * newnode = new ParseNode();
				ParseNode & let = (yyvsp[(1) - (1)]);
				sprintf(codegen_buf, "%s ;", let.fs.CurrentTerm.what.c_str());
				newnode->fs.CurrentTerm = Term{ TokenMeta::NT_STATEMENT, string(codegen_buf) };
				newnode->addchild(new ParseNode(let)); // let
				(yyval) = *newnode;
				update_pos((yyval));
			}
    break;

  case 73:
/* Line 1792 of yacc.c  */
#line 645 "for90.y"
    {
				ParseNode * newnode = new ParseNode();
				ParseNode & jmp = (yyvsp[(1) - (1)]);
				sprintf(codegen_buf, "%s ;", jmp.fs.CurrentTerm.what.c_str());
				newnode->fs.CurrentTerm = Term{ TokenMeta::NT_STATEMENT, string(codegen_buf) };
				newnode->addchild(new ParseNode(jmp)); // jmp
				(yyval) = *newnode;
				update_pos((yyval));
			}
    break;

  case 84:
/* Line 1792 of yacc.c  */
#line 671 "for90.y"
    {
				ParseNode & exp1 = (yyvsp[(1) - (4)]);
				ParseNode & op = (yyvsp[(2) - (4)]);
				ParseNode & exp2 = (yyvsp[(3) - (4)]);
				(yyval) = gen_exp(exp1, op, exp2, "%s = %s");
				update_pos((yyval));
			}
    break;

  case 85:
/* Line 1792 of yacc.c  */
#line 680 "for90.y"
    {
				ParseNode * newnode = new ParseNode();
				newnode->fs.CurrentTerm = Term{ TokenMeta::NT_STATEMENT, "" };
				// dummy stmt
				(yyval) = *newnode;
				update_pos((yyval));
			}
    break;

  case 86:
/* Line 1792 of yacc.c  */
#line 689 "for90.y"
    {
				ParseNode * newnode = new ParseNode();
				ParseNode & stmt = (yyvsp[(1) - (1)]);
				sprintf(codegen_buf, "%s\n", stmt.fs.CurrentTerm.what.c_str());
				newnode->fs.CurrentTerm = Term{ TokenMeta::NT_SUITE, string(codegen_buf) };
				newnode->addchild(new ParseNode(stmt)); // stmt
				(yyval) = *newnode;
				update_pos((yyval));
			}
    break;

  case 87:
/* Line 1792 of yacc.c  */
#line 699 "for90.y"
    {
				ParseNode * newnode = new ParseNode();
				ParseNode & stmt = (yyvsp[(1) - (2)]);
				ParseNode & suite = (yyvsp[(2) - (2)]);
				sprintf(codegen_buf, "%s\n%s", stmt.fs.CurrentTerm.what.c_str(), suite.fs.CurrentTerm.what.c_str());
				newnode->fs.CurrentTerm = Term{ TokenMeta::NT_SUITE, string(codegen_buf) };
				newnode->addchild(new ParseNode(stmt)); // stmt
				newnode->addchild(new ParseNode(suite)); // suite
				newnode = flattern_bin(newnode);
				(yyval) = *newnode;
				update_pos((yyval));
			}
    break;

  case 88:
/* Line 1792 of yacc.c  */
#line 712 "for90.y"
    {
				/* suite can be empty but stmt can not */
				ParseNode * newnode = new ParseNode();
				FlexState fs; fs.CurrentTerm = Term{ TokenMeta::NT_SUITE, "\n" };
				ParseNode & stmt = ParseNode(fs, newnode, nullptr);
				newnode->fs.CurrentTerm = Term{ TokenMeta::NT_SUITE, "\n" };
				newnode->addchild(new ParseNode(stmt)); // stmt
				newnode = flattern_bin(newnode);
				(yyval) = *newnode;
				update_pos((yyval));
			}
    break;

  case 95:
/* Line 1792 of yacc.c  */
#line 731 "for90.y"
    {
				(yyval).fs.CurrentTerm = Term{ TokenMeta::META_NONTERMINAL, "" };
				update_pos((yyval));
			}
    break;

  case 96:
/* Line 1792 of yacc.c  */
#line 736 "for90.y"
    {
				(yyval).fs.CurrentTerm = Term{ TokenMeta::META_NONTERMINAL, (yyvsp[(1) - (1)]).fs.CurrentTerm.what };
				update_pos((yyval));
			}
    break;

  case 97:
/* Line 1792 of yacc.c  */
#line 741 "for90.y"
    {
				(yyval).fs.CurrentTerm = Term{ TokenMeta::NT_AUTOFORMATTER, "" };
				update_pos((yyval));
			}
    break;

  case 98:
/* Line 1792 of yacc.c  */
#line 746 "for90.y"
    {
				// replace `'` with `"`
				string modified = "\"" + (yyvsp[(1) - (1)]).fs.CurrentTerm.what.substr(1, (yyvsp[(1) - (1)]).fs.CurrentTerm.what.size() - 2) + "\"";
				(yyval).fs.CurrentTerm = Term{ TokenMeta::NT_FORMATTER, modified };
				update_pos((yyval));
			}
    break;

  case 99:
/* Line 1792 of yacc.c  */
#line 754 "for90.y"
    {
				ParseNode * newnode = new ParseNode();
				ParseNode & _optional_device = (yyvsp[(2) - (5)]);
				ParseNode & _optional_formatter = (yyvsp[(4) - (5)]);
				/* target code of io_info depend on context, can be either iostream/cstdio */
				newnode->fs.CurrentTerm = Term{ TokenMeta::META_NONTERMINAL, "" };
				newnode->addchild(new ParseNode(_optional_device)); // _optional_device
				newnode->addchild(new ParseNode(_optional_formatter)); // _optional_formatter
				(yyval) = *newnode;
				update_pos((yyval));
			}
    break;

  case 100:
/* Line 1792 of yacc.c  */
#line 766 "for90.y"
    {
				ParseNode * newnode = new ParseNode();
				ParseNode _optional_device = ParseNode();
				_optional_device.fs.CurrentTerm = Term{ TokenMeta::META_NONTERMINAL, "" };
				ParseNode _optional_formatter = (yyvsp[(1) - (2)]);
				/* target code of io_info depend on context */
				newnode->fs.CurrentTerm = Term{ TokenMeta::META_NONTERMINAL, "" };
				newnode->addchild(new ParseNode(_optional_device)); // _optional_device
				newnode->addchild(new ParseNode(_optional_formatter)); // _optional_formatter
				(yyval) = *newnode;
				update_pos((yyval));
			}
    break;

  case 101:
/* Line 1792 of yacc.c  */
#line 781 "for90.y"
    {
				ParseNode & io_info = (yyvsp[(2) - (3)]);
				ParseNode & argtable = (yyvsp[(3) - (3)]);
				(yyval) = gen_write(io_info, argtable);
				update_pos((yyval));
			}
    break;

  case 102:
/* Line 1792 of yacc.c  */
#line 789 "for90.y"
    {
				ParseNode & io_info = (yyvsp[(2) - (3)]);
				ParseNode & argtable = (yyvsp[(3) - (3)]);
				(yyval) = gen_print(io_info, argtable);
				update_pos((yyval));
			}
    break;

  case 103:
/* Line 1792 of yacc.c  */
#line 798 "for90.y"
    {
				ParseNode & io_info = (yyvsp[(2) - (3)]);
				ParseNode & argtable = (yyvsp[(3) - (3)]);
				(yyval) = gen_read(io_info, argtable);
				update_pos((yyval));
			}
    break;

  case 104:
/* Line 1792 of yacc.c  */
#line 806 "for90.y"
    {
				(yyval) = gen_type((yyvsp[(1) - (1)]));
				update_pos((yyval));
			}
    break;

  case 105:
/* Line 1792 of yacc.c  */
#line 811 "for90.y"
    {
				(yyval) = gen_type((yyvsp[(1) - (1)]));
				update_pos((yyval));
			}
    break;

  case 106:
/* Line 1792 of yacc.c  */
#line 816 "for90.y"
    {
				(yyval) = gen_type((yyvsp[(1) - (1)]));
				update_pos((yyval));
			}
    break;

  case 107:
/* Line 1792 of yacc.c  */
#line 821 "for90.y"
    {
				(yyval) = gen_type((yyvsp[(1) - (1)]));
				update_pos((yyval));
			}
    break;

  case 108:
/* Line 1792 of yacc.c  */
#line 826 "for90.y"
    {
				(yyval) = gen_type((yyvsp[(1) - (1)]));
				update_pos((yyval));
			}
    break;

  case 109:
/* Line 1792 of yacc.c  */
#line 831 "for90.y"
    {
				(yyval) = gen_type((yyvsp[(1) - (1)]));
				update_pos((yyval));
			}
    break;

  case 110:
/* Line 1792 of yacc.c  */
#line 837 "for90.y"
    {
				// now translated in pre_map
				//$1.fs.CurrentTerm.what = typename_map.at($1.fs.CurrentTerm.what);
				(yyval) = gen_type((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
				update_pos((yyval));
			}
    break;

  case 111:
/* Line 1792 of yacc.c  */
#line 844 "for90.y"
    {
				(yyval) = gen_type((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
				update_pos((yyval));
			}
    break;

  case 112:
/* Line 1792 of yacc.c  */
#line 849 "for90.y"
    {
				(yyval) = gen_type((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
				update_pos((yyval));
			}
    break;

  case 113:
/* Line 1792 of yacc.c  */
#line 854 "for90.y"
    {
				(yyval) = gen_type((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
				update_pos((yyval));
			}
    break;

  case 114:
/* Line 1792 of yacc.c  */
#line 859 "for90.y"
    {
				(yyval) = gen_type((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
				update_pos((yyval));
			}
    break;

  case 115:
/* Line 1792 of yacc.c  */
#line 864 "for90.y"
    {
				(yyval) = gen_type((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
				update_pos((yyval));
			}
    break;

  case 117:
/* Line 1792 of yacc.c  */
#line 872 "for90.y"
    {
				/* array decl */
				ParseNode & type_spec = (yyvsp[(1) - (4)]);
				ParseNode & variable_desc = (yyvsp[(2) - (4)]);
				ParseNode & paramtable = (yyvsp[(4) - (4)]);

				(yyval) = gen_vardef(type_spec, variable_desc, paramtable);
				update_pos((yyval));
			}
    break;

  case 118:
/* Line 1792 of yacc.c  */
#line 883 "for90.y"
    {	
				/* paramtable is used in function decl */
				/* this paramtable has only one value */
				ParseNode & variable = (yyvsp[(1) - (1)]);
				(yyval) = gen_keyvalue(variable);
				update_pos((yyval));
			}
    break;

  case 119:
/* Line 1792 of yacc.c  */
#line 891 "for90.y"
    {
				/* initial value is required in parse tree because it can be an non-terminal `exp` */
				/* non-array initial values */
				(yyval) = gen_keyvalue_from_exp((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
				update_pos((yyval));
			}
    break;

  case 120:
/* Line 1792 of yacc.c  */
#line 898 "for90.y"
    {
				/* initial value is required in parse tree because it can be an non-terminal `exp` */
				/* array initial values */;
				/* 因为使用forarray作为数组, 故需要知道类型信息, 不在此处赋值, 在上层的var_def赋初值 */
				(yyval) = gen_keyvalue_from_arraybuilder((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
				update_pos((yyval));
			}
    break;

  case 121:
/* Line 1792 of yacc.c  */
#line 907 "for90.y"
    {
				//$$ = $1;
				//update_pos($$);

				(yyval) = gen_paramtable((yyvsp[(1) - (1)]));
				update_pos((yyval));
			}
    break;

  case 122:
/* Line 1792 of yacc.c  */
#line 915 "for90.y"
    {
				//ParseNode * newnode = new ParseNode(); 
				//newnode->addchild($1.child[0]); // keyvalue
				//sprintf(codegen_buf, "%s, %s", $1.fs.CurrentTerm.what.c_str(), $3.fs.CurrentTerm.what.c_str());
				//newnode->fs.CurrentTerm = Term{ TokenMeta::NT_PARAMTABLE, string(codegen_buf) };
				//ParseNode & pn = $3;
				//for (int i = 0; i < pn.child.size(); i++)
				//{
				//	newnode->addchild(new ParseNode(*pn.child[i])); // paramtable
				//}

				(yyval) = gen_flattern((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]), "%s, %s", TokenMeta::NT_PARAMTABLE);
				update_pos((yyval));
			}
    break;

  case 123:
/* Line 1792 of yacc.c  */
#line 930 "for90.y"
    {
				/* no params */
				ParseNode * newnode = new ParseNode();
				newnode->fs.CurrentTerm = Term{ TokenMeta::NT_PARAMTABLE, "" };
				(yyval) = *newnode;
				update_pos((yyval));
			}
    break;

  case 124:
/* Line 1792 of yacc.c  */
#line 939 "for90.y"
    {
				/* something like `abs(i), i=1,4` */
				ParseNode * newnode = new ParseNode();
				newnode->addchild(new ParseNode((yyvsp[(1) - (7)]))); // exp
				newnode->addchild(new ParseNode((yyvsp[(3) - (7)]))); // index variable
				newnode->addchild(new ParseNode((yyvsp[(5) - (7)]))); // exp_from
				newnode->addchild(new ParseNode((yyvsp[(7) - (7)]))); // exp_to
				(yyval) = *newnode;
				update_pos((yyval));
			}
    break;

  case 125:
/* Line 1792 of yacc.c  */
#line 951 "for90.y"
    {
				/* give initial value */
				/* NOTE that `B(1:2:3)` can be either a single-element argtable or a exp, this can probably lead to reduction conflicts, NOW we merge rules */
				/* NOTE fortran use a 1d list to initialize a 2d(or higher) array, however, contrary to c++ and most other language does, it store them in a **conlumn - first order**. for a 2d array, it means you a order of a(1)(1)->a(2)(1)->a(lb_1)(1)->a(1)(2) */
				ParseNode * newnode = new ParseNode();
				ParseNode & argtable = (yyvsp[(2) - (3)]); 
				/* for1array<_Container_value_type> & farr, const std::vector<int> & lower_bound
				, const std::vector<int> & size, const std::vector<T> & values */
				sprintf(codegen_buf, "init_for1array(%%s, %%s, %%s, %s);\n", /* value */ argtable.fs.CurrentTerm.what.c_str());
				newnode->fs.CurrentTerm = Term{ TokenMeta::NT_ARRAYBUILDER_VALUE, string(codegen_buf) };
				newnode->addchild(new ParseNode(argtable)); // argtable
				(yyval) = *newnode;
				update_pos((yyval));
			}
    break;

  case 126:
/* Line 1792 of yacc.c  */
#line 966 "for90.y"
    {
				/* give generate stmt */
				ParseNode * newnode = new ParseNode();
				ParseNode * exp = (yyvsp[(2) - (3)]).child[0];
				ParseNode * index = (yyvsp[(2) - (3)]).child[1];
				ParseNode * from = (yyvsp[(2) - (3)]).child[2];
				ParseNode * to = (yyvsp[(2) - (3)]).child[3];
				sprintf(codegen_buf, "for(int %s = %s; %s < %s; %s++){\n%s(%s) = %s;\n}", index->fs.CurrentTerm.what.c_str(), from->fs.CurrentTerm.what.c_str() /* exp_from */
					, index->fs.CurrentTerm.what.c_str(), to->fs.CurrentTerm.what.c_str() /* exp_to */, index->fs.CurrentTerm.what.c_str() /* index variable inc */
					, "\t%s" /* array variable name */, index->fs.CurrentTerm.what.c_str() /* index variable */, exp->fs.CurrentTerm.what.c_str());
				newnode->fs.CurrentTerm = Term{ TokenMeta::NT_ARRAYBUILDER_EXP, string(codegen_buf) };
				newnode->addchild(new ParseNode(*exp)); // exp
				newnode->addchild(new ParseNode(*index)); // index variable
				newnode->addchild(new ParseNode(*from)); // exp_from
				newnode->addchild(new ParseNode(*to)); // exp_to
				(yyval) = *newnode;
				update_pos((yyval));
				// TODO 
				/* rule `YY_ARRAYINITIAL_START variable '(' dimen_slice ')' YY_ARRAYINITIAL_END ` is included in this rule*/
				/* note that this two rules can not be splitted because `exp` and `variable` + '(' can cause reduction conflict */
				/* note either that `variable '(' dimen_slice ')'` is an `exp` */
			}
    break;

  case 129:
/* Line 1792 of yacc.c  */
#line 991 "for90.y"
    {
				ParseNode * newnode = new ParseNode();
				newnode->addchild(new ParseNode((yyvsp[(1) - (1)]))); // array_builder_elem
				sprintf(codegen_buf, "%s", (yyvsp[(1) - (1)]).fs.CurrentTerm.what.c_str());
				newnode->fs.CurrentTerm = Term{ TokenMeta::NT_ARRAYBUILDER, string(codegen_buf) };
				(yyval) = *newnode;
				update_pos((yyval));
			}
    break;

  case 130:
/* Line 1792 of yacc.c  */
#line 1000 "for90.y"
    {
				ParseNode * newnode = new ParseNode();
				newnode->addchild(new ParseNode((yyvsp[(1) - (3)]))); // array_builder_elem
				newnode->addchild(new ParseNode((yyvsp[(3) - (3)]))); // array_builder
				sprintf(codegen_buf, "%s\n%s", (yyvsp[(1) - (3)]).fs.CurrentTerm.what.c_str(), (yyvsp[(3) - (3)]).fs.CurrentTerm.what.c_str());
				newnode->fs.CurrentTerm = Term{ TokenMeta::NT_ARRAYBUILDER, string(codegen_buf) };
				newnode = flattern_bin(newnode);
				(yyval) = *newnode;
				update_pos((yyval));
			}
    break;

  case 131:
/* Line 1792 of yacc.c  */
#line 1012 "for90.y"
    {
				ParseNode * newnode = new ParseNode();
				ParseNode & exp = (yyvsp[(2) - (8)]);
				ParseNode & suite_true = (yyvsp[(5) - (8)]); suite_true.fs.CurrentTerm.what = tabber(suite_true.fs.CurrentTerm.what);
#ifndef LAZY_GEN
				sprintf(codegen_buf, "if (%s) {\n%s}", exp.fs.CurrentTerm.what.c_str(), suite_true.fs.CurrentTerm.what.c_str());
				newnode->fs.CurrentTerm = Term{ TokenMeta::NT_IF, string(codegen_buf) };
#endif // !LAZY_GEN

				newnode->addchild(new ParseNode((yyvsp[(1) - (8)]))); // if
				newnode->addchild(new ParseNode(exp)); // exp
				newnode->addchild(new ParseNode(suite_true)); // suite
				(yyval) = *newnode;
				update_pos((yyval));
			}
    break;

  case 132:
/* Line 1792 of yacc.c  */
#line 1028 "for90.y"
    {
				ParseNode * newnode = new ParseNode();
				ParseNode & exp = (yyvsp[(2) - (11)]);
				ParseNode & suite_true = (yyvsp[(5) - (11)]); suite_true.fs.CurrentTerm.what = tabber(suite_true.fs.CurrentTerm.what);
				ParseNode & suite_else = (yyvsp[(8) - (11)]); suite_else.fs.CurrentTerm.what = tabber(suite_else.fs.CurrentTerm.what);
#ifndef LAZY_GEN
				sprintf(codegen_buf, "if (%s) {\n%s}\nelse {\n %s}", exp.fs.CurrentTerm.what.c_str(), suite_true.fs.CurrentTerm.what.c_str(), suite_else.fs.CurrentTerm.what.c_str());
				newnode->fs.CurrentTerm = Term{ TokenMeta::NT_IF, string(codegen_buf) };
#endif // !LAZY_GEN

				newnode->addchild(new ParseNode((yyvsp[(1) - (11)]))); // if
				newnode->addchild(new ParseNode(exp)); // exp
				newnode->addchild(new ParseNode(suite_true)); // suite
				newnode->addchild(new ParseNode((yyvsp[(6) - (11)]))); // else
				newnode->addchild(new ParseNode(suite_else)); // else-stmt
				(yyval) = *newnode;
				update_pos((yyval));
			}
    break;

  case 133:
/* Line 1792 of yacc.c  */
#line 1047 "for90.y"
    {
				ParseNode * newnode = new ParseNode();
				ParseNode & exp = (yyvsp[(2) - (9)]);
				ParseNode & suite_true = (yyvsp[(5) - (9)]); suite_true.fs.CurrentTerm.what = tabber(suite_true.fs.CurrentTerm.what);
				ParseNode & elseif = (yyvsp[(6) - (9)]);
#ifndef LAZY_GEN
				sprintf(codegen_buf, "if (%s) {\n%s}\n%s", exp.fs.CurrentTerm.what.c_str(), suite_true.fs.CurrentTerm.what.c_str(), elseif.fs.CurrentTerm.what.c_str());
				newnode->fs.CurrentTerm = Term{ TokenMeta::NT_IF, string(codegen_buf) };
#endif // !LAZY_GEN

				newnode->addchild(new ParseNode((yyvsp[(1) - (9)]))); // if
				newnode->addchild(new ParseNode(exp)); // exp
				newnode->addchild(new ParseNode(suite_true)); // suite
				newnode->addchild(new ParseNode(elseif)); // recursive elseif-stmt
				(yyval) = *newnode;
				update_pos((yyval));
			}
    break;

  case 134:
/* Line 1792 of yacc.c  */
#line 1065 "for90.y"
    {
				ParseNode * newnode = new ParseNode();
				ParseNode & exp = (yyvsp[(2) - (12)]);
				ParseNode & suite_true = (yyvsp[(5) - (12)]); suite_true.fs.CurrentTerm.what = tabber(suite_true.fs.CurrentTerm.what);
				ParseNode & elseif = (yyvsp[(6) - (12)]);
				ParseNode & suite_else = (yyvsp[(9) - (12)]); suite_else.fs.CurrentTerm.what = tabber(suite_else.fs.CurrentTerm.what);
				
#ifndef LAZY_GEN
				sprintf(codegen_buf, "if (%s) {\n%s}\n%selse {\n%s}", exp.fs.CurrentTerm.what.c_str(), suite_true.fs.CurrentTerm.what.c_str(), elseif.fs.CurrentTerm.what.c_str(), suite_else.fs.CurrentTerm.what.c_str());
				newnode->fs.CurrentTerm = Term{ TokenMeta::NT_IF, string(codegen_buf) };
#endif // !LAZY_GEN

				newnode->addchild(new ParseNode((yyvsp[(1) - (12)]))); // if
				newnode->addchild(new ParseNode(exp)); // exp
				newnode->addchild(new ParseNode(suite_true)); // suite
				newnode->addchild(new ParseNode(elseif)); // recursive elseif-stmt
				newnode->addchild(new ParseNode(suite_else)); // else-stmt
				(yyval) = *newnode;
				update_pos((yyval));
			}
    break;

  case 135:
/* Line 1792 of yacc.c  */
#line 1086 "for90.y"
    {
				ParseNode * newnode = new ParseNode();
				ParseNode & exp = (yyvsp[(2) - (4)]);
				ParseNode & stmt_true = (yyvsp[(4) - (4)]); 
#ifndef LAZY_GEN
				sprintf(codegen_buf, "if (%s) %s", exp.fs.CurrentTerm.what.c_str(), stmt_true.fs.CurrentTerm.what.c_str());
				newnode->fs.CurrentTerm = Term{ TokenMeta::NT_IF, string(codegen_buf) };
#endif // !LAZY_GEN

				newnode->addchild(new ParseNode((yyvsp[(1) - (4)]))); // if
				newnode->addchild(new ParseNode(exp)); // exp
				newnode->addchild(new ParseNode(stmt_true)); // stmt
				(yyval) = *newnode;
				update_pos((yyval));
			}
    break;

  case 136:
/* Line 1792 of yacc.c  */
#line 1102 "for90.y"
    {
				ParseNode * newnode = new ParseNode();
				ParseNode & exp = (yyvsp[(2) - (5)]);
				ParseNode & suite_true = (yyvsp[(5) - (5)]); suite_true.fs.CurrentTerm.what = tabber(suite_true.fs.CurrentTerm.what);
#ifndef LAZY_GEN
				sprintf(codegen_buf, "else if(%s) {\n%s}", exp.fs.CurrentTerm.what.c_str(), suite_true.fs.CurrentTerm.what.c_str());
				newnode->fs.CurrentTerm = Term{ TokenMeta::NT_ELSEIF, string(codegen_buf) };
#endif // !LAZY_GEN

				newnode->addchild(new ParseNode((yyvsp[(1) - (5)]))); // elseif
				newnode->addchild(new ParseNode(exp)); // exp
				newnode->addchild(new ParseNode(suite_true)); // suite
				(yyval) = *newnode;
				update_pos((yyval));
			}
    break;

  case 137:
/* Line 1792 of yacc.c  */
#line 1119 "for90.y"
    {
				ParseNode * newnode = new ParseNode();
				ParseNode & exp = (yyvsp[(2) - (6)]);
				ParseNode & suite_true = (yyvsp[(5) - (6)]); suite_true.fs.CurrentTerm.what = tabber(suite_true.fs.CurrentTerm.what);
				ParseNode & elseif = (yyvsp[(6) - (6)]);
#ifndef LAZY_GEN
				sprintf(codegen_buf, "else if{\n%s}\n%s", exp.fs.CurrentTerm.what.c_str(), suite_true.fs.CurrentTerm.what.c_str(), elseif.fs.CurrentTerm.what.c_str());
				newnode->fs.CurrentTerm = Term{ TokenMeta::NT_ELSEIF, string(codegen_buf) };
#endif // !LAZY_GEN

				newnode->addchild(new ParseNode((yyvsp[(1) - (6)]))); // elseif
				newnode->addchild(new ParseNode(exp)); // exp
				newnode->addchild(new ParseNode(suite_true)); // suite
				newnode->addchild(new ParseNode(elseif)); // another elseif-stmt
				(yyval) = *newnode;
				update_pos((yyval));
			}
    break;

  case 138:
/* Line 1792 of yacc.c  */
#line 1138 "for90.y"
    {
				ParseNode & suite = (yyvsp[(3) - (6)]); 
				(yyval) = gen_do(suite);
				update_pos((yyval));
			}
    break;

  case 139:
/* Line 1792 of yacc.c  */
#line 1144 "for90.y"
    {
				ParseNode & loop_variable = (yyvsp[(2) - (11)]);
				ParseNode & exp_from = (yyvsp[(4) - (11)]);
				ParseNode & exp_to = (yyvsp[(6) - (11)]);
				ParseNode & step = gen_exp(gen_token(Term{ TokenMeta::META_INTEGER , "1" }));
				ParseNode & suite = (yyvsp[(8) - (11)]); 
				(yyval) = gen_do_range(exp_from, exp_from, exp_to, step, suite);
				update_pos((yyval));
			}
    break;

  case 140:
/* Line 1792 of yacc.c  */
#line 1154 "for90.y"
    {
				ParseNode & loop_variable = (yyvsp[(2) - (13)]);
				ParseNode & exp1 = (yyvsp[(4) - (13)]);
				ParseNode & exp2 = (yyvsp[(6) - (13)]);
				ParseNode & exp3 = (yyvsp[(8) - (13)]);
				ParseNode & suite = (yyvsp[(10) - (13)]);
				(yyval) = gen_do_range(loop_variable, exp1, exp2, exp3, suite);
				update_pos((yyval));
			}
    break;

  case 141:
/* Line 1792 of yacc.c  */
#line 1164 "for90.y"
    {
				ParseNode & exp = (yyvsp[(2) - (7)]);
				ParseNode & suite = (yyvsp[(4) - (7)]); 
				(yyval) = gen_do_while(exp, suite);
				update_pos((yyval));
			}
    break;

  case 142:
/* Line 1792 of yacc.c  */
#line 1172 "for90.y"
    {
				ParseNode & select = (yyvsp[(1) - (10)]);
				ParseNode & exp = (yyvsp[(4) - (10)]);
				ParseNode & case_stmt = (yyvsp[(7) - (10)]);
				(yyval) = gen_select(exp, case_stmt);
				update_pos((yyval));
			}
    break;

  case 143:
/* Line 1792 of yacc.c  */
#line 1180 "for90.y"
    {
				// one case
				ParseNode & dimen_slice = (yyvsp[(3) - (6)]);
				ParseNode & suite = (yyvsp[(6) - (6)]); 
				(yyval) = gen_case(dimen_slice, suite);
				update_pos((yyval));
			}
    break;

  case 144:
/* Line 1792 of yacc.c  */
#line 1188 "for90.y"
    {
				ParseNode * newnode = new ParseNode();
				ParseNode & case_stmt_elem = (yyvsp[(1) - (1)]);
				newnode->fs.CurrentTerm = Term{ TokenMeta::NT_CASES, "" };
				newnode->addchild(new ParseNode(case_stmt_elem)); // case_stmt_elem
				(yyval) = *newnode;
				update_pos((yyval));
			}
    break;

  case 145:
/* Line 1792 of yacc.c  */
#line 1197 "for90.y"
    {
				ParseNode & case_stmt_elem = (yyvsp[(1) - (2)]);
				ParseNode & case_stmt = (yyvsp[(2) - (2)]);
				ParseNode * newnode = new ParseNode(case_stmt);
				newnode->fs.CurrentTerm = Term{ TokenMeta::NT_CASES, "" };
				newnode->addchild(new ParseNode(case_stmt_elem), false /* add to the front of the vector */); // case_stmt_elem
				(yyval) = *newnode;
				update_pos((yyval));
			}
    break;

  case 146:
/* Line 1792 of yacc.c  */
#line 1208 "for90.y"
    {
				(yyval) = (yyvsp[(3) - (4)]);
			}
    break;

  case 147:
/* Line 1792 of yacc.c  */
#line 1212 "for90.y"
    {
				ParseNode * newnode = new ParseNode();
				newnode->fs.CurrentTerm = Term{ TokenMeta::UnknownVariant, "" }; // return nothing
				(yyval) = *newnode;
			}
    break;

  case 150:
/* Line 1792 of yacc.c  */
#line 1222 "for90.y"
    {
				/* fortran90 does not declare type of arguments in function declaration statement*/
				ParseNode & variable_function = (yyvsp[(3) - (12)]); // function name
				/* enumerate paramtable */
				ParseNode & paramtable = (yyvsp[(5) - (12)]);
				ParseNode & variable_result = (yyvsp[(7) - (12)]); // result variable
				ParseNode & suite = (yyvsp[(9) - (12)]);

				(yyval) = gen_function(variable_function, paramtable, variable_result, suite);
				update_pos((yyval));
			}
    break;

  case 153:
/* Line 1792 of yacc.c  */
#line 1238 "for90.y"
    {
				ParseNode * newnode = new ParseNode();
				newnode->addchild(new ParseNode((yyvsp[(4) - (8)]))); //suite
				sprintf(codegen_buf, "int main()\n{%s\treturn 0;\n}", tabber((yyvsp[(4) - (8)]).fs.CurrentTerm.what).c_str());
				newnode->fs.CurrentTerm = Term{ TokenMeta::META_NONTERMINAL, string(codegen_buf) };
				(yyval) = *newnode;
			}
    break;

  case 154:
/* Line 1792 of yacc.c  */
#line 1248 "for90.y"
    {
				sprintf(codegen_buf, "%s", (yyvsp[(1) - (1)]).fs.CurrentTerm.what.c_str());
				(yyval) = (yyvsp[(1) - (1)]);
				update_pos((yyval));
			}
    break;

  case 155:
/* Line 1792 of yacc.c  */
#line 1254 "for90.y"
    {
				sprintf(codegen_buf, "%s", (yyvsp[(1) - (1)]).fs.CurrentTerm.what.c_str());
				(yyval) = (yyvsp[(1) - (1)]);
				update_pos((yyval));
			}
    break;

  case 156:
/* Line 1792 of yacc.c  */
#line 1261 "for90.y"
    {
				ParseNode * newnode = new ParseNode();
				newnode->addchild(new ParseNode((yyvsp[(1) - (1)]))); // wrapper
				sprintf(codegen_buf, "%s", (yyvsp[(1) - (1)]).fs.CurrentTerm.what.c_str());
				newnode->fs.CurrentTerm = Term{ TokenMeta::META_NONTERMINAL, string(codegen_buf) };
				(yyval) = *newnode;
			}
    break;

  case 157:
/* Line 1792 of yacc.c  */
#line 1269 "for90.y"
    {
				ParseNode * newnode = new ParseNode();
				newnode->addchild(new ParseNode((yyvsp[(1) - (2)]))); // wrapper
				newnode->addchild(new ParseNode((yyvsp[(2) - (2)]))); // wrappers
				sprintf(codegen_buf, "%s\n%s", (yyvsp[(1) - (2)]).fs.CurrentTerm.what.c_str(), (yyvsp[(2) - (2)]).fs.CurrentTerm.what.c_str());
				newnode = flattern_bin(newnode);
				newnode->fs.CurrentTerm = Term{ TokenMeta::META_NONTERMINAL, string(codegen_buf) };
				(yyval) = *newnode;
			}
    break;

  case 158:
/* Line 1792 of yacc.c  */
#line 1280 "for90.y"
    {
				// drop interface directly
				ParseNode * newnode = new ParseNode();
				// no child
				newnode->fs.CurrentTerm = Term{ TokenMeta::META_NONTERMINAL, "" };
				(yyval) = *newnode;
			}
    break;

  case 159:
/* Line 1792 of yacc.c  */
#line 1289 "for90.y"
    {
				program_tree = (yyvsp[(1) - (1)]);
			}
    break;


/* Line 1792 of yacc.c  */
#line 3633 "for90.tab.cpp"
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

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

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
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


/* Line 2055 of yacc.c  */
#line 1293 "for90.y"

//extern "C" int yylex();

void yyerror(const char* s)
{
	// fprintf(stderr, "%s", s);
	print_error(string(s), yylval);
}

string tabber(string & src) {
	string newline;
	string ans = "";
	std::istringstream f(src);
	while (getline(f, newline) ) {
		ans += '\t';
		ans += newline;
		ans += '\n';
	}
	return ans;
}

void update_pos(YYSTYPE & current_node) {
	if (current_node.child.size() == 0) {
		/* do nothing */
	}
	else if (current_node.child.size() == 1) {
		current_node.fs.parse_pos = current_node.child[0]->fs.parse_pos;
		current_node.fs.parse_line = current_node.child[0]->fs.parse_line;
		current_node.fs.parse_len = current_node.child[0]->fs.parse_len;
		current_node.fs.line_pos = current_node.child[0]->fs.line_pos;
	}
	else {
		int tot_len = 0;
		for (int i = 0; i < current_node.child.size(); i++)
		{
			tot_len += current_node.child[i]->fs.parse_len;
		}
		current_node.fs.parse_pos = current_node.child[0]->fs.parse_pos;
		current_node.fs.parse_line = current_node.child[0]->fs.parse_line;
		current_node.fs.parse_len = tot_len;
		current_node.fs.line_pos = current_node.child[0]->fs.line_pos;
	}
}

int parse(std::string code) {
#ifdef USE_YACC
	set_buff(code);
	yyparse();
	release_buff();
#endif
	return 0;
}
