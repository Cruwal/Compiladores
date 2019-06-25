%{
void yyerror(char *s);
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

extern int yylex();
extern int yylineno();
extern void create_hash();
extern char* yytext;
extern int nlines;

int yydebug=1; 
%}


%token DIGITO NUMERO_INT NUMERO_REAL IDENT COMENTARIO SIMBOLO_PROGRAM SIMBOLO_BEGIN SIMBOLO_END 
%token SIMBOLO_CONST SIMBOLO_VAR SIMBOLO_REAL SIMBOLO_INTEGER SIMBOLO_PROCEDURE SIMBOLO_ELSE SIMBOLO_READ SIMBOLO_WRITE SIMBOLO_WHILE SIMBOLO_IF 
%token SIMBOLO_THEN SIMBOLO_DO SIMBOLO_FOR SIMBOLO_TO
%token DOIS_PONTOS IGUAL PONTO_VIRGULA VIRGULA MULT DIV SOMA SUBTRACAO ABRE_P FECHA_P MAIOR MENOR PONTO

// Aqui o identificador de começo
%start programa

%%
programa: SIMBOLO_PROGRAM IDENT PONTO_VIRGULA corpo PONTO {printf("Programa analisado com sucesso!\n");}
    | error IDENT PONTO_VIRGULA corpo PONTO {yyerrok; printf("Erro sintatico: Identificador 'program' não encontrado na linha %d\n", nlines);}
    | SIMBOLO_PROGRAM error PONTO_VIRGULA corpo PONTO {yyerrok; printf("Erro sintatico: Identificador do programa não encontrado.\n");}
    | SIMBOLO_PROGRAM IDENT error corpo PONTO {yyerrok; printf("Erro sintatico: Linha %d: ';' ausente.\n", nlines);}
    | SIMBOLO_PROGRAM IDENT PONTO_VIRGULA error PONTO {yyerrok; printf("Erro sintatico: corpo do programa mal declarado.\n");}
    | SIMBOLO_PROGRAM IDENT PONTO_VIRGULA corpo error {yyerrok; printf("Erro sintatico: Linha %d: '.' em fim de programa ausente.\n", nlines);}
    | error {printf("Erro sintático 1\n");}
    ;
corpo: dc SIMBOLO_BEGIN comandos SIMBOLO_END 
    | error SIMBOLO_BEGIN comandos SIMBOLO_END {yyerrok; printf("Erro sintatico: Linha %d: erro na declaracao.\n", nlines);}
    | dc error comandos SIMBOLO_END {yyerrok; printf("Erro sintatico: Linha %d: ausencia do comando 'begin'.\n", nlines); /*yyerrok; printf("'begin' ausente.\n");*/}
    | dc SIMBOLO_BEGIN error SIMBOLO_END {yyerrok; printf("Erro sintatico na construcao dos comandos.\n");}
    | dc SIMBOLO_BEGIN comandos error  {yyerrok; printf("Erro sintatico: Linha %d: comando 'end' ausente.\n", nlines); /*yyerrok; printf("'end' ausente.\n");*/}
    | error {printf("Erro sintático 2\n");}
    ;
dc: dc_c dc_v dc_p
    | error dc_v dc_p {yyerrok; printf("Erro sintatico: Linha %d: problemas na declaracao de variaveis.\n", nlines);}
    | dc_c error dc_p {yyerrok; printf("Erro sintatico: Linha %d: problemas na declaracao de constantes.\n", nlines);}
    | dc_c dc_v error {yyerrok; printf("Erro sintatico: Linha %d: problemas na declaracao de procedimentos. \n", nlines);}
    ;
