#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int contar_pontos(long int *raios, float hipotenusa, long int C, int soma){
    for(int i=0;i<C;i++){
        if(hipotenusa<=raios[i]){
            soma++;
        }
        }
        return soma;
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
        soma = soma + contar_pontos(raios, hipotenusa, C, 0);
    }

    printf("%d", soma);
    return 0;
}