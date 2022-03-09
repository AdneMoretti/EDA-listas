#include <stdio.h>
int contar7(long int entrada, int soma){
    if (entrada >=0){
    if((entrada / 10)==7){ 
        return soma=soma+1;
        entrada = entrada % 10;
        contar7(entrada, soma);
    }
    else{
        entrada = entrada % 10;
        contar7(entrada, soma);
    }
    }
}
int main(){
    long int entrada;
    scanf("%ld", &entrada);
    contar7(entrada, 0);
    return 0;
}