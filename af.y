%{
#include <stdio.h>

enum tipoErro {
    NAO_DECLARADO,
    JA_DECLARADO,
    TIPOS_DIFERENTES,
    NEGATIVO_NAO_PERMITIDO,
};

void erroSemantica(enum tipoErro, char*);

int yylex ();
void yyerror (char*);

struct simboloNode {
    char *name;
    int intValue;
    double doubleValue;
    char *strValue;
    char *type;
    struct simboloNode *next;
};
typedef struct simboloNode simboloEntrada;

simboloEntrada *tabelaSimbolo = NULL;

int isDeclarado (char *id);
int addId (char *id, char *type);
int getIntValor (char *id, int *v);
int getRealValor (char *id, double *v);
int getStrValor (char *id, char *str);
int setValue (char *id1, char *id2);
int verificadorTipo (simboloEntrada *in1, simboloEntrada *in2);

%}

%union{
    int i;
    float f;
    char* str;
}

%token <i> INT
%token <f> REAL
%token <str> STR
%token TYPE
%token ID COMMA COLON SEMICOLON LPAREN RPAREN LBRACE RBRACE LBRACK RBRACK
%token DOT PLUS MINUS TIMES DIV  NEQ RETURN EQ  LT LE GT GE AND OR ASSIGN ELIF IF ELSE
%token WHILE FOR SKIP IN NOT NIL DEF TRUE FALSE
%token BREAK SET LIST DIVM PERC ADDPERC SUBPERC ADDEQ SUBEQ DIVEQ MULTEQ
%token DIVMEQ DICT MAIN END ENDLINE CONTSTMT DIVIDE
%token DECINT DECREAL DECSTR

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

decl_var : decl_data_type ID                                                                            {}
         ;

decl_data_type : DECINT                              {printf("tipo int\n");}
               | DECREAL             {printf("tipo real\n");}
               | DECSTR                                     {printf("tipo str\n");}
               | TYPE ID               {printf("tipo de tipo\n");}
               | ID           {printf("identificador de tipo\n");}
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

void erroSemantica (enum tipoErro errType, char *info) {
    char errmsg[200];
    switch (errType) {
        case 1: sprintf (errmsg, "");
    }
}

simboloEntrada *findEntry (char *id) {
    simboloEntrada *found = tabelaSimbolo;
    while (found != NULL && strcmp(id, found->name)) {
        found = found->next;
    }
    return found;
}

int isDeclarado(char *id) {
    return (findEntry(id) != NULL);
}

int addId (char *id, char *type) {
    simboloEntrada *novaEntrada;
    if (isDeclarado(id)) return 0;
    novaEntrada = (simboloEntrada*) malloc (sizeof(simboloEntrada));
    novaEntrada->name = id;
    novaEntrada->type = type;
    novaEntrada->intValue = 0;
    novaEntrada->doubleValue = 0;
    novaEntrada->strValue = NULL;
    novaEntrada->next = tabelaSimbolo;
    tabelaSimbolo = novaEntrada;
    return 1;
}

int getIntValor (char *id, int *v) {
    simboloEntrada *entrada = findEntry (id);
    if (entrada == NULL) return 0;
    *v = entrada->intValue;
    return 1;
}

int getRealValor (char *id, double *v) {
    simboloEntrada *entrada = findEntry (id);
    if (entrada == NULL) return 0;
    *v = entrada->doubleValue;
    return 1;
}

int getStrValor (char *id, char *str) {
    simboloEntrada *entrada = findEntry (id);
    if (entrada == NULL) return 0;
    str = entrada->strValue;
    return 1;
}

int verificadorTipo(simboloEntrada *in1, simboloEntrada *in2) {
    if (!strcmp(in1->type, in2->type)) return 1;
    return 0;
}


int main() {
    yyparse();
    return 0;
}