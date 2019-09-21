#include <stdio.h>
#include <stdlib.h>
int main(){
    float n1, n2, n3, mediae, mediaa;
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);
    printf("Digite a Media de exercicios: ");
    scanf("%f", &mediae);
    mediaa= (n1+(n2*2)+(n3*3)+mediae)/7;
    printf("----------------------------------\n");
    printf("Media: %.2f\n", mediaa);
    printf("----------------------------------\n");
    if(mediaa>=9){
        printf("NOTA A");
    }else{
        if(mediaa>=7.5 && mediaa<9){
            printf("NOTA B");
        }else{
            if(mediaa<7.5 && mediaa>=6){
                printf("NOTA C");
            }else{
                printf("NOTA D");
            }
        }
    }
    return 0;
}
