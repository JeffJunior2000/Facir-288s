#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    if(n>0){
        printf("Positivo!");
    }else{
        if(n<0){
            printf("Negativo!");

        }else{
            printf("Zero!");
        }
    }

    return 0;
}
