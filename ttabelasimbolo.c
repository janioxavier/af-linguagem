#include <stdio.h>
#include "tabelasimbolo.h"



int main() {
    ValorVariavel v;
    v.i = 10;
    addIdValor("a", 0,v,"g");
    addId("b", 0,"g");
    if (isDeclarado("a")) {
        printf("[a] ja foi declrado\n");
    }
    if (!isDeclarado("c")) {
        printf("[c] nao foi declarado\n");
    }
    setValor("b", tipoFuncao, v);
    printf("%i\n", getValor("a").i);
    printf("%i\n", getValor("b").i);
    
}