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

#line 86 "y.tab.c" /* yacc.c:339  */

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
    NOT = 284,
    NIL = 285,
    DEF = 286,
    TRUE = 287,
    FALSE = 288,
    BREAK = 289,
    SET = 290,
    LIST = 291,
    DIVM = 292,
    ADDPERC = 293,
    SUBPERC = 294,
    ADDEQ = 295,
    SUBEQ = 296,
    DIVEQ = 297,
    MULTEQ = 298,
    DIVMEQ = 299,
    DICT = 300,
    MAIN = 301,
    END = 302,
    ENDLINE = 303,
    CONTSTMT = 304,
    DECINT = 305,
    DECREAL = 306,
    DECSTR = 307,
    PLUS = 308,
    MINUS = 309,
    TIMES = 310,
    DIV = 311,
    NEQ = 312,
    EQ = 313,
    LT = 314,
    LE = 315,
    GT = 316,
    GE = 317,
    AND = 318,
    OR = 319,
    PERC = 320,
    DIVIDE = 321
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
#define NOT 284
#define NIL 285
#define DEF 286
#define TRUE 287
#define FALSE 288
#define BREAK 289
#define SET 290
#define LIST 291
#define DIVM 292
#define ADDPERC 293
#define SUBPERC 294
#define ADDEQ 295
#define SUBEQ 296
#define DIVEQ 297
#define MULTEQ 298
#define DIVMEQ 299
#define DICT 300
#define MAIN 301
#define END 302
#define ENDLINE 303
#define CONTSTMT 304
#define DECINT 305
#define DECREAL 306
#define DECSTR 307
#define PLUS 308
#define MINUS 309
#define TIMES 310
#define DIV 311
#define NEQ 312
#define EQ 313
#define LT 314
#define LE 315
#define GT 316
#define GE 317
#define AND 318
#define OR 319
#define PERC 320
#define DIVIDE 321

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 21 "af.y" /* yacc.c:355  */

    int iValor;
    double rValor;
    char * sValor;

#line 264 "y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 279 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  51
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   243

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  67
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  89
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  183

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   321

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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    47,    47,    50,    51,    54,    55,    56,    57,    58,
      59,    60,    61,    64,    67,    70,    71,    74,    77,    78,
      82,    85,    86,    87,    88,    91,    94,    95,    98,    99,
     100,   101,   102,   103,   106,   109,   112,   113,   116,   119,
     120,   124,   125,   128,   129,   132,   135,   136,   139,   140,
     141,   142,   143,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   157,   159,   162,   163,   164,   167,   168,   169,
     170,   171,   172,   173,   174,   178,   179,   180,   183,   184,
     187,   190,   194,   195,   196,   199,   200,   203,   206,   209
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
  "ELSE", "RETURN", "WHILE", "FOR", "SKIP", "IN", "NOT", "NIL", "DEF",
  "TRUE", "FALSE", "BREAK", "SET", "LIST", "DIVM", "ADDPERC", "SUBPERC",
  "ADDEQ", "SUBEQ", "DIVEQ", "MULTEQ", "DIVMEQ", "DICT", "MAIN", "END",
  "ENDLINE", "CONTSTMT", "DECINT", "DECREAL", "DECSTR", "PLUS", "MINUS",
  "TIMES", "DIV", "NEQ", "EQ", "LT", "LE", "GT", "GE", "AND", "OR", "PERC",
  "DIVIDE", "$accept", "prog", "stmt_list", "stmt", "end_stmt", "assign",
  "lhs", "rhs", "call_func", "decl_var", "decl_data_type", "var",
  "data_type", "prim_type", "abs_type", "dict", "key_value", "list",
  "data_types", "definition", "decl_field_type", "type_def", "param_func",
  "func_def", "expr", "term", "fact", "unaop", "f_builtin", "f_print",
  "f_input", "estr_cond", "cond_elif", "cond_else", "estr_while",
  "estr_for", YY_NULLPTR
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
     315,   316,   317,   318,   319,   320,   321
};
# endif

#define YYPACT_NINF -120

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-120)))

