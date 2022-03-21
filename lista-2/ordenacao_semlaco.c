#include <stdio.h>
int aux(int *numero, int i, int elem){
    if(i<0 || numero[i]<=elem) return i;
    numero[i+1]=numero[i];
    aux(numero, i-1, elem);
 
}
void ordena(int *numero, int n){
    if(n<=1) return;

    ordena(numero, n-1);

    int elem = numero[n-1];
    int i = aux(numero, n-2, elem);
    numero[i+1] = elem;
    
    }


int main(){
    int numero[10] = {3, 5, 6, 9, 3, 9, 1, 2,6,7};
    ordena(numero, 10);
    for(int i=0;i<10;i++){
        printf("%d",numero[i]);
    }
    return 0;
}