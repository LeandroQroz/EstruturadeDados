#include "Lista.h"
#include <stdio.h>

int main () {
    tLista lista;
    inicializaLista(&lista);

    printf("\nA lista vazia? %d\n", listaVazia(&lista));
    printf("A lista cheia? %d\n", listaCheia(&lista));

    
    printf("Inserindo posicoes e elementos a lista\n");
    inserePos(&lista, 0, 32);
    inserePos(&lista, 1, 27);
    inserePos(&lista, 2, 15);
    inserePos(&lista, 3, 21);
    inserePos(&lista, 4, 10);
    imprimeLista(&lista);
    printf("Inserindo um novo conteudo em uma posicao\n");
    inserePos(&lista, 3, 90);
    imprimeLista(&lista);
    printf("retirando posicoes da lista\n");
    retiraPos(&lista, 0);
    imprimeLista(&lista);
    printf("O tamanho da lista e: %d\n", tamanhoLista(&lista));
    imprimeLista(&lista);
    return 0;

}