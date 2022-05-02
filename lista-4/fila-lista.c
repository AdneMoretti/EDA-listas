#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
  int dado;
  struct celula *prox;
} celula;

celula *enfileira (celula *f, int x){
    celula *novo = malloc(sizeof(celula));
    if(novo == NULL) return NULL;
    novo->prox = f->prox;
    f -> prox = novo;
    f -> dado = x;
    f = novo;
    return novo;
}
int desenfileira(celula *f, int *y){
    celula *lixo = f->prox;
    if(lixo==NULL) return 0;
    f-> prox = lixo ->prox;
    *y = lixo->dado;
    free(lixo);
    return 1;
}


// int main(){
//     int y;
//     celula *novo = malloc(sizeof(celula));
//     enfileira(novo, 1);
//     desenfileira(novo, &y);
//     printf("%d", novo->dado);
//     return 0;
// }