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
#line 1 "practice5.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>
#include "tablasimbolos.h"
#include "operaciones.h"
#include <stdbool.h>
#include <math.h>
extern int yylex(void);
extern void yyerror(char *s);

char *falsoOVerdadero(unsigned int numero);
void crearTablaSimbolos(char *str, char *name);
void crearTablaSimbolosConValor(char *str, char *name, void *valor);
void comprobarSumaExpFloat(TablaSimbolos *tabla, float valor, int reverse);
void comprobarSumaExpresiones(TablaSimbolos *tabla, TablaSimbolos *tabla2);
void comprobarSumaExp(TablaSimbolos *tabla, int valor, int reverse);
void comprobarRestaExp(TablaSimbolos *tabla, int valor, int inverse);
void negarValorTablaSimbolos(TablaSimbolos *tablaSimbolos);
void comprobarRestaExpFloat(TablaSimbolos *tabla, float valor, int inverse );
void comprobarRestaExpresiones(TablaSimbolos *tabla, TablaSimbolos *tabla2);
void comprobarMultiplicacionExpresiones(TablaSimbolos *tabla, TablaSimbolos *tabla2);
bool mayorMenorCadena(char *cad1,char * cad2);
char *stringRevert(char *cadena);
void asignarFloat(char *tipo, char *variable,float asignacion);
void asignarInt(char *tipo, char *variable, int asignacion);
char *stringRevert(char *cadena);
void asignarText(char *tipo, char *variable, char *asignacion);




#define INVERSE 1
#define NOT_INVERSE 0 

#line 101 "practice5.tab.c" /* yacc.c:339  */

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
   by #include "practice5.tab.h".  */
#ifndef YY_YY_PRACTICE5_TAB_H_INCLUDED
# define YY_YY_PRACTICE5_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 36 "practice5.y" /* yacc.c:355  */

    #include "tablasimbolos.h"
    #include <stdbool.h>
    #include <string.h>

#line 137 "practice5.tab.c" /* yacc.c:355  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INTEGER = 258,
    DECIMAL = 259,
    CAD = 260,
    VAR = 261,
    TIPO = 262,
    POW = 263,
    IF = 264,
    PRINT = 265
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 43 "practice5.y" /* yacc.c:355  */

	int   entero;
	float flotante;
	char* cadena;
	unsigned int boolean;
	TablaSimbolos *tabla;

#line 168 "practice5.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PRACTICE5_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 185 "practice5.tab.c" /* yacc.c:358  */

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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   582

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  25
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  11
/* YYNRULES -- Number of rules.  */
#define YYNRULES  105
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  263

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   265

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      20,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    17,     2,     2,
      18,    19,    15,    12,    21,    13,     2,    16,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    23,
      24,    11,    22,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    14,     2,     2,     2,     2,     2,
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
       5,     6,     7,     8,     9,    10
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    78,    78,    79,    82,    83,    84,    85,    86,    87,
      88,    89,    97,   101,   102,   103,   104,   105,   106,   107,
     108,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   131,   132,
     135,   136,   137,   142,   143,   146,   150,   154,   155,   169,
     173,   177,   181,   185,   189,   193,   197,   201,   205,   210,
     220,   230,   240,   245,   255,   265,   278,   281,   284,   287,
     290,   295,   298,   301,   304,   310,   319,   323,   327,   331,
     335,   339,   343,   347,   351,   355,   359,   363,   367,   371,
     375,   379,   383,   387,   391,   395,   399,   403,   407,   412,
     417,   421,   425,   429,   441,   445
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INTEGER", "DECIMAL", "CAD", "VAR",
  "TIPO", "POW", "IF", "PRINT", "'='", "'+'", "'-'", "'^'", "'*'", "'/'",
  "'%'", "'('", "')'", "'\\n'", "','", "'>'", "';'", "'<'", "$accept",
  "input", "line", "exp", "expFloat", "texto", "condition",
  "declarationVariable", "asignacionVariable", "expVariable",
  "imprimirTable", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,    61,    43,    45,    94,    42,    47,    37,    40,    41,
      10,    44,    62,    59,    60
};
# endif

