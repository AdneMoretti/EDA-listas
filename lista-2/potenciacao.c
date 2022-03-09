#include <stdio.h>
#include <stdlib.h>
float potenciacao(int a, int b){
    if(b==0) return 1;
    else return a * potenciacao(a, b-1);
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    if(a==0 && b<=0){
        printf("%s\n", "indefinido");
    }
    else{
        if(b>=0) printf("%f", potenciacao(a, b));
        else printf("%.3f", 1/(potenciacao(a, abs(b))));
    }
    return 0;
}