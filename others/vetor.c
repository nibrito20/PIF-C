#include <stdio.h>

int main(){

    int v[3] = {1, 2, 3};
    int m[2][2] ={
        {1,2},
        {3,4}
    };

    printf("Vetor:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", v[i]);
    }
    printf("\n\n");

    printf("Matriz:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    return 0;
}