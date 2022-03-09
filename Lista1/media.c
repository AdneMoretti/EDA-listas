#include <stdio.h>
#include <stdbool.h>
int main(){
    int numero, soma =0;
    bool algum=false;
    scanf("%d", &numero);
    int entradas[numero];
    for(int i=0;i<numero;i++){
        scanf("%d", &entradas[i]);
        soma = soma+entradas[i];
    }
    soma = soma/numero;
    for(int i=0;i<numero;i++){
        if (entradas[i]>soma){
            printf("%d ", entradas[i]);
            algum=true;
        }
        
    }
    if(algum==false){
        printf("0");
    }
    return 0;
}