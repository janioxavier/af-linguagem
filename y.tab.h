/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

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
#line 22 "af.y" /* yacc.c:1909  */

    int iValor;
    double rValor;
    char * sValor;
    struct Variavel *v;

#line 195 "y.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
