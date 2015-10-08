/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "grammar.y" /* yacc.c:339  */

#include <math.h>
#include <stdlib.h>
#include <list>
#include "parser.H"
#include <string.h>
#define YYERROR_VERBOSE   

#line 75 "grammar.c" /* yacc.c:339  */

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
   by #include "grammar.h".  */
#ifndef YY_YY_GRAMMAR_H_INCLUDED
# define YY_YY_GRAMMAR_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    NUMBER = 258,
    TRUE = 259,
    FALSE = 260,
    TID = 261,
    THIS = 262,
    TIF = 263,
    TELSE = 264,
    TEQ = 265,
    NEQ = 266,
    LEQ = 267,
    GEQ = 268,
    TAND = 269,
    TOR = 270,
    TNEW = 271,
    TINT = 272,
    TBOOL = 273,
    TVOID = 274,
    TDB = 275,
    TRETURN = 276,
    TWHILE = 277,
    TCLASS = 278,
    TEXTENDS = 279,
    UMINUS = 286
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 10 "grammar.y" /* yacc.c:355  */

   int        val;
   char*      id;

#line 146 "grammar.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int yyparse (Parser* parser);

#endif /* !YY_YY_GRAMMAR_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 160 "grammar.c" /* yacc.c:358  */
/* Unqualified %code blocks.  */
#line 14 "grammar.y" /* yacc.c:359  */

  int yyerror(Parser* p,const char* s);
  int yylex(YYSTYPE*);

#line 167 "grammar.c" /* yacc.c:359  */

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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   586

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  15
/* YYNRULES -- Number of rules.  */
#define YYNRULES  72
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  151

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   286

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    37,     2,     2,     2,     2,     2,     2,
      42,    43,    35,    33,    48,    34,    47,    36,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    41,
      29,    44,    30,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    45,     2,    46,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    39,     2,    40,     2,     2,     2,     2,
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
      25,    26,    27,    28,    31,    32,    38
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    56,    56,    59,    60,    63,    64,    65,    66,    69,
      70,    73,    74,    75,    76,    77,    78,    81,    82,    85,
      86,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   106,   109,   110,   111,   112,   113,   114,   115,   116,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   142,   143,   147,   148,   149,   150,   151,   152,   153,
     154,   157,   158
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMBER", "TRUE", "FALSE", "TID", "THIS",
  "TIF", "TELSE", "TEQ", "NEQ", "LEQ", "GEQ", "TAND", "TOR", "TNEW",
  "TINT", "TBOOL", "TVOID", "TDB", "TRETURN", "TWHILE", "TCLASS",
  "TEXTENDS", "\"||\"", "\"&&\"", "\"==\"", "\"!=\"", "'<'", "'>'",
  "\">=\"", "\"<=\"", "'+'", "'-'", "'*'", "'/'", "'!'", "UMINUS", "'{'",
  "'}'", "';'", "'('", "')'", "'='", "'['", "']'", "'.'", "','", "$accept",
  "Top", "ClassList", "classDecl", "declList", "decl", "statementList",
  "formals", "statement", "formal", "type", "expr", "uop", "lvalue",
  "actuals", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,    60,
      62,   284,   285,    43,    45,    42,    47,    33,   286,   123,
     125,    59,    40,    41,    61,    91,    93,    46,    44
};
# endif

#define YYPACT_NINF -107

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-107)))

