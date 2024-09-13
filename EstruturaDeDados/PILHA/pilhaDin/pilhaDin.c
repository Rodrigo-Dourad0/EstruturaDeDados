#include <stdio.h>
#include <stdlib.h>
#include "pilhaDin.h"

Pilha* inicializarPilha(){

 Pilha*  p = (Pilha* )malloc(sizeof(Pilha));

  if(p != NULL){
    *p = NULL;
  }
  return p;
}

int empilhar(Pilha *p, int dado){
  if(p == NULL){
    return 0;
  }

  Elem* no =(Elem*) malloc(sizeof(Elem));

  if(no == NULL){
    return 0;
  }

  no->dado = dado;
  no->prox = (*p);
  *p = no;

  return 1;
}

int desempilhar(Pilha *p){

  if(p == NULL){
    return 0;
  }

  if((*p) == NULL){
    return 0;
  }

  Elem *no = *p;
  *p = no->prox;
  free(no);

  return 1;
}

void liberarPilha(Pilha *p){


  if(p != NULL){

    Elem *no;

    while((*p) != NULL){

      no = *p;
      *p = (*p)->prox;
      free(no);

    }
    free(p);


  }

}


void exibirPilha(Pilha* p){

  Elem *no = *p ;

  while(no != NULL){
    printf("%d \n", no->dado);

    no = no->prox;
  }

}
