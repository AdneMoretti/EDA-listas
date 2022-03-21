#include <stdio.h>


int main(){
    int N, M, i;
    int vetorN[1000000000];
    int vetorM[1000000000];

    scanf("%d %d", N, M);
    for(i=0;i<N;i++){
        scanf("%d", vetorN[i]);
    }
    for(i=0;i<M;i++){
        scanf("%d", vetorM[i]);
    }

    return 0;
}