#include <stdio.h>
#include <stdlib.h>
int main(){
    int n1, n2, n3, soma;
        printf("Informe 3 nuemros diferentes: \n");
        scanf("%d %d %d", &n1, &n2, &n3);
        while(n1==n2 || n1==n3 || n2==n3){
                printf("Informe 3 nuemros diferentes: \n");
                scanf("%d %d %d", &n1, &n2, &n3);
    }
        if(n1<n2 && n1<n3){
            soma = n2+n3;
            printf("Soma dos 2 valores maiores e: %d ", soma);
        }else{
            if(n2<n1 && n2<n3){
                soma= n1+n3;
                printf("Soma dos 2 valores maior e: %d ", soma);
            }else{
                soma= n1+n2;
                printf("Soma dos 2 valores maior e: %d ", soma);
            }
        }

    return 0;
}
