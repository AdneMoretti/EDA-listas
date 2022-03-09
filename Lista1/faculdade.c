#include <stdio.h>
#include <string.h>
int main(){
    int numero_questoes; 
    int acertos = 0;
    scanf("%d", &numero_questoes);
    char gabarito[numero_questoes], alternativas[numero_questoes];
    scanf("%s", gabarito);
    scanf("%s", alternativas);
    for(int i=0;i<numero_questoes; i++){
        if(gabarito[i]==alternativas[i]){
            acertos++;
        }

    }

    printf("%d", acertos);

    return 0;
    
}