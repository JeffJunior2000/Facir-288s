#include <stdio.h>
int main(){
    int i, n;
    for(i=1; i<11; i++){
        printf("(%d, ", i);
        for(n=1; n<11; n++){
            printf("%d ", n);
        }
        printf(")\n");
    }
    return 0;
}
