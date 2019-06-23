%{
void yyerror (char *s); //eliminando warning
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

/*
%token DIGITO NUMERO_INT NUMERO_REAL IDENT COMENTARIO NUMERO_INT NUMERO_REAL ATRIBUICAO IGUAL PONTO_VIRGULA SIMBOLO_VIRGULA DOIS_PONTOS 
MULT DIV SOMA SUB SIMBOLO_APAR SIMBOLO_FPAR DIFERENTE MAIOR_IGUAL MENOR_IGUAL MAIOR MENOR PONTO SIMBOLO_PROGRAM SIMBOLO_BEGIN SIMBOLO_END 
SIMBOLO_CONST SIMBOLO_VAR SIMBOLO_REAL SIMBOLO_INTEGER SIMBOLO_PROCEDURE SIMBOLO_ELSE SIMBOLO_READ SIMBOLO_WRITE SIMBOLO_WHILE SIMBOLO_IF 
SIMBOLO_THEN SIMBOLO_DO SIMBOLO_FOR SIMBOLO_TO
*/

%token DIGITO NUMERO_INT NUMERO_REAL IDENT COMENTARIO SIMBOLO_PROGRAM SIMBOLO_BEGIN SIMBOLO_END 
SIMBOLO_CONST SIMBOLO_VAR SIMBOLO_REAL SIMBOLO_INTEGER SIMBOLO_PROCEDURE SIMBOLO_ELSE SIMBOLO_READ SIMBOLO_WRITE SIMBOLO_WHILE SIMBOLO_IF 
SIMBOLO_THEN SIMBOLO_DO SIMBOLO_FOR SIMBOLO_TO

//%left ':' '=' ';' ',' '*' '/' '+' '-' '(' ')' '<' '>' '.'
%left '-' '+' '*' '/'

// Aqui o identificador de começo
%start programa

%%

programa: SIMBOLO_PROGRAM IDENT ';' corpo '.' {printf("Programa analisado com sucesso!\n");}
    | error IDENT {yyerror("ERROR 1");}
    | SIMBOLO_PROGRAM error ';' corpo '.' {yyerror("ERROR 2");}
    | SIMBOLO_PROGRAM IDENT error corpo '.' {yyerror("ERROR 3");}
    | SIMBOLO_PROGRAM IDENT ';' error '.' {yyerror("ERROR 4");}
    | SIMBOLO_PROGRAM IDENT ';' corpo error {yyerror("ERROR 5");}
    ;
corpo: dc SIMBOLO_BEGIN comandos SIMBOLO_END
    | error SIMBOLO_BEGIN comandos SIMBOLO_END {yyerror("ERROR 6");}
    | dc error comandos SIMBOLO_END {yyerror("ERROR 7");}
    | dc SIMBOLO_BEGIN comandos error {yyerror("ERROR 8");}
    ;
dc: dc_c dc_v dc_p
    | error dc_v dc_p {yyerror("ERROR 9");}
    | dc_c error dc_p {yyerror("ERROR 10");}
    | dc_c dc_v error {yyerror("ERROR 11");}
    ;
dc_c: SIMBOLO_CONST IDENT '=' numero ';' dc_c
    | error SIMBOLO_CONST IDENT '=' numero ';' dc_c {yyerror("ERROR 12");}
    | SIMBOLO_CONST error '=' numero ';' dc_c {yyerror("ERROR 13");}
    | SIMBOLO_CONST IDENT error numero ';' dc_c {yyerror("ERROR 14");}
    | SIMBOLO_CONST IDENT '=' error ';' dc_c {yyerror("ERROR 15");}
    | SIMBOLO_CONST IDENT '=' numero error dc_c {yyerror("ERROR 16");}
    | SIMBOLO_CONST IDENT '=' numero ';' error {yyerror("ERROR 17");}
    | 
    ;
dc_v: SIMBOLO_VAR variaveis ':' tipo_var ';' dc_v
    | error variaveis ':' tipo_var ';' dc_v {yyerror("ERROR 18");}
    | SIMBOLO_VAR error ':' tipo_var ';' dc_v {yyerror("ERROR 19");}
    | SIMBOLO_VAR variaveis error tipo_var ';' dc_v {yyerror("ERROR 20");}
    | SIMBOLO_VAR variaveis ':' error ';' dc_v {yyerror("ERROR 21");}
    | SIMBOLO_VAR variaveis ':' tipo_var error dc_v {yyerror("ERROR 22");}
    | SIMBOLO_VAR variaveis ':' tipo_var ';' error {yyerror("ERROR 23");}
    |
    ;
tipo_var: SIMBOLO_REAL
    | SIMBOLO_INTEGER
    | error {yyerror("ERROR 24");}
    ;
variaveis: IDENT mais_var 
    | error mais_var {yyerror("ERROR 25");}
    | IDENT error {yyerror("ERROR 26");}
    ;
mais_var: ',' variaveis
    | error variaveis {yyerror("ERROR 27");}
    | ',' error {yyerror("ERROR 28");}
    |
    ;
dc_p: SIMBOLO_PROCEDURE IDENT parametros ';' corpo_p dc_p
    | error IDENT parametros ';' corpo_p dc_p {yyerror("ERROR 29");}
    | SIMBOLO_PROCEDURE error parametros ';' corpo_p dc_p {yyerror("ERROR 30");}
    | SIMBOLO_PROCEDURE IDENT error ';' corpo_p dc_p {yyerror("ERROR 31");}
    | SIMBOLO_PROCEDURE IDENT parametros error corpo_p dc_p {yyerror("ERROR 32");}
    | SIMBOLO_PROCEDURE IDENT parametros ';' error dc_p {yyerror("ERROR 33");}
    | SIMBOLO_PROCEDURE IDENT parametros ';' corpo_p error {yyerror("ERROR 34");}
    |
    ;
parametros: '(' lista_par ')'
    | error lista_par ')' {yyerror("ERROR 35");}
    | '(' error ')' {yyerror("ERROR 36");}
    | '(' lista_par error {yyerror("ERROR 37");}
    |
    ;
lista_par: variaveis ':' tipo_var mais_par
    | error ':' tipo_var mais_par {yyerror("ERROR 38");}
    ;
mais_par: ';' lista_par
    |
    ;
corpo_p: dc_loc SIMBOLO_BEGIN comandos SIMBOLO_END ';'
    ;
dc_loc: dc_v
    ;
lista_arg: '(' argumentos ')'
    |
    ;
argumentos: IDENT mais_ident
    ;
mais_ident: ';' argumentos
    |
    ;
pfalsa: SIMBOLO_ELSE cmd
    |
    ;
comandos: cmd ';' comandos
    |
    ;
cmd: SIMBOLO_READ '(' variaveis ')'
    | SIMBOLO_WRITE '(' variaveis ')'
    | SIMBOLO_WHILE '(' condicao ')' SIMBOLO_DO cmd
    | SIMBOLO_WHILE error condicao ')' SIMBOLO_DO cmd
    | SIMBOLO_IF condicao SIMBOLO_THEN cmd pfalsa
    | IDENT ':' '=' expressao
    | IDENT lista_arg
    | SIMBOLO_BEGIN comandos SIMBOLO_END
    | SIMBOLO_FOR IDENT ':' '=' NUMERO_INT SIMBOLO_TO NUMERO_INT SIMBOLO_DO cmd
    ;
condicao: expressao relacao expressao
    ;
relacao: '='
    | '<''>'
    | '>''='
    | '<''='
    | '>'
    | '<'
    ;
expressao: termo outros_termos
    ;
op_un: '+'
    | '-'
    |
    ;
outros_termos: op_ad termo outros_termos
    |
    ;
op_ad: '+'
    | '-'
    ;
termo: op_un fator mais_fatores
    ;
mais_fatores: op_mul fator mais_fatores
    |
    ;
op_mul: '*'
    | '/'
    ;
fator: IDENT
    | numero
    | '(' expressao ')'
    ;
numero: NUMERO_INT
    | NUMERO_REAL
    ;

%%

// Função que deveria imprimir a mesagem de erro
// Chamando essa função em syntactic.analyser.l, mas ainda não sei se da forma correta
void yyerror(char *s){
    //printf("%s\n", s);
    fprintf(stderr, "%s\n", s);
}


int main(int argc, char const *argv[]) {
    create_hash();
  int ntoken, vtoken;
//   FILE *fp = fopen("tokens.txt", "w+");

//   ntoken = yylex();
//   // Função principal, futuramente substituida pelo analisador sintático
    /*while(ntoken){
//     // Tratar os erros aqui!
//     //tratando tamanho dos identificadores
//     if((ntoken == 37) && (strlen(yytext) > 32)){
//         printf("Tamanho do identificador incompativel: %s\n", yytext);
//         fprintf(fp, "%s - ERRO_TAMANHO_ID\n", yytext);
//     }
//     else if(ntoken == -1){
//         printf("%s - ERRO\n", yytext);
//         fprintf(fp, "%s - ERRO\n", yytext);
//     }
//     else{
//         // printf("Linha %d: ", nlines);
//         // printf("\ntipo do token: %d ", ntoken);
//         // printf("\ntoken: %s\n", yytext);
//         // fprintf(fp, "%s - %s\n", yytext, tokenType(ntoken));
//     }

        ntoken = yylex();
    }*/

//   fclose(fp);
  int result = yyparse();
  //printf("parse = %d\n", result);
  return 0;
  //return yyparse(); //Inicializando o analisador sintático

}

yywrap(){}

