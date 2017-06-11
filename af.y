%{
#include <stdio.h>
#include <string.h>
#include "pilha.h"
#include "tabelasimbolo.h"

int yyerror(char *s);
extern int yylineno;
extern char * yytext;
extern int line_number;


%}

%union{
    int iValor;
    double rValor;
    char * sValor;
}

%token <iValor> INT 
%token <rValor> REAL
%token <sValor> STR
%token <sValor> ID
%token TYPE PRINT INPUT
%token COMMA COLON SEMICOLON LPAREN RPAREN LBRACE RBRACE LBRACK RBRACK
%token DOT PLUS MINUS TIMES DIV  NEQ RETURN EQ  LT LE GT GE AND OR ASSIGN ELIF IF ELSE
%token WHILE FOR SKIP IN NOT NIL DEF TRUE FALSE
%token BREAK SET LIST DIVM PERC ADDPERC SUBPERC ADDEQ SUBEQ DIVEQ MULTEQ
%token DIVMEQ DICT MAIN END ENDLINE CONTSTMT DIVIDE
%token <iValor> DECINT DECREAL DECSTR

%type <iValor> decl_data_type

%type <sValor> lhs decl_var var rhs

%%
prog : stmt_list                      {}
     ;
     
stmt_list : stmt                      {}
          | stmt stmt_list            {}
          ;
          
stmt : assign end_stmt                  {}
     | definition end_stmt              {printf("definicao\n");}
     | decl_var end_stmt                {}   
     | f_builtin end_stmt               {}
     | expr end_stmt                    {}
     ;
    
end_stmt : ENDLINE            {}
         ;

assign : lhs ASSIGN rhs     {}
       ;

lhs : decl_var  {$$ = $1;}
    | var       {$$ = $1;}
    ;

rhs : expr        {}
    ;

call_func : ID LPAREN RPAREN             {}
          | ID LPAREN data_types RPAREN  {}
          ;


decl_var : decl_data_type ID   {addId($2, $1, topo_pilha()); $$ = $2;}
         ;

decl_data_type : DECINT        {$$ = tipoInteiro;}
               | DECREAL       {$$ = tipoReal;}
               | DECSTR        {$$ = tipoString;}
               | ID            {$$ = tipoDefinido;}
               ;

var : ID   {$$ = $1;}
    ;

data_type : prim_type                                                                                   {}
          | abs_type                                                                                    {}
          ;

prim_type : INT                 {printf("%i\n", $1);}
          | REAL                {printf("%lf\n", $1);}
          | STR                 {printf("%s\n", $1);}
          | DICT ASSIGN dict    {}
          | LIST ASSIGN list    {}
          | NIL                 {}
          ;
          
abs_type : ID                   {printf("%s\n", $1);}
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

expr : expr opbi1 term {}
     | term            {}
     ;
     
term : term opbi2 fact {}
     | fact            {}
     ;

fact : LPAREN expr RPAREN  {}
     | unaop data_type     {}
     | data_type           {}
     | call_func           {}
     ;

opbi1 : PLUS           {}
      | MINUS          {}
      | LT             {}
      | LE             {}
      | GE             {}
      | GT             {}
      | EQ             {}
      | AND            {}
      | OR             {}    
      | DIVM           {}
      | NEQ            {}
      ;

opbi2 : DIV            {}
      | TIMES          {}
      ;

unaop : NOT               {}
      | PERC              {}
      | MINUS             {}
      ;

f_builtin : f_print     {}
          | f_input     {}
          ;

f_print : PRINT expr    {}
        ;

f_input : INPUT ID      {}
        ;
        
%%

void printIdValue(char *id) {
    simboloEntrada *in = encontrarEntrada(id);
    if (in != NULL) {
        switch(in->tipo) {
        case tipoInteiro:
        printf("%i", in->valor.i);break;
        case tipoReal:
        printf("%lf", in->valor.r);break;
        case tipoString:
        printf("%s", in->valor.s);break;
        default:
        printf("tipo não pode ser escrito\n");
        break;
        }
    }
}



int yyerror (char *msg) {
	fprintf (stderr, "Line %d: %s at '%s'\n", line_number, msg, yytext);
	return 0;
}


int main() {
    iniciar_pilha();colocar_pilha("global");
    yyparse();
    return 0;
}