#define YYTABLE_NINF -36

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -12,     2,    25,   -12,  -107,   -15,  -107,  -107,    22,   133,
      -7,   -16,    16,    20,    45,    28,   174,  -107,    51,   192,
    -107,    64,  -107,  -107,  -107,  -107,    43,  -107,    56,    52,
     209,    86,    74,    91,  -107,   114,  -107,   105,  -107,    80,
      87,    90,  -107,  -107,    85,   119,  -107,  -107,   360,  -107,
      92,  -107,  -107,  -107,     0,  -107,    88,    60,   380,   100,
    -107,  -107,   160,  -107,   380,   200,  -107,   127,   499,   380,
      42,   240,    98,   380,   -13,    99,   101,   516,    49,   380,
    -107,   280,   442,  -107,  -107,   104,   380,   380,   380,   380,
     380,   380,   380,   380,   380,   380,   380,   380,  -107,  -107,
     380,   380,   141,  -107,   320,  -107,   550,   -33,   461,   112,
     380,  -107,   480,  -107,  -107,  -107,   237,   276,   314,   314,
      27,    27,    27,    27,    37,    37,  -107,  -107,   533,   398,
     111,  -107,  -107,   380,   152,  -107,    -9,   420,   360,  -107,
    -107,   153,   550,   360,  -107,  -107,  -107,  -107,    -5,  -107,
    -107
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     4,     0,     1,     3,     0,     0,
       0,    35,    32,    33,    34,     0,     0,     9,     0,     0,
      39,     0,    36,    37,    38,     6,     0,    10,    11,     0,
       0,    35,     0,     0,    19,     0,     5,     0,     8,     0,
       0,     0,    20,    31,     0,     0,     7,    15,     0,    12,
       0,    53,    54,    55,    63,    70,     0,     0,     0,     0,
      62,    61,     0,    30,     0,     0,    17,     0,     0,     0,
      57,     0,     0,     0,    35,     0,    63,     0,    57,     0,
      25,     0,     0,    16,    18,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    21,    52,
       0,     0,     0,    13,     0,    64,    71,     0,     0,     0,
       0,    29,     0,    24,    56,    22,    50,    51,    49,    48,
      45,    44,    47,    46,    43,    42,    41,    40,     0,     0,
      67,    14,    65,     0,    27,    58,     0,     0,     0,    23,
      66,     0,    72,     0,    59,    60,    26,    68,     0,    28,
      69
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -107,  -107,  -107,   167,   155,   -11,   -50,   134,   -63,   -32,
      55,   -42,  -107,   -48,  -106
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,     4,    16,    17,    65,    33,    66,    34,
      67,    68,    69,    78,   107
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      70,    42,    84,   136,    20,    27,   -35,    20,     5,     8,
     132,     1,    81,    42,    70,   133,    77,    70,    84,    27,
      20,   104,    82,    70,     9,     6,    21,    99,    10,   109,
     106,   108,    19,    70,   144,   148,    22,   112,   150,   133,
      23,    84,    72,   133,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,    70,    28,   128,   129,
      94,    95,    96,    97,    18,    24,    74,   106,   137,    25,
      31,    18,    96,    97,    18,   146,    35,    12,    13,    14,
     149,    12,    13,    14,    36,    18,   100,   101,    35,   102,
      70,   142,    35,    38,   101,    70,   102,    31,    37,   106,
      35,    51,    52,    53,    76,    55,    20,    32,    12,    13,
      14,    31,    75,    40,    57,    51,    52,    53,    76,    55,
      43,    46,    12,    13,    14,    31,    49,    47,    57,    48,
      73,    71,    60,    85,    41,    61,    12,    13,    14,    11,
      64,   105,    79,    72,   110,   115,    60,   130,    44,    61,
      12,    13,    14,   141,    64,   135,    51,    52,    53,    76,
      55,   143,    50,    51,    52,    53,    54,    55,    56,    57,
       7,    45,     0,    15,    30,     0,    57,    12,    13,    14,
      11,    58,    59,     0,     0,     0,     0,    60,     0,     0,
      61,    12,    13,    14,    60,    64,   147,    61,    11,    62,
      80,    63,    64,    51,    52,    53,    54,    55,    56,    12,
      13,    14,     0,     0,    26,    11,    57,    12,    13,    14,
       0,    58,    59,     0,     0,     0,    12,    13,    14,     0,
       0,     0,    29,     0,    60,     0,     0,    61,     0,    62,
      83,    63,    64,    51,    52,    53,    54,    55,    56,    39,
       0,     0,     0,     0,     0,     0,    57,    12,    13,    14,
       0,    58,    59,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    60,     0,     0,    61,     0,    62,
     103,    63,    64,    51,    52,    53,    54,    55,    56,     0,
       0,     0,     0,     0,     0,     0,    57,    12,    13,    14,
       0,    58,    59,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,     0,    60,     0,     0,    61,     0,    62,
     113,    63,    64,    51,    52,    53,    54,    55,    56,     0,
       0,     0,     0,     0,     0,     0,    57,    12,    13,    14,
       0,    58,    59,    90,    91,    92,    93,    94,    95,    96,
      97,     0,     0,     0,    60,     0,     0,    61,     0,    62,
     131,    63,    64,    51,    52,    53,    54,    55,    56,     0,
       0,     0,     0,     0,     0,     0,    57,    12,    13,    14,
       0,    58,    59,    51,    52,    53,    76,    55,     0,     0,
       0,     0,     0,     0,    60,     0,    57,    61,     0,    62,
       0,    63,    64,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    60,     0,     0,    61,     0,     0,
       0,     0,    64,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   140,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   145,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,     0,
       0,     0,     0,     0,     0,   114,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,     0,     0,
       0,     0,     0,     0,   134,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,     0,     0,     0,
       0,     0,     0,   138,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,     0,     0,     0,     0,
      98,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,     0,     0,     0,     0,   111,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
       0,     0,     0,     0,   139,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97
};

