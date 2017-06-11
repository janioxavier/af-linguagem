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
    tipoDefinido,
    tipoFuncao,
};
typedef enum tipo TipoVariavel;

union valor{
    int i;
    double r;
    char *s;
    void *qualquerTipo;
};
typedef union valor ValorVariavel;

void erroSemantica(int tipoErro, char*);

struct simboloNode {
    char *nome;
    ValorVariavel valor;
    TipoVariavel tipo;
    char *escopo;
    struct simboloNode *proximo;
};
typedef struct simboloNode simboloEntrada;

simboloEntrada *tabelaSimbolo;

simboloEntrada *encontrarEntrada (char *id);
int isDeclarado (char *id);
int addId (char *id, int tipo, char *escopo);
int addIdValor (char *id, int tipo, ValorVariavel valor, char *escopo);
ValorVariavel getValor(char *id);
int setValorId (char *id1, char *id2);
int setValor (char *id1, int tipo, ValorVariavel valor);
int verificadorTipo (simboloEntrada *in1, simboloEntrada *in2);