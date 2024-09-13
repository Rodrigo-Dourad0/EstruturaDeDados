
typedef struct elemento{

  int dado;
  struct elemento *prox;

}Elem;

typedef Elem *Pilha;

Pilha* inicializarPilha();

int empilhar(Pilha *p, int dado);

int desempilhar(Pilha *p);

void liberarPilha(Pilha *p);

void exibirPilha(Pilha* p);