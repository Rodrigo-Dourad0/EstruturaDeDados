#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

void incializarPilha(Pilha *p){

  for(int i  = 0; i < MAX; i++){
    p->dados[i] = 0;
  }
  p->topo = 0;

}


void empilhar(Pilha *p, int num){

    if(p->topo == MAX){
      printf("pilha cheia.");
      exit(1);
    }

   p->dados[p->topo] = num;
   p->topo ++;


}

int desempilhar(Pilha *p){

  int retorno; 

 retorno = p->dados[p->topo - 1];
 p->topo --;

  return retorno;
}

void exibirPilha(Pilha *p){
  for(int i = p->topo - 1 ;i >= 0 ; i--){
    printf("%d ", p->dados[i]);
    printf("\n");
  }

}