#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int verifica = 0;
typedef struct pilha{
  char dado;
  struct pilha *prox;
} pilha;


pilha *cria_pilha(){
    pilha *nova = malloc(sizeof(pilha));
    nova->prox = NULL;
    return nova;
}
void empilha(pilha *p, char x){
    pilha *novo = malloc(sizeof(pilha));
    if(novo==NULL) return;
    novo->dado = x;
    novo -> prox = p->prox;
    p -> prox = novo;
}
void desempilha(pilha *p, char *y){
    pilha *lixo = p->prox;
    if(lixo==NULL) return;
    *y = lixo->dado;
    p->prox = lixo->prox;
    free(lixo);
}

int main(){
    char c[501], y;
    int valido = 0;
    pilha *nova = cria_pilha();
    scanf(" %[^\n]s", c);
    for(int i=0;i<strlen(c);i++){
        if(c[i] == '{'  || c[i] == '('  || c[i]=='['){
            empilha(nova, c[i]);
        }
        if(c[i] == '}'){
            if(nova->prox==NULL){
                printf("nao");
                printf("\n");
                return 0;
            }
            else{
                desempilha(nova, &y);
                if(y!='{'){
                    printf("nao");
                    printf("\n");
                    return 0;
                }
            }
            
        }
        if(c[i] == ']'){
            if(nova->prox==NULL){
                printf("nao");
                printf("\n");
                return 0;
            }
            else{
                desempilha(nova, &y);
                if(y!='['){
                    printf("nao");
                    printf("\n");
                    return 0;
                }
            }
        }
        if(c[i] == ')'){
            if(nova->prox==NULL){
                printf("nao");
                printf("\n");
                return 0;
            }
            else{
                desempilha(nova, &y);
                if(y!='('){
                    printf("nao");
                    printf("\n");
                    return 0;
                }
            }
        }
    }
    if(nova->prox == NULL) printf("sim");
    else printf("nao");

    free(nova);

}