static const yytype_int16 yycheck[] =
{
      48,    33,    65,   109,    20,    16,     6,    20,     6,    24,
      43,    23,    62,    45,    62,    48,    58,    65,    81,    30,
      20,    71,    64,    71,    39,     0,    42,    69,     6,    42,
      72,    73,    39,    81,    43,   141,    20,    79,    43,    48,
      20,   104,    42,    48,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,   104,     6,   100,   101,
      33,    34,    35,    36,     9,    20,     6,   109,   110,    41,
       6,    16,    35,    36,    19,   138,    21,    17,    18,    19,
     143,    17,    18,    19,    41,    30,    44,    45,    33,    47,
     138,   133,    37,    41,    45,   143,    47,     6,    42,   141,
      45,     3,     4,     5,     6,     7,    20,    43,    17,    18,
      19,     6,    57,    39,    16,     3,     4,     5,     6,     7,
       6,    41,    17,    18,    19,     6,    41,    40,    16,    39,
      42,    39,    34,     6,    43,    37,    17,    18,    19,     6,
      42,    43,    42,    42,    45,    41,    34,     6,    43,    37,
      17,    18,    19,    42,    42,    43,     3,     4,     5,     6,
       7,     9,    43,     3,     4,     5,     6,     7,     8,    16,
       3,    37,    -1,    40,    19,    -1,    16,    17,    18,    19,
       6,    21,    22,    -1,    -1,    -1,    -1,    34,    -1,    -1,
      37,    17,    18,    19,    34,    42,    43,    37,     6,    39,
      40,    41,    42,     3,     4,     5,     6,     7,     8,    17,
      18,    19,    -1,    -1,    40,     6,    16,    17,    18,    19,
      -1,    21,    22,    -1,    -1,    -1,    17,    18,    19,    -1,
      -1,    -1,    40,    -1,    34,    -1,    -1,    37,    -1,    39,
      40,    41,    42,     3,     4,     5,     6,     7,     8,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    16,    17,    18,    19,
      -1,    21,    22,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    34,    -1,    -1,    37,    -1,    39,
      40,    41,    42,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    16,    17,    18,    19,
      -1,    21,    22,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    34,    -1,    -1,    37,    -1,    39,
      40,    41,    42,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    16,    17,    18,    19,
      -1,    21,    22,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    34,    -1,    -1,    37,    -1,    39,
      40,    41,    42,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    16,    17,    18,    19,
      -1,    21,    22,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    -1,    16,    37,    -1,    39,
      -1,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    -1,    -1,    37,    -1,    -1,
      -1,    -1,    42,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      41,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    41,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    41,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    23,    50,    51,    52,     6,     0,    52,    24,    39,
       6,     6,    17,    18,    19,    40,    53,    54,    59,    39,
      20,    42,    20,    20,    20,    41,    40,    54,     6,    40,
      53,     6,    43,    56,    58,    59,    41,    42,    41,    40,
      39,    43,    58,     6,    43,    56,    41,    40,    39,    41,
      43,     3,     4,     5,     6,     7,     8,    16,    21,    22,
      34,    37,    39,    41,    42,    55,    57,    59,    60,    61,
      62,    39,    42,    42,     6,    59,     6,    60,    62,    42,
      40,    55,    60,    40,    57,     6,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    41,    60,
      44,    45,    47,    40,    55,    43,    60,    63,    60,    42,
      45,    41,    60,    40,    43,    41,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
       6,    40,    43,    48,    43,    43,    63,    60,    43,    41,
      46,    42,    60,     9,    43,    46,    57,    43,    63,    57,
      43
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    49,    50,    51,    51,    52,    52,    52,    52,    53,
      53,    54,    54,    54,    54,    54,    54,    55,    55,    56,
      56,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    58,    59,    59,    59,    59,    59,    59,    59,    59,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    61,    61,    62,    62,    62,    62,    62,    62,    62,
      62,    63,    63
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     6,     5,     8,     7,     1,
       2,     2,     5,     7,     8,     5,     7,     1,     2,     1,
       2,     2,     3,     4,     3,     2,     5,     4,     6,     3,
       1,     2,     1,     1,     1,     1,     2,     2,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     1,     1,     1,     3,     1,     4,     5,
       5,     1,     1,     1,     3,     4,     4,     3,     5,     6,
       1,     1,     3
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
      yyerror (parser, YY_("syntax error: cannot back up")); \
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
                  Type, Value, parser); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, Parser* parser)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (parser);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, Parser* parser)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, parser);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule, Parser* parser)
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
                                              , parser);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, parser); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, Parser* parser)
{
  YYUSE (yyvaluep);
  YYUSE (parser);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (Parser* parser)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs;

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
      yychar = yylex (&yylval);
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
#line 56 "grammar.y" /* yacc.c:1646  */
    { parser->success(); }
#line 1436 "grammar.c" /* yacc.c:1646  */
    break;

  case 3:
#line 59 "grammar.y" /* yacc.c:1646  */
    {}
#line 1442 "grammar.c" /* yacc.c:1646  */
    break;

  case 4:
#line 60 "grammar.y" /* yacc.c:1646  */
    {}
#line 1448 "grammar.c" /* yacc.c:1646  */
    break;

  case 5:
#line 63 "grammar.y" /* yacc.c:1646  */
    {}
#line 1454 "grammar.c" /* yacc.c:1646  */
    break;

  case 6:
#line 64 "grammar.y" /* yacc.c:1646  */
    {}
#line 1460 "grammar.c" /* yacc.c:1646  */
    break;

  case 7:
#line 65 "grammar.y" /* yacc.c:1646  */
    {}
#line 1466 "grammar.c" /* yacc.c:1646  */
    break;

  case 8:
#line 66 "grammar.y" /* yacc.c:1646  */
    {}
#line 1472 "grammar.c" /* yacc.c:1646  */
    break;

  case 9:
#line 69 "grammar.y" /* yacc.c:1646  */
    {}
#line 1478 "grammar.c" /* yacc.c:1646  */
    break;

  case 10:
#line 70 "grammar.y" /* yacc.c:1646  */
    {}
#line 1484 "grammar.c" /* yacc.c:1646  */
    break;

  case 11:
#line 73 "grammar.y" /* yacc.c:1646  */
    {}
#line 1490 "grammar.c" /* yacc.c:1646  */
    break;

  case 12:
#line 74 "grammar.y" /* yacc.c:1646  */
    {}
#line 1496 "grammar.c" /* yacc.c:1646  */
    break;

  case 13:
#line 75 "grammar.y" /* yacc.c:1646  */
    {}
#line 1502 "grammar.c" /* yacc.c:1646  */
    break;

  case 14:
#line 76 "grammar.y" /* yacc.c:1646  */
    {}
#line 1508 "grammar.c" /* yacc.c:1646  */
    break;

  case 15:
#line 77 "grammar.y" /* yacc.c:1646  */
    {}
#line 1514 "grammar.c" /* yacc.c:1646  */
    break;

  case 16:
#line 78 "grammar.y" /* yacc.c:1646  */
    {}
#line 1520 "grammar.c" /* yacc.c:1646  */
    break;

  case 17:
#line 81 "grammar.y" /* yacc.c:1646  */
    {}
#line 1526 "grammar.c" /* yacc.c:1646  */
    break;

  case 18:
#line 82 "grammar.y" /* yacc.c:1646  */
    {}
#line 1532 "grammar.c" /* yacc.c:1646  */
    break;

  case 19:
#line 85 "grammar.y" /* yacc.c:1646  */
    {}
#line 1538 "grammar.c" /* yacc.c:1646  */
    break;

  case 20:
#line 86 "grammar.y" /* yacc.c:1646  */
    {}
#line 1544 "grammar.c" /* yacc.c:1646  */
    break;

  case 21:
#line 94 "grammar.y" /* yacc.c:1646  */
    {}
#line 1550 "grammar.c" /* yacc.c:1646  */
    break;

  case 22:
#line 95 "grammar.y" /* yacc.c:1646  */
    {}
#line 1556 "grammar.c" /* yacc.c:1646  */
    break;

  case 23:
#line 96 "grammar.y" /* yacc.c:1646  */
    {}
#line 1562 "grammar.c" /* yacc.c:1646  */
    break;

  case 24:
#line 97 "grammar.y" /* yacc.c:1646  */
    {}
#line 1568 "grammar.c" /* yacc.c:1646  */
    break;

  case 25:
#line 98 "grammar.y" /* yacc.c:1646  */
    {}
#line 1574 "grammar.c" /* yacc.c:1646  */
    break;

  case 26:
#line 99 "grammar.y" /* yacc.c:1646  */
    {}
#line 1580 "grammar.c" /* yacc.c:1646  */
    break;

  case 27:
#line 100 "grammar.y" /* yacc.c:1646  */
    {}
#line 1586 "grammar.c" /* yacc.c:1646  */
    break;

  case 28:
#line 101 "grammar.y" /* yacc.c:1646  */
    {}
#line 1592 "grammar.c" /* yacc.c:1646  */
    break;

  case 29:
#line 102 "grammar.y" /* yacc.c:1646  */
    {}
#line 1598 "grammar.c" /* yacc.c:1646  */
    break;

  case 30:
#line 103 "grammar.y" /* yacc.c:1646  */
    {}
#line 1604 "grammar.c" /* yacc.c:1646  */
    break;

  case 31:
#line 106 "grammar.y" /* yacc.c:1646  */
    {}
#line 1610 "grammar.c" /* yacc.c:1646  */
    break;

  case 32:
#line 109 "grammar.y" /* yacc.c:1646  */
    {}
#line 1616 "grammar.c" /* yacc.c:1646  */
    break;

  case 33:
#line 110 "grammar.y" /* yacc.c:1646  */
    {}
#line 1622 "grammar.c" /* yacc.c:1646  */
    break;

  case 34:
#line 111 "grammar.y" /* yacc.c:1646  */
    {}
#line 1628 "grammar.c" /* yacc.c:1646  */
    break;

  case 35:
#line 112 "grammar.y" /* yacc.c:1646  */
    {}
#line 1634 "grammar.c" /* yacc.c:1646  */
    break;

  case 36:
#line 113 "grammar.y" /* yacc.c:1646  */
    {}
#line 1640 "grammar.c" /* yacc.c:1646  */
    break;

  case 37:
#line 114 "grammar.y" /* yacc.c:1646  */
    {}
#line 1646 "grammar.c" /* yacc.c:1646  */
    break;

  case 38:
#line 115 "grammar.y" /* yacc.c:1646  */
    {}
#line 1652 "grammar.c" /* yacc.c:1646  */
    break;

  case 39:
#line 116 "grammar.y" /* yacc.c:1646  */
    {}
#line 1658 "grammar.c" /* yacc.c:1646  */
    break;

  case 40:
#line 119 "grammar.y" /* yacc.c:1646  */
    {}
#line 1664 "grammar.c" /* yacc.c:1646  */
    break;

  case 41:
#line 120 "grammar.y" /* yacc.c:1646  */
    {}
#line 1670 "grammar.c" /* yacc.c:1646  */
    break;

  case 42:
#line 121 "grammar.y" /* yacc.c:1646  */
    {}
#line 1676 "grammar.c" /* yacc.c:1646  */
    break;

  case 43:
#line 122 "grammar.y" /* yacc.c:1646  */
    {}
#line 1682 "grammar.c" /* yacc.c:1646  */
    break;

  case 44:
#line 123 "grammar.y" /* yacc.c:1646  */
    {}
#line 1688 "grammar.c" /* yacc.c:1646  */
    break;

  case 45:
#line 124 "grammar.y" /* yacc.c:1646  */
    {}
#line 1694 "grammar.c" /* yacc.c:1646  */
    break;

  case 46:
#line 125 "grammar.y" /* yacc.c:1646  */
    {}
#line 1700 "grammar.c" /* yacc.c:1646  */
    break;

  case 47:
#line 126 "grammar.y" /* yacc.c:1646  */
    {}
#line 1706 "grammar.c" /* yacc.c:1646  */
    break;

  case 48:
#line 127 "grammar.y" /* yacc.c:1646  */
    {}
#line 1712 "grammar.c" /* yacc.c:1646  */
    break;

  case 49:
#line 128 "grammar.y" /* yacc.c:1646  */
    {}
#line 1718 "grammar.c" /* yacc.c:1646  */
    break;

  case 50:
#line 129 "grammar.y" /* yacc.c:1646  */
    {}
#line 1724 "grammar.c" /* yacc.c:1646  */
    break;

  case 51:
#line 130 "grammar.y" /* yacc.c:1646  */
    {}
#line 1730 "grammar.c" /* yacc.c:1646  */
    break;

  case 52:
#line 131 "grammar.y" /* yacc.c:1646  */
    {}
#line 1736 "grammar.c" /* yacc.c:1646  */
    break;

  case 53:
#line 132 "grammar.y" /* yacc.c:1646  */
    {}
#line 1742 "grammar.c" /* yacc.c:1646  */
    break;

  case 54:
#line 133 "grammar.y" /* yacc.c:1646  */
    {}
#line 1748 "grammar.c" /* yacc.c:1646  */
    break;

  case 55:
#line 134 "grammar.y" /* yacc.c:1646  */
    {}
#line 1754 "grammar.c" /* yacc.c:1646  */
    break;

  case 56:
#line 135 "grammar.y" /* yacc.c:1646  */
    {}
#line 1760 "grammar.c" /* yacc.c:1646  */
    break;

  case 57:
#line 136 "grammar.y" /* yacc.c:1646  */
    {}
#line 1766 "grammar.c" /* yacc.c:1646  */
    break;

  case 58:
#line 137 "grammar.y" /* yacc.c:1646  */
    {}
#line 1772 "grammar.c" /* yacc.c:1646  */
    break;

  case 59:
#line 138 "grammar.y" /* yacc.c:1646  */
    {}
#line 1778 "grammar.c" /* yacc.c:1646  */
    break;

  case 60:
#line 139 "grammar.y" /* yacc.c:1646  */
    {}
#line 1784 "grammar.c" /* yacc.c:1646  */
    break;

  case 61:
#line 142 "grammar.y" /* yacc.c:1646  */
    {}
#line 1790 "grammar.c" /* yacc.c:1646  */
    break;

  case 62:
#line 143 "grammar.y" /* yacc.c:1646  */
    {}
#line 1796 "grammar.c" /* yacc.c:1646  */
    break;

  case 63:
#line 147 "grammar.y" /* yacc.c:1646  */
    {}
#line 1802 "grammar.c" /* yacc.c:1646  */
    break;

  case 64:
#line 148 "grammar.y" /* yacc.c:1646  */
    {}
#line 1808 "grammar.c" /* yacc.c:1646  */
    break;

  case 65:
#line 149 "grammar.y" /* yacc.c:1646  */
    {}
#line 1814 "grammar.c" /* yacc.c:1646  */
    break;

  case 66:
#line 150 "grammar.y" /* yacc.c:1646  */
    {}
#line 1820 "grammar.c" /* yacc.c:1646  */
    break;

  case 67:
#line 151 "grammar.y" /* yacc.c:1646  */
    {}
#line 1826 "grammar.c" /* yacc.c:1646  */
    break;

  case 68:
#line 152 "grammar.y" /* yacc.c:1646  */
    {}
#line 1832 "grammar.c" /* yacc.c:1646  */
    break;

  case 69:
#line 153 "grammar.y" /* yacc.c:1646  */
    {}
#line 1838 "grammar.c" /* yacc.c:1646  */
    break;

  case 70:
#line 154 "grammar.y" /* yacc.c:1646  */
    {}
#line 1844 "grammar.c" /* yacc.c:1646  */
    break;

  case 71:
#line 157 "grammar.y" /* yacc.c:1646  */
    {}
#line 1850 "grammar.c" /* yacc.c:1646  */
    break;


#line 1854 "grammar.c" /* yacc.c:1646  */
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
      yyerror (parser, YY_("syntax error"));
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
        yyerror (parser, yymsgp);
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
                      yytoken, &yylval, parser);
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
                  yystos[yystate], yyvsp, parser);
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
  yyerror (parser, YY_("memory exhausted"));
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
                  yytoken, &yylval, parser);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, parser);
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
#line 161 "grammar.y" /* yacc.c:1906  */

