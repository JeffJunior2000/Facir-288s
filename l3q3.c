#include <stdio.h>
#include <stdlib.h>
int main(){
    int qatual, qmaxima, qminima, qmedia;
        printf("Quantidade atual no estoque: ");
        scanf("%d", &qatual);
        printf("Quantidade maxima no estoque: ");
        scanf("%d", &qmaxima);
        printf("Quantidade minima no estoque: ");
        scanf("%d", &qminima);
        qmedia = (qmaxima+qminima)/2;
        printf("--------------------------------------\n");
        if(qatual>=qmedia){
            printf("Não efetuar compra!");
        }else{
                printf("Efetuar compra!");
        }


    return 0;
}
