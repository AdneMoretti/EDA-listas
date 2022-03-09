#include <stdio.h>
int contar(long long int numero, int soma){
    if ((numero%10) == 7) soma = soma+1;
    if (numero == 0) {
        printf("%d\n", soma);
    }
    else return contar(numero/10, soma);
    
}

int main(){
    long long int numero;
    scanf("%lld", &numero);
    if(numero == 7){
        printf("1");
    }
    else{
        contar(numero, 0);
    }

}