%{
#include <stdio.h>

int yyerror(char *s);
extern int yylineno;
extern char * yytext;
extern int line_number;
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
prog : stmt_list                                                                                        {}
     ;
     
stmt_list : stmt                                                                                        {}
          | stmt stmt_list                                                                              {}
          ;
          
stmt : assign end_stmt                                                                                  {}
     | definition end_stmt                                                                              {}
     | decl_var end_stmt                                                                                {}
     | estr_cond end_stmt                                                                               {}
     | estr_while end_stmt                                                                              {}
     | estr_for end_stmt                                                                                {}
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

decl_data_type : DECINT                                                                                 {printf("DEC INT\n");}
               | DECREAL                                                                                {printf("DEC REAL\n");}
               | DECSTR                                                                                 {printf("DEC STR\n");}
               | ID                                                                                     {printf("DEC TIPO D-E-F-I-N-D-O\n");}
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

decl_field_type : decl_var ENDLINE
                | decl_var ENDLINE decl_field_type 
                 ;
           
type_def : TYPE ID COLON ENDLINE decl_field_type END                                                    {printf("definiu tipo\n");}
         ;

func_def : DEF ID LPAREN data_types RPAREN COLON ENDLINE stmt_list END                                  {}
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
      | ADDEQ                                                                                           {}
      ;

opbi2 : DIV                                                                                             {}
      | TIMES                                                                                           {}
      ;

term : term opbi2 fact                                                                                  {}
     | fact                                                                                             {}
     ;

fact : LPAREN expr RPAREN                                                                               {}
     | opuna data_type                                                                                  {}
     | data_type                                                                                        {}
     ;

opuna : NOT                                                                                             {}
      | PERC                                                                                            {}
      | MINUS                                                                                           {}
      ;
      
      
estr_cond : 
          | IF expr COLON ENDLINE stmt_list END             {printf("if\n");}
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


int yyerror (char *msg) {
	fprintf (stderr, "Line %d: %s at '%s'\n", line_number, msg, yytext);
	return 0;
}


int main() {
    yyparse();
    return 0;
}