dc_c: SIMBOLO_CONST IDENT IGUAL numero PONTO_VIRGULA dc_c
    | error IDENT IGUAL numero PONTO_VIRGULA dc_c {yyerrok; printf("Erro sintatico: Linha %d: comando 'const' ausente.\n", nlines);}
    | SIMBOLO_CONST error IGUAL numero PONTO_VIRGULA dc_c {yyerrok; printf("Erro sintatico: Linha %d: Identificador ausente.\n", nlines);}
    | SIMBOLO_CONST IDENT error numero PONTO_VIRGULA dc_c {yyerrok; printf("Erro sintatico: Linha %d: '='' ausente. \n", nlines);}
    | SIMBOLO_CONST IDENT IGUAL error PONTO_VIRGULA dc_c {yyerrok; printf("Erro sintatico: Linha %d: Erro na construcao de numero.\n", nlines);}
    | SIMBOLO_CONST IDENT IGUAL numero error dc_c {yyerrok; printf("Erro sintatico: Linha %d: ';' ausente. \n", nlines);}
    | SIMBOLO_CONST IDENT IGUAL numero PONTO_VIRGULA error {yyerrok; printf("Erro sintatico: Linha %d: problemas na declaracao de constantes.\n", nlines);}
    | error {printf("Erro sintático 3\n");}
    | 
    ;
dc_v: SIMBOLO_VAR variaveis DOIS_PONTOS tipo_var PONTO_VIRGULA dc_v
    | error variaveis DOIS_PONTOS tipo_var PONTO_VIRGULA dc_v {yyerrok; printf("Erro sintatico: Linha %d: 'var' ausente. \n", nlines);}
    | SIMBOLO_VAR error DOIS_PONTOS tipo_var PONTO_VIRGULA dc_v {yyerrok; printf("Erro sintatico: Linha %d: problemas na declaracao das variaveis.\n", nlines);}
    | SIMBOLO_VAR variaveis error tipo_var PONTO_VIRGULA dc_v {yyerrok; printf("Erro sintatico: Linha %d: ':' ausente. \n", nlines);}
    | SIMBOLO_VAR variaveis DOIS_PONTOS error PONTO_VIRGULA dc_v {yyerrok; printf("Erro sintatico: Linha %d: problemas na declaracao do tipo da variavel\n", nlines);}
    | SIMBOLO_VAR variaveis DOIS_PONTOS tipo_var error dc_v {yyerrok; printf("Erro sintatico: Linha %d: ';' ausente. \n", nlines);}
    | SIMBOLO_VAR variaveis DOIS_PONTOS tipo_var PONTO_VIRGULA error {yyerrok; printf("Erro sintatico: Linha %d: problemas na declaracao de variaveis\n", nlines);}
    | error {printf("Erro sintático 4\n");}
    |
    ;
tipo_var: SIMBOLO_REAL
    | SIMBOLO_INTEGER
    | error {printf("Erro sintatico: Linha %d: Tipos permitidos: 'real' ou 'integer'\n", nlines);}
    ;
variaveis: IDENT mais_var 
    ;
mais_var: VIRGULA variaveis
    |
    | error variaveis {yyerrok; printf("Erro sintatico: Linha %d: ',' ausente.\n", nlines);}
    | VIRGULA error {yyerrok; printf("Erro sintatico: Linha %d: problemas na declaracao de variaveis.\n", nlines);}
    | error {printf("Erro sintático 5\n");}
    ;
dc_p: SIMBOLO_PROCEDURE IDENT parametros PONTO_VIRGULA corpo_p dc_p
    | error IDENT parametros PONTO_VIRGULA corpo_p dc_p {yyerrok; printf("Erro sintatico: Linha %d: 'procedure' esperado.\n", nlines);}
    | SIMBOLO_PROCEDURE error parametros PONTO_VIRGULA corpo_p dc_p {yyerrok; printf("Erro sintatico: Linha %d: Identificador esperado.\n", nlines);}
    | SIMBOLO_PROCEDURE IDENT error PONTO_VIRGULA corpo_p dc_p {yyerrok; printf("Erro sintatico: Linha %d: problemas na declaracao dos parametros.\n", nlines);}
    | SIMBOLO_PROCEDURE IDENT parametros error corpo_p dc_p {yyerrok; printf("Erro sintatico: Linha %d: ';' esperado.\n", nlines);}
    | SIMBOLO_PROCEDURE IDENT parametros PONTO_VIRGULA error dc_p {yyerrok; printf("Erro sintatico: problemas na declaracao do corpo do programa.\n");}
    | SIMBOLO_PROCEDURE IDENT parametros PONTO_VIRGULA corpo_p error {yyerrok; printf("Erro sintatico: problemas na declaracao de procedimentos.\n");}
    |
    | error {printf("Erro sintático 6\n");}
    ;
