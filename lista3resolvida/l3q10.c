#include <stdio.h>
#include <stdlib.h>
int main(){
    int a, b;
    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);
    printf("--------------------------\n");
    if(a==b){
        printf("NUMEROS IGUAIS!");
    }else{
        if(a>b){
            printf("PRIMEIRO E MAIOR!");
        }else{
            if(a<b){
                printf("SEGUNDO E MAIOR!");
            }
        }
    }

    return 0;
}
