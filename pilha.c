#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int tam;

int menu(void);
void opcao(node *PILHA, int op);
void exibe(node *PILHA);

node* nova_pilha()
{
 node *PILHA = (node *) malloc(sizeof(node));
 PILHA->prox = NULL;
 tam=0;
 PILHA->top = NULL;
 return PILHA;
}

int vazia(node *PILHA)
{
 if(PILHA->prox == NULL)
  return 1;
 else
  return 0;
}

node *aloca(char *id)
{
 node *novo=(node *) malloc(sizeof(node));
 if(!novo){
  printf("Sem memoria disponivel!\n");
  exit(1);
 }else{
  novo->id = id;
  return novo;
 }
}


void libera(node *PILHA)
{
 if(!vazia(PILHA)){
  node *proxNode,
     *atual;

  atual = PILHA->prox;
  while(atual != NULL){
   proxNode = atual->prox;
   free(atual);
   atual = proxNode;
  }
 }
}

void push(node *PILHA, char *id)
{
 node *novo=aloca(id);
 novo->prox = NULL;

 if(vazia(PILHA)) {
  PILHA->prox=novo;
 }
 else{
  node *tmp = PILHA->prox;

  while(tmp->prox != NULL)
   tmp = tmp->prox;

  tmp->prox = novo;
 }
 PILHA->top = novo;
 tam++;
}


node *pop(node *PILHA)
{
 if(PILHA->prox == NULL){
  printf("PILHA ja vazia\n\n");
  return NULL;
 }else{
  node *ultimo = PILHA->prox,
              *penultimo = PILHA;

  while(ultimo->prox != NULL){
   penultimo = ultimo;
   ultimo = ultimo->prox;
  }
  PILHA->top = penultimo;
  penultimo->prox = NULL;
  tam--;
  return ultimo;
 }
}


char *topo_pilha(node *PILHA) {
    return PILHA->top != NULL ? PILHA->top->id : "";
}