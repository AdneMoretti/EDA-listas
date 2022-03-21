#include <stdio.h>
#include <stdlib.h>


typedef struct celula {
   int dado;
   struct celula *prox;
} celula;

int remove_depois(celula *p){
    celula *lixo = p -> prox;
    if(lixo!=NULL){
        int y = lixo->dado;
        p -> prox = lixo->prox;
        return y;
    }
}
void remove_elemento(celula *le, int x){
    celula *nova;
    for(nova = le; nova->prox != NULL && nova->prox->dado != x; nova = nova ->prox);
    remove_depois(nova);
}

void remove_todos_elementos(celula *le, int x){
    celula *nova, *nova2;
    do{
        for(nova = le; nova -> prox != NULL && nova -> prox -> dado != x; nova = nova -> prox);
        nova2 = nova -> prox;
        remove_depois(nova);
    }while(nova2 !=NULL);
}
// void insere_inicio(celula *le, int x){
//     celula *novo = malloc(sizeof(celula));
//     novo->dado = x;
//     novo ->prox = le->prox;
//     le -> prox = novo;
// }

// void insere_antes(celula *le, int x, int y){
//     celula *nova;
//     for(nova = le; nova->prox != NULL && nova->prox->dado != y; nova = nova ->prox);
//     return insere_inicio(nova, x);
// }

// void imprime(celula *le){

//     for(celula *nova = le->prox; nova != NULL; nova = nova ->prox){
//         printf("%d -> ", nova->dado);
//     }
//     printf("NULL\n");
// }

// void imprime_rec(celula *le){
//     celula *nova = le->prox;
//     if(nova==NULL) printf("NULL\n");
//     else{
//         printf("%d -> ", nova-> dado);
//         imprime_rec(nova);
//     }
// }

// celula *busca(celula *le, int x){
//     celula *nova;
//     for(nova = le->prox; nova != NULL && nova->dado != x; nova = nova ->prox);
//     return nova;
    
// } 
// celula *busca_rec(celula *le, int x){
//     if(le->prox ==NULL) return NULL;
//     else if (le->prox->dado == x) return le -> prox;
//     else busca_rec(le->prox, x);
// }
// int main(){
//     celula le, no1, no2, no3, no4;

//     no1.dado = 1;
//     no2.dado=2;
//     no3.dado=3;
//     no4.dado = 3;
//     le.prox =  &no1;
//     no1.prox =  &no2;
//     no2.prox = &no3;
//     no3.prox = &no4;
//     no4.prox = NULL;

//     remove_depois(&no2);
//     remove_elemento(&le, 2);
//     //remove_todos_elementos(&le, 3);
//     imprime(&le);
//     return 0;
// }