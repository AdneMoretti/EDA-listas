#include <stdio.h>
int main(){
    int numero;
    int quantidade =0;
    while(scanf("%d", &numero)!= EOF){
        quantidade=quantidade+1;
    }
    printf("%d",quantidade);
    return 0;
}