parametros: ABRE_P lista_par FECHA_P
    | error lista_par FECHA_P {yyerrok; printf("Erro sintatico: Linha %d: '(' esperado.\n", nlines);}
    | ABRE_P error FECHA_P {yyerrok; printf("Erro sintatico: Linha %d: identificador esperado.\n", nlines);}
    | ABRE_P lista_par error {yyerrok; printf("Erro sintatico: Linha %d: ')' esperado.\n", nlines);}
    |
    | error {printf("Erro sintático 7\n");}
    ;
lista_par: variaveis DOIS_PONTOS tipo_var mais_par
    | error DOIS_PONTOS tipo_var mais_par {yyerrok; printf("Erro sintatico: Linha %d: identificador esperado.\n", nlines);}
    | variaveis error tipo_var mais_par {yyerrok; printf("Erro sintatico: Linha %d: ':' esperado.\n", nlines);}
    | variaveis DOIS_PONTOS error mais_par {yyerrok; printf("Erro sintatico: Linha %d: tipo de varável não declarado.\n", nlines);}
    | variaveis DOIS_PONTOS tipo_var error {yyerrok; printf("Erro sintatico: Linha %d: declaração inválida.\n", nlines);}
    | error {printf("Erro sintático 8\n");}
    ;
mais_par: PONTO_VIRGULA lista_par
    | error lista_par {yyerrok; printf("Erro sintatico: Linha %d: ':' esperado.\n", nlines);}
    |
    | error {printf("Erro sintático 9\n");}
    ;
corpo_p: dc_loc SIMBOLO_BEGIN comandos SIMBOLO_END PONTO_VIRGULA
    | error SIMBOLO_BEGIN comandos SIMBOLO_END PONTO_VIRGULA {yyerrok; printf("Erro sintatico: Linha %d: declaração esperada.\n", nlines);}
    | dc_loc error comandos SIMBOLO_END PONTO_VIRGULA {yyerrok; printf("Erro sintatico: Linha %d: 'BEGIN' esperado.\n", nlines);}
    | dc_loc SIMBOLO_BEGIN error SIMBOLO_END PONTO_VIRGULA {yyerrok; printf("Erro sintatico: Linha %d: comando válido esperado.\n", nlines);}
    | dc_loc SIMBOLO_BEGIN comandos error PONTO_VIRGULA {yyerrok; printf("Erro sintatico: Linha %d: 'END' esperado.\n", nlines);}
    | dc_loc SIMBOLO_BEGIN comandos SIMBOLO_END error {yyerrok; printf("Erro sintatico: Linha %d: ';' esperado.\n", nlines);}
    | error {printf("Erro sintático 10\n");}
    ;
dc_loc: dc_v
    ;
lista_arg: ABRE_P argumentos FECHA_P
    | error argumentos FECHA_P {yyerrok; printf("Erro sintatico: Linha %d: '(' esperado.\n", nlines);}
    | ABRE_P error FECHA_P {yyerrok; printf("Erro sintatico: Linha %d: argumento válido esperado.\n", nlines);}
    | ABRE_P argumentos error {yyerrok; printf("Erro sintatico: Linha %d: ')' esperado.\n", nlines);}
    |
    | error {printf("Erro sintático 12\n");}
    ;
argumentos: IDENT mais_ident
    | error mais_ident {yyerrok; printf("Erro sintatico: Linha %d: identificador válido esperado.\n", nlines);}
    | IDENT error {yyerrok; printf("Erro sintatico: Linha %d: argumento esperado.\n", nlines);}
    | error {printf("Erro sintático 13\n");}
    ;
mais_ident: PONTO_VIRGULA argumentos
    | error argumentos {yyerrok; printf("Erro sintatico: Linha %d: ';' esperado.\n", nlines);}
    |
    | error {printf("Erro sintático 14\n");}
    ;
pfalsa: SIMBOLO_ELSE cmd
    | error cmd {yyerrok; printf("Erro sintatico: Linha %d: 'ELSE' esperado.\n", nlines);}
    | SIMBOLO_ELSE error {yyerrok; printf("Erro sintatico: Linha %d: comando válido esperado.\n", nlines);}
    |
    | error {printf("Erro sintático 15\n");}
    ;