#define YYTABLE_NINF -49

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      12,  -120,  -120,   119,     8,    36,    17,    36,    36,    36,
      21,  -120,    25,  -120,  -120,  -120,  -120,  -120,    28,  -120,
       4,     9,    39,  -120,     9,    81,  -120,     9,  -120,  -120,
     152,    23,  -120,   100,     9,  -120,  -120,     9,     9,     9,
     172,    84,    87,   165,  -120,    22,    56,    91,  -120,    95,
      98,  -120,  -120,  -120,  -120,    36,  -120,  -120,  -120,    36,
      36,    36,    36,    36,    36,    36,    36,    36,    36,  -120,
      36,    36,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,
    -120,  -120,  -120,  -120,  -120,    88,    92,   112,  -120,  -120,
     109,    76,  -120,    80,    12,   123,    47,  -120,   165,    23,
      23,    23,    23,    23,    23,    23,    23,    23,    23,  -120,
    -120,   115,   116,   153,  -120,    21,    12,    93,  -120,   106,
     124,   132,   129,   153,  -120,   153,  -120,  -120,   113,    99,
       1,  -120,   123,   114,    21,   149,   150,   154,   161,    21,
    -120,    36,   169,  -120,  -120,  -120,   174,    12,  -120,   134,
    -120,   153,  -120,  -120,   110,   140,    12,    44,    12,   180,
     144,    12,   146,   191,  -120,    46,   153,    12,   156,  -120,
     151,   195,  -120,  -120,    71,  -120,   160,   173,  -120,  -120,
    -120,   193,  -120
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      48,    71,    72,    73,     0,     0,     0,     0,     0,     0,
       0,    75,     0,    21,    22,    23,    77,    76,     0,     2,
       3,     0,     0,    74,    15,     0,    16,     0,    41,    42,
       0,    63,    66,     0,     0,    78,    79,     0,     0,     0,
       0,     0,    73,    80,    81,     0,     0,     0,    24,     0,
       0,     1,     4,    13,     5,     0,     7,    20,     6,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
       0,     0,    68,    69,    70,     9,     8,    11,    12,    28,
      29,    30,    34,    18,    33,     0,     0,    39,    26,    27,
       0,     0,    67,     0,    48,     0,     0,    14,    17,    53,
      54,    62,    59,    55,    56,    58,    57,    60,    61,    64,
      65,     0,     0,     0,    19,     0,    48,     0,    25,     0,
       0,    46,     0,     0,    32,     0,    31,    40,     0,     0,
       0,    88,     0,     0,     0,     0,     0,     0,     0,    43,
      45,     0,     0,    82,    84,    83,     0,    48,    47,     0,
      38,     0,    35,    44,     0,     0,    48,     0,    48,    36,
       0,    48,     0,     0,    49,     0,     0,    48,     0,    89,
       0,     0,    52,    37,     0,    87,     0,     0,    85,    86,
      50,     0,    51
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -120,  -120,   -20,  -120,   157,  -120,  -120,  -120,  -120,    -8,
    -120,   -86,  -119,  -120,  -120,  -120,    38,  -120,   -63,  -120,
     102,  -120,    86,  -120,    -4,   171,   -26,  -120,  -120,  -120,
    -120,  -120,    68,    69,  -120,  -120
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    18,    19,    20,    54,    21,    22,    97,    23,    24,
      25,    26,    87,    88,    89,   126,   138,   124,    90,    27,
     129,    28,   122,    29,    30,    31,    32,    33,    34,    35,
      36,    37,   144,   145,    38,    39
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      52,    43,    49,    45,    46,    47,   137,     1,     2,   119,
       3,     4,     5,     6,    41,     1,     2,     7,     3,     4,
       5,     6,   141,    44,   142,     7,     8,    48,    51,     9,
      10,    50,   159,    11,     8,    12,    92,     9,    10,     1,
       2,    11,    42,    12,   109,   110,   146,   137,   143,     7,
     127,    98,   -48,    48,    13,    14,    15,    53,    16,    55,
     136,   120,    13,    14,    15,    11,    16,    93,   163,    17,
     171,    13,    14,    15,   117,    59,    60,    17,    70,    61,
      62,    63,    64,    65,    66,    67,    68,    57,   121,    71,
      16,   164,   141,   172,   142,    91,   130,    13,    14,    15,
      40,    17,    94,    72,    73,    95,    74,   128,   111,    59,
      60,    96,   112,    61,    62,    63,    64,    65,    66,    67,
      68,   160,   113,   114,   115,   -24,   121,   157,   116,   118,
     123,   128,    40,   125,   132,   133,   162,   154,   165,   -25,
     131,   168,   134,   135,    59,    60,   140,   174,    61,    62,
      63,    64,    65,    66,    67,    68,    79,    80,    81,    82,
     149,   139,   147,    59,    60,   151,   150,    61,    62,    63,
      64,    65,    66,    67,    68,    79,    80,    81,    82,   152,
     155,    56,   158,    84,    58,   156,    83,    69,   161,    85,
     166,    75,   167,   169,    76,    77,    78,   170,    86,   176,
      53,   177,    84,   175,   173,    59,    60,   180,    85,    61,
      62,    63,    64,    65,    66,    67,    68,    86,    59,    60,
     148,   181,    61,    62,    63,    64,    65,    66,    67,    68,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     182,   153,   178,   179
};

