/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
    DIGITO = 258,
    NUMERO_INT = 259,
    NUMERO_REAL = 260,
    IDENT = 261,
    COMENTARIO = 262,
    SIMBOLO_PROGRAM = 263,
    SIMBOLO_BEGIN = 264,
    SIMBOLO_END = 265,
    SIMBOLO_CONST = 266,
    SIMBOLO_VAR = 267,
    SIMBOLO_REAL = 268,
    SIMBOLO_INTEGER = 269,
    SIMBOLO_PROCEDURE = 270,
    SIMBOLO_ELSE = 271,
    SIMBOLO_READ = 272,
    SIMBOLO_WRITE = 273,
    SIMBOLO_WHILE = 274,
    SIMBOLO_IF = 275,
    SIMBOLO_THEN = 276,
    SIMBOLO_DO = 277,
    SIMBOLO_FOR = 278,
    SIMBOLO_TO = 279,
    DOIS_PONTOS = 280,
    IGUAL = 281,
    PONTO_VIRGULA = 282,
    VIRGULA = 283,
    MULT = 284,
    DIV = 285,
    SOMA = 286,
    SUBTRACAO = 287,
    ABRE_P = 288,
    FECHA_P = 289,
    MAIOR = 290,
    MENOR = 291,
    PONTO = 292
  };
#endif
/* Tokens.  */
#define DIGITO 258
#define NUMERO_INT 259
#define NUMERO_REAL 260
#define IDENT 261
#define COMENTARIO 262
#define SIMBOLO_PROGRAM 263
#define SIMBOLO_BEGIN 264
#define SIMBOLO_END 265
#define SIMBOLO_CONST 266
#define SIMBOLO_VAR 267
#define SIMBOLO_REAL 268
#define SIMBOLO_INTEGER 269
#define SIMBOLO_PROCEDURE 270
#define SIMBOLO_ELSE 271
#define SIMBOLO_READ 272
#define SIMBOLO_WRITE 273
#define SIMBOLO_WHILE 274
#define SIMBOLO_IF 275
#define SIMBOLO_THEN 276
#define SIMBOLO_DO 277
#define SIMBOLO_FOR 278
#define SIMBOLO_TO 279
#define DOIS_PONTOS 280
#define IGUAL 281
#define PONTO_VIRGULA 282
#define VIRGULA 283
#define MULT 284
#define DIV 285
#define SOMA 286
#define SUBTRACAO 287
#define ABRE_P 288
#define FECHA_P 289
#define MAIOR 290
#define MENOR 291
#define PONTO 292

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
