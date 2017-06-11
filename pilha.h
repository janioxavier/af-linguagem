struct Node{
 char *id;
 struct Node *prox;
 struct Node *top;
};
typedef struct Node node;

node *PILHA;

void iniciar_pilha();
void colocar_pilha(char*);
void retirar_pilha();
void liberar_pilha();
char *topo_pilha();