static const yytype_uint8 yycheck[] =
{
      20,     5,    10,     7,     8,     9,   125,     3,     4,    95,
       6,     7,     8,     9,     6,     3,     4,    13,     6,     7,
       8,     9,    21,     6,    23,    13,    22,     6,     0,    25,
      26,     6,   151,    29,    22,    31,    14,    25,    26,     3,
       4,    29,     6,    31,    70,    71,   132,   166,    47,    13,
     113,    55,    48,     6,    50,    51,    52,    48,    54,    20,
     123,    14,    50,    51,    52,    29,    54,    11,    24,    65,
      24,    50,    51,    52,    94,    53,    54,    65,    55,    57,
      58,    59,    60,    61,    62,    63,    64,     6,    96,    66,
      54,    47,    21,    47,    23,    11,   116,    50,    51,    52,
      13,    65,    11,     3,     4,    10,     6,   115,    20,    53,
      54,    13,    20,    57,    58,    59,    60,    61,    62,    63,
      64,    11,    10,    14,    48,     6,   134,   147,    48,     6,
      15,   139,    13,    17,    28,    11,   156,   141,   158,    20,
      47,   161,    10,    14,    53,    54,    47,   167,    57,    58,
      59,    60,    61,    62,    63,    64,     3,     4,     5,     6,
      11,    48,    48,    53,    54,    11,    16,    57,    58,    59,
      60,    61,    62,    63,    64,     3,     4,     5,     6,    18,
      11,    24,    48,    30,    27,    11,    14,    30,    48,    36,
      10,    34,    48,    47,    37,    38,    39,     6,    45,    48,
      48,     6,    30,    47,   166,    53,    54,    47,    36,    57,
      58,    59,    60,    61,    62,    63,    64,    45,    53,    54,
     134,    48,    57,    58,    59,    60,    61,    62,    63,    64,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      47,   139,   174,   174
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     6,     7,     8,     9,    13,    22,    25,
      26,    29,    31,    50,    51,    52,    54,    65,    68,    69,
      70,    72,    73,    75,    76,    77,    78,    86,    88,    90,
      91,    92,    93,    94,    95,    96,    97,    98,   101,   102,
      13,     6,     6,    91,     6,    91,    91,    91,     6,    76,
       6,     0,    69,    48,    71,    20,    71,     6,    71,    53,
      54,    57,    58,    59,    60,    61,    62,    63,    64,    71,
      55,    66,     3,     4,     6,    71,    71,    71,    71,     3,
       4,     5,     6,    14,    30,    36,    45,    79,    80,    81,
      85,    11,    14,    11,    11,    10,    13,    74,    91,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    93,
      93,    20,    20,    10,    14,    48,    48,    69,     6,    78,
      14,    76,    89,    15,    84,    17,    82,    85,    76,    87,
      69,    47,    28,    11,    10,    14,    85,    79,    83,    48,
      47,    21,    23,    47,    99,   100,    78,    48,    89,    11,
      16,    11,    18,    87,    91,    11,    11,    69,    48,    79,
      11,    48,    69,    24,    47,    69,    10,    48,    69,    47,
       6,    24,    47,    83,    69,    47,    48,     6,    99,   100,
      47,    48,    47
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    67,    68,    69,    69,    70,    70,    70,    70,    70,
      70,    70,    70,    71,    72,    73,    73,    74,    75,    75,
      76,    77,    77,    77,    77,    78,    79,    79,    80,    80,
      80,    80,    80,    80,    81,    82,    83,    83,    84,    85,
      85,    86,    86,    87,    87,    88,    89,    89,    90,    90,
      90,    90,    90,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    92,    92,    92,    93,    93,    93,
      93,    93,    93,    93,    93,    94,    94,    94,    95,    95,
      96,    97,    98,    98,    98,    99,    99,   100,   101,   102
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     1,     3,     1,     1,     1,     3,     4,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     1,     1,     3,     3,     5,     3,     1,
       3,     1,     1,     2,     3,     6,     1,     3,     0,     8,
      11,    12,     9,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     6,     6,     6,     6,     6,     5,     5,     9
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
#line 47 "af.y" /* yacc.c:1646  */
    {}
#line 1502 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 50 "af.y" /* yacc.c:1646  */
    {}
#line 1508 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 51 "af.y" /* yacc.c:1646  */
    {}
#line 1514 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 54 "af.y" /* yacc.c:1646  */
    {}
#line 1520 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 55 "af.y" /* yacc.c:1646  */
    {}
#line 1526 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 56 "af.y" /* yacc.c:1646  */
    {}
#line 1532 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 57 "af.y" /* yacc.c:1646  */
    {}
#line 1538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 58 "af.y" /* yacc.c:1646  */
    {}
#line 1544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 59 "af.y" /* yacc.c:1646  */
    {}
#line 1550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 60 "af.y" /* yacc.c:1646  */
    {}
#line 1556 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 61 "af.y" /* yacc.c:1646  */
    {}
#line 1562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 64 "af.y" /* yacc.c:1646  */
    {}
#line 1568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 67 "af.y" /* yacc.c:1646  */
    {}
#line 1574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 70 "af.y" /* yacc.c:1646  */
    {(yyval.sValor) = (yyvsp[0].sValor);}
#line 1580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 71 "af.y" /* yacc.c:1646  */
    {(yyval.sValor) = (yyvsp[0].sValor);}
#line 1586 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 74 "af.y" /* yacc.c:1646  */
    {}
#line 1592 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 77 "af.y" /* yacc.c:1646  */
    {}
#line 1598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 78 "af.y" /* yacc.c:1646  */
    {}
#line 1604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 82 "af.y" /* yacc.c:1646  */
    {addId((yyvsp[0].sValor), (yyvsp[-1].iValor), topo_pilha(pilha)); (yyval.sValor) = (yyvsp[0].sValor);}
#line 1610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 85 "af.y" /* yacc.c:1646  */
    {(yyval.iValor) = tipoInteiro;}
#line 1616 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 86 "af.y" /* yacc.c:1646  */
    {(yyval.iValor) = tipoReal;}
#line 1622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 87 "af.y" /* yacc.c:1646  */
    {(yyval.iValor) = tipoString;}
#line 1628 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 88 "af.y" /* yacc.c:1646  */
    {(yyval.iValor) = tipoDefinido;}
#line 1634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 91 "af.y" /* yacc.c:1646  */
    {(yyval.sValor) = (yyvsp[0].sValor);}
#line 1640 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 94 "af.y" /* yacc.c:1646  */
    {}
#line 1646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 95 "af.y" /* yacc.c:1646  */
    {}
#line 1652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 98 "af.y" /* yacc.c:1646  */
    {printf("%i\n", (yyvsp[0].iValor));}
#line 1658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 99 "af.y" /* yacc.c:1646  */
    {printf("%lf\n", (yyvsp[0].rValor));}
#line 1664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 100 "af.y" /* yacc.c:1646  */
    {printf("%s\n", (yyvsp[0].sValor));}
#line 1670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 101 "af.y" /* yacc.c:1646  */
    {}
#line 1676 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 102 "af.y" /* yacc.c:1646  */
    {}
#line 1682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 103 "af.y" /* yacc.c:1646  */
    {}
#line 1688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 106 "af.y" /* yacc.c:1646  */
    {printf("%s\n", (yyvsp[0].sValor));}
#line 1694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 109 "af.y" /* yacc.c:1646  */
    {}
#line 1700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 112 "af.y" /* yacc.c:1646  */
    {}
#line 1706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 113 "af.y" /* yacc.c:1646  */
    {}
#line 1712 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 116 "af.y" /* yacc.c:1646  */
    {}
#line 1718 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 119 "af.y" /* yacc.c:1646  */
    {}
#line 1724 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 120 "af.y" /* yacc.c:1646  */
    {}
#line 1730 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 124 "af.y" /* yacc.c:1646  */
    {}
#line 1736 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 125 "af.y" /* yacc.c:1646  */
    {}
#line 1742 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 132 "af.y" /* yacc.c:1646  */
    {printf("definiu tipo\n");}
#line 1748 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 140 "af.y" /* yacc.c:1646  */
    {printf("função sem retorno e sem parametro\n");}
#line 1754 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 141 "af.y" /* yacc.c:1646  */
    {printf("função com retorno e sem parametro\n");}
#line 1760 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 142 "af.y" /* yacc.c:1646  */
    {printf("função com retorno e com parametro\n");}
#line 1766 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 143 "af.y" /* yacc.c:1646  */
    {printf("função sem retorno e com parametro\n");}
#line 1772 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 147 "af.y" /* yacc.c:1646  */
    {printf("%lf\n",(yyvsp[-2].rValor) + (yyvsp[0].rValor));}
#line 1778 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 148 "af.y" /* yacc.c:1646  */
    {printf("%lf\n",(yyvsp[-2].rValor) - (yyvsp[0].rValor));}
#line 1784 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 149 "af.y" /* yacc.c:1646  */
    {printf("%lf\n",(yyvsp[-2].rValor) < (yyvsp[0].rValor));}
#line 1790 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 150 "af.y" /* yacc.c:1646  */
    {printf("%lf\n",(yyvsp[-2].rValor) <= (yyvsp[0].rValor));}
#line 1796 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 151 "af.y" /* yacc.c:1646  */
    {printf("%lf\n",(yyvsp[-2].rValor) >= (yyvsp[0].rValor));}
#line 1802 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 152 "af.y" /* yacc.c:1646  */
    {printf("%lf\n",(yyvsp[-2].rValor) > (yyvsp[0].rValor));}
#line 1808 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 153 "af.y" /* yacc.c:1646  */
    {printf("%lf\n",(yyvsp[-2].rValor) == (yyvsp[0].rValor));}
#line 1814 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 154 "af.y" /* yacc.c:1646  */
    {printf("%lf\n",(yyvsp[-2].rValor) && (yyvsp[0].rValor));}
#line 1820 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 155 "af.y" /* yacc.c:1646  */
    {printf("%lf\n",(yyvsp[-2].rValor) || (yyvsp[0].rValor));}
#line 1826 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 157 "af.y" /* yacc.c:1646  */
    {printf("%lf\n",(yyvsp[-2].rValor) != (yyvsp[0].rValor));}
#line 1832 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 159 "af.y" /* yacc.c:1646  */
    {(yyval.rValor) = (yyvsp[0].rValor);}
#line 1838 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 162 "af.y" /* yacc.c:1646  */
    {printf("%lf\n",(yyvsp[-2].rValor) * (yyvsp[0].rValor));}
#line 1844 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 163 "af.y" /* yacc.c:1646  */
    {printf("%lf\n",(yyvsp[-2].rValor) / (yyvsp[0].rValor));}
#line 1850 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 164 "af.y" /* yacc.c:1646  */
    {(yyval.rValor) = (yyvsp[0].rValor);}
#line 1856 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 167 "af.y" /* yacc.c:1646  */
    {(yyval.rValor) = (yyvsp[-1].rValor);}
#line 1862 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 168 "af.y" /* yacc.c:1646  */
    {}
#line 1868 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 169 "af.y" /* yacc.c:1646  */
    {}
#line 1874 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 170 "af.y" /* yacc.c:1646  */
    {}
#line 1880 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 171 "af.y" /* yacc.c:1646  */
    {(yyval.rValor) = (yyvsp[0].iValor);}
#line 1886 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 172 "af.y" /* yacc.c:1646  */
    {(yyval.rValor) = (yyvsp[0].rValor);}
#line 1892 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 173 "af.y" /* yacc.c:1646  */
    {}
#line 1898 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 174 "af.y" /* yacc.c:1646  */
    {}
#line 1904 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 178 "af.y" /* yacc.c:1646  */
    {}
#line 1910 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 179 "af.y" /* yacc.c:1646  */
    {}
#line 1916 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 180 "af.y" /* yacc.c:1646  */
    {}
#line 1922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 183 "af.y" /* yacc.c:1646  */
    {}
#line 1928 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 184 "af.y" /* yacc.c:1646  */
    {}
#line 1934 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 187 "af.y" /* yacc.c:1646  */
    {}
#line 1940 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 190 "af.y" /* yacc.c:1646  */
    {}
#line 1946 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 194 "af.y" /* yacc.c:1646  */
    {printf("if\n");}
#line 1952 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 195 "af.y" /* yacc.c:1646  */
    {printf("if..else \n");}
#line 1958 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 196 "af.y" /* yacc.c:1646  */
    {printf("if..elif..else \n");}
#line 1964 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 203 "af.y" /* yacc.c:1646  */
    {}
#line 1970 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 206 "af.y" /* yacc.c:1646  */
    {printf("while \n");}
#line 1976 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 209 "af.y" /* yacc.c:1646  */
    {printf("for \n");}
#line 1982 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1986 "y.tab.c" /* yacc.c:1646  */
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
#line 212 "af.y" /* yacc.c:1906  */


void printIdValue(char *id) {
    simboloEntrada *in = encontrarEntrada(id);
    if (in != NULL) {
        switch(in->tipo) {
        case tipoInteiro:
        printf("%i", in->valor.i);break;
        case tipoReal:
        printf("%lf", in->valor.r);break;
        case tipoString:
        printf("%s", in->valor.s);break;
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
