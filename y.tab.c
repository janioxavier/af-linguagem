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

int yyerror(char *s);
extern int yylineno;
extern char * yytext;
extern int line_number;

#line 75 "y.tab.c" /* yacc.c:339  */

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
    TYPE = 261,
    ID = 262,
    COMMA = 263,
    COLON = 264,
    SEMICOLON = 265,
    LPAREN = 266,
    RPAREN = 267,
    LBRACE = 268,
    RBRACE = 269,
    LBRACK = 270,
    RBRACK = 271,
    DOT = 272,
    PLUS = 273,
    MINUS = 274,
    TIMES = 275,
    DIV = 276,
    NEQ = 277,
    RETURN = 278,
    EQ = 279,
    LT = 280,
    LE = 281,
    GT = 282,
    GE = 283,
    AND = 284,
    OR = 285,
    ASSIGN = 286,
    ELIF = 287,
    IF = 288,
    ELSE = 289,
    WHILE = 290,
    FOR = 291,
    SKIP = 292,
    IN = 293,
    NOT = 294,
    NIL = 295,
    DEF = 296,
    TRUE = 297,
    FALSE = 298,
    BREAK = 299,
    SET = 300,
    LIST = 301,
    DIVM = 302,
    PERC = 303,
    ADDPERC = 304,
    SUBPERC = 305,
    ADDEQ = 306,
    SUBEQ = 307,
    DIVEQ = 308,
    MULTEQ = 309,
    DIVMEQ = 310,
    DICT = 311,
    MAIN = 312,
    END = 313,
    ENDLINE = 314,
    CONTSTMT = 315,
    DIVIDE = 316,
    DECINT = 317,
    DECREAL = 318,
    DECSTR = 319
  };
#endif
/* Tokens.  */
#define INT 258
#define REAL 259
#define STR 260
#define TYPE 261
#define ID 262
#define COMMA 263
#define COLON 264
#define SEMICOLON 265
#define LPAREN 266
#define RPAREN 267
#define LBRACE 268
#define RBRACE 269
#define LBRACK 270
#define RBRACK 271
#define DOT 272
#define PLUS 273
#define MINUS 274
#define TIMES 275
#define DIV 276
#define NEQ 277
#define RETURN 278
#define EQ 279
#define LT 280
#define LE 281
#define GT 282
#define GE 283
#define AND 284
#define OR 285
#define ASSIGN 286
#define ELIF 287
#define IF 288
#define ELSE 289
#define WHILE 290
#define FOR 291
#define SKIP 292
#define IN 293
#define NOT 294
#define NIL 295
#define DEF 296
#define TRUE 297
#define FALSE 298
#define BREAK 299
#define SET 300
#define LIST 301
#define DIVM 302
#define PERC 303
#define ADDPERC 304
#define SUBPERC 305
#define ADDEQ 306
#define SUBEQ 307
#define DIVEQ 308
#define MULTEQ 309
#define DIVMEQ 310
#define DICT 311
#define MAIN 312
#define END 313
#define ENDLINE 314
#define CONTSTMT 315
#define DIVIDE 316
#define DECINT 317
#define DECREAL 318
#define DECSTR 319

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 10 "af.y" /* yacc.c:355  */

    int i;
    float f;
    char* str;

