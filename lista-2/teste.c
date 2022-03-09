#include <stdio.h>

void selectionsort(int numero[], int n){
    for(int i=0;i<n;i++){
        int menor = i;
    
        for(int j = i+1; j<n;j++){
            if(numero[j]< numero[menor]){
                menor = j;
            }}
            if(menor!=i){
                int tmp = numero[i];
                numero[i] = numero[menor];
                numero[menor] = tmp;
    }
}
    for(int i=0; i<n; i++){
        printf("%d", numero[i]);
    }
}
int main(){
    char c;
    int numero[100];
    int n = 0;
    while(scanf("%d", &numero[n])!= EOF){
        n=n+1;
    }
    selectionsort(numero, n);
    
    return 0;
}