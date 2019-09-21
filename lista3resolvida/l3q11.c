#include <stdio.h>
#include <stdlib.h>
int main(){
    int idade1, idade2, idade3, idade4, maiorm, maiorf, menorm, menorf, soma, produto;
    printf("Digite a idade dos dois homens: ");
    scanf("%d %d", &idade1, &idade2);
    while(idade1==idade2){
        printf("Digite idades diferentes: ");
        scanf("%d %d", &idade1, &idade2);
    }
    printf("---------------------------------------\n");
    printf("Digite a idade das duas mulheres: ");
    scanf("%d %d", &idade3, &idade4);
    while(idade3==idade4){
        printf("Digite idades diferentes: ");
        scanf("%d %d", &idade3, &idade4);
    }
    if(idade1>idade2){
        maiorm=idade1;
    }else{
        menorm=idade1;
    }
    if(idade2>idade1){
        maiorm=idade2;
    }else{
        menorm=idade2;
    }
    if(idade3>idade4){
        maiorf=idade3;
    }else{
        menorf=idade3;
    }
    if(idade4>idade3){
        maiorf=idade4;
    }else{
        menorf=idade4;
    }

    soma=maiorm+menorf;
    produto=menorm*maiorf;
    printf("---------------------------------------\n");
    printf("A soma da do homem mais velho com a mulher mais nova e %d\n", soma);
    printf("O produto do homem mais novo com a mulher mais velha e %d", produto);
    return 0;
}
