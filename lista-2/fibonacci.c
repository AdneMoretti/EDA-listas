
#include <stdio.h>

long long int aux[80];

long long int fib(int n){

    if (aux[n] != -1) return aux[n];
    else{    
        aux[n] = fib(n-1)+fib(n-2);
        return aux[n];
    }
}
long long int fibonacci(int n){
    if(n==2|| n==1)aux[1]=aux[2]=1;
    else {
        aux[n] = -1;
        fibonacci(n-1);
    }
    return fib(n);
}