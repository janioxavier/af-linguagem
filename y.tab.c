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
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "af.y" /* yacc.c:339  */

#include <stdio.h>
#include <string.h>
#include "pilha.h"
#include "tabelasimbolo.h"

int yyerror(char *s);
extern int yylineno;
extern char * yytext;
extern int line_number;


int yyerror(char *s);
extern int yylineno;
extern char * yytext;
extern int line_number;

node *pilha;


#line 87 "y.tab.c" /* yacc.c:339  */

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
    INT = 258,
    REAL = 259,
    STR = 260,
    ID = 261,
    TYPE = 262,
    PRINT = 263,
    INPUT = 264,
    COMMA = 265,
    COLON = 266,
    SEMICOLON = 267,
    LPAREN = 268,
    RPAREN = 269,
    LBRACE = 270,
    RBRACE = 271,
    LBRACK = 272,
    RBRACK = 273,
    DOT = 274,
    ASSIGN = 275,
    ELIF = 276,
    IF = 277,
    ELSE = 278,
    RETURN = 279,
    WHILE = 280,
    FOR = 281,
    SKIP = 282,
    IN = 283,
    NIL = 284,
    DEF = 285,
    TRUE = 286,
    FALSE = 287,
    BREAK = 288,
    SET = 289,
    LIST = 290,
    ADDPERC = 291,
    SUBPERC = 292,
    ADDEQ = 293,
    SUBEQ = 294,
    DIVEQ = 295,
    MULTEQ = 296,
    DIVMEQ = 297,
    DICT = 298,
    MAIN = 299,
    END = 300,
    ENDLINE = 301,
    CONTSTMT = 302,
    DIV = 303,
    PRINTLN = 304,
    DECINT = 305,
    DECREAL = 306,
    DECSTR = 307,
    PLUS = 308,
    MINUS = 309,
    AND = 310,
    OR = 311,
    NEQ = 312,
    EQ = 313,
    LT = 314,
    LE = 315,
    GT = 316,
    GE = 317,
    PERC = 318,
    DIVM = 319,
    TIMES = 320,
    DIVIDE = 321,
    NOT = 322
  };
#endif
/* Tokens.  */
#define INT 258
#define REAL 259
#define STR 260
#define ID 261
#define TYPE 262
#define PRINT 263
#define INPUT 264
#define COMMA 265
#define COLON 266
#define SEMICOLON 267
#define LPAREN 268
#define RPAREN 269
#define LBRACE 270
#define RBRACE 271
#define LBRACK 272
#define RBRACK 273
#define DOT 274
#define ASSIGN 275
#define ELIF 276
#define IF 277
#define ELSE 278
#define RETURN 279
#define WHILE 280
#define FOR 281
#define SKIP 282
#define IN 283
#define NIL 284
#define DEF 285
#define TRUE 286
#define FALSE 287
#define BREAK 288
#define SET 289
#define LIST 290
#define ADDPERC 291
#define SUBPERC 292
#define ADDEQ 293
#define SUBEQ 294
#define DIVEQ 295
#define MULTEQ 296
#define DIVMEQ 297
#define DICT 298
#define MAIN 299
#define END 300
#define ENDLINE 301
#define CONTSTMT 302
#define DIV 303
#define PRINTLN 304
#define DECINT 305
#define DECREAL 306
#define DECSTR 307
#define PLUS 308
#define MINUS 309
#define AND 310
#define OR 311
#define NEQ 312
#define EQ 313
#define LT 314
#define LE 315
#define GT 316
#define GE 317
#define PERC 318
#define DIVM 319
#define TIMES 320
#define DIVIDE 321
#define NOT 322

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 22 "af.y" /* yacc.c:355  */

    int iValor;
    double rValor;
    char * sValor;
    struct Variavel *v;

