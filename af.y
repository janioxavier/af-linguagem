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

%union {
    int iValor;
    double rValor;
    char * sValor;
    struct Variavel *v;
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
%right NOT '-' ASSIGN

%type <v> expr 
%type <iValor> decl_data_type
%type <sValor> var
//%type <sValor> lhs decl_var var rhs



%%
prog : stmt_list                      {}
     ;
     
stmt_list : stmt                      {}
          | stmt stmt_list            {}
          ;
          
stmt : 
       definition end_stmt              {}
     | decl_var end_stmt                {}
     | estr_cond end_stmt               {}
     | f_builtin end_stmt               {}
     | expr end_stmt                    {printValorVariavel(*$1);}
     | estr_while end_stmt              {}
     | estr_for end_stmt                {}
     ;

end_stmt : ENDLINE            {}
         ;

/*
assign : lhs ASSIGN expr     {if (isDeclarado($1)) erroSemantica(JA_DECLARADO, $1);ValorVariavel v; v.r = $3;setValor($1, tipoInteiro, v);}
       ;

lhs : decl_var  {$$ = $1;}
    | var       {$$ = $1;}
    ;

rhs : expr        {$$ = $1;}
    ;
*/

call_func : ID LPAREN RPAREN             {}
          | ID LPAREN data_types RPAREN  {}
          ;


decl_var : decl_data_type ID                {if (!addId($2, $1, topo_pilha(pilha))) erroSemantica(JA_DECLARADO, $2);}
         | decl_data_type ID ASSIGN expr    //{ValorVariavel v; v.r = $4;addIdValor($2, $1, v,topo_pilha(pilha));}
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
     | expr PLUS expr           {operar($$, $1, '+', $3);}
     | expr MINUS expr          {operar($$, $1, '-', $3);}
     | expr TIMES expr          {operar($$, $1, '*', $3);}
     | expr DIVIDE expr         {operar($$, $1, '/', $3);}
     | expr ASSIGN expr         {operar($$, $1, '=', $3);}
     /*| expr LT expr             {$$ = $1 < $3;}
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
     | call_func                {}*/
     | ID                       {$$ = encontra_variavel($1); if ($$ == NULL) erroSemantica(NAO_DECLARADO_EM_NENHUM_ESCOPO, $1);}
     | REAL                     { Variavel *v = (Variavel*) malloc(sizeof(Variavel));
                                v->tipo = tipoReal; ValorVariavel vv; vv.r = $1; v->valor = vv; $$ = v;}
     | INT                      { Variavel *v = (Variavel*) malloc(sizeof(Variavel));
                                v->tipo = tipoInteiro;  ValorVariavel vv; vv.i = $1; v->valor = vv; $$ = v;}
     | STR                      { Variavel *v = (Variavel*) malloc(sizeof(Variavel)); v->tipo = tipoString;  ValorVariavel vv; vv.s = strdup($1); v->valor = vv; $$ = v;}
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

void operar(Variavel *res, Variavel *v1, char op, Variavel *v2) {
    
    switch(op) {
     case '+':
        if (v1->tipo == tipoInteiro && v2->tipo == tipoInteiro) {
            res->valor.i = v1->valor.i + v2->valor.i;
            res->tipo = tipoInteiro;
        } else if (v1->tipo == tipoReal && v2->tipo == tipoInteiro) {
            res->valor.r = v1->valor.r + v2->valor.i;
            res->tipo = tipoReal;
        } else if (v1->tipo == tipoInteiro && v2->tipo == tipoReal) {
            res->valor.r = v1->valor.i + v2->valor.r;
            res->tipo = tipoReal;
        } else if (v1->tipo == tipoReal && v2->tipo == tipoReal) {
            res->valor.r = v1->valor.r + v2->valor.r;
            res->tipo = tipoReal;
        } else if (v1->tipo == tipoString && v2->tipo == tipoString){
            //char *novastr = strdup(v1->valor.s);
            int size;
            size = strlen(v1->valor.s)-1;
            v1->valor.s[size] = '\0';
            res->valor.s = strcat(v1->valor.s, v2->valor.s);
            int size2 = strlen(res->valor.s);
            while(size < size2) {
                res->valor.s[size] = res->valor.s[size+1];
                size+=1;
            }
        } else {
            //erroSemantica();
        }
        break;
     case '-':
        if (v1->tipo == tipoInteiro && v2->tipo == tipoInteiro) {
            res->valor.i = v1->valor.i - v2->valor.i;
            res->tipo = tipoInteiro;
        } else if (v1->tipo == tipoReal && v2->tipo == tipoInteiro) {
            res->valor.r = v1->valor.r - v2->valor.i;
            res->tipo = tipoReal;
        } else if (v1->tipo == tipoInteiro && v2->tipo == tipoReal) {
            res->valor.r = v1->valor.i - v2->valor.r;
            res->tipo = tipoReal;
        } else if (v1->tipo == tipoReal && v2->tipo == tipoReal) {
            res->valor.r = v1->valor.r - v2->valor.r;
            res->tipo = tipoReal;
        } 
        else {
            //erroSemantica();
        }
        break;
     case '*':
        if (v1->tipo == tipoInteiro && v2->tipo == tipoInteiro) {
            res->valor.i = v1->valor.i * v2->valor.i;
            res->tipo = tipoInteiro;
        } else if (v1->tipo == tipoReal && v2->tipo == tipoInteiro) {
            res->valor.r = v1->valor.r * v2->valor.i;
            res->tipo = tipoReal;
        } else if (v1->tipo == tipoInteiro && v2->tipo == tipoReal) {
            res->valor.r = v1->valor.i * v2->valor.r;
            res->tipo = tipoReal;
        } else if (v1->tipo == tipoReal && v2->tipo == tipoReal) {
            res->valor.r = v1->valor.r * v2->valor.r;
            res->tipo = tipoReal;
        } else {
            //erroSemantica();
        }
        break;
    case '/':
        if (v1->tipo == tipoInteiro && v2->tipo == tipoInteiro) {
            res->valor.i = v1->valor.i / v2->valor.i;
            res->tipo = tipoInteiro;
        } else if (v1->tipo == tipoReal && v2->tipo == tipoInteiro) {
            res->valor.r = v1->valor.r / v2->valor.i;
            res->tipo = tipoReal;
        } else if (v1->tipo == tipoInteiro && v2->tipo == tipoReal) {
            res->valor.r = v1->valor.i / v2->valor.r;
            res->tipo = tipoReal;
        } else if (v1->tipo == tipoReal && v2->tipo == tipoReal) {
            res->valor.r = v1->valor.r / v2->valor.r;
            res->tipo = tipoReal;
        } else {
            //erroSemantica();
        }
        break;
    case '%':
        if (v1->tipo == tipoInteiro && v2->tipo == tipoInteiro) {
            res->valor.i = v1->valor.i % v2->valor.i;
        } else {
            //erroSemantica();
        }
        break;
    case '=':
            if (v1->tipo == tipoInteiro && v2->tipo == tipoInteiro) {
                v1->valor.i = v2->valor.i;
                v1->tipo = tipoInteiro;
            } else if(v1->tipo == tipoInteiro && v2->tipo == tipoReal) {
                res->valor.r = v2->valor.r;
                res->tipo = tipoReal;
            } else if (v1->tipo == tipoReal && v2->tipo == tipoInteiro) {
                res->valor.i = v2->valor.r;
                res->tipo = tipoInteiro;
            } else if (v1->tipo == tipoReal && v2->tipo == tipoReal) {
                res->valor.r = v2->valor.r;
                res->tipo = tipoReal;
            } else if(v1->tipo == tipoString && v2->tipo == tipoString){
                res->valor.s = strdup(v2->valor.s);
                res->tipo = tipoString;
            } else {
                //erroSemantica();
            }
            *res=  *v1;
      
        break;
    default:
        sprintf(stderr,"OPERADOR '%c' NAO DEFINIDO", op);
    }
    
    
}



void printValorVariavel(Variavel v) {
    switch(v.tipo) {
    case tipoInteiro:
    printf("%i\n", v.valor); break;
    case tipoReal:
    printf("%lf\n", v.valor.r); break;
    case tipoString:
    printf("%s\n", v.valor); break;
    default:
    printf("tipo: %s nao impresso.\n", nomeTipo(v.tipo)); break;
    }
}

void printIdValue(char *id) {
    simboloEntrada *in = encontrarEntrada(id);
    if (in != NULL) {
        switch(in->var->tipo) {
        case tipoInteiro:
        printf("%i", in->var->valor);break;
        case tipoReal:
        printf("%lf", in->var->valor);break;
        case tipoString:
        printf("%s", in->var->valor);break;
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