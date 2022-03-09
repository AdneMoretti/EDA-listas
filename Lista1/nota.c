#include <stdio.h>
int main(){
    int B, T, aE;
    scanf("%d %d", &B,&T);
    if(B>T){
        aE = ((B-T)*70/2)+T*70;
    }
    if(T>B){
        aE = ((T-B)*70/2)+B*70;
    }
    if(T==B){
        aE=B*70;
    }
    if (aE==5600){
        printf("%d", 0);
    }
    if(aE>5600){
       printf("%d", 1);
    }
    if(aE<5600){
        printf("%d", 2);
    }
    return 0;
}