#include <stdio.h>
#include <stdlib.h>
int main(){
    int nconta;
    float debito, saldo, credito, saldoatual;
        printf("Digite o numero da sua conta: ");
        scanf("%i", &nconta);
        printf("Seu saldo: ");
        scanf("%f", &saldo);
        printf("Seu debito: ");
        scanf("%f", &debito);
        printf("Seu credito: ");
        scanf("%f", &credito);
        printf("-------------------------------------------\n");
        saldoatual= saldo-debito+credito;

        system("cls");

        printf("----------------------------\n");
        printf("           STATUS           \n");
        printf("----------------------------\n");
        printf("SEU SALDO ATUAL E: %f\n", saldoatual);
        if(saldoatual>=0){
            printf("SALDO POSITIVO!");
        }else{
            printf("SALDO NEGATIVO!");
        }

    return 0;
}
