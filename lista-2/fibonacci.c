#include <stdio.h>
long int fibonacci(int n){
    if(n == 1 || n==2) return 1;
    else return fibonacci(n-2) + fibonacci(n-1);
}
int main(){
    int numero;
    scanf("%d", &numero);
    printf("%ld\n", fibonacci(numero));
}