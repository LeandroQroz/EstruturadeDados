#include "Lista.h"



void inicializaLista(tLista *l) {
    l->tam = 0;

}

int listaVazia(tLista *l) {
    return (l->tam == 0);
}

int listaCheia(tLista *l) {
    return (l->tam == MAX);
}

int tamanhoLista(tLista *l) {
    return l->tam;
}

int inserePos(tLista *l, int pos, int valor) {
    int i;
    if (listaCheia(l) || pos < 0 || pos > l->tam) {
        return 0;
    }
    for (i = l->tam; i > pos; i--) {
        l->vetor[i] = l->vetor[i - 1];
    }
    l->vetor[pos] = valor;
    l->tam++;
    return 1;
}

int retiraPos(tLista *l, int pos) {
    int i;
    if (listaVazia(l) || pos < 0 || pos >= l->tam) {
        return 0;
    }
    for (i = pos; i < l->tam - 1; i++) {
        l->vetor[i] = l->vetor[i + 1];
    }
    l->tam--;
    return 1;
}


