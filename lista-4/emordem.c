#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int dado;
    struct celula *esq, *dir;
} celula;

typedef struct pilha{
    struct celula *no;
    struct pilha *prox;
} pilha;

pilha *cria_pilha(){
    pilha *nova = malloc(sizeof(pilha));
    nova->prox = NULL;
    return nova;
}

void empilha(pilha *p, celula *x){
    pilha *novo = malloc(sizeof(pilha));
    novo -> no = x;
    novo -> prox = p->prox;
    p -> prox = novo;
}

void desempilha(pilha *p, celula **y){
    pilha *lixo = p->prox;
    if(lixo==NULL) return;
    // printf("%d", lixo->no->dado);
    *y = lixo->no;
    // y->dado = lixo->no->dado;
    p->prox = lixo->prox;
    free(lixo);
}

int verificaPilha(pilha *p){
    if(p -> prox == NULL) return 0;
    return 1;
}
void em_ordem(celula *raiz){
    pilha *p = cria_pilha();
    int aux = 0;
    do{        
        while(raiz!= NULL) {
            empilha(p, raiz) ;
            raiz = raiz->esq;
        }
        if(verificaPilha(p)==1){
            desempilha(p, &raiz);
            printf("%d ", raiz->dado);
            raiz = raiz->dir;
        }
        else aux = 1;
        
    }while(aux == 0);
    printf("\n");
}

// int main(){
//     celula *raiz = malloc(sizeof(celula));
//     celula *a = malloc(sizeof(celula));
//     celula *b = malloc(sizeof(celula));
//     celula *c = malloc(sizeof(celula));
//     celula *d = malloc(sizeof(celula));
//     celula *e = malloc(sizeof(celula));
//     raiz->dado = 1;
//     b->dado = 3;
//     d->dado = 5;
//     c->dado = 4;
//     e->dado = 6;
//     raiz->dir = d;
//     raiz->esq = a;
//     a->dado = 2;
//     a->esq =b;
//     a->dir =c;
//     c->esq = e;
//     c->dir = NULL;
//     d->dir =NULL;
//     d->esq = NULL;
//     b->esq = NULL;
//     b->dir = NULL;
//     e->esq = NULL;
//     e->dir = NULL;
//     // a->dir->dir=NULL;
//     // a->dir->esq=NULL;
//     // a->esq->dir=NULL;
//     // a->esq->esq=NULL;
//     pos_ordem(raiz);
//     return 0;
// }
