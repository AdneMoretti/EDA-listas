#include <stdio.h>

int main(){
    int carta;
    char naipe;
    int paus[13]={0,0,0,0,0,0,0,0,0,0,0,0,0};
    int ouro[13]={0,0,0,0,0,0,0,0,0,0,0,0,0};
    int copas[13]={0,0,0,0,0,0,0,0,0,0,0,0,0};
    int espadas[13]={0,0,0,0,0,0,0,0,0,0,0,0,0};
    int numPaus=0, numU=0, numE=0, numC=0;
    int igualC = 0, igualE=0,igualPaus=0, igualU=0;
    while(scanf("%d", &carta)!= EOF){
        scanf("%c", &naipe);
        if(naipe=='C'){
            for(int i=0;i<13;i++){
                if(carta==copas[i]){
                    igualC = 1;
                }
            }
            if(igualC==0 && copas[numC]==0){
                copas[numC]=carta;
                numC++;
                }
        }
        if(naipe=='E'){
            for(int i=0;i<13;i++){
                if(carta==espadas[i]){
                    igualE = 1;
                }
            }
            if(igualE==0 && espadas[numE]==0){
                espadas[numE]=carta;
                numE++;
            }
        }
        if(naipe=='U'){
            
            for(int i=0;i<13;i++){
                if(carta==ouro[i]){
                    igualU = 1;    
            }
            }
            if(igualU==0 && ouro[numU]==0){
                ouro[numU]=carta;
                numU++;
            }
        }
        if(naipe=='P'){
            
            for(int i=0;i<13;i++){
                if(carta==paus[i]){
                    igualPaus = 1;
                }
            }
            if(igualPaus==0 && paus[numPaus]==0){
                paus[numPaus]=carta;
                numPaus++;
            }
        }
        
    }
    if(igualC==1){
        printf("erro\n");
    }
    else{
        printf("%d\n", 13-numC);
        }
    
    if(igualE==1){
        printf("erro\n");
    }
    else{

        printf("%d\n", 13-numE);
    }

    if(igualU==1){
        printf("erro\n");
    }
    else{

        printf("%d\n", 13-numU);

    }
    if(igualPaus==1){
        printf("erro\n");
    }
    else{

        printf("%d\n", 13-numPaus);
        

    }
    return 0;
}