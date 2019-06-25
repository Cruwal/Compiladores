%{
void yyerror(char *s); //eliminando warning

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "y.tab.h"

#define SIZE 89 //HASH com um espaço maior que o número de entrada, evitando colisões
#define RESERVERD_WORDS 17

#define TRUE 1
#define FALSE 0

int nlines=1, ntoken;

struct reserved_word{   // 'objeto' que será inserido na hash
    char * word;
    char * return_message;
    int return_value;
};

struct reserved_word reserveds_words[SIZE]; //Hash fixa e estática

// Variáveis auxiliares para controle dos slots vazios da hash
int positions_occuppieds[RESERVERD_WORDS];
int positions_counter = 0;

// Função de inserção na hash
void insert_word_aux(char * word, char * return_message, int return_value){
    int length = strlen(word);
    int asc_value = 0;

    for(int i = 0; i < length; i++){
        asc_value += (int)word[i];
        //asc_value %=  size;
    }

    //asc_value = (int)asc_value/length;

    int position = asc_value % SIZE;
    //printf("Inserindo %s na posição: %d, asc = %d\n", word, position, asc_value);
    positions_occuppieds[positions_counter] = position;
    positions_counter++;

    reserveds_words[position].word = word;  // dados inseridos
    reserveds_words[position].return_message = return_message;
    reserveds_words[position].return_value = return_value;
}

// Função que busca as palavras na hash
struct reserved_word find_reserved_words(char *word){
    int length = strlen(word);
    if(length <= 9){
        int asc_value = 0;

        for(int i = 0; i < length; i++){
            asc_value += (int)word[i];
            //asc_value /=  length ;
        }

        int position = asc_value % SIZE;
        //printf("Buscando %s na posição %d\n\n", word, position);

        if(strcmp(reserveds_words[position].word, word) == 0)
            return reserveds_words[position];
    }

    struct reserved_word nulo;
    nulo.word = "@null";

    return nulo;
}

// Função que inicializa a hash com as palavras reservadas
void insert_word(int i){
    char * word;
    char * return_message;

    if(i == 0){
        word = (char*)malloc(sizeof(char) * 7);
        word = "program";
        return_message = (char*)malloc(sizeof(char) * 15);
        return_message = "SIMBOLO_PROGRAM";
    }
    else if(i == 1){
        word = (char*)malloc(sizeof(char) * 5);
        word = "begin";
        return_message = (char*)malloc(sizeof(char) * 13);
        return_message = "SIMBOLO_BEGIN";
    }
    else if(i == 2){
        word = (char*)malloc(sizeof(char) * 3);
        word = "end";
        return_message = (char*)malloc(sizeof(char) * 11);
        return_message = "SIMBOLO_END";
    }
    else if(i == 3){
        word = (char*)malloc(sizeof(char) * 5);
        word = "const";
        return_message = (char*)malloc(sizeof(char) * 13);
        return_message = "SIMBOLO_CONST";
    }
    else if(i == 4){
        word = (char*)malloc(sizeof(char) * 3);
        word = "var";
        return_message = (char*)malloc(sizeof(char) * 11);
        return_message = "SIMBOLO_VAR";
    }
    else if(i == 5){
        word = (char*)malloc(sizeof(char) * 4);
        word = "real";
        return_message = (char*)malloc(sizeof(char) * 12);
        return_message = "SIMBOLO_REAL";
    }
    else if(i == 6){
        word = (char*)malloc(sizeof(char) * 7);
        word = "integer";
        return_message = (char*)malloc(sizeof(char) * 15);
        return_message = "SIMBOLO_INTEGER";
    }
    else if(i == 7){
        word = (char*)malloc(sizeof(char) * 9);
        word = "procedure";
        return_message = (char*)malloc(sizeof(char) * 17);
        return_message = "SIMBOLO_PROCEDURE";
    }
    else if(i == 8){
        word = (char*)malloc(sizeof(char) * 4);
        word = "else";
        return_message = (char*)malloc(sizeof(char) * 12);
        return_message = "SIMBOLO_ELSE";
    }
    else if(i == 9){
        word = (char*)malloc(sizeof(char) * 4);
        word = "read";
        return_message = (char*)malloc(sizeof(char) * 12);
        return_message = "SIMBOLO_READ";
    }
    else if(i == 10){
        word = (char*)malloc(sizeof(char) * 5);
        word = "write";
        return_message = (char*)malloc(sizeof(char) * 13);
        return_message = "SIMBOLO_WRITE";
    }
    else if(i == 11){
        word = (char*)malloc(sizeof(char) * 5);
        word = "while";
        return_message = (char*)malloc(sizeof(char) * 13);
        return_message = "SIMBOLO_WHILE";
    }
    else if(i == 12){
        word = (char*)malloc(sizeof(char) * 2);
        word = "if";
        return_message = (char*)malloc(sizeof(char) * 10);
        return_message = "SIMBOLO_IF";
    }
    else if(i == 13){
        word = (char*)malloc(sizeof(char) * 4);
        word = "then";
        return_message = (char*)malloc(sizeof(char) * 12);
        return_message = "SIMBOLO_THEN";
    }
    else if(i == 14){
        word = (char*)malloc(sizeof(char) * 2);
        word = "do";
        return_message = (char*)malloc(sizeof(char) * 10);
        return_message = "SIMBOLO_DO";
    }
    else if(i == 15){
        word = (char*)malloc(sizeof(char) * 3);
        word = "for";
        return_message = (char*)malloc(sizeof(char) * 11);
        return_message = "SIMBOLO_FOR";
    }
    else if(i == 16){
        word = (char*)malloc(sizeof(char) * 2);
        word = "to";
        return_message = (char*)malloc(sizeof(char) * 10);
        return_message = "SIMBOLO_TO";
    }

    insert_word_aux(word, return_message, (i + 3)); // Realmente inserindo na hash
}

void create_hash(){
    // Insere as palavras reservadas
    for(int i = 0; i < RESERVERD_WORDS; i++)
        insert_word(i);

    // Indica as posições vazias da hash como inválidas
    for(int i = 0; i < SIZE; i++){
        int isOcuppied = FALSE;
        for(int j = 0; j < RESERVERD_WORDS; j++){
            if(i == positions_occuppieds[j]){
                isOcuppied = TRUE;
                break;
            }
        }
        if(isOcuppied == FALSE)
            reserveds_words[i].word = "@null";
    }
}

%}

