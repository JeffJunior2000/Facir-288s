#include <stdio.h>
#include <stdlib.h>
int main(){
    char nome1[10], nome2[10];
    int qth1, qth2;
        printf("Primeiro time: ");
        scanf("%s", &nome1);
        printf("Segundo time: ");
        scanf("%s", &nome2);
        printf("--------------------------------------\n");
        printf("Quantidade de gols que o %s fez: ", nome1);
        scanf("%d", &qth1);
        printf("Quantidade de gols que o %s fez: ", nome2);
        scanf("%d", &qth2);
        printf("--------------------------------------\n");
        if(qth1>qth2){
            printf("Vencedor do confronto %s", nome1);
        }else{
            if(qth2>qth1){
                printf("Vencedor do confronto %s", nome2);
            }else{
                printf("EMPATE!");
            }
        }

 return 0;
}
