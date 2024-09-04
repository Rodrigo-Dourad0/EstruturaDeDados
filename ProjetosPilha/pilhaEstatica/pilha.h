#define MAX 100

typedef struct pilha{

  int dados[MAX];
  int topo;

}Pilha;

void incializarPilha(Pilha *p);

void empilhar(Pilha *p, int num);

int desempilhar(Pilha *p);

void exibirPilha(Pilha *p);

