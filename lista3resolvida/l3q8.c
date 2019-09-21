#include <stdio.h>
#include <stdlib.h>
int main(){
    int a, b, c;
        printf("Digite tres numeros: ");
        scanf("%d %d %d", &a, &b, &c);
        if(a<(b+c) || b<(a+c) || c<(a+b)){
            printf("Forma um triangulo!");
        }else{
            printf("Não forma um triangulo!");
        }

    return 0;
}
