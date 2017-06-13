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
    DIV = 305,
    DECINT = 306,
    DECREAL = 307,
    DECSTR = 308,
    PLUS = 309,
    MINUS = 310,
    AND = 311,
    OR = 312,
    NEQ = 313,
    EQ = 314,
    LT = 315,
    LE = 316,
    GT = 317,
    GE = 318,
    PERC = 319,
    TIMES = 320,
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
#define DIV 305
#define DECINT 306
#define DECREAL 307
#define DECSTR 308
#define PLUS 309
#define MINUS 310
#define AND 311
#define OR 312
#define NEQ 313
#define EQ 314
#define LT 315
#define LE 316
#define GT 317
#define GE 318
#define PERC 319
#define TIMES 320
#define DIVIDE 321

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

#line 266 "y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 281 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  39
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   163

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  68
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  51
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  120

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
       2,     2,     2,     2,     2,    67,     2,     2,     2,     2,
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
       0,    53,    53,    56,    57,    61,    62,    63,    64,    65,
      66,    67,    70,    90,    91,    94,    95,    96,    97,   100,
     134,   135,   138,   139,   142,   145,   146,   149,   150,   151,
     152,   153,   157,   158,   159,   160,   161,   178,   180,   182,
     185,   186,   189,   192,   196,   197,   198,   201,   202,   205,
     208,   211
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
  "ENDLINE", "CONTSTMT", "DIV", "DECINT", "DECREAL", "DECSTR", "PLUS",
  "MINUS", "AND", "OR", "NEQ", "EQ", "LT", "LE", "GT", "GE", "PERC",
  "TIMES", "DIVIDE", "'-'", "$accept", "prog", "stmt_list", "stmt",
  "end_stmt", "decl_var", "decl_data_type", "var", "definition",
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
     315,   316,   317,   318,   319,   320,   321,    45
};
# endif

#define YYPACT_NINF -40

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-40)))

#define YYTABLE_NINF -28

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      96,   -40,   -40,   -40,   -40,     0,    17,    13,    17,    17,
      17,    77,    18,   -40,   -40,   -40,    37,   -40,    85,   -10,
      38,   -10,   -40,   -40,   -37,   -10,   -40,   -40,   -10,   -10,
     -10,    34,   -39,   -40,    20,    -3,    -1,    36,    46,   -40,
     -40,   -40,   -40,    27,   -40,    17,    17,    17,    17,   -40,
     -40,   -40,   -40,   -40,     1,   -40,    12,    96,    55,   100,
      17,   -34,   -34,   -40,   -40,    77,    96,    19,   -40,    39,
      59,    66,    63,   -39,    33,    48,   -14,   -40,    55,    49,
      77,    73,    77,   -40,    17,    97,   -40,   -40,   -40,   101,
      96,   -40,    65,   -40,     3,    67,    96,   -12,    96,    69,
      96,    72,    90,   -40,   -11,    96,    76,   -40,    78,   114,
     -40,     2,   -40,    84,    86,   -40,   -40,   -40,    88,   -40
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      27,    38,    37,    39,    18,     0,     0,     0,     0,     0,
       0,     0,     0,    15,    16,    17,     0,     2,     3,     0,
       0,     0,    20,    21,     0,     0,    40,    41,     0,     0,
       0,     0,    42,    43,     0,     0,     0,     0,     0,     1,
       4,    12,     6,    13,     5,     0,     0,     0,     0,     9,
       8,     7,    10,    11,     0,    32,     0,    27,     0,     0,
       0,    33,    34,    35,    36,     0,    27,     0,    19,     0,
       0,    25,     0,    14,     0,     0,     0,    50,     0,     0,
       0,     0,    22,    24,     0,     0,    44,    46,    45,     0,
      27,    26,     0,    23,     0,     0,    27,     0,    27,     0,
      27,     0,     0,    28,     0,    27,     0,    51,     0,     0,
      31,     0,    49,     0,     0,    47,    48,    29,     0,    30
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -40,   -40,   -18,   -40,   133,    -9,   -40,    47,   -40,    42,
     -40,    52,   -40,    -5,   -40,   -40,   -40,   -40,    28,    29,
     -40,   -40
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    16,    17,    18,    42,    19,    20,    69,    21,    75,
      22,    72,    23,    24,    25,    26,    27,    28,    87,    88,
      29,    30
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      40,    32,    37,    34,    35,    36,    31,    84,    56,    85,
      57,    41,   102,   109,    99,    45,    46,    45,    46,    33,
       1,     2,     3,    84,    38,    85,    47,    48,    47,    48,
       8,    47,    48,    86,    55,   103,   110,    39,    41,    67,
      61,    62,    63,    64,    43,    54,    58,    60,    76,    65,
      71,    45,    46,    45,    46,    73,    74,    45,    46,    59,
      66,    68,    47,    48,    47,    48,    77,    78,    47,    48,
      79,    71,    97,    74,    45,    46,    80,    81,   101,    94,
     104,    82,   106,     4,    92,    47,    48,   111,     1,     2,
       3,     4,     5,     6,     7,    83,   108,    90,     8,     1,
       2,     3,     4,     5,     6,     7,     4,     9,    95,     8,
      10,    11,    96,    98,    70,   100,    12,   105,     9,   107,
     114,    10,    11,   112,    93,    89,   113,    12,    13,    14,
      15,   117,    91,   -27,   118,   119,    13,    14,    15,   115,
     116,     0,     0,     0,     0,     0,     0,    13,    14,    15,
       0,    13,    14,    15,    44,     0,     0,    49,    50,     0,
       0,    51,    52,    53
};

