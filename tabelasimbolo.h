#include <stdio.h>

enum tipoErro {
    NAO_DECLARADO,
    JA_DECLARADO,
    TIPOS_DIFERENTES,
    NEGATIVO_NAO_PERMITIDO,
};

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

void erroSemantica(enum tipoErro, char*);

struct simboloNode {
    char *name;
    ValorVariavel valor;
    TipoVariavel tipo;
    char *escopo;
    struct simboloNode *proximo;
};
typedef struct simboloNode simboloEntrada;

simboloEntrada *tabelaSimbolo = NULL;

int isDeclarado (char *id);
int addId (char *id, int tipo, char *escopo);
int addIdValor (char *id, int tipo, ValorVariavel valor, char *escopo);
int getIntValor (char *id, int *v);
int getRealValor (char *id, double *v);
int getStrValor (char *id, char *str);
int setValor (char *id1, char *id2);
int verificadorTipo (simboloEntrada *in1, simboloEntrada *in2);