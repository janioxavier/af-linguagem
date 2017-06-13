#include <stdio.h>
#include <stdlib.h>
#include "tabelasimbolo.h"

void erroSemantica (int erroTipo, char *info) {
    char errmsg[200];
    
    switch (erroTipo) {
        case TIPOS_DIFERENTES: sprintf (errmsg, "Tipos diferentes: %s\n", info); break;
        case JA_DECLARADO: sprintf (errmsg, "Tipo já definido %s\n", info); break;
        //case NAO_DECLARADO: sprintf(errmsg, ""); break;
        case NAO_DECLARADO_EM_NENHUM_ESCOPO: sprintf(errmsg, "Variável '%s' não foi declarada em nenhum escopo.\n", info); break;
    }
    fprintf (stderr, "Line %d: %s \n", line_number, errmsg);
}

ValorVariavel getValor(char *id) {
    simboloEntrada *encontrado = encontrarEntrada(id);
    if (encontrado != NULL) {
        return encontrado->var->valor;
    }
}

int getTipo(char *id) {
    simboloEntrada *encontrado = encontrarEntrada(id);
    if(encontrado != NULL) {
        return encontrado->var->tipo;
    }
    return -1;
}

simboloEntrada *encontrarEntrada (char *id) {
    simboloEntrada *encontrado = tabelaSimbolo;
    while (encontrado != NULL && strcmp(id, encontrado->var->nome)) {
        encontrado = encontrado->proximo;
    }
    return encontrado;
}

int isDeclarado(char *id) {
    return (encontrarEntrada(id) != NULL);
}

Variavel *encontra_variavel(char *id) {
    if (isDeclarado(id)) {
        return encontrarEntrada(id)->var;
    }
    return NULL;
}

Variavel *criarVariavel(char *nome,TipoVariavel tipo, ValorVariavel valor, char *escopo) {
    Variavel *v = (Variavel*) malloc (sizeof(Variavel));
    v->nome = nome;
    v->tipo = tipo;
    v->valor = valor;
    v->escopo = escopo;
    return v;
}

Variavel *copiarVariavel(Variavel *orig) {
    Variavel *v = (Variavel*) malloc (sizeof(Variavel));
    v->nome = orig->nome;
    v->tipo = orig->tipo;
    v->valor = orig->valor;
    v->escopo = orig->escopo;
    return v;
}

int addId (char *id, int tipo, char *escopo) {
    simboloEntrada *novaEntrada;
    if (isDeclarado(id)) {
        return 0;
    }
    novaEntrada = (simboloEntrada*) malloc (sizeof(simboloEntrada));
    ValorVariavel valor;
    valor.i = 0;
    novaEntrada->var = criarVariavel(id, tipo, valor, escopo);
    novaEntrada->proximo = tabelaSimbolo;
    tabelaSimbolo = novaEntrada;
    return 1;
}
/*
int addIdValor (char *id, int tipo, ValorVariavel valor, char *escopo) {
    simboloEntrada *novaEntrada;
    if (isDeclarado(id)) {
        erroSemantica(JA_DECLARADO, id);
        return 0;
    }
    novaEntrada = (simboloEntrada*) malloc (sizeof(simboloEntrada));
    novaEntrada->nome = id;
    novaEntrada->tipo = tipo;
    novaEntrada->valor = valor;
    novaEntrada->escopo = escopo;
    novaEntrada->proximo = tabelaSimbolo;
    tabelaSimbolo = novaEntrada;
    return 1;
}
*/
int verificadorTipo(simboloEntrada *in1, simboloEntrada *in2) {
    if (!strcmp(in1->var->tipo, in2->var->tipo)) return 1;
    return 0;
}
/*
int setValorId (char *id1, char *id2) {
	simboloEntrada *in1 = encontrarEntrada (id1);
	simboloEntrada *in2 = encontrarEntrada (id2);
	if (in1 == NULL) {
		erroSemantica (2, in1->nome);
		return 0;
	}
	if (in2 == NULL) {
		erroSemantica (2, in2->nome);
		return 0;
	}
	if (verificadorTipo(in1,in2)) {
		in1->valor = in2->valor;
		//printf("Variable %s, value %f, type %s\n", in1->nome, in1->valor, in1->tipo);
		//printf("Variable %s, value %f, type %s\n", in2->nome, in2->valor, in2->tipo);
		return 1;
	}
	else {
		erroSemantica (4, in2->nome);
		return 0;
	}
}
*/

Variavel *novaVariavel() {
    return (Variavel*) malloc(sizeof(Variavel));
}

char* nomeTipo(int tipo) {
    switch(tipo) {
        case tipoInteiro:
        return "int";
        case tipoReal:
        return "real";
        case tipoString:
        return "str";
        case tipoDefinido:
        return "tipodefinido";
        case tipoFuncao:
        return "def";
        case tipoBooleano:
        return "booleano";
    }
}

int verificadorEntradaTipo(simboloEntrada *in, int tipo) {
    return tipo == in->var->tipo || tipo < in->var->tipo;
}
/*
int setValor (char *id, int tipo, ValorVariavel valor) {
    simboloEntrada *in = encontrarEntrada(id);
    if (in == NULL) {
        erroSemantica(NAO_DECLARADO, id);
    } else if (verificadorEntradaTipo(in, tipo)){
        in->valor = valor;
    } else {
        char error[80];
        strcpy(error, "Expera '");
        strcat(error, nomeTipo(tipo));
        strcat(error, "', mas obteve '");
        strcat(error, nomeTipo(in->tipo));
        strcat(error, "'");
        erroSemantica(TIPOS_DIFERENTES, error);
    }
}*/