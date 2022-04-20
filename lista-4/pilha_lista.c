#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
  int dado;
  struct celula *prox;
} celula;

int empilha(celula *p, int x){
    celula *novo = malloc(sizeof(celula));
    if(novo==NULL) return 0;
    novo -> dado = x;
    novo -> prox = p->prox;
    p -> prox = novo;
    return 1;
}
int desempilha(celula *p, int *y){
    celula *lixo = p->prox;
    if(lixo==NULL) return 0;
    *y = lixo -> dado;
    p->prox = lixo->prox;
    free(lixo);
    return 1;
}