comandos: cmd PONTO_VIRGULA comandos
    | error PONTO_VIRGULA comandos {yyerrok; printf("Erro sintatico: Linha %d: comando válido esperado.\n", nlines);}
    | cmd error comandos {yyerrok; printf("Erro sintatico: Linha %d: ';' esperado.\n", nlines);}
    | cmd PONTO_VIRGULA error {yyerrok; printf("Erro sintatico: Linha %d: comando válido esperado.\n", nlines);}
    |
    | error {printf("Erro sintático 16\n");}
    ;
cmd: SIMBOLO_READ ABRE_P variaveis FECHA_P
    | SIMBOLO_WRITE ABRE_P variaveis FECHA_P
    | SIMBOLO_WHILE ABRE_P condicao FECHA_P SIMBOLO_DO cmd
    | SIMBOLO_IF condicao SIMBOLO_THEN cmd pfalsa
    | IDENT DOIS_PONTOS IGUAL expressao
    | IDENT lista_arg
    | SIMBOLO_BEGIN comandos SIMBOLO_END
    | SIMBOLO_FOR IDENT DOIS_PONTOS IGUAL NUMERO_INT SIMBOLO_TO NUMERO_INT SIMBOLO_DO cmd
    | error {printf("Erro sintático 17\n");}
    ;
condicao: expressao relacao expressao
    | error relacao expressao {yyerrok; printf("Erro sintatico: Linha %d: problemas na construcao da expressao.\n", nlines);}
    | expressao error expressao {yyerrok; printf("Erro sintatico: Linha %d: problemas na construcao da relacao.\n", nlines);}
    | expressao relacao error {yyerrok; printf("Erro sintatico: Linha %d: problemas na construcao da expressao.\n", nlines);}
    | error {printf("Erro sintático 18\n");}
    ;
relacao: IGUAL
    | MENOR MAIOR
    | MAIOR IGUAL
    | MENOR IGUAL
    | MAIOR
    | MENOR
    ;
expressao: termo outros_termos
    | error outros_termos {yyerrok; printf("Erro sintatico: Linha %d: problemas na construcao do termo.\n", nlines);}
    | termo error {yyerrok; printf("Erro sintatico: Linha %d: problemas na construcao do termo.\n", nlines);}
    | error {printf("Erro sintático 19\n");}
    ;
op_un: SOMA
    | SUBTRACAO
    |
    ;
outros_termos: op_ad termo outros_termos
    | error termo outros_termos {yyerrok; printf("Erro sintatico: Linha %d: problemas na declaracao de operacao de soma ou subtracao.\n", nlines);}
    | op_ad error outros_termos {yyerrok; printf("Erro sintatico: Linha %d: problema na declaracao dos termos.\n", nlines);}
    | op_ad termo error {yyerrok; printf("Erro sintatico: Linha %d: erro na declaracao de outros termos.\n", nlines);}
    |
    | error {printf("Erro sintático 20\n");}
    ;
op_ad: SOMA
    | SUBTRACAO
    ;
termo: op_un fator mais_fatores
    | error fator mais_fatores {yyerrok; printf("Erro sintatico: Linha %d: problemas na declaracao de operacao de soma ou subtracao.\n", nlines);}
    | op_un error mais_fatores {yyerrok; printf("Erro sintatico: Linha %d: problema na declaracao dos termos.\n", nlines);}
    | op_un fator error {yyerrok; printf("Erro sintatico: Linha %d: erro na declaracao de mais fatores.\n", nlines);}
    | error {printf("Erro sintático 21\n");}
    ;
mais_fatores: op_mul fator mais_fatores
    |
    | error {printf("Erro sintático 22\n");}
    ;
op_mul: MULT
    | DIV
    | error {printf("Erro sintático 23\n");}
    ;
fator: IDENT
    | numero
    | ABRE_P expressao FECHA_P
    ;
numero: NUMERO_INT
    | NUMERO_REAL
    | error {printf("Erro sintático 24\n");}
    ;

%%

// Função que deveria imprimir a mesagem de erro
void yyerror(char *s){
    //printf("%s\n", s);
    fprintf(stderr, "%s\n", s);
}


int main(int argc, char const *argv[]) {
    create_hash();
  int ntoken, vtoken;

  int result = yyparse();

  return 0;

}