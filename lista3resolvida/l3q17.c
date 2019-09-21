#include <stdio.h>
int main(){
    int n, n1=1;
    printf("Digite um nuemro: ");
    scanf("%d", &n);
    while(n==0){
        printf("Digite um numero diferente de zero: ");
        scanf("%d", &n);
    }
    for(n1=1; n1<=n; n1++){
        printf("%d", n1);
    }

}
