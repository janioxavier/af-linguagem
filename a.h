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

#ifndef YY_YY_A_H_INCLUDED
# define YY_YY_A_H_INCLUDED
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
#line 6 "af.y" /* yacc.c:1909  */

    int i;
    float f;
    char* str;

#line 188 "a.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_A_H_INCLUDED  */
