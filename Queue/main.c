#include <stdio.h>
#include "lista.c"

int main(void) {
    printf("Inicio do algorithm!\n");

    FILA fila;
    ITEM item1, item2, item3;
    item1.valor = 50;
    item2.valor = 30;
    item3.valor = 70;

    cria(&fila);
    enfileira(item1, &fila);
    enfileira(item2, &fila);
    enfileira(item3, &fila);

    mostrarValoresDaFila(fila);

    ITEM aux;

    desenfileira(&fila, &aux);
    desenfileira(&fila, &aux);
    desenfileira(&fila, &aux);
    desenfileira(&fila, &aux);


    mostrarValoresDaFila(fila);


    printf("Fim do algorithm!\n");
    return 0;
}