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



#define INVERSE 1
#define NOT_INVERSE 0 

#line 95 "practice5.tab.c" /* yacc.c:339  */

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
#line 30 "practice5.y" /* yacc.c:355  */

    #include "tablasimbolos.h"
    #include <stdbool.h>


#line 131 "practice5.tab.c" /* yacc.c:355  */

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
#line 37 "practice5.y" /* yacc.c:355  */

	int   entero;
	float flotante;
	char* cadena;
	unsigned int boolean;
	TablaSimbolos *tabla;

#line 162 "practice5.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PRACTICE5_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 179 "practice5.tab.c" /* yacc.c:358  */

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
#define YYLAST   543

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  24
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  11
/* YYNRULES -- Number of rules.  */
#define YYNRULES  101
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  258

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
      19,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      17,    18,    15,    12,    20,    13,     2,    16,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    22,
      23,    11,    21,     2,     2,     2,     2,     2,     2,     2,
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
       0,    72,    72,    73,    76,    77,    78,    79,    80,    81,
      82,    83,    91,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   134,
     135,   138,   142,   146,   147,   159,   163,   167,   171,   175,
     179,   183,   187,   191,   195,   200,   210,   220,   234,   239,
     249,   259,   272,   275,   278,   281,   287,   292,   295,   298,
     301,   307,   316,   320,   324,   328,   332,   336,   340,   344,
     348,   352,   356,   360,   364,   368,   372,   376,   380,   384,
     388,   392,   396,   400,   404,   409,   414,   418,   422,   426,
     438,   442
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INTEGER", "DECIMAL", "CAD", "VAR",
  "TIPO", "POW", "IF", "PRINT", "'='", "'+'", "'-'", "'^'", "'*'", "'/'",
  "'('", "')'", "'\\n'", "','", "'>'", "';'", "'<'", "$accept", "input",
  "line", "exp", "expFloat", "texto", "condition", "declarationVariable",
  "asignacionVariable", "expVariable", "imprimirTable", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,    61,    43,    45,    94,    42,    47,    40,    41,    10,
      44,    62,    59,    60
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
     -11,   201,   -11,   -11,   -11,   -11,    -9,     1,    -2,    32,
     -11,    15,    15,   -11,   -11,    14,   339,    67,    12,    47,
     -11,   334,    56,    15,   -10,    15,     0,   -11,    40,    88,
       2,   216,   173,   399,   110,   357,    15,    15,    15,    15,
     -11,    15,    15,    15,    15,   -11,    15,    31,   -11,   -11,
     -11,    15,    15,    15,    15,    15,   -11,   -11,   269,   277,
      48,    80,    15,   -11,   301,   307,   295,   147,   200,    53,
      41,    97,   -11,   -11,   -11,   -11,    40,    88,    64,   216,
      40,    88,   216,   -11,   -11,   -11,   -11,   -11,   -11,    40,
      88,   216,    40,    88,   216,   -11,   -11,   -11,   -11,   -11,
     -11,    40,   160,    64,   216,    63,    31,    31,   114,    40,
      88,    64,   216,    40,    88,   216,    40,   124,   -11,   -11,
     -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   282,   290,
     103,   213,    60,    60,    15,    60,    60,    60,    60,    15,
      15,    69,    15,    15,    31,   114,   406,    31,    31,    31,
      31,   -11,   -11,   -11,   -11,    82,    60,    60,   413,   420,
     427,   434,   441,   448,   364,   455,   462,   469,   476,   483,
     490,   497,   504,   527,   140,   371,   153,   378,   -11,   348,
     385,   523,   392,   313,   114,   114,   -11,   -11,    60,   129,
     237,   511,   518,    60,    60,    60,    60,   -11,    60,    60,
      60,    60,   -11,   -11,   -11,   -11,   -11,   -11,    85,    92,
      99,   101,   104,   120,   128,   131,   135,   142,   152,   168,
     174,   195,   197,   202,   319,   325,   129,   237,   129,   237,
     -11,   -11,   -11,   -11,   129,   237,   129,   237,   -11,   -11,
     -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,
     -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,    13,    22,    39,    71,     0,     0,     0,
     101,     0,     0,     4,     3,     0,     0,     0,     0,     0,
      12,     0,     0,     0,     0,     0,     0,    71,    18,    35,
       0,    72,     0,     0,     0,     0,     0,     0,     0,     0,
       5,     0,     0,     0,     0,     6,     0,     0,     7,     8,
       9,     0,     0,     0,     0,     0,    11,    10,     0,     0,
       0,     0,     0,    62,     0,     0,     0,     0,     0,     0,
       0,     0,    19,    36,    43,   100,    14,    27,    42,    75,
      17,    24,    81,    15,    30,    86,    16,    33,    91,    26,
      28,    76,    23,    25,    83,    29,    31,    88,    32,    34,
      93,    41,     0,    40,    78,     0,     0,     0,    44,    73,
      74,    77,    79,    80,    82,    84,    98,    99,    85,    87,
      89,    90,    92,    94,    68,    69,    70,    67,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    18,     0,     0,     0,     0,
       0,    63,    64,    65,    66,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    53,     0,
       0,     0,     0,     0,    14,    17,    15,    16,     0,    18,
      35,     0,     0,     0,     0,     0,     0,    20,     0,     0,
       0,     0,    21,    37,    38,    95,    96,    97,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    14,    27,    17,    24,
      15,    30,    16,    33,    26,    28,    23,    25,    29,    31,
      32,    34,    45,    51,    46,    52,    49,    47,    50,    48,
      54,    57,    58,    61,    56,    55,    60,    59
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -11,   -11,   -11,    -1,    46,   115,    93,   -11,   -11,   225,
     -11
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    14,   173,   102,    30,    18,    19,    20,    21,
      22
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      15,    62,    23,     3,     4,     5,    27,    24,     8,     9,
      28,    32,    63,    11,    46,    25,    47,    12,     3,     4,
       5,    27,    58,     8,    64,    67,    36,    37,    11,    38,
      39,    49,    12,    40,     3,    76,    80,    83,    86,   105,
      89,    92,    95,    98,   106,   101,   108,    16,   107,    26,
     109,   113,   116,   118,   121,    38,    39,    29,    33,   141,
      46,   128,    47,     3,     4,    46,    50,    47,   155,    59,
     126,    65,    68,   156,   139,    57,   140,   157,    47,    46,
     144,    47,    77,    81,    84,    87,    48,    90,    93,    96,
      99,   178,    51,    52,    53,    54,    55,   110,   114,   188,
     119,   122,   127,    43,    44,   145,   146,   242,   129,    51,
      52,    53,    54,    55,   243,    46,    17,    47,   142,    70,
     143,   244,    46,   245,    47,   153,   246,    34,    74,   149,
     150,   158,   160,   162,   165,   167,   169,   171,    60,    54,
      55,    69,   247,   183,   195,   196,   184,   185,   186,   187,
     248,    78,    46,   249,    47,   189,   191,   250,   216,    36,
      37,   103,    38,    39,   251,    46,   111,    47,   135,     0,
     136,   218,    41,    42,   252,    43,    44,   130,   159,   161,
     163,   166,   168,   170,   172,    36,    37,   224,    38,    39,
     253,    72,   226,   228,   230,   232,   254,   234,   236,   238,
     240,     2,   190,   192,     3,     4,     5,     6,     7,     8,
       9,    10,    41,    42,    11,    43,    44,   255,    12,   256,
      13,   137,     0,   138,   257,    51,    52,    53,    54,    55,
      53,    54,    55,     0,   225,   154,    31,    35,     0,   227,
     229,   231,   233,     0,   235,   237,   239,   241,    61,     0,
      66,    71,   200,   201,   174,   176,     0,   179,   181,     0,
       0,    79,    82,    85,    88,     0,    91,    94,    97,   100,
       0,   104,     0,     0,     0,     0,   112,   115,   117,   120,
     123,    36,    37,     0,    38,    39,     0,   131,     0,    41,
      42,   124,    43,    44,    36,    37,     0,    38,    39,   125,
       0,     0,    41,    42,   151,    43,    44,    51,    52,    53,
      54,    55,   152,    36,    37,   134,    38,    39,     0,    41,
      42,   132,    43,    44,     0,   147,   148,   133,   149,   150,
       0,   193,   194,   132,   195,   196,     0,   198,   199,   132,
     200,   201,     0,     0,     0,   133,    51,    52,    53,    54,
      55,    41,    42,    56,    43,    44,     0,     0,    45,   164,
      46,     0,    47,     0,   175,   177,   220,   180,   182,    51,
      52,    53,    54,    55,     0,    75,    51,    52,    53,    54,
      55,     0,   207,    51,    52,    53,    54,    55,     0,   217,
      51,    52,    53,    54,    55,     0,   219,    51,    52,    53,
      54,    55,     0,   221,    51,    52,    53,    54,    55,     0,
     223,    41,    42,     0,    43,    44,     0,    73,   147,   148,
       0,   149,   150,     0,    72,   193,   194,     0,   195,   196,
       0,   197,   198,   199,     0,   200,   201,     0,   202,   193,
     194,     0,   195,   196,     0,   203,   198,   199,     0,   200,
     201,     0,   204,    36,    37,     0,    38,    39,     0,   205,
      41,    42,     0,    43,    44,     0,   206,   193,   194,     0,
     195,   196,     0,   208,   198,   199,     0,   200,   201,     0,
     209,   193,   194,     0,   195,   196,     0,   210,   198,   199,
       0,   200,   201,     0,   211,   193,   194,     0,   195,   196,
       0,   212,   198,   199,     0,   200,   201,     0,   213,   193,
     194,     0,   195,   196,     0,   214,   198,   199,     0,   200,
     201,     0,   215,   193,   194,     0,   195,   196,     0,    72,
     198,   199,     0,   200,   201,    46,    73,    47,     0,    36,
      37,   222,    38,    39
};