#define YYPACT_NINF -11

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-11)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -11,    75,   -11,   -11,   -11,   -11,   -10,     1,    -6,    -3,
     -11,    54,    54,   -11,   -11,   188,   358,    57,     3,    20,
     -11,   272,    26,    54,    -9,    54,     0,   -11,    34,   169,
      18,   316,   364,   372,   117,   288,    54,    54,    54,    54,
      13,   -11,    54,    54,    54,    54,    13,   -11,    54,    16,
     -11,   -11,   -11,    54,    54,    54,    54,    54,   -11,   -11,
     212,   257,   109,   228,    54,   -11,   321,   328,   134,    86,
     103,    82,    14,   159,   -11,   -11,   -11,   -11,    34,   169,
       6,   316,    34,   169,   316,   -11,   -11,   -11,   -11,   -11,
     -11,    43,    13,    13,   -11,   -11,    34,   169,   316,    34,
     169,   316,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,
      34,   245,     6,   316,    16,    16,   559,    34,   169,     6,
     316,    34,   169,   316,    34,    12,    47,    49,   -11,    47,
      49,   -11,   -11,   -11,   -11,   -11,   266,   306,   110,   312,
      13,    13,    54,    13,    13,    13,    13,    54,    54,    45,
      54,    54,    13,   562,   565,   380,   388,    13,    13,    13,
      13,    13,    13,    13,    13,   559,   396,    16,    16,    16,
      16,    16,   -11,   -11,   -11,   -11,   404,   412,   420,   428,
     436,   444,   452,   457,   465,   473,   481,   489,   497,   505,
     513,   556,   168,   521,   207,   529,   -11,   219,   537,   551,
     545,   335,   351,   562,   565,   562,   565,   -11,   -11,   -11,
     -11,   562,   565,   562,   565,   -11,   -11,   -11,   -11,   559,
     559,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,
     -11,    50,    51,    63,    66,    74,    84,    88,   107,   111,
     112,   114,   115,   129,   130,   154,   165,   -11,   -11,   -11,
     -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,
     -11,   -11,   -11
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,    13,    21,    43,    75,     0,     0,     0,
     105,     0,     0,     4,     3,     0,     0,     0,     0,     0,
      12,     0,     0,     0,     0,     0,     0,    75,    19,    34,
       0,    76,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     5,     0,     0,     0,     0,     0,     6,     0,     0,
       7,     8,     9,     0,     0,     0,     0,     0,    11,    10,
       0,     0,     0,     0,     0,    66,     0,     0,     0,     0,
       0,     0,     0,     0,    20,    35,    47,   104,    14,    26,
      46,    79,    17,    23,    85,    15,    29,    90,    16,    32,
      95,     0,     0,     0,    18,    40,    25,    27,    80,    22,
      24,    87,    28,    30,    92,    31,    33,    97,    41,    42,
      45,     0,    44,    82,     0,     0,    48,    77,    78,    81,
      83,    84,    86,    88,   102,   103,    89,    91,    93,    94,
      96,    98,    72,    73,    74,    71,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    19,    34,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    19,     0,     0,     0,     0,
       0,     0,    67,    68,    69,    70,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    57,     0,     0,     0,
       0,     0,     0,    14,    26,    17,    23,    15,    29,    16,
      32,    25,    27,    22,    24,    28,    30,    31,    33,    14,
      17,    15,    16,    18,    38,    39,    36,    37,    99,   100,
     101,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    49,    55,    50,
      56,    53,    51,    54,    52,    58,    61,    62,    65,    60,
      59,    64,    63
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -11,   -11,   -11,    -1,   153,    64,    44,   -11,   -11,   211,
     -11
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    14,   191,   111,    30,    18,    19,    20,    21,
      22
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      15,    23,    64,     3,     4,     5,    27,    24,     8,     9,
      28,    32,    25,    11,    65,    26,     3,     4,    12,     3,
      49,    91,    60,    51,    66,    69,    92,    56,    57,   114,
      48,    93,    49,   149,   115,    78,    82,    85,    88,    94,
      52,    96,    99,   102,   105,   108,    59,   110,   116,    38,
      39,    40,   117,   121,   124,   126,   129,     3,     4,     5,
      27,   152,     8,   136,    40,    17,    46,    11,   196,    48,
      72,    49,    12,   247,   248,     2,    34,    50,     3,     4,
       5,     6,     7,     8,     9,    10,   249,    62,    11,   250,
      71,   153,   155,    12,    48,    13,    49,   251,    36,    37,
      80,    38,    39,    40,   147,     0,   148,   252,   143,     0,
     144,   253,   112,   165,   166,    42,    43,   119,    44,    45,
      46,    48,    48,    49,    49,   145,     0,   146,   138,    48,
     254,    49,   134,   174,   255,   256,    76,   257,   258,   176,
     178,   180,   183,   185,   187,   189,    53,    54,    55,    56,
      57,   201,   259,   260,    16,   142,   203,   205,   207,   209,
     211,   213,   215,   217,    29,    33,   219,   220,   221,   222,
     223,    53,    54,    55,    56,    57,    61,   261,    67,    70,
      48,   150,    49,   151,    44,    45,    46,   239,   262,    79,
      83,    86,    89,    95,     0,    97,   100,   103,   106,   109,
      36,    37,     0,    38,    39,    40,   118,   122,    41,   127,
     130,   192,   194,     0,   197,   199,     0,   137,     0,    48,
       0,    49,    31,    35,    36,    37,   241,    38,    39,    40,
       0,    48,     0,    49,    63,   132,    68,    73,   243,     0,
      53,    54,    55,    56,    57,   154,   156,    81,    84,    87,
      90,   135,     0,    98,   101,   104,   107,    42,    43,   113,
      44,    45,    46,     0,   120,   123,   125,   128,   131,    42,
      43,     0,    44,    45,    46,   139,     0,     0,    36,    37,
     133,    38,    39,    40,    53,    54,    55,    56,    57,   172,
       0,     0,    58,   177,   179,   181,   184,   186,   188,   190,
      53,    54,    55,    56,    57,   202,     0,    77,     0,     0,
     204,   206,   208,   210,   212,   214,   216,   218,    42,    43,
       0,    44,    45,    46,    53,    54,    55,    56,    57,   173,
      55,    56,    57,    36,    37,   175,    38,    39,    40,     0,
      42,    43,   140,    44,    45,    46,     0,   157,   158,   141,
     159,   160,    40,   182,     0,     0,   140,     0,   193,   195,
       0,   198,   200,   161,   162,     0,   163,   164,    46,     0,
      42,    43,   141,    44,    45,    46,    36,    37,    47,    38,
      39,    40,     0,    74,    42,    43,     0,    44,    45,    46,
       0,    75,   157,   158,     0,   159,   160,    40,     0,    74,
     161,   162,     0,   163,   164,    46,     0,    75,   167,   168,
       0,   169,   170,   171,     0,    74,   157,   158,     0,   159,
     160,    40,     0,   224,   161,   162,     0,   163,   164,    46,
       0,   225,   157,   158,     0,   159,   160,    40,     0,   226,
     161,   162,     0,   163,   164,    46,     0,   227,    36,    37,
       0,    38,    39,    40,     0,   228,    42,    43,     0,    44,
      45,    46,     0,   229,    53,    54,    55,    56,    57,   157,
     158,   230,   159,   160,    40,     0,   231,   161,   162,     0,
     163,   164,    46,     0,   232,   157,   158,     0,   159,   160,
      40,     0,   233,   161,   162,     0,   163,   164,    46,     0,
     234,   157,   158,     0,   159,   160,    40,     0,   235,   161,
     162,     0,   163,   164,    46,     0,   236,   157,   158,     0,
     159,   160,    40,     0,   237,   161,   162,     0,   163,   164,
      46,     0,   238,    53,    54,    55,    56,    57,     0,     0,
     240,    53,    54,    55,    56,    57,     0,     0,   242,    53,
      54,    55,    56,    57,     0,     0,   244,    53,    54,    55,
      56,    57,     0,    48,   246,    49,     0,     0,    36,    37,
     245,    38,    39,    40,   169,   170,   171,   159,   160,    40,
     163,   164,    46
};