#line 249 "y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 264 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  47
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   281

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  65
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  81
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  155

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   319

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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    28,    28,    31,    32,    35,    36,    37,    38,    39,
      40,    43,    44,    47,    50,    51,    54,    55,    56,    59,
      60,    63,    66,    67,    68,    69,    72,    75,    76,    79,
      80,    81,    82,    83,    84,    87,    90,    93,    94,    97,
     100,   101,   105,   106,   109,   110,   113,   116,   117,   120,
     121,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   138,   139,   142,   143,   146,   147,   148,
     151,   152,   153,   157,   158,   159,   160,   163,   164,   167,
     170,   173
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "REAL", "STR", "TYPE", "ID",
  "COMMA", "COLON", "SEMICOLON", "LPAREN", "RPAREN", "LBRACE", "RBRACE",
  "LBRACK", "RBRACK", "DOT", "PLUS", "MINUS", "TIMES", "DIV", "NEQ",
  "RETURN", "EQ", "LT", "LE", "GT", "GE", "AND", "OR", "ASSIGN", "ELIF",
  "IF", "ELSE", "WHILE", "FOR", "SKIP", "IN", "NOT", "NIL", "DEF", "TRUE",
  "FALSE", "BREAK", "SET", "LIST", "DIVM", "PERC", "ADDPERC", "SUBPERC",
  "ADDEQ", "SUBEQ", "DIVEQ", "MULTEQ", "DIVMEQ", "DICT", "MAIN", "END",
  "ENDLINE", "CONTSTMT", "DIVIDE", "DECINT", "DECREAL", "DECSTR",
  "$accept", "prog", "stmt_list", "stmt", "end_stmt", "assign", "lhs",
  "rhs", "call_func", "decl_var", "decl_data_type", "var", "data_type",
  "prim_type", "abs_type", "dict", "key_value", "list", "data_types",
  "definition", "decl_field_type", "type_def", "func_def", "expr", "opbi1",
  "opbi2", "term", "fact", "opuna", "estr_cond", "cond_elif", "cond_else",
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
     315,   316,   317,   318,   319
};
# endif

#define YYPACT_NINF -87

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-87)))

#define YYTABLE_NINF -74

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      15,    20,    -1,    90,    90,     9,    22,   -87,   -87,   -87,
      31,   -87,    28,   -45,     2,   -45,    30,   -87,   -45,   -87,
     -87,   -45,   -45,   -45,    29,   -87,   -87,   -87,    33,    90,
     -87,   -87,   -87,    10,   -87,    11,   -87,   -87,   -87,   135,
       3,   -87,   137,   170,   -87,    35,    36,   -87,   -87,   -87,
     -45,   -87,     6,   -87,   -87,   -87,   -87,   -87,   -87,     0,
     -87,   230,    44,    43,     1,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,    90,   -87,   -87,
      90,   -87,    15,    60,   137,   -87,    57,   -87,   -87,   -87,
     186,     9,   -87,   137,   -87,   137,   -87,    15,     3,   -87,
      17,   -87,    38,    72,    70,    99,    24,    26,    83,    77,
      84,   -26,   -87,    60,   137,    97,   -87,    87,     9,   -87,
     -87,   137,   -87,    90,   101,   -87,   -87,   -87,   103,   -87,
      49,   -87,   -87,   105,   200,    55,    15,    15,   137,    58,
      15,    61,   -19,   -87,    15,    68,   -87,   137,   -87,   -14,
     -87,    69,   -87,   -87,   -87
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      73,     0,    25,     0,     0,     0,     0,    22,    23,    24,
       0,     2,     3,     0,     0,    14,     0,    15,     0,    42,
      43,     0,     0,     0,     0,    29,    30,    31,     0,     0,
      72,    70,    34,     0,    71,     0,    69,    27,    28,     0,
      50,    66,     0,     0,    25,     0,     0,     1,     4,    11,
       0,     5,     0,     7,    21,     6,     8,     9,    10,     0,
      35,     0,     0,     0,     0,    51,    52,    61,    57,    53,
      54,    56,    55,    58,    59,    60,    62,     0,    64,    63,
       0,    68,    73,     0,     0,    12,    26,    13,    18,    16,
      17,     0,    67,     0,    33,     0,    32,    73,    49,    65,
       0,    26,     0,    40,     0,     0,     0,     0,     0,     0,
       0,     0,    80,     0,     0,     0,    19,     0,    44,    46,
      39,     0,    36,     0,     0,    74,    76,    75,     0,    41,
       0,    20,    45,    37,     0,     0,    73,    73,     0,     0,
      73,     0,     0,    38,    73,     0,    81,     0,    47,     0,
      79,     0,    77,    78,    48
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -87,   -87,   -12,   -87,   100,   -87,   -87,   -87,   -87,    -2,
     -87,   -47,   -40,   -87,   -87,   -87,    -7,   -87,   -86,   -87,
      16,   -87,   -87,    -3,   -87,   -87,    56,    67,   -87,   -87,
       7,    18,   -87,   -87
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    10,    11,    12,    51,    13,    14,    87,    88,    15,
      16,    17,    36,    37,    38,    96,   110,    94,   104,    18,
     107,    19,    20,    39,    77,    80,    40,    41,    42,    21,
     126,   127,    22,    23
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      48,    43,    81,    45,   147,    89,   123,   108,   124,    25,
      26,    27,    28,    86,    49,    50,    44,    29,   123,   117,
     124,     1,     2,    78,    79,    30,    61,    24,   129,    46,
     -26,    47,   125,    52,     1,     2,   102,    54,    59,   148,
      60,    62,    63,    83,   103,    31,    32,    84,     3,    90,
       4,     5,    33,   103,    34,   109,     6,    93,    95,    91,
      97,     3,    35,     4,     5,   103,   128,   101,   105,     6,
     100,     7,     8,     9,   103,   112,   113,     7,     8,     9,
     114,   133,   115,   118,   119,   111,   121,   -73,   -73,   106,
       7,     8,     9,    25,    26,    27,    28,   120,   109,   131,
     122,    29,    25,    26,    27,    28,   130,   151,   137,    30,
     135,   116,   136,   138,   140,    53,   106,   144,    55,   146,
     134,    56,    57,    58,   141,   142,   150,   154,   145,    31,
      32,   143,   149,    98,   132,     0,    33,     0,    34,    32,
      25,    26,    27,    28,    64,    33,    35,    99,     0,     0,
      85,     0,     0,    65,    66,    35,   152,    67,     0,    68,
      69,    70,    71,    72,    73,    74,     0,   153,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    32,     0,    82,
       0,     0,    75,    33,     0,     0,    76,     0,    65,    66,
       0,     0,    67,    35,    68,    69,    70,    71,    72,    73,
      74,     0,     0,     0,    65,    66,     0,     0,    67,   139,
      68,    69,    70,    71,    72,    73,    74,    75,    65,    66,
       0,    76,    67,     0,    68,    69,    70,    71,    72,    73,
      74,     0,     0,    75,     0,     0,     0,    76,     0,     0,
       0,     0,    92,     0,     0,     0,     0,    75,    65,    66,
       0,    76,    67,     0,    68,    69,    70,    71,    72,    73,
      74,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    75,     0,     0,
       0,    76
};

