#include <stdio.h>
int main(){
    float salario,valorV;
    printf("Digite seu salario fixo: ");
    scanf("%f", &salario);
    printf("Digite o valor de vendas: ");
    scanf("%f", &valorV);
    if(valorV <= 1500){
        printf("Seu salario e: %.2f", salario*1.03);
    }else{
        printf("Seu salario e: %.2f", (salario*1.03)*1.05);
    }
    return 0;
}
