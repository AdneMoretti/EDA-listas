#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int pontos(long int *raios, float hipotenusa, int C, int soma){
    if(hipotenusa>raios[C]) return 0;
    else 
        if(raios[C]==raios[0]) return 1;
        else
            //soma++;
            soma = 1 + pontos(raios, hipotenusa, C-1, soma);
            return soma;
        
}

int contar_pontos(long int *raios, float hipotenusa, int C, int soma){
    if(hipotenusa > raios[C-1]) return 0;
    else 
        if(C>=2){
            return 1 + pontos(raios, hipotenusa, C-2, 0);
        }
        else{
            return 1;
        }
}

int main(){
    long int C, T;
    long int t1, t2; 
    long int i;
    int soma=0;
    scanf("%ld %ld", &C, &T);
    long int *raios = malloc(sizeof(int)*C);
    for(i=0;i<C; i++){
        scanf("%ld", &raios[i]);
    }
    for(i = 0; i<T; i++){
        scanf("%ld %ld", &t1, &t2);
        float hipotenusa = sqrt(t1*t1 + t2*t2);
        if(C>0){
            soma = soma + contar_pontos(raios, hipotenusa, C, 0);
        }
    }

    printf("%d", soma);
    return 0;
}