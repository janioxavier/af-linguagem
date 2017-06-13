extern int line_number;
enum tipoErro {
    NAO_DECLARADO,
    NAO_DECLARADO_EM_NENHUM_ESCOPO,
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


union Valor{
    int i;
    double r;
    char *s;
//    void *qualquerTipo;
};
typedef union Valor ValorVariavel;

struct Variavel{
    char *nome;
    ValorVariavel valor;
    TipoVariavel tipo;
    char *escopo;
};
typedef struct Variavel Variavel;

void erroSemantica(int tipoErro, char*);

struct simboloNode {
    Variavel *var;
    struct simboloNode *proximo;
};
typedef struct simboloNode simboloEntrada;

simboloEntrada *tabelaSimbolo;

simboloEntrada *encontrarEntrada (char *id);
int isDeclarado (char *id);
Variavel *encontra_variavel(Variavel *v, char *id);
int addVar(Variavel var);
int addId (char *id, int tipo, char *escopo);
//int addIdValor (char *id, int tipo, ValorVariavel valor, char *escopo);
ValorVariavel getValor(char *id);
int getTipo(char *id);
int setValorId (char *id1, char *id2);
//int setValor (char *id1, int tipo, ValorVariavel valor);
int verificadorTipo (simboloEntrada *in1, simboloEntrada *in2);