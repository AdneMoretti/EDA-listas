#include <stdio.h>
#include <stdlib.h>

int bin(int *vn, int m, int inicio, int n) {
    int metade;
    for(int i=0;inicio<=n;i++){
        metade = (inicio+n)/2;
        if(m < vn[metade]) n = metade-1;
        else if(m>vn[metade]) inicio = metade + 1;
        else return metade;       
    }
    return metade;
}

int main(){
    int N, M, i;
    scanf("%d %d", &N, &M);
    int *vetorM = malloc(sizeof(int)*M);
    int *vetorN = malloc(sizeof(int)*N);
    for(i=0;i<N;i++){
        scanf("%d", &vetorN[i]);
    }
    for(i=0;i<M;i++){
        scanf("%d", &vetorM[i]);
    }
    for(i=0;i<M;i++){
        printf("%d",bin(vetorN,vetorM[i], 0, N));
        printf("\n");
    }
    return 0;
}