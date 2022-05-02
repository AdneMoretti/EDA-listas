#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
  int dado;
  struct celula *prox;
} celula;

celula *cria_fila(){
}
celula *enfileira (celula *u, int x){
    celula *nova = malloc(sizeof(celula));
    nova->dado = x;
    u -> prox -> prox = nova;
    u -> prox = nova;
    
    nova ->prox = u;
}

int desenfileira(celula *p, int *y){
    celula *lixo = malloc(sizeof(celula));
    lixo = p->prox;
    *y = lixo->dado;
    p->prox = lixo ->prox;
    free(lixo);

}

int main(){
    int y, numero;
    int count = 0;
    celula *p = malloc(sizeof(celula));
    celula *u = malloc(sizeof(celula));
    p->prox = u;
    u->prox = p;
    scanf("%d", &numero);
    int *descartadas = malloc(numero * sizeof(int));
    for(int i=1;i<=numero;i++){
        enfileira(u, i);
    }
    for(int i = numero;i>=2;i--){
        desenfileira(p, &y);
        descartadas[count] = y;
        count ++;
        desenfileira(p, &y);
        enfileira(u, y);
    }
    printf("Cartas descartadas:");
    for(int i=0; i<count; i++){
        if(i!=count-1) printf(" %d,",descartadas[i]);
        else printf(" %d",descartadas[i]);
    }
    printf("\nCarta restante: %d\n", u ->prox->dado);
    
}