#include <stdio.h>
#include "pilha.h"

int main() {
    iniciar_pilha();
    colocar_pilha("123");
    colocar_pilha("a");
    colocar_pilha("c");
    printf("%s\n", topo_pilha() );
    retirar_pilha();
    printf("%s\n", topo_pilha() );
    retirar_pilha();
    printf("%s\n", topo_pilha() );
}