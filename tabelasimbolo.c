#include "tabelasimbolo.h"

int setValue (char *id1, char *id2) {
    
}

void erroSemantica (enum tipoErro errType, char *info) {
    char errmsg[200];
    switch (errType) {
        case 1: sprintf (errmsg, "");
    }
}

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

int addId (char *id, char *tipo, char *escopo) {
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

int addIdValor (char *id, char *tipo, ValorVariavel valor, char *escopo) {
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

int getIntValor (char *id, int *v) {
    simboloEntrada *entrada = encontrarEntrada (id);
    if (entrada == NULL) return 0;
    *v = entrada->intValor;
    return 1;
}

int getRealValor (char *id, double *v) {
    simboloEntrada *entrada = encontrarEntrada (id);
    if (entrada == NULL) return 0;
    *v = entrada->realValor;
    return 1;
}

int getStrValor (char *id, char *str) {
    simboloEntrada *entrada = encontrarEntrada (id);
    if (entrada == NULL) return 0;
    str = entrada->strValor;
    return 1;
}

int verificadorTipo(simboloEntrada *in1, simboloEntrada *in2) {
    if (!strcmp(in1->tipo, in2->tipo)) return 1;
    return 0;
}

int setValor (char *id1, char *id2) {
	simboloEntrada *in1 = encontrarEntrada (id1);
	simboloEntrada *in2 = encontrarEntrada (id2);
	if (entry1 == NULL) {
		erroSemantica (2, entry1->nome);
		return 0;
	}
	if (entry2 == NULL) {
		erroSemantica (2, entry2->nome);
		return 0;
	}
	if (typeCheck(entry1,entry2)) {
		in1->valor = in2->valor;
		printf("Variable %s, value %f, type %s\n", in1->nome, in1->value, entry1->type);
		printf("Variable %s, value %f, type %s\n", in2->nome, in2->value, entry2->type);
		return 1;
	}
	else {
		erroSemantica (4, entry2->nome);
		return 0;
	}
}

int main() {
    addId("a", "int", "global");
    
}
