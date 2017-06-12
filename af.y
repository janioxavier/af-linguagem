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

node *pilha;
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
%token DOT ASSIGN ELIF IF ELSE RETURN
%token WHILE FOR SKIP IN NOT NIL DEF TRUE FALSE
%token BREAK SET LIST DIVM ADDPERC SUBPERC ADDEQ SUBEQ DIVEQ MULTEQ
%token DIVMEQ DICT MAIN END ENDLINE CONTSTMT DIV
%token <iValor> DECINT DECREAL DECSTR


%left PLUS MINUS AND OR NEQ  EQ  LT LE GT GE PERC
%left TIMES DIVIDE 
%right NOT '-'

%type <rValor> expr 
%type <iValor> decl_data_type

%type <sValor> lhs decl_var var rhs



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
     | expr end_stmt                    {printf("%lf\n", $1);}
     | estr_while end_stmt              {}
     | estr_for end_stmt                {}
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


decl_var : decl_data_type ID   {addId($2, $1, topo_pilha(pilha)); $$ = $2;}
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
          //| DICT ASSIGN dict    {}
          //| LIST ASSIGN list    {}
          | NIL                 {}
          ;
          
abs_type : ID                   {printf("%s\n", $1);}
         ;
/*
dict : LBRACK key_value RBRACK                                                                          {}
     ;

key_value : data_type COLON data_type                                                                   {}
          | data_type COLON data_type COMMA key_value                                                   {}
          ;

list : LBRACE data_types RBRACE                                                                         {}
     ;
*/

data_types : data_type                                                                                  {}
           | data_type COMMA data_types                                                                 {}
           ;


definition : type_def                                                                                   {}
           | func_def                                                                                   {}
           ;

decl_field_type : decl_var ENDLINE
                | decl_var ENDLINE decl_field_type 
                 ;
           
type_def : TYPE ID COLON ENDLINE decl_field_type END                                                    {printf("definiu tipo\n");}
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

expr :
       LPAREN expr RPAREN       {$$ = $2;}
     | expr PLUS expr           {$$ = $1 + $3;}
     | expr MINUS expr          {$$ = $1 - $3;}
     | expr TIMES expr          {$$ = $1 * $3;}
     | expr DIVIDE expr         {$$ = $1 / $3;}
     | expr LT expr             {$$ = $1 < $3;}
     | expr LE expr             {$$ = $1 <= $3;}
     | expr GE expr             {$$ = $1 >= $3;}
     | expr GT expr             {$$ = $1 > $3;}
     | expr EQ expr             {$$ = $1 == $3;}
     | expr AND expr            {$$ = $1 && $3;}
     | expr OR expr             {$$ = $1 || $3;}
     //| expr DIVM expr         {$$ = $1 % $3;}
     | expr NEQ expr            {$$ = $1 != $3;}    
     | NOT expr                 {$$ = ! $2;}
     //| PERC expr              {$$ = }
     | MINUS expr               {$$ = - $2;}
     //| expr ADDEQ term        {$$ = $1 += $3);}
     | REAL                     {$$ = $1;}
     | INT                      {$$ = (int) $1;}
     | call_func                {}
     ;


f_builtin : f_print     {}
          | f_input     {}
          ;

f_print : PRINT expr    {}
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
    pilha = nova_pilha();
    push(pilha, "global");
    yyparse();
    return 0;
}