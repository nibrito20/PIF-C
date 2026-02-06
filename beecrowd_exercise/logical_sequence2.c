#include <stdio.h>

int main(){

    int x, y, i;
    scanf("%d %d", &x, &y);

    for(i= 1; i <= y; i++) { /* Garante que o laço execute enquanto i for menor ou igual a Y, incluindo o próprio Y. */
        printf("%d", i);

        if (i % x == 0){
            printf("\n");
        } else {
            printf(" ");
        }
    }

    return 0;
}