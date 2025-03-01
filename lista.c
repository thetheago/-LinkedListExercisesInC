#include <stdlib.h>
#include "lista.h"

void cria(FILA* fila) {
    PONT cabecalho = (PONT) malloc(sizeof(CELULA));

    cabecalho->prox = NULL;
    fila->primeiro = cabecalho;
    fila->ultimo = fila->primeiro;
    fila->tamanho = 0;
}

int vazia(FILA fila) {
  return !fila.tamanho;
}

int enfileira(ITEM item, FILA* fila) {
    PONT celula = (PONT) malloc(sizeof(CELULA));

    celula->prox = fila->ultimo->prox;
    celula->item = item;
    fila->ultimo->prox = celula;
    fila->ultimo = celula;

    fila->tamanho++;

    return 1;
}

int desenfileira (FILA* fila, ITEM* item) {
    if (vazia(*fila)) {
        printf("Fila vazia!\n");
        return 1;
    }

    PONT aux;

    aux = fila->primeiro->prox;
    fila->primeiro->prox = aux->prox;

    if (fila->primeiro->prox == NULL) {
      fila->ultimo = fila->primeiro;
    }

    *item = aux->item;

    fila->tamanho--;

    free(aux);

    return 1;
}

int mostrarValoresDaFila(FILA fila) {
    PONT aux = fila.primeiro->prox;
    while (aux != NULL) {
        printf("%f ", aux->item.valor);
        aux = aux->prox;
    }
    printf("\n");

    return 1;
}