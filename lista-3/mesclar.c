#include <stdio.h>
#include <stdlib.h>


typedef struct celula {
   int dado;
   struct celula *prox;
} celula;

void ordena(celula *l3){
    celula *nova;
    celula *aux;
    for(nova = l3->prox; nova ->prox!= NULL; nova = nova ->prox){
        celula *menor = nova;
    
        for(aux = nova -> prox; aux != NULL; aux = aux -> prox){
            if(aux -> dado < menor ->dado){
                menor = aux;
            }}
        if(menor!=nova){
            int tmp = nova->dado;
            nova->dado = menor->dado;
            menor->dado = tmp;
        }
    }
}

void mescla_listas(celula *l1, celula *l2, celula *l3){
    
    celula *nova;
    for(nova = l1; nova -> prox != NULL; nova = nova ->prox);
    nova -> prox = l2 -> prox;
    l3 -> prox = l1->prox;
    ordena(l3);

}

// void imprime(celula *le){
//     for(celula *nova = le->prox; nova != NULL; nova = nova ->prox){
//         printf("%d -> ", nova->dado);
//     }
//     printf("NULL\n");
// }

// int main(){
//     celula l1, l2, l3, no1, no2, no3, no4, no5, no6, no7;

//     no1.dado = 1;
//     no2.dado=7;
//     no3.dado=9;
//     no4.dado = 10;
//     no5.dado=2;
//     no6.dado=3;
//     no7.dado=8;
//     l1.prox =  &no1;
//     no1.prox =  &no2;
//     no2.prox = &no3;
//     no3.prox = &no4;
//     no4.prox = NULL;

//     l2.prox =  &no5;
//     no5.prox =  &no6;
//     no6.prox = &no7;
//     no7.prox = NULL;
//     mescla_listas(&l1, &l2, &l3);
//     imprime(&l3);
//     return 0;
// }