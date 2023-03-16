#include "Lista.h"
#include <stdio.h>

int main () {
    tLista lista;
    inicializaLista(&lista);

    printf("\nA lista vazia? %d\n", listaVazia(&lista));
    printf("A lista cheia? %d\n", listaCheia(&lista));

    

    inserePos(&lista, 0, 32);
    inserePos(&lista, 1, 27);
    inserePos(&lista, 2, 15);
    inserePos(&lista, 3, 21);
    inserePos(&lista, 4, 10);

    inserePos(&lista, 3, 90);

    retiraPos(&lista, 0);

    printf("O tamanho da lista e: %d\n", tamanhoLista(&lista));
    
    void imprimeLista(tLista *l) {
    int i;
    for (i = 0; i < l->tam; i++) {
        printf("%d ", l->vetor[i]);
    }
    printf("\n");
  
    } imprimeLista(&lista);

    printf("\n");
    return 0;


}