DIGITO [0-9]
NUMERO_INT -?{DIGITO}({DIGITO})*
NUMERO_REAL -?{DIGITO}+"."{DIGITO}+
IDENT [a-zA-Z][a-zA-Z0-9_]*
COMENTARIO ["{"][ \ta-zA-Z_]*["}"]

%%

[ \t]     ;
{COMENTARIO}  ;

{NUMERO_INT}+ {return NUMERO_INT;}
{NUMERO_REAL} {return NUMERO_REAL;}

{NUMERO_INT}[_@#$%&a-zA-Z]+{DIGITO}*  {ECHO; yyerror("Numero mal formatado\n"); return -1;}
{NUMERO_INT}"."{DIGITO}*[_@#$%&a-zA-Z]+{DIGITO}* {ECHO; yyerror("Numero mal formatado\n"); return -1;}

[_@#$%&]+[a-zA-Z0-9]* {ECHO; yyerror("Identificador mal formatado\n"); return -1;}
["{"][ \ta-zA-Z_]* {ECHO; yyerror("Comentário não fechado\n"); return -1;}

":" {return DOIS_PONTOS;}
"=" {return IGUAL;}
";" {return PONTO_VIRGULA;}
"," {return VIRGULA;}
"*" {return MULT;}
"/" {return DIV;}
"+" {return SOMA;}
"-" {return SUBTRACAO;}
"(" {return ABRE_P;}
")" {return FECHA_P;}
">" {return MAIOR;}
"<" {return MENOR;}
"." {return PONTO;}

{IDENT} {struct reserved_word reserved = find_reserved_words(yytext);
            if(strcmp(reserved.word, "@null") != 0){
                if(strcmp(reserved.return_message, "SIMBOLO_PROGRAM") == 0) return SIMBOLO_PROGRAM;
                else if(strcmp(reserved.return_message, "SIMBOLO_BEGIN") == 0) return SIMBOLO_BEGIN;
                else if(strcmp(reserved.return_message, "SIMBOLO_END") == 0) return SIMBOLO_END;
                else if(strcmp(reserved.return_message, "SIMBOLO_CONST") == 0) return SIMBOLO_CONST;
                else if(strcmp(reserved.return_message, "SIMBOLO_VAR") == 0) return SIMBOLO_VAR;
                else if(strcmp(reserved.return_message, "SIMBOLO_REAL") == 0) return SIMBOLO_REAL;
                else if(strcmp(reserved.return_message, "SIMBOLO_INTEGER") == 0) return SIMBOLO_INTEGER;
                else if(strcmp(reserved.return_message, "SIMBOLO_PROCEDURE") == 0) return SIMBOLO_PROCEDURE;
                else if(strcmp(reserved.return_message, "SIMBOLO_ELSE") == 0) return SIMBOLO_ELSE;
                else if(strcmp(reserved.return_message, "SIMBOLO_READ") == 0) return SIMBOLO_READ;
                else if(strcmp(reserved.return_message, "SIMBOLO_WRITE") == 0) return SIMBOLO_WRITE;
                else if(strcmp(reserved.return_message, "SIMBOLO_WHILE") == 0) return SIMBOLO_WHILE;
                else if(strcmp(reserved.return_message, "SIMBOLO_IF") == 0) return SIMBOLO_IF;
                else if(strcmp(reserved.return_message, "SIMBOLO_THEN") == 0) return SIMBOLO_THEN;
                else if(strcmp(reserved.return_message, "SIMBOLO_DO") == 0) return SIMBOLO_DO;
                else if(strcmp(reserved.return_message, "SIMBOLO_FOR") == 0) return SIMBOLO_FOR;
                else if(strcmp(reserved.return_message, "SIMBOLO_TO") == 0) return SIMBOLO_TO;
                printf("Huge mistake\n");
                //return reserved.return_message;
            }
            //printf("Ident = %s", yytext);
            return IDENT;
        }

"\n" {nlines++;}


. {return *yytext;}
%%

int yywrap(void)
{
    return 1;
}
