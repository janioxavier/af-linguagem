%{
#include <stdio.h>
//#include "tabelasimbolo.h"

int yyerror(char *s);
extern int yylineno;
extern char * yytext;
extern int line_number;

enum tipo{
    tipoInteiro,
    tipoReal,
    tipoString,
    tipoDefinido
};
typedef enum tipo TipoVariavel;

union valor{
    int i;
    double r;
    char *s;
    void *qualquerTipo;
};
typedef union valor ValorVariavel;

struct simboloNode {
    char *nome;
    ValorVariavel valor;
    TipoVariavel tipo;
    char *escopo;
    struct simboloNode *proximo;
};
typedef struct simboloNode simboloEntrada;

simboloEntrada *tabelaSimbolo = NULL;


%}

%union{
    int i;
    float f;
    char * str;
}

%token <i> INT 
%token <f> REAL
%token <str> STR
%token <str> ID
%token TYPE
%token  COMMA COLON SEMICOLON LPAREN RPAREN LBRACE RBRACE LBRACK RBRACK
%token DOT PLUS MINUS TIMES DIV  NEQ RETURN EQ  LT LE GT GE AND OR ASSIGN ELIF IF ELSE
%token WHILE FOR SKIP IN NOT NIL DEF TRUE FALSE
%token BREAK SET LIST DIVM PERC ADDPERC SUBPERC ADDEQ SUBEQ DIVEQ MULTEQ
%token DIVMEQ DICT MAIN END ENDLINE CONTSTMT DIVIDE
%token <i> DECINT DECREAL DECSTR

%type <i> decl_data_type

%%
prog : stmt_list                            {}
     ;
     
stmt_list : stmt                                                  {}
          | stmt stmt_list                                           {}
          ;
          
stmt : assign end_stmt                                                                              {}
     | definition end_stmt                                                                              {printf("definicao\n");}
     | decl_var end_stmt                                                                                {}
     ;
    
end_stmt : ENDLINE                                                                                      {}
         | CONTSTMT end_stmt                                                                            {}
         ;

assign : lhs ASSIGN rhs                                                                                 {}
       ;

lhs : decl_var
    | var
    ;

rhs : var                                                                                               {}
    | expr                                                                                              {}
    | call_func                                                                                         {}
    ;

call_func : ID LPAREN RPAREN                                                                            {}
          | ID LPAREN data_types RPAREN                                                                 {}
          ;

decl_var : decl_data_type ID      {$<str>$ = $3;printf("%i %s\n", $1, $<str>$);}
         ;

decl_data_type : DECINT        {$$ = tipoInteiro;}
               | DECREAL       {$$ = tipoReal;}
               | DECSTR        {$$ = tipoString;}
               | ID            {$$ = tipoDefinido;}
               ;

var : ID                                                                                                {}
    ;

data_type : prim_type                                                                                   {}
          | abs_type                                                                                    {}
          ;

prim_type : INT                                                                                         {}
          | REAL                                                                                        {}
          | STR                                                                                         {}
          | DICT ASSIGN dict                                                                            {}
          | LIST ASSIGN list                                                                            {}
          | NIL                                                                                         {}
          ;
          
abs_type : TYPE ID                                                                                      {}
         ;



dict : LBRACK key_value RBRACK                                                                          {}
     ;

key_value : data_type COLON data_type                                                                   {}
          | data_type COLON data_type COMMA key_value                                                   {}
          ;

list : LBRACE data_types RBRACE                                                                         {}
     ;

data_types : data_type                                                                                  {}
           | data_type COMMA data_types                                                                 {}
           ;


definition : type_def                                                                                   {}
           | func_def                                                                                   {}
           ;
           
type_def : TYPE ID COLON ENDLINE stmt_list END                                                          {printf("def tipo\n");}
         ;

func_def : DEF ID LPAREN data_types RPAREN COLON ENDLINE stmt_list END                                  {printf("definicao\n");}
         | DEF ID LPAREN data_types RPAREN COLON ENDLINE stmt_list RETURN data_type END                 {}
         ;

expr : expr opbi1 term                                                                                  {}
     | term                                                                                             {}
     ;

opbi1 : PLUS                                                                                            {}
      | MINUS                                                                                           {}
      | LT                                                                                              {}
      | LE                                                                                              {}
      | GE                                                                                              {}
      | GT                                                                                              {}
      | EQ                                                                                              {}
      | AND                                                                                             {}
      | OR                                                                                              {}    
      | DIVM                                                                                            {}
      | NEQ                                                                                             {}
      ;

opbi2 : DIV                                                                                             {}
      | TIMES                                                                                           {}
      ;

term : term opbi2 fact                                                                                  {}
     | fact                                                                                             {}
     ;

fact : LPAREN expr RPAREN                                                                               {}
     | unaop data_type                                                                                  {}
     | data_type                                                                                        {}
     ;

unaop : NOT                                                                                             {}
      | PERC                                                                                            {}
      | MINUS                                                                                           {}
      ;

%%

simboloEntrada *encontrarEntrada (char *id) {
    simboloEntrada *encontrado = tabelaSimbolo;
    while (encontrado != NULL && strcmp(id, encontrado->nome)) {
        encontrado = encontrado->proximo;
    }
    return encontrado;
}

int isDeclarado(char *id) {
    return (encontrarEntrada(id) != NULL);
}

int addId (char *id, int tipo, char *escopo) {
    simboloEntrada *novaEntrada;
    if (isDeclarado(id)) return 0;
    novaEntrada = (simboloEntrada*) malloc (sizeof(simboloEntrada));
    novaEntrada->nome = id;
    novaEntrada->tipo = tipo;
    novaEntrada->escopo = escopo;
    novaEntrada->proximo = tabelaSimbolo;
    tabelaSimbolo = novaEntrada;
    return 1;
}

int addIdValor (char *id, int tipo, ValorVariavel valor, char *escopo) {
    simboloEntrada *novaEntrada;
    if (isDeclarado(id)) return 0;
    novaEntrada = (simboloEntrada*) malloc (sizeof(simboloEntrada));
    novaEntrada->nome = id;
    novaEntrada->tipo = tipo;
    novaEntrada->valor = valor;
    novaEntrada->escopo = escopo;
    novaEntrada->proximo = tabelaSimbolo;
    tabelaSimbolo = novaEntrada;
    return 1;
}

int yyerror (char *msg) {
	fprintf (stderr, "Line %d: %s at '%s'\n", line_number, msg, yytext);
	return 0;
}


int main() {
    yyparse();
    return 0;
}