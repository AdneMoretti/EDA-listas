#include <stdio.h>
int main(){
    int numero, pares=0, impares = 0;
    do{
        scanf("%d", &numero);
        if(numero%2 == 0){
            pares= pares+numero;
        }
        else{
            impares = impares+numero;
        }
    }while(numero!=0);
    printf("%d %d", pares, impares);
    return 0;
}