#line 268 "y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 283 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  42
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   267

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  63
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  146

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   322

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
       2,     2,     2,     2,     2,    68,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    53,    53,    56,    57,    61,    62,    63,    64,    65,
      72,    73,    77,    97,    98,   109,   110,   111,   115,   149,
     150,   153,   154,   157,   160,   161,   164,   165,   166,   167,
     168,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   189,   192,   193,   195,
     197,   200,   201,   204,   205,   208,   212,   213,   214,   217,
     218,   221,   224,   227
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "REAL", "STR", "ID", "TYPE",
  "PRINT", "INPUT", "COMMA", "COLON", "SEMICOLON", "LPAREN", "RPAREN",
  "LBRACE", "RBRACE", "LBRACK", "RBRACK", "DOT", "ASSIGN", "ELIF", "IF",
  "ELSE", "RETURN", "WHILE", "FOR", "SKIP", "IN", "NIL", "DEF", "TRUE",
  "FALSE", "BREAK", "SET", "LIST", "ADDPERC", "SUBPERC", "ADDEQ", "SUBEQ",
  "DIVEQ", "MULTEQ", "DIVMEQ", "DICT", "MAIN", "END", "ENDLINE",
  "CONTSTMT", "DIV", "PRINTLN", "DECINT", "DECREAL", "DECSTR", "PLUS",
  "MINUS", "AND", "OR", "NEQ", "EQ", "LT", "LE", "GT", "GE", "PERC",
  "DIVM", "TIMES", "DIVIDE", "NOT", "'-'", "$accept", "prog", "stmt_list",
  "stmt", "end_stmt", "decl_var", "decl_data_type", "var", "definition",
  "decl_field_type", "type_def", "param_func", "func_def", "expr",
  "f_builtin", "f_print", "f_input", "estr_cond", "cond_elif", "cond_else",
  "estr_while", "estr_for", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,    45
};
# endif

#define YYPACT_NINF -19

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-19)))

#define YYTABLE_NINF -27

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     215,   -18,    14,    12,    15,    12,    12,    22,    18,    12,
     -19,   -19,   -19,    13,   -19,    -3,    -6,    28,    -6,   -19,
     -19,    -6,   -19,   -19,    -6,    -6,    -6,    12,    30,   -19,
     -19,   -19,   -19,    12,    12,   154,   -19,    31,    83,    34,
      32,   154,   -19,   -19,   -19,   -19,    33,   -19,   -19,   -19,
     -19,   -19,   140,     6,   111,    37,    12,    12,    12,    12,
      12,    12,    12,    12,    12,    12,    12,    12,    12,    12,
      29,   215,    72,   -13,    12,   -19,    22,   -19,    37,   -11,
     -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,
      37,    37,   215,    36,   -19,    54,    87,    89,    86,   154,
      56,    59,     5,   -19,    72,    60,    22,    94,    22,   -19,
      12,    99,   -19,   -19,   -19,   103,   215,   -19,    73,   -19,
      97,    74,   215,   -14,   215,    75,   215,    77,   112,   -19,
     -12,   215,    78,   -19,    80,   118,   -19,     9,   -19,    82,
      84,   -19,   -19,   -19,    88,   -19
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      26,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      15,    16,    17,     0,     2,     3,     0,     0,     0,    19,
      20,     0,    51,    52,     0,     0,     0,     0,     0,    49,
      48,    50,    47,     0,     0,    53,    55,     0,     0,     0,
       0,    54,     1,     4,    12,     6,    13,     5,     8,     7,
      10,    11,     0,     0,     0,    46,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    26,     0,     0,     0,     9,     0,    31,    36,    32,
      33,    42,    43,    45,    41,    37,    38,    40,    39,    44,
      34,    35,    26,     0,    18,     0,     0,    24,     0,    14,
       0,     0,     0,    62,     0,     0,     0,     0,    21,    23,
       0,     0,    56,    58,    57,     0,    26,    25,     0,    22,
       0,     0,    26,     0,    26,     0,    26,     0,     0,    27,
       0,    26,     0,    63,     0,     0,    30,     0,    61,     0,
       0,    59,    60,    28,     0,    29
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -19,   -19,   -15,   -19,   207,     7,   -19,    24,   -19,    21,
     -19,    26,   -19,     2,   -19,   -19,   -19,   -19,    -2,    41,
     -19,   -19
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    13,    14,    15,    45,    16,    17,    95,    18,   101,
      19,    98,    20,    35,    21,    22,    23,    24,   113,   114,
      25,    26
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      43,    96,    27,     1,     2,     3,     4,    37,    38,    56,
     128,    41,   135,    42,    39,    29,    30,    31,    32,     5,
      28,    36,     6,     7,    40,    33,   110,     8,   111,    52,
     110,   129,   111,   136,    46,    54,    55,    10,    11,    12,
      44,    53,    70,   -26,    72,    73,     9,    10,    11,    12,
     112,    56,    76,    74,    68,    69,    93,    56,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    10,    11,    12,    92,    99,   102,    94,    34,
      97,   103,   104,   100,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    71,    67,    68,    69,   105,   106,
     107,   123,   108,    56,   109,   118,   116,   127,   125,   130,
     121,   132,   120,    97,   122,   100,   137,    56,   134,   124,
     126,   131,   133,   138,   140,    77,   139,   143,   115,   119,
     144,    56,   117,   145,     0,   141,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,     0,    67,    68,    69,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      56,    67,    68,    69,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    56,    67,    68,    69,   142,     0,
       0,     0,     0,     0,     0,     0,    44,     0,     0,     0,
       0,     0,     0,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,     0,    67,    68,    69,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,     0,    67,    68,
      69,     1,     2,     3,     4,    47,     0,     0,    48,     0,
       0,    49,    50,    51,     0,     0,     0,     5,     0,     0,
       6,     7,     0,     0,     0,     8,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    75,
       0,     0,     0,     0,     9,    10,    11,    12
};

