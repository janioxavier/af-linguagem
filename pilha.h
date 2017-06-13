struct Node{
 char *id;
 struct Node *prox;
 struct Node *top;
};
typedef struct Node node;

node* nova_pilha();
void push(node *PILHA, char *id);
node *pop(node *PILHA);
void libera(node *PILHA);
void copiar_pilha(node *, node *);
char *topo_pilha(node *PILHA);