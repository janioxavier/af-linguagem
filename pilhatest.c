#include <stdio.h>
#include "pilha.h"

int main() {
    node *pilha = nova_pilha();

    push(pilha, "56");
    push(pilha, "4354");
    push(pilha, "3");
    printf("%s\n",topo_pilha(pilha));
    printf("%s\n",pop(pilha)->id);
    printf("%s\n",pop(pilha)->id);
    printf("%s\n",pop(pilha)->id);
}