static const yytype_int16 yycheck[] =
{
      15,    14,    20,     6,     7,     8,     9,     5,     6,    20,
      24,     9,    24,     0,     7,     3,     4,     5,     6,    22,
       6,     6,    25,    26,     6,    13,    21,    30,    23,    27,
      21,    45,    23,    45,     6,    33,    34,    50,    51,    52,
      46,    11,    11,    46,    10,    13,    49,    50,    51,    52,
      45,    20,    46,    20,    65,    66,    71,    20,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    50,    51,    52,    46,    74,    92,     6,    67,
      73,    45,    28,    76,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    11,    64,    65,    66,    11,    10,
      14,   116,    46,    20,    45,    11,    46,   122,    11,   124,
      11,   126,   110,   106,    11,   108,   131,    20,     6,    46,
      46,    46,    45,    45,     6,    14,    46,    45,   104,   108,
      46,    20,   106,    45,    -1,   137,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    -1,    64,    65,    66,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      20,    64,    65,    66,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    20,    64,    65,    66,   137,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    -1,    64,    65,    66,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    -1,    64,    65,
      66,     6,     7,     8,     9,    18,    -1,    -1,    21,    -1,
      -1,    24,    25,    26,    -1,    -1,    -1,    22,    -1,    -1,
      25,    26,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    49,    50,    51,    52
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,     7,     8,     9,    22,    25,    26,    30,    49,
      50,    51,    52,    70,    71,    72,    74,    75,    77,    79,
      81,    83,    84,    85,    86,    89,    90,    20,     6,     3,
       4,     5,     6,    13,    67,    82,     6,    82,    82,    74,
       6,    82,     0,    71,    46,    73,     6,    73,    73,    73,
      73,    73,    82,    11,    82,    82,    20,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    64,    65,    66,
      11,    11,    10,    13,    20,    73,    46,    14,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    46,    71,     6,    76,    14,    74,    80,    82,
      74,    78,    71,    45,    28,    11,    10,    14,    46,    45,
      21,    23,    45,    87,    88,    76,    46,    80,    11,    78,
      82,    11,    11,    71,    46,    11,    46,    71,    24,    45,
      71,    46,    71,    45,     6,    24,    45,    71,    45,    46,
       6,    87,    88,    45,    46,    45
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    69,    70,    71,    71,    72,    72,    72,    72,    72,
      72,    72,    73,    74,    74,    75,    75,    75,    76,    77,
      77,    78,    78,    79,    80,    80,    81,    81,    81,    81,
      81,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      82,    83,    83,    84,    84,    85,    86,    86,    86,    87,
      87,    88,    89,    90
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     2,     2,     2,     2,     4,
       2,     2,     1,     2,     4,     1,     1,     1,     1,     1,
       1,     2,     3,     6,     1,     3,     0,     8,    11,    12,
       9,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     6,     6,     6,     6,
       6,     5,     5,     9
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
#line 53 "af.y" /* yacc.c:1646  */
    {}
#line 1488 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 56 "af.y" /* yacc.c:1646  */
    {}
#line 1494 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 57 "af.y" /* yacc.c:1646  */
    {}
#line 1500 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 61 "af.y" /* yacc.c:1646  */
    {}
#line 1506 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 62 "af.y" /* yacc.c:1646  */
    {}
#line 1512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 63 "af.y" /* yacc.c:1646  */
    {}
#line 1518 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 64 "af.y" /* yacc.c:1646  */
    {}
#line 1524 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 65 "af.y" /* yacc.c:1646  */
    { if (!isDeclarado((yyvsp[-3].sValor))) erroSemantica(NAO_DECLARADO_EM_NENHUM_ESCOPO, (yyvsp[-3].sValor));
                                          else {
                                            Variavel *v = encontra_variavel((yyvsp[-3].sValor));
                                            operar(novaVariavel(), v, ASSIGN, (yyvsp[-1].v));
                                          }
                                        }
#line 1535 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 72 "af.y" /* yacc.c:1646  */
    {}
#line 1541 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 73 "af.y" /* yacc.c:1646  */
    {}
#line 1547 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 77 "af.y" /* yacc.c:1646  */
    {}
#line 1553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 97 "af.y" /* yacc.c:1646  */
    {if (!addId((yyvsp[0].sValor), (yyvsp[-1].iValor), topo_pilha(pilha))) erroSemantica(JA_DECLARADO, (yyvsp[0].sValor));}
#line 1559 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 98 "af.y" /* yacc.c:1646  */
    { 
                                            int r = addIdValor((yyvsp[-2].sValor), (yyvsp[-3].iValor), (yyvsp[0].v), topo_pilha(pilha));
                                                if (r == 0) erroSemantica(JA_DECLARADO, (yyvsp[-2].sValor));
                                                else if (r == -1) {
                                                    char err[200];
                                                    sprintf(err, "Nao é possivel conveter tipo %s com o tipo %s.\n", nomeTipo((yyvsp[-3].iValor)), nomeTipo((yyvsp[0].v)->tipo));
                                                    erroSemantica(TIPO_DECLARADO_DIFERENTE, err);
                                                }
                                            }
#line 1573 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 109 "af.y" /* yacc.c:1646  */
    {(yyval.iValor) = tipoInteiro;}
#line 1579 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 110 "af.y" /* yacc.c:1646  */
    {(yyval.iValor) = tipoReal;}
#line 1585 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 111 "af.y" /* yacc.c:1646  */
    {(yyval.iValor) = tipoString;}
#line 1591 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 115 "af.y" /* yacc.c:1646  */
    {(yyval.sValor) = (yyvsp[0].sValor);}
#line 1597 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 149 "af.y" /* yacc.c:1646  */
    {}
#line 1603 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 150 "af.y" /* yacc.c:1646  */
    {}
#line 1609 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 157 "af.y" /* yacc.c:1646  */
    {printf("definiu tipo\n");}
#line 1615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 165 "af.y" /* yacc.c:1646  */
    {printf("função sem retorno e sem parametro\n");}
#line 1621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 166 "af.y" /* yacc.c:1646  */
    {printf("função com retorno e sem parametro\n");}
#line 1627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 167 "af.y" /* yacc.c:1646  */
    {printf("função com retorno e com parametro\n");}
#line 1633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 168 "af.y" /* yacc.c:1646  */
    {printf("função sem retorno e com parametro\n");}
#line 1639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 172 "af.y" /* yacc.c:1646  */
    {(yyval.v) = (yyvsp[-1].v);}
#line 1645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 173 "af.y" /* yacc.c:1646  */
    {operar((yyval.v), (yyvsp[-2].v), PLUS, (yyvsp[0].v));}
#line 1651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 174 "af.y" /* yacc.c:1646  */
    {operar((yyval.v), (yyvsp[-2].v), MINUS, (yyvsp[0].v));}
#line 1657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 175 "af.y" /* yacc.c:1646  */
    {operar((yyval.v), (yyvsp[-2].v), TIMES, (yyvsp[0].v));}
#line 1663 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 176 "af.y" /* yacc.c:1646  */
    {operar((yyval.v), (yyvsp[-2].v), DIVIDE, (yyvsp[0].v));}
#line 1669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 177 "af.y" /* yacc.c:1646  */
    {operar((yyval.v), (yyvsp[-2].v), ASSIGN, (yyvsp[0].v));}
#line 1675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 178 "af.y" /* yacc.c:1646  */
    {operar((yyval.v), (yyvsp[-2].v), LT, (yyvsp[0].v));}
#line 1681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 179 "af.y" /* yacc.c:1646  */
    {operar((yyval.v), (yyvsp[-2].v), LE, (yyvsp[0].v));}
#line 1687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 180 "af.y" /* yacc.c:1646  */
    {operar((yyval.v), (yyvsp[-2].v), GE, (yyvsp[0].v));}
#line 1693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 181 "af.y" /* yacc.c:1646  */
    {operar((yyval.v), (yyvsp[-2].v), GT, (yyvsp[0].v));}
#line 1699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 182 "af.y" /* yacc.c:1646  */
    {operar((yyval.v), (yyvsp[-2].v), EQ, (yyvsp[0].v));}
#line 1705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 183 "af.y" /* yacc.c:1646  */
    {operar((yyval.v), (yyvsp[-2].v), AND, (yyvsp[0].v));}
#line 1711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 184 "af.y" /* yacc.c:1646  */
    {operar((yyval.v), (yyvsp[-2].v), OR, (yyvsp[0].v));}
#line 1717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 185 "af.y" /* yacc.c:1646  */
    {operar((yyval.v), (yyvsp[-2].v), DIVM, (yyvsp[0].v));}
#line 1723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 186 "af.y" /* yacc.c:1646  */
    {operar((yyval.v), (yyvsp[-2].v), NEQ, (yyvsp[0].v));}
#line 1729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 189 "af.y" /* yacc.c:1646  */
    {opera_unario((yyval.v), NOT, (yyvsp[0].v));}
#line 1735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 192 "af.y" /* yacc.c:1646  */
    {(yyval.v) = copiarVariavel(encontra_variavel((yyvsp[0].sValor))); if ((yyval.v) == NULL) erroSemantica(NAO_DECLARADO_EM_NENHUM_ESCOPO, (yyvsp[0].sValor));}
#line 1741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 193 "af.y" /* yacc.c:1646  */
    { Variavel *v = (Variavel*) malloc(sizeof(Variavel));
                                v->tipo = tipoReal; ValorVariavel vv; vv.r = (yyvsp[0].rValor); v->valor = vv; (yyval.v) = v;}
#line 1748 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 195 "af.y" /* yacc.c:1646  */
    { Variavel *v = (Variavel*) malloc(sizeof(Variavel));
                                v->tipo = tipoInteiro;  ValorVariavel vv; vv.i = (yyvsp[0].iValor); v->valor = vv; (yyval.v) = v;}
#line 1755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 197 "af.y" /* yacc.c:1646  */
    { Variavel *v = (Variavel*) malloc(sizeof(Variavel)); v->tipo = tipoString;  ValorVariavel vv; vv.s = strdup((yyvsp[0].sValor)); v->valor = vv; (yyval.v) = v;}
#line 1761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 200 "af.y" /* yacc.c:1646  */
    {}
#line 1767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 201 "af.y" /* yacc.c:1646  */
    {}
#line 1773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 204 "af.y" /* yacc.c:1646  */
    {printValorVariavel(*(yyvsp[0].v));}
#line 1779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 205 "af.y" /* yacc.c:1646  */
    {printlnValorVariavel(*(yyvsp[0].v));}
#line 1785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 208 "af.y" /* yacc.c:1646  */
    {}
#line 1791 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 212 "af.y" /* yacc.c:1646  */
    {printf("if\n");}
#line 1797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 213 "af.y" /* yacc.c:1646  */
    {printf("if..else \n");}
#line 1803 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 214 "af.y" /* yacc.c:1646  */
    {printf("if..elif..else \n");}
#line 1809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 221 "af.y" /* yacc.c:1646  */
    {}
#line 1815 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 224 "af.y" /* yacc.c:1646  */
    {printf("while \n");}
#line 1821 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 227 "af.y" /* yacc.c:1646  */
    {printf("for \n");}
#line 1827 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1831 "y.tab.c" /* yacc.c:1646  */
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
#line 229 "af.y" /* yacc.c:1906  */


void operar(Variavel *res, Variavel *v1, int op, Variavel *v2) {
    switch(op) {
     case PLUS:
        if (v1->tipo == tipoInteiro && v2->tipo == tipoInteiro) {
            res->valor.i = v1->valor.i + v2->valor.i;
            res->tipo = tipoInteiro;
        } else if (v1->tipo == tipoReal && v2->tipo == tipoInteiro) {
            res->valor.r = v1->valor.r + v2->valor.i;
            res->tipo = tipoReal;
        } else if (v1->tipo == tipoInteiro && v2->tipo == tipoReal) {
            res->valor.r = v1->valor.i + v2->valor.r;
            res->tipo = tipoReal;
        } else if (v1->tipo == tipoReal && v2->tipo == tipoReal) {
            res->valor.r = v1->valor.r + v2->valor.r;
            res->tipo = tipoReal;
        } else if (v1->tipo == tipoString && v2->tipo == tipoString){
            //char *novastr = strdup(v1->valor.s);
            int size;
            size = strlen(v1->valor.s)-1;
            v1->valor.s[size] = '\0';
            res->valor.s = strcat(v1->valor.s, v2->valor.s);
            int size2 = strlen(res->valor.s);
            while(size < size2) {
                res->valor.s[size] = res->valor.s[size+1];
                size+=1;
            }
        } else {
            //erroSemantica();
        }
        break;
     case MINUS:
        if (v1->tipo == tipoInteiro && v2->tipo == tipoInteiro) {
            res->valor.i = v1->valor.i - v2->valor.i;
            res->tipo = tipoInteiro;
        } else if (v1->tipo == tipoReal && v2->tipo == tipoInteiro) {
            res->valor.r = v1->valor.r - v2->valor.i;
            res->tipo = tipoReal;
        } else if (v1->tipo == tipoInteiro && v2->tipo == tipoReal) {
            res->valor.r = v1->valor.i - v2->valor.r;
            res->tipo = tipoReal;
        } else if (v1->tipo == tipoReal && v2->tipo == tipoReal) {
            res->valor.r = v1->valor.r - v2->valor.r;
            res->tipo = tipoReal;
        } 
        else {
            //erroSemantica();
        }
        break;
     case TIMES:
        if (v1->tipo == tipoInteiro && v2->tipo == tipoInteiro) {
            res->valor.i = v1->valor.i * v2->valor.i;
            res->tipo = tipoInteiro;
        } else if (v1->tipo == tipoReal && v2->tipo == tipoInteiro) {
            res->valor.r = v1->valor.r * v2->valor.i;
            res->tipo = tipoReal;
        } else if (v1->tipo == tipoInteiro && v2->tipo == tipoReal) {
            res->valor.r = v1->valor.i * v2->valor.r;
            res->tipo = tipoReal;
        } else if (v1->tipo == tipoReal && v2->tipo == tipoReal) {
            res->valor.r = v1->valor.r * v2->valor.r;
            res->tipo = tipoReal;
        } else {
            //erroSemantica();
        }
        break;
    case DIVIDE:
        if (v1->tipo == tipoInteiro && v2->tipo == tipoInteiro) {
            res->valor.i = v1->valor.i / v2->valor.i;
            res->tipo = tipoInteiro;
        } else if (v1->tipo == tipoReal && v2->tipo == tipoInteiro) {
            res->valor.r = v1->valor.r / v2->valor.i;
            res->tipo = tipoReal;
        } else if (v1->tipo == tipoInteiro && v2->tipo == tipoReal) {
            res->valor.r = v1->valor.i / v2->valor.r;
            res->tipo = tipoReal;
        } else if (v1->tipo == tipoReal && v2->tipo == tipoReal) {
            res->valor.r = v1->valor.r / v2->valor.r;
            res->tipo = tipoReal;
        } else {
            //erroSemantica();
        }
        break;
    case DIVM:
        if (v1->tipo == tipoInteiro && v2->tipo == tipoInteiro) {
            res->valor.i = v1->valor.i % v2->valor.i;
            res->tipo = tipoInteiro;
        } else {
            //erroSemantica();
        }
        break;
    case ASSIGN:
            v1 = encontra_variavel(v1->nome);
            if (v1->tipo == tipoInteiro && v2->tipo == tipoInteiro) {
                v1->valor.i = v2->valor.i;
                v1->tipo = tipoInteiro;
                res->valor.i = v2->valor.i;
                res->tipo = tipoInteiro;
                //*res = *v1;
            } else if(v1->tipo == tipoInteiro && v2->tipo == tipoReal) {
                v1->valor.i = v2->valor.r;
                v1->tipo = tipoInteiro;
                res->valor.i = v2->valor.i;
                res->tipo = tipoInteiro;
            } else if (v1->tipo == tipoReal && v2->tipo == tipoInteiro) {
                v1->valor.r = v2->valor.i;
                v1->tipo = tipoReal;
                res->valor.r = v2->valor.i;
                res->tipo = tipoReal;
            } else if (v1->tipo == tipoReal && v2->tipo == tipoReal) {
                v1->valor.r = v2->valor.r;
                v1->tipo = tipoReal;
                res->valor.i = v2->valor.i;
                res->tipo = tipoReal;
            } else if(v1->tipo == tipoString && v2->tipo == tipoString){
                v1->valor.s = strdup(v2->valor.s);
                v1->tipo = tipoString;
                res->valor.s = strdup(v2->valor.s);
                res->tipo = tipoString;
            } else {
                char errmsg[200];
                sprintf(errmsg,"tipo %s não pode ser atribuido ao tipo %s.", nomeTipo(v1->tipo), nomeTipo(v2->tipo));
                erroSemantica(TIPOS_DIFERENTES, errmsg);
            }
        break;
    case LE:
        if (v1->tipo == tipoInteiro && v2->tipo == tipoInteiro) {
            res->valor.i = v1->valor.i < v2->valor.i;
            res->tipo = tipoBooleano;
        } else if (v1->tipo == tipoReal && v2->tipo == tipoInteiro) {
            res->valor.i = v1->valor.r < v2->valor.i;
            res->tipo = tipoBooleano;
        } else if (v1->tipo == tipoInteiro && v2->tipo == tipoReal) {
            res->valor.i = v1->valor.i < v2->valor.r;
            res->tipo = tipoBooleano;
        } else if (v1->tipo == tipoReal && v2->tipo == tipoReal) {
            res->valor.i = v1->valor.r < v2->valor.r;
            res->tipo = tipoBooleano;
        }
        else {
            //erroSemantica();
        }
        break;
    case LT:
        if (v1->tipo == tipoInteiro && v2->tipo == tipoInteiro) {
            res->valor.i = v1->valor.i <= v2->valor.i;
            res->tipo = tipoBooleano;
        } else if (v1->tipo == tipoReal && v2->tipo == tipoInteiro) {
            res->valor.i = v1->valor.r <= v2->valor.i;
            res->tipo = tipoBooleano;
        } else if (v1->tipo == tipoInteiro && v2->tipo == tipoReal) {
            res->valor.i = v1->valor.i <= v2->valor.r;
            res->tipo = tipoBooleano;
        } else if (v1->tipo == tipoReal && v2->tipo == tipoReal) {
            res->valor.i = v1->valor.r <= v2->valor.r;
            res->tipo = tipoBooleano;
        } 
        else {
            //erroSemantica();
        }
        break;
    case GE:
        if (v1->tipo == tipoInteiro && v2->tipo == tipoInteiro) {
            res->valor.i = v1->valor.i > v2->valor.i;
            res->tipo = tipoBooleano;
        } else if (v1->tipo == tipoReal && v2->tipo == tipoInteiro) {
            res->valor.i = v1->valor.r > v2->valor.i;
            res->tipo = tipoBooleano;
        } else if (v1->tipo == tipoInteiro && v2->tipo == tipoReal) {
            res->valor.i = v1->valor.i > v2->valor.r;
            res->tipo = tipoBooleano;
        } else if (v1->tipo == tipoReal && v2->tipo == tipoReal) {
            res->valor.i = v1->valor.r > v2->valor.r;
            res->tipo = tipoBooleano;
        } 
        else {
            //erroSemantica();
        }
        break;
    case GT:
        if (v1->tipo == tipoInteiro && v2->tipo == tipoInteiro) {
            res->valor.i = v1->valor.i >= v2->valor.i;
            res->tipo = tipoBooleano;
        } else if (v1->tipo == tipoReal && v2->tipo == tipoInteiro) {
            res->valor.i = v1->valor.r >= v2->valor.i;
            res->tipo = tipoBooleano;
        } else if (v1->tipo == tipoInteiro && v2->tipo == tipoReal) {
            res->valor.i = v1->valor.i >= v2->valor.r;
            res->tipo = tipoBooleano;
        } else if (v1->tipo == tipoReal && v2->tipo == tipoReal) {
            res->valor.i = v1->valor.r >= v2->valor.r;
            res->tipo = tipoBooleano;
        } 
        else {
            //erroSemantica();
        }
        break;
    case EQ:
        if (v1->tipo == tipoInteiro && v2->tipo == tipoInteiro) {
            res->valor.i = v1->valor.i == v2->valor.i;
            res->tipo = tipoBooleano;
        } else if (v1->tipo == tipoReal && v2->tipo == tipoInteiro) {
            res->valor.i = v1->valor.r == v2->valor.i;
            res->tipo = tipoBooleano;
        } else if (v1->tipo == tipoInteiro && v2->tipo == tipoReal) {
            res->valor.i = v1->valor.i == v2->valor.r;
            res->tipo = tipoBooleano;
        } else if (v1->tipo == tipoReal && v2->tipo == tipoReal) {
            res->valor.i = v1->valor.r == v2->valor.r;
            res->tipo = tipoBooleano;
        } 
        else {
            //erroSemantica();
        }
        break;
    case NEQ:
        if (v1->tipo == tipoInteiro && v2->tipo == tipoInteiro) {
            res->valor.i = v1->valor.i != v2->valor.i;
            res->tipo = tipoBooleano;
        } else if (v1->tipo == tipoReal && v2->tipo == tipoInteiro) {
            res->valor.i = v1->valor.r != v2->valor.i;
            res->tipo = tipoBooleano;
        } else if (v1->tipo == tipoInteiro && v2->tipo == tipoReal) {
            res->valor.i = v1->valor.i != v2->valor.r;
            res->tipo = tipoBooleano;
        } else if (v1->tipo == tipoReal && v2->tipo == tipoReal) {
            res->valor.i = v1->valor.r != v2->valor.r;
            res->tipo = tipoBooleano;
        } 
        else {
            //erroSemantica();
        }
        break;
    case AND:
        if (v1->tipo == tipoBooleano && v2->tipo == tipoBooleano) {
            res->valor.i = v1->valor.i && v2->valor.i;
            res->tipo = tipoBooleano;
        } 
        else {
            //erroSemantica();
        }
        break;
    case OR:
        if (v1->tipo == tipoBooleano && v2->tipo == tipoBooleano) {
            res->valor.i = v1->valor.i || v2->valor.i;
            res->tipo = tipoBooleano;
        } 
        else {
            //erroSemantica();
        }
        break;
    /*case NOT:
        if (v1->tipo == tipoBooleano && v2->tipo == tipoBooleano) {
            res->valor.i = v1->valor.i && v2->valor.i;
            res->tipo = tipoBooleano
        } 
        else {
            //erroSemantica();
        }
        break;
    case '-':
        if (v1->tipo == tipoBooleano && v2->tipo == tipoBooleano) {
            res->valor.i = v1->valor.i && v2->valor.i;
            res->tipo = tipoBooleano
        } 
        else {
            //erroSemantica();
        }
        break;*/
    default:
        sprintf(stderr,"OPERADOR '%c' NAO DEFINIDO", op);
    }
}

void opera_unario(Variavel *res, int op, Variavel *v1) {
    res = v1;
    switch(op) {
    case NOT:
    if (v1->tipo == tipoBooleano) {
        res->valor.i = ! v1->valor.i;
        res->tipo = tipoBooleano;
    } else if (v1->tipo == tipoInteiro) {
        res->valor.i = ! v1->valor.i;
        res->tipo = tipoBooleano;
    } else if (v1->tipo == tipoReal) {
        res->valor.i = ! v1->valor.r;
        res->tipo = tipoBooleano;
    } else {
        //erroSemantica();
    }
    break;
    case MINUS:
    if (v1->tipo == tipoInteiro) {
        res->valor.i = - v1->valor.i;
        res->tipo = tipoInteiro;
    } else if (v1->tipo == tipoReal) {
        res->valor.i = - v1->valor.r;
        res->tipo = tipoReal;
    } else {
        //erroSemantica();
    }
    break;
    default:
        sprintf(stderr,"OPERADOR '%c' NAO DEFINIDO", op);
    }
}



void printValorVariavel(Variavel v) {
    switch(v.tipo) {
    case tipoInteiro:
    printf("%i", v.valor); break;
    case tipoReal:
    printf("%lf", v.valor.r); break;
    case tipoString:
    printf("%s", v.valor); break;
    case tipoBooleano:
        printf("%s", v.valor.i ? "True" : "False"); break;
    default:
    printf("tipo: %s nao impresso.\n", nomeTipo(v.tipo)); break;
    }
}

void printlnValorVariavel(Variavel v) {
    switch(v.tipo) {
    case tipoInteiro:
    printf("%i\n", v.valor); break;
    case tipoReal:
    printf("%lf\n", v.valor.r); break;
    case tipoString:
    printf("%s\n", v.valor); break;
    case tipoBooleano:
        printf("%s\n", v.valor.i ? "True" : "False"); break;
    default:
    printf("tipo: %s nao impresso.\n", nomeTipo(v.tipo)); break;
    }
}

void printIdValue(char *id) {
    simboloEntrada *in = encontrarEntrada(id);
    if (in != NULL) {
        switch(in->var->tipo) {
        case tipoInteiro:
        printf("%i", in->var->valor);break;
        case tipoReal:
        printf("%lf", in->var->valor);break;
        case tipoString:
        printf("%s\n", in->var->valor);break;
        case tipoBooleano:
        printf("%s\n", in->var->valor.i ? "True" : "False"); break;
        default:
        printf("tipo não pode ser escrito\n");
        break;
        }
    }
}

int yyerror (char *msg) {
	fprintf (stderr, "Line %d: %s at '%s'\n", line_number, msg, yytext);
	return 0;
}


int main() {
    pilha = nova_pilha();
    push(pilha, "global");
    yyparse();
    return 0;
}
