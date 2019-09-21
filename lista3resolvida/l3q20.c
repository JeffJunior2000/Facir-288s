#include <stdio.h>
int main(){
    int i=10, qp=0, soma=0, resultado;
    while(i<101){
        if(i%2==0){
                qp++;
                soma=soma+i;
                i++;
        }else{
            i++;
        }
    }
    resultado=soma/qp;
    printf("A media aritimetrica dos numeros pares e: %d", resultado);
    return 0;
}
