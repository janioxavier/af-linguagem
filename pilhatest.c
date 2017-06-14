#include <stdio.h>
#include "pilha.h"

int main() {
    node *pilha = nova_pilha();

    push(pilha, "3");
    push(pilha, "2");
    push(pilha, "1");
    printf("%s\n",topo_pilha(pilha));
    printf("%s\n",pop(pilha)->id);
    printf("%s\n",pop(pilha)->id);
    printf("%s\n",pop(pilha)->id);
}