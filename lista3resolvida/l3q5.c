#include <stdio.h>
#include <stdlib.h>
int main(){
    int n1, n2, n3, nmaior;
        printf("Informe 3 nuemros diferentes: \n");
        scanf("%d %d %d", &n1, &n2, &n3);
        while(n1==n2 || n1==n3 || n2==n3){
                printf("Informe 3 nuemros diferentes: \n");
                scanf("%d %d %d", &n1, &n2, &n3);
    }
        if(n1>n2 && n1>n3){
            nmaior=n1;

        }else{
            if(n2>n1 && n2>n3){
                nmaior=n2;
            }else{
                    nmaior=n3;
            }
        }

    printf("Maior valor: %d ", nmaior);


    return 0;
}
