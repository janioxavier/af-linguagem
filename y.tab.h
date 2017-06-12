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
    PLUS = 275,
    MINUS = 276,
    TIMES = 277,
    DIV = 278,
    NEQ = 279,
    RETURN = 280,
    EQ = 281,
    LT = 282,
    LE = 283,
    GT = 284,
    GE = 285,
    AND = 286,
    OR = 287,
    ASSIGN = 288,
    ELIF = 289,
    IF = 290,
    ELSE = 291,
    WHILE = 292,
    FOR = 293,
    SKIP = 294,
    IN = 295,
    NOT = 296,
    NIL = 297,
    DEF = 298,
    TRUE = 299,
    FALSE = 300,
    BREAK = 301,
    SET = 302,
    LIST = 303,
    DIVM = 304,
    PERC = 305,
    ADDPERC = 306,
    SUBPERC = 307,
    ADDEQ = 308,
    SUBEQ = 309,
    DIVEQ = 310,
    MULTEQ = 311,
    DIVMEQ = 312,
    DICT = 313,
    MAIN = 314,
    END = 315,
    ENDLINE = 316,
    CONTSTMT = 317,
    DIVIDE = 318,
    PRINTLN = 319,
    DECINT = 320,
    DECREAL = 321,
    DECSTR = 322
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
#define PLUS 275
#define MINUS 276
#define TIMES 277
#define DIV 278
#define NEQ 279
#define RETURN 280
#define EQ 281
#define LT 282
#define LE 283
#define GT 284
#define GE 285
#define AND 286
#define OR 287
#define ASSIGN 288
#define ELIF 289
#define IF 290
#define ELSE 291
#define WHILE 292
#define FOR 293
#define SKIP 294
#define IN 295
#define NOT 296
#define NIL 297
#define DEF 298
#define TRUE 299
#define FALSE 300
#define BREAK 301
#define SET 302
#define LIST 303
#define DIVM 304
#define PERC 305
#define ADDPERC 306
#define SUBPERC 307
#define ADDEQ 308
#define SUBEQ 309
#define DIVEQ 310
#define MULTEQ 311
#define DIVMEQ 312
#define DICT 313
#define MAIN 314
#define END 315
#define ENDLINE 316
#define CONTSTMT 317
#define DIVIDE 318
#define PRINTLN 319
#define DECINT 320
#define DECREAL 321
#define DECSTR 322

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 21 "af.y" /* yacc.c:1909  */

    int iValor;
    double rValor;
    char * sValor;

#line 194 "y.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
