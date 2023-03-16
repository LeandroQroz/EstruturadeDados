#ifndef _Lista_H_
#define _Lista_H_
#define MAX 100

typedef struct {
    int vetor[MAX];
    int tam;

} tLista;

int listaVazia(tLista *lista);
int listaCheia(tLista *lista);
int tamanhoLista(tLista *lista);
int inserePos(tLista *lista, int pos, int valor);
int retiraPos(tLista *lista, int pos);
void inicializaLista(tLista *lista);
void imprimeLista(tLista *lista);

#endif
