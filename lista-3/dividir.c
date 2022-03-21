#include <stdio.h>
#include <stdlib.h>


typedef struct celula {
   int dado;
   struct celula *prox;
} celula;

void insere_final(celula *le, int x){
    celula *novo = malloc(sizeof(celula));
    celula *p;
    for(p = le; p ->prox !=NULL; p = p->prox);
    p -> prox = novo;
    novo -> dado = x;
    novo -> prox = NULL;
}

void divide_lista(celula *l, celula *l1, celula *l2){
    celula *nova;
    l1->prox = NULL;
    l2->prox = NULL;

    for(nova = l -> prox; nova != NULL; nova = nova ->prox){
        if(((nova -> dado) % 2) == 0){
            insere_final(l2, nova-> dado);
        }
        else{
            insere_final(l1, nova-> dado);
        }
    }

}




// void imprime(celula *le){
//     for(celula *nova = le->prox; nova != NULL; nova = nova ->prox){
//         printf("%d -> ", nova->dado);
//     }
//     printf("NULL\n");
// }

// int main(){
//     celula l1, l2, l, no1, no2, no3, no4, no5, no6, no7;

//     no1.dado = 10;
//     no2.dado=4;
//     no3.dado=-9;
//     no4.dado = 2;
//     no5.dado=7;
//     no6.dado=10;

//     l.prox =  &no1;
//     no1.prox =  &no2;
//     no2.prox = &no3;
//     no3.prox = &no4;
//     no4.prox =&no5;
//     no5.prox =  &no6;
//     no6.prox = NULL;

//     imprime(&l);
//     divide_lista(&l, &l1, &l2);

//     imprime(&l1);
//     imprime(&l2);
//     return 0;
// }