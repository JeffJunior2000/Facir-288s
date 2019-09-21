#include <stdio.h>
#include <stdlib.h>
int main(){
    int n1, n2, div;
    printf("Digite o valor do primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o valor de segundo nuemro: ");
    scanf("%d", &n2);
    while(n2==0){
        printf("Digite um valor diferente de zero para o segundo numero: ");
        scanf("%d", &n2);
    }
    div=n1/n2;
    printf("O valor da divisao do primeiro numero divido pelo segundo e: %d", div);

    return 0;
}