static const yytype_int8 yycheck[] =
{
      18,     6,    11,     8,     9,    10,     6,    21,    11,    23,
      11,    48,    24,    24,    11,    54,    55,    54,    55,     6,
       3,     4,     5,    21,     6,    23,    65,    66,    65,    66,
      13,    65,    66,    47,    14,    47,    47,     0,    48,    57,
      45,    46,    47,    48,     6,    11,    10,    20,    66,    48,
      59,    54,    55,    54,    55,    60,    65,    54,    55,    13,
      48,     6,    65,    66,    65,    66,    47,    28,    65,    66,
      11,    80,    90,    82,    54,    55,    10,    14,    96,    84,
      98,    48,   100,     6,    11,    65,    66,   105,     3,     4,
       5,     6,     7,     8,     9,    47,     6,    48,    13,     3,
       4,     5,     6,     7,     8,     9,     6,    22,    11,    13,
      25,    26,    11,    48,    14,    48,    31,    48,    22,    47,
       6,    25,    26,    47,    82,    78,    48,    31,    51,    52,
      53,    47,    80,    48,    48,    47,    51,    52,    53,   111,
     111,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    53,
      -1,    51,    52,    53,    21,    -1,    -1,    24,    25,    -1,
      -1,    28,    29,    30
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    13,    22,
      25,    26,    31,    51,    52,    53,    69,    70,    71,    73,
      74,    76,    78,    80,    81,    82,    83,    84,    85,    88,
      89,     6,    81,     6,    81,    81,    81,    73,     6,     0,
      70,    48,    72,     6,    72,    54,    55,    65,    66,    72,
      72,    72,    72,    72,    11,    14,    11,    11,    10,    13,
      20,    81,    81,    81,    81,    48,    48,    70,     6,    75,
      14,    73,    79,    81,    73,    77,    70,    47,    28,    11,
      10,    14,    48,    47,    21,    23,    47,    86,    87,    75,
      48,    79,    11,    77,    81,    11,    11,    70,    48,    11,
      48,    70,    24,    47,    70,    48,    70,    47,     6,    24,
      47,    70,    47,    48,     6,    86,    87,    47,    48,    47
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    68,    69,    70,    70,    71,    71,    71,    71,    71,
      71,    71,    72,    73,    73,    74,    74,    74,    74,    75,
      76,    76,    77,    77,    78,    79,    79,    80,    80,    80,
      80,    80,    81,    81,    81,    81,    81,    81,    81,    81,
      82,    82,    83,    84,    85,    85,    85,    86,    86,    87,
      88,    89
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     1,     2,     4,     1,     1,     1,     1,     1,
       1,     1,     2,     3,     6,     1,     3,     0,     8,    11,
      12,     9,     3,     3,     3,     3,     3,     1,     1,     1,
       1,     1,     2,     2,     6,     6,     6,     6,     6,     5,
       5,     9
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
#line 1454 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 56 "af.y" /* yacc.c:1646  */
    {}
#line 1460 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 57 "af.y" /* yacc.c:1646  */
    {}
#line 1466 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 61 "af.y" /* yacc.c:1646  */
    {}
#line 1472 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 62 "af.y" /* yacc.c:1646  */
    {}
#line 1478 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 63 "af.y" /* yacc.c:1646  */
    {}
#line 1484 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 64 "af.y" /* yacc.c:1646  */
    {}
#line 1490 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 65 "af.y" /* yacc.c:1646  */
    {printValorVariavel(*(yyvsp[-1].v));}
#line 1496 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 66 "af.y" /* yacc.c:1646  */
    {}
#line 1502 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 67 "af.y" /* yacc.c:1646  */
    {}
#line 1508 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 70 "af.y" /* yacc.c:1646  */
    {}
#line 1514 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 94 "af.y" /* yacc.c:1646  */
    {(yyval.iValor) = tipoInteiro;}
#line 1520 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 95 "af.y" /* yacc.c:1646  */
    {(yyval.iValor) = tipoReal;}
#line 1526 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 96 "af.y" /* yacc.c:1646  */
    {(yyval.iValor) = tipoString;}
#line 1532 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 97 "af.y" /* yacc.c:1646  */
    {(yyval.iValor) = tipoDefinido;}
#line 1538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 100 "af.y" /* yacc.c:1646  */
    {(yyval.sValor) = (yyvsp[0].sValor);}
#line 1544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 134 "af.y" /* yacc.c:1646  */
    {}
#line 1550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 135 "af.y" /* yacc.c:1646  */
    {}
#line 1556 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 142 "af.y" /* yacc.c:1646  */
    {printf("definiu tipo\n");}
#line 1562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 150 "af.y" /* yacc.c:1646  */
    {printf("função sem retorno e sem parametro\n");}
#line 1568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 151 "af.y" /* yacc.c:1646  */
    {printf("função com retorno e sem parametro\n");}
#line 1574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 152 "af.y" /* yacc.c:1646  */
    {printf("função com retorno e com parametro\n");}
#line 1580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 153 "af.y" /* yacc.c:1646  */
    {printf("função sem retorno e com parametro\n");}
#line 1586 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 157 "af.y" /* yacc.c:1646  */
    {(yyval.v) = (yyvsp[-1].v);}
#line 1592 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 158 "af.y" /* yacc.c:1646  */
    {operar((yyval.v), (yyvsp[-2].v), '+', (yyvsp[0].v));}
#line 1598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 159 "af.y" /* yacc.c:1646  */
    {operar((yyval.v), (yyvsp[-2].v), '-', (yyvsp[0].v));}
#line 1604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 160 "af.y" /* yacc.c:1646  */
    {operar((yyval.v), (yyvsp[-2].v), '*', (yyvsp[0].v));}
#line 1610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 161 "af.y" /* yacc.c:1646  */
    {operar((yyval.v), (yyvsp[-2].v), '/', (yyvsp[0].v));}
#line 1616 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 178 "af.y" /* yacc.c:1646  */
    { Variavel *v = (Variavel*) malloc(sizeof(Variavel));
                                v->tipo = tipoReal; ValorVariavel vv; vv.r = (yyvsp[0].rValor); v->valor = vv; (yyval.v) = v;}
#line 1623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 180 "af.y" /* yacc.c:1646  */
    { Variavel *v = (Variavel*) malloc(sizeof(Variavel));
                                v->tipo = tipoInteiro;  ValorVariavel vv; vv.i = (yyvsp[0].iValor); v->valor = vv; (yyval.v) = v;}
#line 1630 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 182 "af.y" /* yacc.c:1646  */
    { Variavel *v = (Variavel*) malloc(sizeof(Variavel)); v->tipo = tipoString;  ValorVariavel vv; vv.s = strdup((yyvsp[0].sValor)); v->valor = vv; (yyval.v) = v;}
#line 1636 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 185 "af.y" /* yacc.c:1646  */
    {}
#line 1642 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 186 "af.y" /* yacc.c:1646  */
    {}
#line 1648 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 189 "af.y" /* yacc.c:1646  */
    {}
#line 1654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 192 "af.y" /* yacc.c:1646  */
    {}
#line 1660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 196 "af.y" /* yacc.c:1646  */
    {printf("if\n");}
#line 1666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 197 "af.y" /* yacc.c:1646  */
    {printf("if..else \n");}
#line 1672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 198 "af.y" /* yacc.c:1646  */
    {printf("if..elif..else \n");}
#line 1678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 205 "af.y" /* yacc.c:1646  */
    {}
#line 1684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 208 "af.y" /* yacc.c:1646  */
    {printf("while \n");}
#line 1690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 211 "af.y" /* yacc.c:1646  */
    {printf("for \n");}
#line 1696 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1700 "y.tab.c" /* yacc.c:1646  */
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
#line 213 "af.y" /* yacc.c:1906  */


void operar(Variavel *res, Variavel *v1, char op, Variavel *v2) {
    
    switch(op) {
     case '+':
        if (v1->tipo == tipoInteiro && v2->tipo == tipoInteiro) {
            res->valor.i = v1->valor.i + v2->valor.i;
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
     case '-':
        if (v1->tipo == tipoInteiro && v2->tipo == tipoInteiro) {
            res->valor.i = v1->valor.i - v2->valor.i;
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
     case '*':
        if (v1->tipo == tipoInteiro && v2->tipo == tipoInteiro) {
            res->valor.i = v1->valor.i * v2->valor.i;
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
    case '/':
        if (v1->tipo == tipoInteiro && v2->tipo == tipoInteiro) {
            res->valor.i = v1->valor.i / v2->valor.i;
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
    case '%':
        if (v1->tipo == tipoInteiro && v2->tipo == tipoInteiro) {
            res->valor.i = v1->valor.i % v2->valor.i;
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
    printf("%i\n", v.valor); break;
    case tipoReal:
    printf("%lf\n", v.valor.r); break;
    case tipoString:
    printf("%s\n", v.valor); break;
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
        printf("%s", in->var->valor);break;
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
