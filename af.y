%{
#include <stdio.h>
#include <string.h>
#include "pilha.h"
#include "tabelasimbolo.h"

int yyerror(char *s);
extern int yylineno;
extern char * yytext;
extern int line_number;


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
%token DIVMEQ DICT MAIN END ENDLINE CONTSTMT DIVIDE PRINTLN
%token <iValor> DECINT DECREAL DECSTR
%type <iValor> decl_data_type

%type <sValor> lhs decl_var var

%%
prog : stmt_list                      {}
     ;
     
stmt_list : stmt                      {}
          | stmt stmt_list            {}
          ;
          
stmt : assign end_stmt                  {}
     | definition end_stmt              {}
     | decl_var end_stmt                {}
     | estr_cond end_stmt               {}
     | f_builtin end_stmt               {}
     | expr end_stmt                    {}
     | estr_while end_stmt                                                                              {}
     | estr_for end_stmt                                                                                {}
     ;

end_stmt : ENDLINE            {}
         ;

assign :
         lhs ASSIGN INT     {ValorVariavel v; v.i = $3;setValor($1, tipoInteiro, v);}
       | lhs ASSIGN REAL    {}
       | lhs ASSIGN STR     {}
       //| lhs ASSIGN expr  {}
       ;

lhs : decl_var  {$$ = $1;}
    | var       {$$ = $1;}
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

prim_type : INT                 {}
          | REAL                {}
          | STR                 {}
          | DICT ASSIGN dict    {}
          | LIST ASSIGN list    {}
          | NIL                 {}
          ;
          
abs_type : ID                   {}
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

decl_field_type : decl_var ENDLINE
                | decl_var ENDLINE decl_field_type 
                 ;
           
type_def : TYPE ID COLON ENDLINE decl_field_type END   {printf("definiu tipo\n");}
         ;

param_func : decl_var
           | decl_var COMMA param_func
           ;

func_def :
         | DEF ID LPAREN  RPAREN COLON ENDLINE stmt_list END                        {printf("função sem retorno e sem parametro\n");}
         | DEF ID LPAREN  RPAREN COLON ENDLINE stmt_list RETURN ID ENDLINE END       {printf("função com retorno e sem parametro\n");}
         | DEF ID LPAREN param_func RPAREN COLON ENDLINE stmt_list RETURN ID ENDLINE END                 {printf("função com retorno e com parametro\n");}
         | DEF ID LPAREN param_func RPAREN COLON ENDLINE stmt_list END                                  {printf("função sem retorno e com parametro\n");}
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
      | ADDEQ                                                                                           {}
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

f_print : PRINT ID    {printIdValue($2, 0);}
        | PRINTLN ID  {printIdValue($2, '\n');}
        ;

f_input : INPUT ID      {}
        ;
        
estr_cond : 
          IF expr COLON ENDLINE stmt_list END             {printf("if\n");}
          | IF expr COLON ENDLINE stmt_list cond_else       {printf("if..else \n");}
          | IF expr COLON ENDLINE stmt_list cond_elif       {printf("if..elif..else \n");}
          ;
          
cond_elif : ELIF expr COLON ENDLINE stmt_list cond_elif
          | ELIF expr COLON ENDLINE stmt_list cond_else
          ;
           
cond_else : ELSE COLON ENDLINE stmt_list END                                                                    {}
          ;
          
estr_while : WHILE expr COLON stmt_list END                                                                     {printf("while \n");}
           ;
           
estr_for : FOR decl_var COMMA var IN var COLON stmt_list END                                                    {printf("for \n");}
         ;
             
%%

void printIdValue(char *id, char ln) {
    simboloEntrada *in = encontrarEntrada(id);
    if (in != NULL) {
        switch(in->tipo) {
        case tipoInteiro:
        printf("%i%c", in->valor.i, ln);break;
        case tipoReal:
        printf("%lf%c", in->valor.r, ln);break;
        case tipoString:
        printf("%s%c", in->valor.s, ln);break;
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