static const yytype_int16 yycheck[] =
{
      12,     4,    42,     5,    23,    52,    32,    93,    34,     3,
       4,     5,     6,     7,    59,    60,     7,    11,    32,   105,
      34,     6,     7,    20,    21,    19,    29,     7,   114,     7,
      31,     0,    58,    31,     6,     7,    83,     7,     9,    58,
       7,    31,    31,     8,    84,    39,    40,    11,    33,    52,
      35,    36,    46,    93,    48,    95,    41,    13,    15,    59,
      59,    33,    56,    35,    36,   105,   113,     7,    11,    41,
      82,    62,    63,    64,   114,    58,    38,    62,    63,    64,
       8,   121,    12,    59,    58,    97,     9,    59,    60,    91,
      62,    63,    64,     3,     4,     5,     6,    14,   138,    12,
      16,    11,     3,     4,     5,     6,     9,   147,    59,    19,
       9,    12,     9,     8,    59,    15,   118,    59,    18,    58,
     123,    21,    22,    23,   136,   137,    58,    58,   140,    39,
      40,   138,   144,    77,   118,    -1,    46,    -1,    48,    40,
       3,     4,     5,     6,     9,    46,    56,    80,    -1,    -1,
      50,    -1,    -1,    18,    19,    56,   149,    22,    -1,    24,
      25,    26,    27,    28,    29,    30,    -1,   149,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,     9,
      -1,    -1,    47,    46,    -1,    -1,    51,    -1,    18,    19,
      -1,    -1,    22,    56,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    18,    19,    -1,    -1,    22,     9,
      24,    25,    26,    27,    28,    29,    30,    47,    18,    19,
      -1,    51,    22,    -1,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    47,    -1,    -1,    -1,    51,    -1,    -1,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    47,    18,    19,
      -1,    51,    22,    -1,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,
      -1,    51
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,     7,    33,    35,    36,    41,    62,    63,    64,
      66,    67,    68,    70,    71,    74,    75,    76,    84,    86,
      87,    94,    97,    98,     7,     3,     4,     5,     6,    11,
      19,    39,    40,    46,    48,    56,    77,    78,    79,    88,
      91,    92,    93,    88,     7,    74,     7,     0,    67,    59,
      60,    69,    31,    69,     7,    69,    69,    69,    69,     9,
       7,    88,    31,    31,     9,    18,    19,    22,    24,    25,
      26,    27,    28,    29,    30,    47,    51,    89,    20,    21,
      90,    77,     9,     8,    11,    69,     7,    72,    73,    76,
      88,    59,    12,    13,    82,    15,    80,    59,    91,    92,
      67,     7,    76,    77,    83,    11,    74,    85,    83,    77,
      81,    67,    58,    38,     8,    12,    12,    83,    59,    58,
      14,     9,    16,    32,    34,    58,    95,    96,    76,    83,
       9,    12,    85,    77,    88,     9,     9,    59,     8,     9,
      59,    67,    67,    81,    59,    67,    58,    23,    58,    67,
      58,    77,    95,    96,    58
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    65,    66,    67,    67,    68,    68,    68,    68,    68,
      68,    69,    69,    70,    71,    71,    72,    72,    72,    73,
      73,    74,    75,    75,    75,    75,    76,    77,    77,    78,
      78,    78,    78,    78,    78,    79,    80,    81,    81,    82,
      83,    83,    84,    84,    85,    85,    86,    87,    87,    88,
      88,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    90,    90,    91,    91,    92,    92,    92,
      93,    93,    93,    94,    94,    94,    94,    95,    95,    96,
      97,    98
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     2,     2,     2,     2,     2,
       2,     1,     2,     3,     1,     1,     1,     1,     1,     3,
       4,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     1,     2,     3,     3,     5,     3,
       1,     3,     1,     1,     2,     3,     6,     9,    11,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     3,     2,     1,
       1,     1,     1,     0,     6,     6,     6,     6,     6,     5,
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
#line 28 "af.y" /* yacc.c:1646  */
    {}
#line 1484 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 31 "af.y" /* yacc.c:1646  */
    {}
#line 1490 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 32 "af.y" /* yacc.c:1646  */
    {}
#line 1496 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 35 "af.y" /* yacc.c:1646  */
    {}
#line 1502 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 36 "af.y" /* yacc.c:1646  */
    {}
#line 1508 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 37 "af.y" /* yacc.c:1646  */
    {}
#line 1514 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 38 "af.y" /* yacc.c:1646  */
    {}
#line 1520 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 39 "af.y" /* yacc.c:1646  */
    {}
#line 1526 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 40 "af.y" /* yacc.c:1646  */
    {}
#line 1532 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 43 "af.y" /* yacc.c:1646  */
    {}
#line 1538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 44 "af.y" /* yacc.c:1646  */
    {}
#line 1544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 47 "af.y" /* yacc.c:1646  */
    {}
#line 1550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 54 "af.y" /* yacc.c:1646  */
    {}
#line 1556 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 55 "af.y" /* yacc.c:1646  */
    {}
#line 1562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 56 "af.y" /* yacc.c:1646  */
    {}
#line 1568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 59 "af.y" /* yacc.c:1646  */
    {}
#line 1574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 60 "af.y" /* yacc.c:1646  */
    {}
#line 1580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 63 "af.y" /* yacc.c:1646  */
    {}
#line 1586 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 66 "af.y" /* yacc.c:1646  */
    {printf("DEC INT\n");}
#line 1592 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 67 "af.y" /* yacc.c:1646  */
    {printf("DEC REAL\n");}
#line 1598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 68 "af.y" /* yacc.c:1646  */
    {printf("DEC STR\n");}
#line 1604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 69 "af.y" /* yacc.c:1646  */
    {printf("DEC TIPO D-E-F-I-N-D-O\n");}
#line 1610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 72 "af.y" /* yacc.c:1646  */
    {}
#line 1616 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 75 "af.y" /* yacc.c:1646  */
    {}
#line 1622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 76 "af.y" /* yacc.c:1646  */
    {}
#line 1628 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 79 "af.y" /* yacc.c:1646  */
    {}
#line 1634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 80 "af.y" /* yacc.c:1646  */
    {}
#line 1640 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 81 "af.y" /* yacc.c:1646  */
    {}
#line 1646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 82 "af.y" /* yacc.c:1646  */
    {}
#line 1652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 83 "af.y" /* yacc.c:1646  */
    {}
#line 1658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 84 "af.y" /* yacc.c:1646  */
    {}
#line 1664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 87 "af.y" /* yacc.c:1646  */
    {}
#line 1670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 90 "af.y" /* yacc.c:1646  */
    {}
#line 1676 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 93 "af.y" /* yacc.c:1646  */
    {}
#line 1682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 94 "af.y" /* yacc.c:1646  */
    {}
#line 1688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 97 "af.y" /* yacc.c:1646  */
    {}
#line 1694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 100 "af.y" /* yacc.c:1646  */
    {}
#line 1700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 101 "af.y" /* yacc.c:1646  */
    {}
#line 1706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 105 "af.y" /* yacc.c:1646  */
    {}
#line 1712 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 106 "af.y" /* yacc.c:1646  */
    {}
#line 1718 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 113 "af.y" /* yacc.c:1646  */
    {printf("definiu tipo\n");}
#line 1724 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 116 "af.y" /* yacc.c:1646  */
    {}
#line 1730 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 117 "af.y" /* yacc.c:1646  */
    {}
#line 1736 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 120 "af.y" /* yacc.c:1646  */
    {}
#line 1742 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 121 "af.y" /* yacc.c:1646  */
    {}
#line 1748 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 124 "af.y" /* yacc.c:1646  */
    {}
#line 1754 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 125 "af.y" /* yacc.c:1646  */
    {}
#line 1760 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 126 "af.y" /* yacc.c:1646  */
    {}
#line 1766 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 127 "af.y" /* yacc.c:1646  */
    {}
#line 1772 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 128 "af.y" /* yacc.c:1646  */
    {}
#line 1778 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 129 "af.y" /* yacc.c:1646  */
    {}
#line 1784 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 130 "af.y" /* yacc.c:1646  */
    {}
#line 1790 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 131 "af.y" /* yacc.c:1646  */
    {}
#line 1796 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 132 "af.y" /* yacc.c:1646  */
    {}
#line 1802 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 133 "af.y" /* yacc.c:1646  */
    {}
#line 1808 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 134 "af.y" /* yacc.c:1646  */
    {}
#line 1814 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 135 "af.y" /* yacc.c:1646  */
    {}
#line 1820 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 138 "af.y" /* yacc.c:1646  */
    {}
#line 1826 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 139 "af.y" /* yacc.c:1646  */
    {}
#line 1832 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 142 "af.y" /* yacc.c:1646  */
    {}
#line 1838 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 143 "af.y" /* yacc.c:1646  */
    {}
#line 1844 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 146 "af.y" /* yacc.c:1646  */
    {}
#line 1850 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 147 "af.y" /* yacc.c:1646  */
    {}
#line 1856 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 148 "af.y" /* yacc.c:1646  */
    {}
#line 1862 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 151 "af.y" /* yacc.c:1646  */
    {}
#line 1868 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 152 "af.y" /* yacc.c:1646  */
    {}
#line 1874 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 153 "af.y" /* yacc.c:1646  */
    {}
#line 1880 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 158 "af.y" /* yacc.c:1646  */
    {printf("if\n");}
#line 1886 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 159 "af.y" /* yacc.c:1646  */
    {printf("if..else \n");}
#line 1892 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 160 "af.y" /* yacc.c:1646  */
    {printf("if..elif..else \n");}
#line 1898 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 167 "af.y" /* yacc.c:1646  */
    {}
#line 1904 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 170 "af.y" /* yacc.c:1646  */
    {printf("while \n");}
#line 1910 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 173 "af.y" /* yacc.c:1646  */
    {printf("for \n");}
#line 1916 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1920 "y.tab.c" /* yacc.c:1646  */
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
#line 176 "af.y" /* yacc.c:1906  */



int yyerror (char *msg) {
	fprintf (stderr, "Line %d: %s at '%s'\n", line_number, msg, yytext);
	return 0;
}


int main() {
    yyparse();
    return 0;
}