static const yytype_int16 yycheck[] =
{
       1,    11,    11,     3,     4,     5,     6,     6,     8,     9,
      11,    12,    18,    13,    23,    18,     3,     4,    18,     3,
      14,     8,    23,    20,    25,    26,    13,    15,    16,    13,
      12,    18,    14,    19,    18,    36,    37,    38,    39,    40,
      20,    42,    43,    44,    45,    46,    20,    48,    49,    15,
      16,    17,    53,    54,    55,    56,    57,     3,     4,     5,
       6,    18,     8,    64,    17,     1,    17,    13,    23,    12,
      26,    14,    18,    23,    23,     0,    12,    20,     3,     4,
       5,     6,     7,     8,     9,    10,    23,    23,    13,    23,
      26,    92,    93,    18,    12,    20,    14,    23,    12,    13,
      36,    15,    16,    17,    22,    -1,    24,    23,    22,    -1,
      24,    23,    48,   114,   115,    12,    13,    53,    15,    16,
      17,    12,    12,    14,    14,    22,    -1,    24,    64,    12,
      23,    14,    23,    23,    23,    23,    19,    23,    23,   140,
     141,   142,   143,   144,   145,   146,    12,    13,    14,    15,
      16,   152,    23,    23,     1,    21,   157,   158,   159,   160,
     161,   162,   163,   164,    11,    12,   167,   168,   169,   170,
     171,    12,    13,    14,    15,    16,    23,    23,    25,    26,
      12,    22,    14,    24,    15,    16,    17,    19,    23,    36,
      37,    38,    39,    40,    -1,    42,    43,    44,    45,    46,
      12,    13,    -1,    15,    16,    17,    53,    54,    20,    56,
      57,   147,   148,    -1,   150,   151,    -1,    64,    -1,    12,
      -1,    14,    11,    12,    12,    13,    19,    15,    16,    17,
      -1,    12,    -1,    14,    23,    23,    25,    26,    19,    -1,
      12,    13,    14,    15,    16,    92,    93,    36,    37,    38,
      39,    23,    -1,    42,    43,    44,    45,    12,    13,    48,
      15,    16,    17,    -1,    53,    54,    55,    56,    57,    12,
      13,    -1,    15,    16,    17,    64,    -1,    -1,    12,    13,
      23,    15,    16,    17,    12,    13,    14,    15,    16,    23,
      -1,    -1,    20,   140,   141,   142,   143,   144,   145,   146,
      12,    13,    14,    15,    16,   152,    -1,    19,    -1,    -1,
     157,   158,   159,   160,   161,   162,   163,   164,    12,    13,
      -1,    15,    16,    17,    12,    13,    14,    15,    16,    23,
      14,    15,    16,    12,    13,    23,    15,    16,    17,    -1,
      12,    13,    21,    15,    16,    17,    -1,    12,    13,    21,
      15,    16,    17,   142,    -1,    -1,    21,    -1,   147,   148,
      -1,   150,   151,    12,    13,    -1,    15,    16,    17,    -1,
      12,    13,    21,    15,    16,    17,    12,    13,    20,    15,
      16,    17,    -1,    19,    12,    13,    -1,    15,    16,    17,
      -1,    19,    12,    13,    -1,    15,    16,    17,    -1,    19,
      12,    13,    -1,    15,    16,    17,    -1,    19,    12,    13,
      -1,    15,    16,    17,    -1,    19,    12,    13,    -1,    15,
      16,    17,    -1,    19,    12,    13,    -1,    15,    16,    17,
      -1,    19,    12,    13,    -1,    15,    16,    17,    -1,    19,
      12,    13,    -1,    15,    16,    17,    -1,    19,    12,    13,
      -1,    15,    16,    17,    -1,    19,    12,    13,    -1,    15,
      16,    17,    -1,    19,    12,    13,    14,    15,    16,    12,
      13,    19,    15,    16,    17,    -1,    19,    12,    13,    -1,
      15,    16,    17,    -1,    19,    12,    13,    -1,    15,    16,
      17,    -1,    19,    12,    13,    -1,    15,    16,    17,    -1,
      19,    12,    13,    -1,    15,    16,    17,    -1,    19,    12,
      13,    -1,    15,    16,    17,    -1,    19,    12,    13,    -1,
      15,    16,    17,    -1,    19,    12,    13,    -1,    15,    16,
      17,    -1,    19,    12,    13,    14,    15,    16,    -1,    -1,
      19,    12,    13,    14,    15,    16,    -1,    -1,    19,    12,
      13,    14,    15,    16,    -1,    -1,    19,    12,    13,    14,
      15,    16,    -1,    12,    19,    14,    -1,    -1,    12,    13,
      19,    15,    16,    17,    15,    16,    17,    15,    16,    17,
      15,    16,    17
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    26,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    13,    18,    20,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    11,     6,    18,    18,     6,    28,    29,
      30,    34,    28,    29,    30,    34,    12,    13,    15,    16,
      17,    20,    12,    13,    15,    16,    17,    20,    12,    14,
      20,    20,    20,    12,    13,    14,    15,    16,    20,    20,
      28,    29,    30,    34,    11,    23,    28,    29,    34,    28,
      29,    30,    31,    34,    19,    19,    19,    19,    28,    29,
      30,    34,    28,    29,    34,    28,    29,    34,    28,    29,
      34,     8,    13,    18,    28,    29,    28,    29,    34,    28,
      29,    34,    28,    29,    34,    28,    29,    34,    28,    29,
      28,    29,    30,    34,    13,    18,    28,    28,    29,    30,
      34,    28,    29,    34,    28,    34,    28,    29,    34,    28,
      29,    34,    23,    23,    23,    23,    28,    29,    30,    34,
      21,    21,    21,    22,    24,    22,    24,    22,    24,    19,
      22,    24,    18,    28,    29,    28,    29,    12,    13,    15,
      16,    12,    13,    15,    16,    28,    28,    12,    13,    15,
      16,    17,    23,    23,    23,    23,    28,    29,    28,    29,
      28,    29,    34,    28,    29,    28,    29,    28,    29,    28,
      29,    28,    30,    34,    30,    34,    23,    30,    34,    30,
      34,    28,    29,    28,    29,    28,    29,    28,    29,    28,
      29,    28,    29,    28,    29,    28,    29,    28,    29,    28,
      28,    28,    28,    28,    19,    19,    19,    19,    19,    19,
      19,    19,    19,    19,    19,    19,    19,    19,    19,    19,
      19,    19,    19,    19,    19,    19,    19,    23,    23,    23,
      23,    23,    23,    23,    23,    23,    23,    23,    23,    23,
      23,    23,    23
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    25,    26,    26,    27,    27,    27,    27,    27,    27,
      27,    27,    27,    28,    28,    28,    28,    28,    28,    28,
      28,    29,    29,    29,    29,    29,    29,    29,    29,    29,
      29,    29,    29,    29,    29,    29,    29,    29,    29,    29,
      29,    29,    29,    30,    30,    30,    30,    30,    30,    31,
      31,    31,    31,    31,    31,    31,    31,    31,    31,    31,
      31,    31,    31,    31,    31,    31,    32,    32,    32,    32,
      32,    33,    33,    33,    33,    34,    34,    34,    34,    34,
      34,    34,    34,    34,    34,    34,    34,    34,    34,    34,
      34,    34,    34,    34,    34,    34,    34,    34,    34,    34,
      34,    34,    34,    34,    34,    35
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     2,     2,     2,     2,     2,
       2,     2,     1,     1,     3,     3,     3,     3,     3,     2,
       3,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     3,     6,     6,     6,     6,
       3,     3,     3,     1,     3,     3,     3,     3,     3,     7,
       7,     7,     7,     7,     7,     7,     7,     5,     7,     7,
       7,     7,     7,     7,     7,     7,     3,     5,     5,     5,
       5,     4,     4,     4,     4,     1,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     6,
       6,     6,     3,     3,     3,     1
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
        case 5:
#line 83 "practice5.y" /* yacc.c:1646  */
    { printf ("\t\tresultado: %d\n\n", (yyvsp[-1].entero)); }
#line 1483 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 84 "practice5.y" /* yacc.c:1646  */
    { printf("\t\tresultado: %f\n", (yyvsp[-1].flotante));}
#line 1489 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 85 "practice5.y" /* yacc.c:1646  */
    { printf ("\t\tresultado: %s\n\n", (yyvsp[-1].cadena)); }
#line 1495 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 86 "practice5.y" /* yacc.c:1646  */
    {printf("\t\t%s\n", falsoOVerdadero((yyvsp[-1].boolean)));}
#line 1501 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 87 "practice5.y" /* yacc.c:1646  */
    {}
#line 1507 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 88 "practice5.y" /* yacc.c:1646  */
    {}
#line 1513 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 89 "practice5.y" /* yacc.c:1646  */
    { 
        	if ((yyvsp[-1].tabla) != NULL) {
        		printValor((yyvsp[-1].tabla));
        	} else {
        		yyerror("No definido");
        	}
        	
        }
#line 1526 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 97 "practice5.y" /* yacc.c:1646  */
    {}
#line 1532 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 101 "practice5.y" /* yacc.c:1646  */
    { (yyval.entero) = (yyvsp[0].entero);				}
#line 1538 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 102 "practice5.y" /* yacc.c:1646  */
    { (yyval.entero) = (yyvsp[-2].entero) + (yyvsp[0].entero); 		}
#line 1544 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 103 "practice5.y" /* yacc.c:1646  */
    { (yyval.entero) = (yyvsp[-2].entero) * (yyvsp[0].entero);			}
#line 1550 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 104 "practice5.y" /* yacc.c:1646  */
    { (yyval.entero) = (yyvsp[-2].entero) / (yyvsp[0].entero);			}
#line 1556 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 105 "practice5.y" /* yacc.c:1646  */
    { (yyval.entero) = (yyvsp[-2].entero) - (yyvsp[0].entero);			}
#line 1562 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 106 "practice5.y" /* yacc.c:1646  */
    { (yyval.entero) = (yyvsp[-2].entero) % (yyvsp[0].entero);			}
#line 1568 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 107 "practice5.y" /* yacc.c:1646  */
    { (yyval.entero) = -(yyvsp[0].entero);				}
#line 1574 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 108 "practice5.y" /* yacc.c:1646  */
    { (yyval.entero) = (yyvsp[-1].entero);				}
#line 1580 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 112 "practice5.y" /* yacc.c:1646  */
    { (yyval.flotante) = (yyvsp[0].flotante);}
#line 1586 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 113 "practice5.y" /* yacc.c:1646  */
    { (yyval.flotante) = (yyvsp[-2].flotante) - (yyvsp[0].entero);	}
#line 1592 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 114 "practice5.y" /* yacc.c:1646  */
    { (yyval.flotante) = (yyvsp[-2].entero) - (yyvsp[0].flotante);	}
#line 1598 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 115 "practice5.y" /* yacc.c:1646  */
    { (yyval.flotante) = (yyvsp[-2].flotante) - (yyvsp[0].flotante);	}
#line 1604 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 116 "practice5.y" /* yacc.c:1646  */
    { (yyval.flotante) = (yyvsp[-2].flotante) + (yyvsp[0].entero);	}
#line 1610 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 117 "practice5.y" /* yacc.c:1646  */
    { (yyval.flotante) = (yyvsp[-2].entero) + (yyvsp[0].flotante);	}
#line 1616 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 118 "practice5.y" /* yacc.c:1646  */
    { (yyval.flotante) = (yyvsp[-2].flotante) + (yyvsp[0].flotante);	}
#line 1622 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 119 "practice5.y" /* yacc.c:1646  */
    { (yyval.flotante) = (yyvsp[-2].flotante) * (yyvsp[0].entero);	}
#line 1628 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 120 "practice5.y" /* yacc.c:1646  */
    { (yyval.flotante) = (yyvsp[-2].entero) * (yyvsp[0].flotante);	}
#line 1634 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 121 "practice5.y" /* yacc.c:1646  */
    { (yyval.flotante) = (yyvsp[-2].flotante) * (yyvsp[0].flotante);	}
#line 1640 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 122 "practice5.y" /* yacc.c:1646  */
    { (yyval.flotante) = (yyvsp[-2].flotante) / (yyvsp[0].entero);	}
#line 1646 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 123 "practice5.y" /* yacc.c:1646  */
    { (yyval.flotante) = (yyvsp[-2].entero) / (yyvsp[0].flotante);	}
#line 1652 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 124 "practice5.y" /* yacc.c:1646  */
    { (yyval.flotante) = (yyvsp[-2].flotante) / (yyvsp[0].flotante);	}
#line 1658 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 125 "practice5.y" /* yacc.c:1646  */
    { (yyval.flotante) = -(yyvsp[0].flotante);	   	}
#line 1664 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 126 "practice5.y" /* yacc.c:1646  */
    { (yyval.flotante) = (yyvsp[-1].flotante);	   	}
#line 1670 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 127 "practice5.y" /* yacc.c:1646  */
    { (yyval.flotante) = potency((yyvsp[-3].flotante), (yyvsp[-1].entero));}
#line 1676 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 128 "practice5.y" /* yacc.c:1646  */
    { 
				(yyval.flotante) = potency((yyvsp[-3].flotante), (yyvsp[-1].flotante));
			}
#line 1684 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 131 "practice5.y" /* yacc.c:1646  */
    { (yyval.flotante) = potency((yyvsp[-3].entero), (yyvsp[-1].entero));	}
#line 1690 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 132 "practice5.y" /* yacc.c:1646  */
    { 
				(yyval.flotante) = potency((yyvsp[-3].entero), (yyvsp[-1].flotante));
			}
#line 1698 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 135 "practice5.y" /* yacc.c:1646  */
    { (yyval.flotante) = fmod((yyvsp[-2].entero), (yyvsp[0].flotante));			}
#line 1704 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 136 "practice5.y" /* yacc.c:1646  */
    { (yyval.flotante) = fmod((yyvsp[-2].flotante), (yyvsp[0].entero));			}
#line 1710 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 137 "practice5.y" /* yacc.c:1646  */
    { (yyval.flotante) = fmod((yyvsp[-2].flotante), (yyvsp[0].flotante));			}
#line 1716 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 142 "practice5.y" /* yacc.c:1646  */
    { (yyval.cadena) = (yyvsp[0].cadena);}
#line 1722 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 143 "practice5.y" /* yacc.c:1646  */
    {
			(yyval.cadena) = concatenarCadenas((yyvsp[-2].cadena),(yyvsp[0].cadena));
		}
#line 1730 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 146 "practice5.y" /* yacc.c:1646  */
    {
			char *str = convertToString((yyvsp[0].entero));
			(yyval.cadena) = concatenarCadenas((yyvsp[-2].cadena), str);
		}
#line 1739 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 150 "practice5.y" /* yacc.c:1646  */
    {
			char *str = convertToString((yyvsp[-2].entero));
			(yyval.cadena) = concatenarCadenas(str,(yyvsp[0].cadena));
		}
#line 1748 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 154 "practice5.y" /* yacc.c:1646  */
    { (yyval.cadena) = (yyvsp[-1].cadena); }
#line 1754 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 155 "practice5.y" /* yacc.c:1646  */
    {
					char *cadena = (yyvsp[-2].cadena);
					int npotencia = (yyvsp[0].entero);
					if((yyvsp[0].entero) < 0){
						cadena = stringRevert((yyvsp[-2].cadena));
						npotencia *= -1;
					} 
					int nDigitos = contarDigitos(cadena);
					char *potencia = potenciarCadena(cadena, npotencia, nDigitos);
					(yyval.cadena) = potencia;
					
				}
#line 1771 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 169 "practice5.y" /* yacc.c:1646  */
    { 
				unsigned int num = ((yyvsp[-4].entero) > (yyvsp[-2].entero))? 1:0; 
				(yyval.boolean) = num;
			}
#line 1780 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 173 "practice5.y" /* yacc.c:1646  */
    { 
				unsigned int num = ((yyvsp[-4].entero) < (yyvsp[-2].entero))? 1:0; 
				(yyval.boolean) = num;
			}
#line 1789 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 177 "practice5.y" /* yacc.c:1646  */
    { 
				unsigned int num = ((yyvsp[-4].flotante) > (yyvsp[-2].flotante))? 1:0; 
				(yyval.boolean) = num;
			}
#line 1798 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 181 "practice5.y" /* yacc.c:1646  */
    { 
				unsigned int num = ((yyvsp[-4].flotante) < (yyvsp[-2].flotante))? 1:0; 
				(yyval.boolean) = num;
			}
#line 1807 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 185 "practice5.y" /* yacc.c:1646  */
    { 
				unsigned int num = ((yyvsp[-4].flotante) > (yyvsp[-2].entero))? 1:0; 
				(yyval.boolean) = num;
			}
#line 1816 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 189 "practice5.y" /* yacc.c:1646  */
    { 
				unsigned int num = ((yyvsp[-4].flotante) < (yyvsp[-2].entero))? 1:0; 
				(yyval.boolean) = num;
			}
#line 1825 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 193 "practice5.y" /* yacc.c:1646  */
    { 
				unsigned int num = ((yyvsp[-4].entero) > (yyvsp[-2].flotante))? 1:0; 
				(yyval.boolean) = num;
			}
#line 1834 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 197 "practice5.y" /* yacc.c:1646  */
    { 
				unsigned int num = ((yyvsp[-4].entero) < (yyvsp[-2].flotante))? 1:0; 
				(yyval.boolean) = num;
			}
#line 1843 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 201 "practice5.y" /* yacc.c:1646  */
    { 
				unsigned int num = ((yyvsp[-2].boolean) == 1)? 1:0; 
				(yyval.boolean) = num;
			}
#line 1852 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 205 "practice5.y" /* yacc.c:1646  */
    {
				 unsigned int comp = mayorMenorCadena((yyvsp[-4].cadena),(yyvsp[-2].cadena));
				 (yyval.boolean) = comp;
			
			}
#line 1862 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 210 "practice5.y" /* yacc.c:1646  */
    {
				unsigned int comp;
				if ((yyvsp[-4].tabla)->tipoDato == CADENA && (yyvsp[-2].tabla)->tipoDato == CADENA) {
					comp = mayorMenorCadena((yyvsp[-4].tabla)->valor.cadena,(yyvsp[-2].tabla)->valor.cadena);
				 	(yyval.boolean) = comp;
				} else {
					printf("%s\n", "imposible de realizarse la operación");
					comp = 0;
				}		
			}
#line 1877 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 220 "practice5.y" /* yacc.c:1646  */
    {
				unsigned int comp;
				if ((yyvsp[-4].tabla)->tipoDato == CADENA) {
					comp = mayorMenorCadena((yyvsp[-4].tabla)->valor.cadena,(yyvsp[-2].cadena));
				 	(yyval.boolean) = comp;
				} else {
					printf("%s\n", "imposible de realizarse la operación");
					comp = 0;
				}		
			}
#line 1892 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 230 "practice5.y" /* yacc.c:1646  */
    {
				unsigned int comp;
				if ((yyvsp[-2].tabla)->tipoDato == CADENA) {
					comp = mayorMenorCadena((yyvsp[-4].cadena), (yyvsp[-2].tabla)->valor.cadena);
				 	(yyval.boolean) = comp;
				} else {
					printf("%s\n", "imposible de realizarse la operación");
					comp = 0;
				}		
			}
#line 1907 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 240 "practice5.y" /* yacc.c:1646  */
    {
				 unsigned int comp = mayorMenorCadena((yyvsp[-2].cadena),(yyvsp[-4].cadena));
				 (yyval.boolean) = comp;
			
			}
#line 1917 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 245 "practice5.y" /* yacc.c:1646  */
    {
				unsigned int comp;
				if ((yyvsp[-4].tabla)->tipoDato == CADENA && (yyvsp[-2].tabla)->tipoDato == CADENA) {
					comp = mayorMenorCadena((yyvsp[-2].tabla)->valor.cadena,(yyvsp[-4].tabla)->valor.cadena);
				 	(yyval.boolean) = comp;
				} else {
					printf("%s\n", "imposible de realizarse la operación");
					comp = 0;
				}		
			}
#line 1932 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 255 "practice5.y" /* yacc.c:1646  */
    {
				unsigned int comp;
				if ((yyvsp[-4].tabla)->tipoDato == CADENA) {
					comp = mayorMenorCadena((yyvsp[-2].cadena),(yyvsp[-4].tabla)->valor.cadena);
				 	(yyval.boolean) = comp;
				} else {
					printf("%s\n", "imposible de realizarse la operación");
					comp = 0;
				}		
			}
#line 1947 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 265 "practice5.y" /* yacc.c:1646  */
    {
				unsigned int comp;
				if ((yyvsp[-2].tabla)->tipoDato == CADENA) {
					comp = mayorMenorCadena((yyvsp[-2].tabla)->valor.cadena,(yyvsp[-4].cadena));
				 	(yyval.boolean) = comp;
				} else {
					printf("%s\n", "imposible de realizarse la operación");
					comp = 0;
				}		
			}
#line 1962 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 278 "practice5.y" /* yacc.c:1646  */
    { 
							crearTablaSimbolos((yyvsp[-2].cadena), (yyvsp[-1].cadena));	
						}
#line 1970 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 281 "practice5.y" /* yacc.c:1646  */
    {
							asignarInt((yyvsp[-4].cadena),(yyvsp[-3].cadena),(yyvsp[-1].entero));
						}
#line 1978 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 284 "practice5.y" /* yacc.c:1646  */
    {
							asignarFloat((yyvsp[-4].cadena), (yyvsp[-3].cadena), (yyvsp[-1].flotante));
						}
#line 1986 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 287 "practice5.y" /* yacc.c:1646  */
    {
							asignarText((yyvsp[-4].cadena), (yyvsp[-3].cadena), (yyvsp[-1].cadena));
						}
#line 1994 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 290 "practice5.y" /* yacc.c:1646  */
    {
							(yyval.tabla) = declararExpAVariable((yyvsp[-4].cadena), (yyvsp[-3].cadena), (yyvsp[-1].tabla)); 
						}
#line 2002 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 295 "practice5.y" /* yacc.c:1646  */
    {
							(yyval.tabla) =  asignarExpAVariable((yyvsp[-3].cadena), (yyvsp[-1].tabla)); 
						}
#line 2010 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 298 "practice5.y" /* yacc.c:1646  */
    {
							(yyval.tabla) = asignarEnteroAVar((yyvsp[-3].cadena), (yyvsp[-1].entero)); 
						}
#line 2018 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 301 "practice5.y" /* yacc.c:1646  */
    {
							(yyval.tabla) = asignarFlotanteAVar((yyvsp[-3].cadena), (yyvsp[-1].flotante));
						}
#line 2026 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 304 "practice5.y" /* yacc.c:1646  */
    {
							(yyval.tabla) = asignarTextoAVar((yyvsp[-3].cadena), (yyvsp[-1].cadena));
						}
#line 2034 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 310 "practice5.y" /* yacc.c:1646  */
    {
							TablaSimbolos *tablaSimbolos = buscarPorNombre((yyvsp[0].cadena), &lista);
							if (tablaSimbolos!= NULL) {
								TablaSimbolos *copia = copiarTabla(tablaSimbolos);
								(yyval.tabla) = copia;
							} else {
								(yyval.tabla) = NULL;
							}	
						}
#line 2048 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 319 "practice5.y" /* yacc.c:1646  */
    {
							negarValorTablaSimbolos((yyvsp[0].tabla));
							(yyval.tabla) = (yyvsp[0].tabla);
						}
#line 2057 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 323 "practice5.y" /* yacc.c:1646  */
    {
							comprobarSumaExp((yyvsp[-2].tabla), (yyvsp[0].entero), 0);
							(yyval.tabla) = (yyvsp[-2].tabla);
						}
#line 2066 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 327 "practice5.y" /* yacc.c:1646  */
    {
							comprobarSumaExpFloat((yyvsp[-2].tabla), (yyvsp[0].flotante), 0);
							(yyval.tabla) = (yyvsp[-2].tabla);
						}
#line 2075 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 331 "practice5.y" /* yacc.c:1646  */
    {
							comprobarSumaExp((yyvsp[0].tabla), (yyvsp[-2].entero), 1);
							(yyval.tabla) = (yyvsp[0].tabla);
						}
#line 2084 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 335 "practice5.y" /* yacc.c:1646  */
    {
							comprobarSumaExpFloat((yyvsp[0].tabla), (yyvsp[-2].flotante), 1);
							(yyval.tabla) = (yyvsp[0].tabla);
						}
#line 2093 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 339 "practice5.y" /* yacc.c:1646  */
    {
							comprobarSumaTexto((yyvsp[-2].tabla),(yyvsp[0].cadena), NOT_INVERSE);
							(yyval.tabla) = (yyvsp[-2].tabla);
						}
#line 2102 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 343 "practice5.y" /* yacc.c:1646  */
    {
							comprobarSumaTexto((yyvsp[0].tabla),(yyvsp[-2].cadena), INVERSE);
							(yyval.tabla) = (yyvsp[0].tabla);
						}
#line 2111 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 347 "practice5.y" /* yacc.c:1646  */
    {
							comprobarSumaExpresiones((yyvsp[-2].tabla),(yyvsp[0].tabla));
							(yyval.tabla) = (yyvsp[-2].tabla);
						}
#line 2120 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 351 "practice5.y" /* yacc.c:1646  */
    {
							comprobarRestaExp((yyvsp[-2].tabla),(yyvsp[0].entero), NOT_INVERSE);
							(yyval.tabla) = (yyvsp[-2].tabla);
						}
#line 2129 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 355 "practice5.y" /* yacc.c:1646  */
    {
							comprobarRestaExp((yyvsp[0].tabla),(yyvsp[-2].entero), INVERSE);
							(yyval.tabla) = (yyvsp[0].tabla);
						}
#line 2138 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 359 "practice5.y" /* yacc.c:1646  */
    {
							comprobarRestaExpFloat((yyvsp[-2].tabla),(yyvsp[0].flotante), NOT_INVERSE);
							(yyval.tabla) = (yyvsp[-2].tabla);
						}
#line 2147 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 363 "practice5.y" /* yacc.c:1646  */
    {
							comprobarRestaExpFloat((yyvsp[0].tabla),(yyvsp[-2].flotante), INVERSE);
							(yyval.tabla) = (yyvsp[0].tabla);
						}
#line 2156 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 367 "practice5.y" /* yacc.c:1646  */
    {
							comprobarRestaExpresiones((yyvsp[-2].tabla),(yyvsp[0].tabla));
							(yyval.tabla) = (yyvsp[-2].tabla);
						}
#line 2165 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 371 "practice5.y" /* yacc.c:1646  */
    {
							comprobarMultiplicacionExp((yyvsp[-2].tabla),(yyvsp[0].entero));
							(yyval.tabla) = (yyvsp[-2].tabla);
						}
#line 2174 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 375 "practice5.y" /* yacc.c:1646  */
    {
							comprobarMultiplicacionExp((yyvsp[0].tabla),(yyvsp[-2].entero));
							(yyval.tabla) = (yyvsp[0].tabla);
						}
#line 2183 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 379 "practice5.y" /* yacc.c:1646  */
    {
							comprobarMultiplicacionExpFloat((yyvsp[-2].tabla),(yyvsp[0].flotante));
							(yyval.tabla) = (yyvsp[-2].tabla);
						}
#line 2192 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 383 "practice5.y" /* yacc.c:1646  */
    {
							comprobarMultiplicacionExpFloat((yyvsp[0].tabla),(yyvsp[-2].flotante));
							(yyval.tabla) = (yyvsp[0].tabla);
						}
#line 2201 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 387 "practice5.y" /* yacc.c:1646  */
    {
							comprobarMultiplicacionExpresiones((yyvsp[-2].tabla), (yyvsp[0].tabla));
							(yyval.tabla) = (yyvsp[-2].tabla);
						}
#line 2210 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 391 "practice5.y" /* yacc.c:1646  */
    {
							comprobarDivisionExp((yyvsp[-2].tabla),(yyvsp[0].entero), NOT_INVERSE);
							(yyval.tabla) = (yyvsp[-2].tabla);
						}
#line 2219 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 395 "practice5.y" /* yacc.c:1646  */
    {
							comprobarDivisionExp((yyvsp[0].tabla),(yyvsp[-2].entero), INVERSE);
							(yyval.tabla) = (yyvsp[0].tabla);
						}
#line 2228 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 399 "practice5.y" /* yacc.c:1646  */
    {
							comprobarDivisionExpFloat((yyvsp[-2].tabla),(yyvsp[0].flotante), NOT_INVERSE);
							(yyval.tabla) = (yyvsp[-2].tabla);
						}
#line 2237 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 403 "practice5.y" /* yacc.c:1646  */
    {
							comprobarDivisionExpFloat((yyvsp[0].tabla),(yyvsp[-2].flotante), INVERSE);
							(yyval.tabla) = (yyvsp[0].tabla);
						}
#line 2246 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 407 "practice5.y" /* yacc.c:1646  */
    {
							comprobarDivisionExpresiones((yyvsp[-2].tabla), (yyvsp[0].tabla));
							(yyval.tabla) = (yyvsp[-2].tabla);
						}
#line 2255 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 412 "practice5.y" /* yacc.c:1646  */
    { 
							comprobarPotenciaExp((yyvsp[-3].tabla),(yyvsp[-1].entero));
							(yyval.tabla) = (yyvsp[-3].tabla);
						}
#line 2264 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 417 "practice5.y" /* yacc.c:1646  */
    { 
							comprobarPotenciaExpFloat((yyvsp[-3].tabla),(yyvsp[-1].flotante));
							(yyval.tabla) = (yyvsp[-3].tabla);
						}
#line 2273 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 421 "practice5.y" /* yacc.c:1646  */
    { 
							comprobarPotenciaExpresiones((yyvsp[-3].tabla),(yyvsp[-1].tabla));
							(yyval.tabla) = (yyvsp[-3].tabla);
						}
#line 2282 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 425 "practice5.y" /* yacc.c:1646  */
    {
							potencyStringExpVariable((yyvsp[-2].tabla), (yyvsp[0].entero)); 
							(yyval.tabla) = (yyvsp[-2].tabla);
						}
#line 2291 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 429 "practice5.y" /* yacc.c:1646  */
    {
							if ((yyvsp[0].tabla)->tipoDato == FLOTANTE) {
								int cast = (yyvsp[0].tabla)->valor.flotante;
								potencyStringExpVariable((yyvsp[-2].tabla), cast); 
							} else if ((yyvsp[0].tabla)->tipoDato == ENTERO) {
								potencyStringExpVariable((yyvsp[-2].tabla), (yyvsp[0].tabla)->valor.entero); 
							} else {
								yyerror("No permitido");
								exit(-1);
							}
							(yyval.tabla) = (yyvsp[-2].tabla);
						}
#line 2308 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 441 "practice5.y" /* yacc.c:1646  */
    { (yyval.tabla) = (yyvsp[-1].tabla); }
#line 2314 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 445 "practice5.y" /* yacc.c:1646  */
    { imprimir(&lista); }
#line 2320 "practice5.tab.c" /* yacc.c:1646  */
    break;


#line 2324 "practice5.tab.c" /* yacc.c:1646  */
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
#line 449 "practice5.y" /* yacc.c:1906  */


int main() {
  yyparse();
}
             
void yyerror (char *s)
{
  printf("--%s--\n", s);
}
            
int yywrap()  
{  
  return 1;  
}  




char *falsoOVerdadero(unsigned int numero){
	char *boolean = (numero == 0)? "false" : "true";
	return boolean;
}


/******
	Símbolos
*****/

void crearTablaSimbolos(char *str, char *name) {
	TablaSimbolos *tabla = buscarPorNombre(name, &lista);
	if (tabla == NULL) {
		int id = size(&lista) + 1;
		TablaSimbolos tabla;
		tabla.id = id;
		tabla.tipoDato = returnTipo(str);
		if(tabla.tipoDato == CADENA) {
			tabla.valor.cadena =  NULL;
		}
		tabla.lexem = name;
		add(&lista, tabla);
		printf("\t\tAgregado a la tabla de símbolos\n"); 
		//printTable(&tabla);	}
	} else {
		yyerror("variable antes añadida");
	}
	
}

void crearTablaSimbolosConValor(char *str, char *name, void *valor) {
	TablaSimbolos *tabla = buscarPorNombre(name, &lista);
	if (tabla == NULL) {
		int id = size(&lista) + 1;
		TablaSimbolos tabla;
		tabla.id = id;
		tabla.tipoDato = returnTipo(str);
		asignarTipo(tabla.tipoDato, valor, &tabla);
		tabla.lexem = name;
		add(&lista, tabla);
		printf("\t\tAgregado a la tabla de símbolos\n"); 
		//printTable(&tabla);
	} else {
		yyerror("Variable antes añadida");
	}
	
}

/**** OPERACIONES TABLA SÍMBOLOS *****/


void negarValorTablaSimbolos(TablaSimbolos *tablaSimbolos) {
	if (tablaSimbolos!= NULL) {
		if (tablaSimbolos->tipoDato == ENTERO) {
			tablaSimbolos->valor.entero = -tablaSimbolos->valor.entero;
		} else if (tablaSimbolos->tipoDato == FLOTANTE) {
			tablaSimbolos->valor.flotante = -tablaSimbolos->valor.flotante;
		} else {
			yyerror("operacion no permitida");
		}
	}
}

void comprobarSumaExp(TablaSimbolos *tabla, int valor, int reverse) {
	if (tabla!= NULL) {
		if (tabla->tipoDato == ENTERO) {
			tabla->valor.entero = tabla->valor.entero + valor;
		} else if(tabla->tipoDato == FLOTANTE){
			tabla->valor.flotante = tabla->valor.flotante + valor;
		} else if (tabla->tipoDato == CADENA) {
			if (tabla->valor.cadena == NULL){
				tabla->valor.cadena = "";
			}
			char *str = convertToString(valor);
			if (reverse){
				tabla->valor.cadena = concatenarCadenas(str, tabla->valor.cadena);
			} else {
				tabla->valor.cadena = concatenarCadenas(tabla->valor.cadena, str);
			}
		}
	} else {
		yyerror("No definido");
	}
	
}

void comprobarRestaExp(TablaSimbolos *tabla, int valor, int inverse ) {
	if (tabla!= NULL) {
		if (tabla->tipoDato == ENTERO) {
			if (inverse) {
				printf("%s, %d\n", "yei", valor);
				tabla->valor.entero = valor - tabla->valor.entero ;
			} else {
				tabla->valor.entero = tabla->valor.entero - valor;
			}	
		} else if(tabla->tipoDato == FLOTANTE){
			if (inverse) {
				tabla->valor.flotante = valor - tabla->valor.flotante ;
			} else {
				tabla->valor.flotante = tabla->valor.flotante - valor;
			}	
		} else {
			yyerror("No permitido");
			exit(-1);
		}
	} else {
		yyerror("No definido");
	}
	
}

void comprobarSumaExpFloat(TablaSimbolos *tabla, float valor, int reverse) {
	if (tabla != NULL) {
		if (tabla->tipoDato == ENTERO){
			tabla->tipoDato = FLOTANTE;
			tabla->valor.flotante = tabla->valor.entero + valor;
		} else if(tabla->tipoDato == FLOTANTE){
			tabla->valor.flotante = tabla->valor.flotante + valor;
		} else if (tabla->tipoDato == CADENA) {
			if (tabla->valor.cadena == NULL){
				tabla->valor.cadena = "";
			}	
			int cast = valor;
			char *str = convertToString(cast);
			if (reverse){
				tabla->valor.cadena = concatenarCadenas(str, tabla->valor.cadena);
			} else {
				tabla->valor.cadena = concatenarCadenas(tabla->valor.cadena, str);
			}
		}
	} else {
		yyerror("No definido");
	}
	
}

void comprobarRestaExpFloat(TablaSimbolos *tabla, float valor, int inverse ) {
	if (tabla!= NULL) {
		if (tabla->tipoDato == ENTERO) {
			tabla->tipoDato = FLOTANTE;
			if (inverse) {
				tabla->valor.flotante = valor - tabla->valor.entero ;
			} else {
				tabla->valor.flotante = tabla->valor.entero - valor;
			}	
		} else if(tabla->tipoDato == FLOTANTE){
			if (inverse) {
				tabla->valor.flotante = valor - tabla->valor.flotante ;
			} else {
				tabla->valor.flotante = tabla->valor.flotante - valor;
			}	
		} else {
			yyerror("No permitido");
		}
	} else {
		yyerror("No definido");
	}
	
}

void comprobarSumaExpresiones(TablaSimbolos *tabla, TablaSimbolos *tabla2) {
	if (tabla!=NULL && tabla2 != NULL) {
		if (tabla2->tipoDato == ENTERO) {
			comprobarSumaExp(tabla, tabla2->valor.entero, 0);
		} else if(tabla2->tipoDato == FLOTANTE) {
			comprobarSumaExpFloat(tabla,tabla2->valor.flotante,0);
		} else if (tabla2->tipoDato == CADENA) {
			comprobarSumaTexto(tabla, tabla2->valor.cadena, NOT_INVERSE);
		}
	} else {
		yyerror("No definido");
	}
}

void comprobarRestaExpresiones(TablaSimbolos *tabla, TablaSimbolos *tabla2) {
	if (tabla!=NULL && tabla2 != NULL) {
		if (tabla2->tipoDato == ENTERO) {
			comprobarRestaExp(tabla, tabla2->valor.entero, 0);
		} else if(tabla2->tipoDato == FLOTANTE) {
			comprobarRestaExpFloat(tabla,tabla2->valor.flotante,0);
		} else if (tabla2->tipoDato == CADENA) {
			yyerror("No permitido");
			exit(-1);
		}
	} else {
		yyerror("No definido");
	}
}

bool mayorMenorCadena(char *cad1,char * cad2){
	int i= 0;
	int contador = 0;
	while( *cad1 != 0) {
		contador++;
		cad1++;
	}
	int contador2 = 0;
	while( *cad2 != 0) {
		contador2++;
		cad2++;
	}
	bool comprobacion = contador > contador2;
	return comprobacion;
}

char *stringRevert(char *cadena){
	int digitos = contarDigitos(cadena);
	char *reverse = malloc(sizeof(char)*digitos);
	digitos--;
	int index = 0;
	while(digitos >= 0){
		*(reverse + index) = *(cadena+digitos);
		digitos--;
		index++;
	}
	return reverse;
}

void asignarFloat(char *tipo, char *variable,float asignacion){
	if (strcmp(tipo, "int") == 0){
		int valor = asignacion;
		crearTablaSimbolosConValor(tipo,variable, (void *) &valor);
	} else if (strcmp(tipo, "string") == 0){
		yyerror("imposible asignar");
	} else {
		crearTablaSimbolosConValor(tipo, variable, (void *) &asignacion); 
	}	
}

void asignarInt(char *tipo, char *variable, int asignacion){
	if (strcmp(tipo, "int") == 0){
		crearTablaSimbolosConValor(tipo,variable, (void *) &asignacion);
	} else if (strcmp(tipo, "string") == 0){
		yyerror("imposible asignar");
	} else {
		float valor = asignacion;
		crearTablaSimbolosConValor(tipo, variable, (void *) &valor); 
	}	
}

void asignarText(char *tipo, char *variable, char *asignacion){
	if (strcmp(tipo, "string") == 0){
		int digitos =  contarDigitos(asignacion);
		char *str = malloc(sizeof(char)*(digitos));
		str = asignacion;
		crearTablaSimbolosConValor(tipo,variable, (void *) asignacion);
	} else {
		yyerror("imposible asignar");
	}	
}
