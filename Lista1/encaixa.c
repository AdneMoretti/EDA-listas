#include <stdio.h>

int encaixa(int a, int b){
    int valido = 1;
    do{
        if(b%10 != a%10){
            valido = 0;
        }
        b = b/10;
        a = a/10;
    }while(b>0);
    if(valido == 1){
        return 1;
    }
    else{
        return 0;
    }
}
