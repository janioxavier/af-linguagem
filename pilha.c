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

void exibe(node *PILHA)
{
 if(vazia(PILHA)){
  printf("PILHA vazia!\n\n");
  return ;
 }

 node *tmp;
 tmp = PILHA->prox;
 printf("PILHA:");
 while( tmp != NULL){
  printf("%s", tmp->id);
  tmp = tmp->prox;
 }
 printf("\n        ");
 int count;
 for(count=0 ; count < tam ; count++)
  printf("  ^  ");
 printf("\nOrdem:");
 for(count=0 ; count < tam ; count++)
  printf("%5d", count+1);


 printf("\n\n");
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

void copiar_pilha(node *orig, node *dest) {
  node *pilhaAUX = nova_pilha();
  
  node *temp;
  temp = pop(orig);
  while(temp != NULL){
   push(pilhaAUX, temp->id);
   temp = pop(orig);
  }
  temp = pop(pilhaAUX);
  while(temp != NULL){
   push(orig, temp->id);
   push(dest, temp->id);
   temp = pop(pilhaAUX);
  }
}