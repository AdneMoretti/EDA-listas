#include <stdio.h>
#include <stdlib.h>

typedef struct pilha{
    int *dados;
    int N, topo;
}pilha;
pilha *cria_pilha(){
    pilha *nova = malloc(sizeof(pilha));
    nova -> N = 3;
    nova->dados = malloc(nova->N * sizeof(int));
    nova->topo = 0;
    return nova;
}
int empilha(pilha *p, int x){
    if(p->topo == p -> N) {
        p->dados = realloc(p->dados, 2*p->N*sizeof(int));
        if(p->dados==NULL) return 0;
        p->N *=2;
    }
    p->dados[p->topo] = x;
    p->topo++;
    
    return 1;

}
int desempilha(pilha *p, int *y){
    if(p->topo == 0) return 0;
    p -> topo --;
    *y =  p -> dados[p->topo];
    return 1;
}
int main(){
    pilha *nova = cria_pilha();
    printf("%d",empilha(nova, 1));
    empilha(nova, 2);
    empilha(nova, 3);
    for(int i=0;i<nova->N; i++){
        printf("%d", nova->dados[i]);
    }
    // int y;
    // printf("%d",desempilha(nova, &y));
    return 0;
}