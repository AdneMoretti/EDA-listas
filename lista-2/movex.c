#include <stdio.h>
char mover(char *s, int n){
    if(s[n] != '\0'){
        if(s[n] != 'x'){
            printf("%c", s[n]);
            mover(s, n+1);
        }
        else{
            mover(s, n+1);
            printf("%c", s[n]);
        }
    }
}
int main(){
    char str[100];
    scanf("%s", str);
    mover(str, 0);
    printf("\n");
    return 0;
}