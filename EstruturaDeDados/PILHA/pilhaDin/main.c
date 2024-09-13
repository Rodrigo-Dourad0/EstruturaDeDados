#include <stdio.h>
#include <stdlib.h>
#include "pilhaDin.h"



int main(){

  Pilha *p = inicializarPilha();

  empilhar(p, 10);
  empilhar(p, 20);
  empilhar(p, 30);


  exibirPilha(p);

  printf("\n");

  desempilhar(p);

  exibirPilha(p);

  liberarPilha(p);

  return 0;
}