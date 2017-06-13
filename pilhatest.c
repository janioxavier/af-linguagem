#include <stdio.h>
#include "pilha.h"

int main() {
    node *pilha = nova_pilha();

    push(pilha, "2");
    push(pilha, "1");
    push(pilha, "3");
    node *copiapilha = nova_pilha();
    printf("pilha original: ");
    exibe(pilha);
    copiar_pilha(pilha, copiapilha);
    
    //printf("%s\n",topo_pilha(pilha));
    printf("%s\n",pop(copiapilha)->id);
    printf("%s\n",pop(copiapilha)->id);
    printf("%s\n",pop(copiapilha)->id);
    exibe(pilha);
    exibe(copiapilha);
    
}