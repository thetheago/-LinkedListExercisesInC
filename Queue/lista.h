#if !defined(LISTA_H)
#define LISTA_H

typedef struct CELULA_TAG *PONT;

typedef struct {
   double valor;
} ITEM;

typedef struct CELULA_TAG {
   ITEM item;
   PONT prox;
} CELULA;

typedef struct {
   PONT primeiro, ultimo;
   int tamanho;
} FILA;

void cria(FILA*);
int vazia (FILA);
int enfileira (ITEM, FILA*);
int desenfileira (FILA*, ITEM*);
int mostrarValoresDaFila(FILA fila);

#endif
