#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
  int dado;
  struct celula *prox;
} celula;
celula *cria_pilha(){
    celula *f = malloc(sizeof(celula));
    f->prox = NULL;
    return f;
}
celula *enfileira (celula *f, int x){
    celula *novo = malloc(sizeof(celula));
    if(novo == NULL) return NULL;
    novo->prox = f->prox;
    f -> prox = novo;
    f -> dado = x;
    f = novo;
    return novo;
}

void desenfileira(celula *f, int *y){
    celula *lixo = f->prox;
    if(lixo==NULL) return;
    f-> prox = lixo ->prox;
    *y = lixo->dado;
    free(lixo);
}

int main(){
    int y, numero;
    celula *novo = cria_pilha();
    celula*le = novo;
    scanf("%d", &numero);
    for(int i=numero;i>=1;i--){
        enfileira(novo, i);
    }
    desenfileira(novo, &y);
    printf("%d", novo->dado);

    // desenfileira(le, &y);
    // printf("%d", y);

    
}