static const yytype_int16 yycheck[] =
{
       1,    11,    11,     3,     4,     5,     6,     6,     8,     9,
      11,    12,    22,    13,    12,    17,    14,    17,     3,     4,
       5,     6,    23,     8,    25,    26,    12,    13,    13,    15,
      16,    19,    17,    19,     3,    36,    37,    38,    39,     8,
      41,    42,    43,    44,    13,    46,    47,     1,    17,    17,
      51,    52,    53,    54,    55,    15,    16,    11,    12,    18,
      12,    62,    14,     3,     4,    12,    19,    14,     8,    23,
      22,    25,    26,    13,    21,    19,    23,    17,    14,    12,
      17,    14,    36,    37,    38,    39,    19,    41,    42,    43,
      44,    22,    12,    13,    14,    15,    16,    51,    52,    17,
      54,    55,    22,    15,    16,   106,   107,    22,    62,    12,
      13,    14,    15,    16,    22,    12,     1,    14,    21,    26,
      23,    22,    12,    22,    14,    22,    22,    12,    18,    15,
      16,   132,   133,   134,   135,   136,   137,   138,    23,    15,
      16,    26,    22,   144,    15,    16,   147,   148,   149,   150,
      22,    36,    12,    22,    14,   156,   157,    22,    18,    12,
      13,    46,    15,    16,    22,    12,    51,    14,    21,    -1,
      23,    18,    12,    13,    22,    15,    16,    62,   132,   133,
     134,   135,   136,   137,   138,    12,    13,   188,    15,    16,
      22,    18,   193,   194,   195,   196,    22,   198,   199,   200,
     201,     0,   156,   157,     3,     4,     5,     6,     7,     8,
       9,    10,    12,    13,    13,    15,    16,    22,    17,    22,
      19,    21,    -1,    23,    22,    12,    13,    14,    15,    16,
      14,    15,    16,    -1,   188,    22,    11,    12,    -1,   193,
     194,   195,   196,    -1,   198,   199,   200,   201,    23,    -1,
      25,    26,    15,    16,   139,   140,    -1,   142,   143,    -1,
      -1,    36,    37,    38,    39,    -1,    41,    42,    43,    44,
      -1,    46,    -1,    -1,    -1,    -1,    51,    52,    53,    54,
      55,    12,    13,    -1,    15,    16,    -1,    62,    -1,    12,
      13,    22,    15,    16,    12,    13,    -1,    15,    16,    22,
      -1,    -1,    12,    13,    22,    15,    16,    12,    13,    14,
      15,    16,    22,    12,    13,    20,    15,    16,    -1,    12,
      13,    20,    15,    16,    -1,    12,    13,    20,    15,    16,
      -1,    12,    13,    20,    15,    16,    -1,    12,    13,    20,
      15,    16,    -1,    -1,    -1,    20,    12,    13,    14,    15,
      16,    12,    13,    19,    15,    16,    -1,    -1,    19,   134,
      12,    -1,    14,    -1,   139,   140,    18,   142,   143,    12,
      13,    14,    15,    16,    -1,    18,    12,    13,    14,    15,
      16,    -1,    18,    12,    13,    14,    15,    16,    -1,    18,
      12,    13,    14,    15,    16,    -1,    18,    12,    13,    14,
      15,    16,    -1,    18,    12,    13,    14,    15,    16,    -1,
      18,    12,    13,    -1,    15,    16,    -1,    18,    12,    13,
      -1,    15,    16,    -1,    18,    12,    13,    -1,    15,    16,
      -1,    18,    12,    13,    -1,    15,    16,    -1,    18,    12,
      13,    -1,    15,    16,    -1,    18,    12,    13,    -1,    15,
      16,    -1,    18,    12,    13,    -1,    15,    16,    -1,    18,
      12,    13,    -1,    15,    16,    -1,    18,    12,    13,    -1,
      15,    16,    -1,    18,    12,    13,    -1,    15,    16,    -1,
      18,    12,    13,    -1,    15,    16,    -1,    18,    12,    13,
      -1,    15,    16,    -1,    18,    12,    13,    -1,    15,    16,
      -1,    18,    12,    13,    -1,    15,    16,    -1,    18,    12,
      13,    -1,    15,    16,    -1,    18,    12,    13,    -1,    15,
      16,    -1,    18,    12,    13,    -1,    15,    16,    -1,    18,
      12,    13,    -1,    15,    16,    12,    18,    14,    -1,    12,
      13,    18,    15,    16
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    25,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    13,    17,    19,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    11,     6,    17,    17,     6,    27,    28,
      29,    33,    27,    28,    29,    33,    12,    13,    15,    16,
      19,    12,    13,    15,    16,    19,    12,    14,    19,    19,
      19,    12,    13,    14,    15,    16,    19,    19,    27,    28,
      29,    33,    11,    22,    27,    28,    33,    27,    28,    29,
      30,    33,    18,    18,    18,    18,    27,    28,    29,    33,
      27,    28,    33,    27,    28,    33,    27,    28,    33,    27,
      28,    33,    27,    28,    33,    27,    28,    33,    27,    28,
      33,    27,    28,    29,    33,     8,    13,    17,    27,    27,
      28,    29,    33,    27,    28,    33,    27,    33,    27,    28,
      33,    27,    28,    33,    22,    22,    22,    22,    27,    28,
      29,    33,    20,    20,    20,    21,    23,    21,    23,    21,
      23,    18,    21,    23,    17,    27,    27,    12,    13,    15,
      16,    22,    22,    22,    22,     8,    13,    17,    27,    28,
      27,    28,    27,    28,    33,    27,    28,    27,    28,    27,
      28,    27,    28,    27,    29,    33,    29,    33,    22,    29,
      33,    29,    33,    27,    27,    27,    27,    27,    17,    27,
      28,    27,    28,    12,    13,    15,    16,    18,    12,    13,
      15,    16,    18,    18,    18,    18,    18,    18,    18,    18,
      18,    18,    18,    18,    18,    18,    18,    18,    18,    18,
      18,    18,    18,    18,    27,    28,    27,    28,    27,    28,
      27,    28,    27,    28,    27,    28,    27,    28,    27,    28,
      27,    28,    22,    22,    22,    22,    22,    22,    22,    22,
      22,    22,    22,    22,    22,    22,    22,    22
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    24,    25,    25,    26,    26,    26,    26,    26,    26,
      26,    26,    26,    27,    27,    27,    27,    27,    27,    27,
      27,    27,    28,    28,    28,    28,    28,    28,    28,    28,
      28,    28,    28,    28,    28,    28,    28,    28,    28,    29,
      29,    29,    29,    29,    29,    30,    30,    30,    30,    30,
      30,    30,    30,    30,    30,    30,    30,    30,    30,    30,
      30,    30,    31,    31,    31,    31,    31,    32,    32,    32,
      32,    33,    33,    33,    33,    33,    33,    33,    33,    33,
      33,    33,    33,    33,    33,    33,    33,    33,    33,    33,
      33,    33,    33,    33,    33,    33,    33,    33,    33,    33,
      33,    34
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     2,     2,     2,     2,     2,
       2,     2,     1,     1,     3,     3,     3,     3,     2,     3,
       6,     6,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     3,     6,     6,     1,
       3,     3,     3,     3,     3,     7,     7,     7,     7,     7,
       7,     7,     7,     5,     7,     7,     7,     7,     7,     7,
       7,     7,     3,     5,     5,     5,     5,     4,     4,     4,
       4,     1,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     6,     6,     6,     3,     3,
       3,     1
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
#line 77 "practice5.y" /* yacc.c:1646  */
    { printf ("\t\tresultado: %d\n\n", (yyvsp[-1].entero)); }
#line 1465 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 78 "practice5.y" /* yacc.c:1646  */
    { printf("\t\tflotante: %f\n", (yyvsp[-1].flotante));}
#line 1471 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 79 "practice5.y" /* yacc.c:1646  */
    { printf ("\t\tresultado: %s\n\n", (yyvsp[-1].cadena)); }
#line 1477 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 80 "practice5.y" /* yacc.c:1646  */
    {printf("\t\t%s\n", falsoOVerdadero((yyvsp[-1].boolean)));}
#line 1483 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 81 "practice5.y" /* yacc.c:1646  */
    {}
#line 1489 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 82 "practice5.y" /* yacc.c:1646  */
    {}
#line 1495 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 83 "practice5.y" /* yacc.c:1646  */
    { 
        	if ((yyvsp[-1].tabla) != NULL) {
        		printValor((yyvsp[-1].tabla));
        	} else {
        		yyerror("No definido");
        	}
        	
        }
#line 1508 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 91 "practice5.y" /* yacc.c:1646  */
    {}
#line 1514 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 95 "practice5.y" /* yacc.c:1646  */
    { (yyval.entero) = (yyvsp[0].entero);				}
#line 1520 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 96 "practice5.y" /* yacc.c:1646  */
    { (yyval.entero) = (yyvsp[-2].entero) + (yyvsp[0].entero); 		}
#line 1526 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 97 "practice5.y" /* yacc.c:1646  */
    { (yyval.entero) = (yyvsp[-2].entero) * (yyvsp[0].entero);			}
#line 1532 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 98 "practice5.y" /* yacc.c:1646  */
    { (yyval.entero) = (yyvsp[-2].entero) / (yyvsp[0].entero);			}
#line 1538 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 99 "practice5.y" /* yacc.c:1646  */
    { (yyval.entero) = (yyvsp[-2].entero) - (yyvsp[0].entero);			}
#line 1544 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 100 "practice5.y" /* yacc.c:1646  */
    { (yyval.entero) = -(yyvsp[0].entero);				}
#line 1550 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 101 "practice5.y" /* yacc.c:1646  */
    { (yyval.entero) = (yyvsp[-1].entero);				}
#line 1556 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 102 "practice5.y" /* yacc.c:1646  */
    { (yyval.entero) = potency((yyvsp[-3].entero), (yyvsp[-1].entero));	}
#line 1562 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 103 "practice5.y" /* yacc.c:1646  */
    { 
			int exponente  = (yyvsp[-1].flotante);
			(yyval.entero) = potency((yyvsp[-3].entero), exponente);
		}
#line 1571 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 110 "practice5.y" /* yacc.c:1646  */
    { (yyval.flotante) = (yyvsp[0].flotante);}
#line 1577 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 111 "practice5.y" /* yacc.c:1646  */
    { (yyval.flotante) = (yyvsp[-2].flotante) - (yyvsp[0].entero);	}
#line 1583 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 112 "practice5.y" /* yacc.c:1646  */
    { (yyval.flotante) = (yyvsp[-2].entero) - (yyvsp[0].flotante);	}
#line 1589 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 113 "practice5.y" /* yacc.c:1646  */
    { (yyval.flotante) = (yyvsp[-2].flotante) - (yyvsp[0].flotante);	}
#line 1595 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 114 "practice5.y" /* yacc.c:1646  */
    { (yyval.flotante) = (yyvsp[-2].flotante) + (yyvsp[0].entero);	}
#line 1601 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 115 "practice5.y" /* yacc.c:1646  */
    { (yyval.flotante) = (yyvsp[-2].entero) + (yyvsp[0].flotante);	}
#line 1607 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 116 "practice5.y" /* yacc.c:1646  */
    { (yyval.flotante) = (yyvsp[-2].flotante) + (yyvsp[0].flotante);	}
#line 1613 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 117 "practice5.y" /* yacc.c:1646  */
    { (yyval.flotante) = (yyvsp[-2].flotante) * (yyvsp[0].entero);	}
#line 1619 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 118 "practice5.y" /* yacc.c:1646  */
    { (yyval.flotante) = (yyvsp[-2].entero) * (yyvsp[0].flotante);	}
#line 1625 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 119 "practice5.y" /* yacc.c:1646  */
    { (yyval.flotante) = (yyvsp[-2].flotante) * (yyvsp[0].flotante);	}
#line 1631 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 120 "practice5.y" /* yacc.c:1646  */
    { (yyval.flotante) = (yyvsp[-2].flotante) / (yyvsp[0].entero);	}
#line 1637 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 121 "practice5.y" /* yacc.c:1646  */
    { (yyval.flotante) = (yyvsp[-2].entero) / (yyvsp[0].flotante);	}
#line 1643 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 122 "practice5.y" /* yacc.c:1646  */
    { (yyval.flotante) = (yyvsp[-2].flotante) / (yyvsp[0].flotante);	}
#line 1649 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 123 "practice5.y" /* yacc.c:1646  */
    { (yyval.flotante) = -(yyvsp[0].flotante);	   	}
#line 1655 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 124 "practice5.y" /* yacc.c:1646  */
    { (yyval.flotante) = (yyvsp[-1].flotante);	   	}
#line 1661 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 125 "practice5.y" /* yacc.c:1646  */
    { (yyval.flotante) = potency((yyvsp[-3].flotante), (yyvsp[-1].entero));}
#line 1667 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 126 "practice5.y" /* yacc.c:1646  */
    { 
				int exponente  = (yyvsp[-1].flotante);
				(yyval.flotante) = potency((yyvsp[-3].flotante), exponente);
			}
#line 1676 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 134 "practice5.y" /* yacc.c:1646  */
    { (yyval.cadena) = (yyvsp[0].cadena);}
#line 1682 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 135 "practice5.y" /* yacc.c:1646  */
    {
			(yyval.cadena) = concatenarCadenas((yyvsp[-2].cadena),(yyvsp[0].cadena));
		}
#line 1690 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 138 "practice5.y" /* yacc.c:1646  */
    {
			char *str = convertToString((yyvsp[0].entero));
			(yyval.cadena) = concatenarCadenas((yyvsp[-2].cadena), str);
		}
#line 1699 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 142 "practice5.y" /* yacc.c:1646  */
    {
			char *str = convertToString((yyvsp[-2].entero));
			(yyval.cadena) = concatenarCadenas(str,(yyvsp[0].cadena));
		}
#line 1708 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 146 "practice5.y" /* yacc.c:1646  */
    { (yyval.cadena) = (yyvsp[-1].cadena); }
#line 1714 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 147 "practice5.y" /* yacc.c:1646  */
    {
					char *cadena = (yyvsp[-2].cadena);
					if((yyvsp[0].entero) < 0){
						printf("%s\n", "siiiiiiii");
						stringRevert((yyvsp[-2].cadena));
					}
					int nDigitos = contarDigitos(cadena);
					char *potencia = potenciarCadena(cadena, (yyvsp[0].entero), nDigitos);
					(yyval.cadena) = potencia;
				}
#line 1729 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 159 "practice5.y" /* yacc.c:1646  */
    { 
				unsigned int num = ((yyvsp[-4].entero) > (yyvsp[-2].entero))? 1:0; 
				(yyval.boolean) = num;
			}
#line 1738 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 163 "practice5.y" /* yacc.c:1646  */
    { 
				unsigned int num = ((yyvsp[-4].entero) < (yyvsp[-2].entero))? 1:0; 
				(yyval.boolean) = num;
			}
#line 1747 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 167 "practice5.y" /* yacc.c:1646  */
    { 
				unsigned int num = ((yyvsp[-4].flotante) > (yyvsp[-2].flotante))? 1:0; 
				(yyval.boolean) = num;
			}
#line 1756 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 171 "practice5.y" /* yacc.c:1646  */
    { 
				unsigned int num = ((yyvsp[-4].flotante) < (yyvsp[-2].flotante))? 1:0; 
				(yyval.boolean) = num;
			}
#line 1765 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 175 "practice5.y" /* yacc.c:1646  */
    { 
				unsigned int num = ((yyvsp[-4].flotante) > (yyvsp[-2].entero))? 1:0; 
				(yyval.boolean) = num;
			}
#line 1774 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 179 "practice5.y" /* yacc.c:1646  */
    { 
				unsigned int num = ((yyvsp[-4].flotante) < (yyvsp[-2].entero))? 1:0; 
				(yyval.boolean) = num;
			}
#line 1783 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 183 "practice5.y" /* yacc.c:1646  */
    { 
				unsigned int num = ((yyvsp[-4].entero) > (yyvsp[-2].flotante))? 1:0; 
				(yyval.boolean) = num;
			}
#line 1792 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 187 "practice5.y" /* yacc.c:1646  */
    { 
				unsigned int num = ((yyvsp[-4].entero) < (yyvsp[-2].flotante))? 1:0; 
				(yyval.boolean) = num;
			}
#line 1801 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 191 "practice5.y" /* yacc.c:1646  */
    { 
				unsigned int num = ((yyvsp[-2].boolean) == 1)? 1:0; 
				(yyval.boolean) = num;
			}
#line 1810 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 195 "practice5.y" /* yacc.c:1646  */
    {
				 unsigned int comp = mayorMenorCadena((yyvsp[-4].cadena),(yyvsp[-2].cadena));
				 (yyval.boolean) = comp;
			
			}
#line 1820 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 200 "practice5.y" /* yacc.c:1646  */
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
#line 1835 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 210 "practice5.y" /* yacc.c:1646  */
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
#line 1850 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 220 "practice5.y" /* yacc.c:1646  */
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
#line 1865 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 234 "practice5.y" /* yacc.c:1646  */
    {
				 unsigned int comp = mayorMenorCadena((yyvsp[-2].cadena),(yyvsp[-4].cadena));
				 (yyval.boolean) = comp;
			
			}
#line 1875 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 239 "practice5.y" /* yacc.c:1646  */
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
#line 1890 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 249 "practice5.y" /* yacc.c:1646  */
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
#line 1905 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 259 "practice5.y" /* yacc.c:1646  */
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
#line 1920 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 272 "practice5.y" /* yacc.c:1646  */
    { 
							crearTablaSimbolos((yyvsp[-2].cadena), (yyvsp[-1].cadena));	
						}
#line 1928 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 275 "practice5.y" /* yacc.c:1646  */
    {
							crearTablaSimbolosConValor((yyvsp[-4].cadena),(yyvsp[-3].cadena), (void *) &((yyvsp[-1].entero))); 
						}
#line 1936 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 278 "practice5.y" /* yacc.c:1646  */
    {
							crearTablaSimbolosConValor((yyvsp[-4].cadena),(yyvsp[-3].cadena), (void *) &((yyvsp[-1].flotante))); 
						}
#line 1944 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 281 "practice5.y" /* yacc.c:1646  */
    {
							int digitos =  contarDigitos((yyvsp[-1].cadena));
							char *str = malloc(sizeof(char)*(digitos));
							str = (yyvsp[-1].cadena);
							crearTablaSimbolosConValor((yyvsp[-4].cadena),(yyvsp[-3].cadena), (void *) str); 
						}
#line 1955 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 287 "practice5.y" /* yacc.c:1646  */
    {
							(yyval.tabla) = declararExpAVariable((yyvsp[-4].cadena), (yyvsp[-3].cadena), (yyvsp[-1].tabla)); 
						}
#line 1963 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 292 "practice5.y" /* yacc.c:1646  */
    {
							(yyval.tabla) =  asignarExpAVariable((yyvsp[-3].cadena), (yyvsp[-1].tabla)); 
						}
#line 1971 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 295 "practice5.y" /* yacc.c:1646  */
    {
							(yyval.tabla) = asignarEnteroAVar((yyvsp[-3].cadena), (yyvsp[-1].entero)); 
						}
#line 1979 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 298 "practice5.y" /* yacc.c:1646  */
    {
							(yyval.tabla) = asignarFlotanteAVar((yyvsp[-3].cadena), (yyvsp[-1].flotante));
						}
#line 1987 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 301 "practice5.y" /* yacc.c:1646  */
    {
							(yyval.tabla) = asignarTextoAVar((yyvsp[-3].cadena), (yyvsp[-1].cadena));
						}
#line 1995 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 307 "practice5.y" /* yacc.c:1646  */
    {
							TablaSimbolos *tablaSimbolos = buscarPorNombre((yyvsp[0].cadena), &lista);
							if (tablaSimbolos!= NULL) {
								TablaSimbolos *copia = copiarTabla(tablaSimbolos);
								(yyval.tabla) = copia;
							} else {
								(yyval.tabla) = NULL;
							}	
						}
#line 2009 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 316 "practice5.y" /* yacc.c:1646  */
    {
							negarValorTablaSimbolos((yyvsp[0].tabla));
							(yyval.tabla) = (yyvsp[0].tabla);
						}
#line 2018 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 320 "practice5.y" /* yacc.c:1646  */
    {
							comprobarSumaExp((yyvsp[-2].tabla), (yyvsp[0].entero), 0);
							(yyval.tabla) = (yyvsp[-2].tabla);
						}
#line 2027 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 324 "practice5.y" /* yacc.c:1646  */
    {
							comprobarSumaExpFloat((yyvsp[-2].tabla), (yyvsp[0].flotante), 0);
							(yyval.tabla) = (yyvsp[-2].tabla);
						}
#line 2036 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 328 "practice5.y" /* yacc.c:1646  */
    {
							comprobarSumaExp((yyvsp[0].tabla), (yyvsp[-2].entero), 1);
							(yyval.tabla) = (yyvsp[0].tabla);
						}
#line 2045 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 332 "practice5.y" /* yacc.c:1646  */
    {
							comprobarSumaExpFloat((yyvsp[0].tabla), (yyvsp[-2].flotante), 1);
							(yyval.tabla) = (yyvsp[0].tabla);
						}
#line 2054 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 336 "practice5.y" /* yacc.c:1646  */
    {
							comprobarSumaTexto((yyvsp[-2].tabla),(yyvsp[0].cadena), NOT_INVERSE);
							(yyval.tabla) = (yyvsp[-2].tabla);
						}
#line 2063 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 340 "practice5.y" /* yacc.c:1646  */
    {
							comprobarSumaTexto((yyvsp[0].tabla),(yyvsp[-2].cadena), INVERSE);
							(yyval.tabla) = (yyvsp[0].tabla);
						}
#line 2072 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 344 "practice5.y" /* yacc.c:1646  */
    {
							comprobarSumaExpresiones((yyvsp[-2].tabla),(yyvsp[0].tabla));
							(yyval.tabla) = (yyvsp[-2].tabla);
						}
#line 2081 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 348 "practice5.y" /* yacc.c:1646  */
    {
							comprobarRestaExp((yyvsp[-2].tabla),(yyvsp[0].entero), NOT_INVERSE);
							(yyval.tabla) = (yyvsp[-2].tabla);
						}
#line 2090 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 352 "practice5.y" /* yacc.c:1646  */
    {
							comprobarRestaExp((yyvsp[0].tabla),(yyvsp[-2].entero), INVERSE);
							(yyval.tabla) = (yyvsp[0].tabla);
						}
#line 2099 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 356 "practice5.y" /* yacc.c:1646  */
    {
							comprobarRestaExpFloat((yyvsp[-2].tabla),(yyvsp[0].flotante), NOT_INVERSE);
							(yyval.tabla) = (yyvsp[-2].tabla);
						}
#line 2108 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 360 "practice5.y" /* yacc.c:1646  */
    {
							comprobarRestaExpFloat((yyvsp[0].tabla),(yyvsp[-2].flotante), INVERSE);
							(yyval.tabla) = (yyvsp[0].tabla);
						}
#line 2117 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 364 "practice5.y" /* yacc.c:1646  */
    {
							comprobarRestaExpresiones((yyvsp[-2].tabla),(yyvsp[0].tabla));
							(yyval.tabla) = (yyvsp[-2].tabla);
						}
#line 2126 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 368 "practice5.y" /* yacc.c:1646  */
    {
							comprobarMultiplicacionExp((yyvsp[-2].tabla),(yyvsp[0].entero));
							(yyval.tabla) = (yyvsp[-2].tabla);
						}
#line 2135 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 372 "practice5.y" /* yacc.c:1646  */
    {
							comprobarMultiplicacionExp((yyvsp[0].tabla),(yyvsp[-2].entero));
							(yyval.tabla) = (yyvsp[0].tabla);
						}
#line 2144 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 376 "practice5.y" /* yacc.c:1646  */
    {
							comprobarMultiplicacionExpFloat((yyvsp[-2].tabla),(yyvsp[0].flotante));
							(yyval.tabla) = (yyvsp[-2].tabla);
						}
#line 2153 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 380 "practice5.y" /* yacc.c:1646  */
    {
							comprobarMultiplicacionExpFloat((yyvsp[0].tabla),(yyvsp[-2].flotante));
							(yyval.tabla) = (yyvsp[0].tabla);
						}
#line 2162 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 384 "practice5.y" /* yacc.c:1646  */
    {
							comprobarMultiplicacionExpresiones((yyvsp[-2].tabla), (yyvsp[0].tabla));
							(yyval.tabla) = (yyvsp[-2].tabla);
						}
#line 2171 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 388 "practice5.y" /* yacc.c:1646  */
    {
							comprobarDivisionExp((yyvsp[-2].tabla),(yyvsp[0].entero), NOT_INVERSE);
							(yyval.tabla) = (yyvsp[-2].tabla);
						}
#line 2180 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 392 "practice5.y" /* yacc.c:1646  */
    {
							comprobarDivisionExp((yyvsp[0].tabla),(yyvsp[-2].entero), INVERSE);
							(yyval.tabla) = (yyvsp[0].tabla);
						}
#line 2189 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 396 "practice5.y" /* yacc.c:1646  */
    {
							comprobarDivisionExpFloat((yyvsp[-2].tabla),(yyvsp[0].flotante), NOT_INVERSE);
							(yyval.tabla) = (yyvsp[-2].tabla);
						}
#line 2198 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 400 "practice5.y" /* yacc.c:1646  */
    {
							comprobarDivisionExpFloat((yyvsp[0].tabla),(yyvsp[-2].flotante), INVERSE);
							(yyval.tabla) = (yyvsp[0].tabla);
						}
#line 2207 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 404 "practice5.y" /* yacc.c:1646  */
    {
							comprobarDivisionExpresiones((yyvsp[-2].tabla), (yyvsp[0].tabla));
							(yyval.tabla) = (yyvsp[-2].tabla);
						}
#line 2216 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 409 "practice5.y" /* yacc.c:1646  */
    { 
							comprobarPotenciaExp((yyvsp[-3].tabla),(yyvsp[-1].entero));
							(yyval.tabla) = (yyvsp[-3].tabla);
						}
#line 2225 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 414 "practice5.y" /* yacc.c:1646  */
    { 
							comprobarPotenciaExpFloat((yyvsp[-3].tabla),(yyvsp[-1].flotante));
							(yyval.tabla) = (yyvsp[-3].tabla);
						}
#line 2234 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 418 "practice5.y" /* yacc.c:1646  */
    { 
							comprobarPotenciaExpresiones((yyvsp[-3].tabla),(yyvsp[-1].tabla));
							(yyval.tabla) = (yyvsp[-3].tabla);
						}
#line 2243 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 422 "practice5.y" /* yacc.c:1646  */
    {
							potencyStringExpVariable((yyvsp[-2].tabla), (yyvsp[0].entero)); 
							(yyval.tabla) = (yyvsp[-2].tabla);
						}
#line 2252 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 426 "practice5.y" /* yacc.c:1646  */
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
#line 2269 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 438 "practice5.y" /* yacc.c:1646  */
    { (yyval.tabla) = (yyvsp[-1].tabla); }
#line 2275 "practice5.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 442 "practice5.y" /* yacc.c:1646  */
    { imprimir(&lista); }
#line 2281 "practice5.tab.c" /* yacc.c:1646  */
    break;


#line 2285 "practice5.tab.c" /* yacc.c:1646  */
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
#line 446 "practice5.y" /* yacc.c:1906  */


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

}
