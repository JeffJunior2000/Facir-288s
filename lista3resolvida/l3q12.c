#include <stdio.h>
#include <stdlib.h>
int main(){
    char nome[10];
    float preco, total, totalp;
    int qth;
        printf("Nome do produto: ");
        scanf("%s", &nome);
        printf("Preco do produto: ");
        scanf("%f", &preco);
        printf("Quantidade do produto: ");
        scanf("%i", &qth);
        total=qth*preco;
        printf("-------------------------------\n");
        printf("O total deu R$ %.2f\n", total);
        if(qth<=5){
            totalp=total-total*0.02;
            printf("Porem com o desconto voce paga apenas R$ %.2f", totalp);
        }else{
            if(qth>5 && qth<=10){
                totalp=total-total*0.03;
                printf("Porem com o desconto voce paga apenas R$ %.2f", totalp);
            }else{
                    if(qth>10){
                        totalp=total-total*0.05;
                        printf("Porem com o desconto voce paga apenas R$ %.2f", totalp);
                    }
                }
            }

    return 0;
}
