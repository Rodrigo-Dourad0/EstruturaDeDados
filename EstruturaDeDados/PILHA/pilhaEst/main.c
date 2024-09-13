#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"


int main(){

  Pilha p ;
  incializarPilha(&p);

  empilhar(&p, 5);
  empilhar(&p, 10);
  empilhar(&p, 15);

  exibirPilha(&p);

  printf("\n\n");

 int desempilhado = desempilhar(&p);

  exibirPilha(&p);

 printf("Este item foi desempilhado: %d", desempilhado);

  return 0;
}