#include <stdio.h>

//Operações de Matrizes e Matriz Transposta

int main(){
    
    int i, j;
    int matrizA[3][2];
    int matrizB[3][2];
    int matrizC[3][2];

    printf("\nAdicionando a Matriz A:\n");
    for(i = 0; i <3; i++){
        for(j = 0; j < 2; j++){
            scanf("%d", &matrizA[i][j]);
        }
    }

    printf("\nAdicionando a Matriz B:\n");
    for(i = 0; i <3; i++){
        for(j = 0; j < 2; j++){
            scanf("%d", &matrizB[i][j]);
        }
    }

    printf("\nMatriz A:\n");
    for(i = 0; i <3; i++){
        for(j = 0; j < 2; j++){
            printf("%2d", matrizA[i][j]);
        }
        printf("\n");
    }

    //Transposta de A
    printf("\nTransposta de A:\n");
    for(j = 0; j < 2; j++){
        for(i = 0; i <3; i++){
            printf("%2d", matrizA[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz B:\n");
    for(i = 0; i <3; i++){
        for(j = 0; j < 2; j++){
            printf("%2d", matrizB[i][j]);
        }
        printf("\n");
    }

    printf("\nVamos somá-las...\n");

    printf("\nSoma das Matrizes A e B:\n");
    for(i = 0; i <3; i++){
        for(j = 0; j < 2; j++){
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    for(i = 0; i <3; i++){
        for(j = 0; j < 2; j++){
            printf("%5d", matrizC[i][j]);
        }
        printf("\n");
    }

    printf("\nSubtração das Matrizes A e B:\n");
    for(i = 0; i <3; i++){
        for(j =0; j < 2; j++){
            matrizC[i][j] = matrizA[i][j] - matrizB[i][j];
        }
    }

    for(i = 0; i <3; i++){
        for(j = 0; j < 2; j++){
            printf("%5d", matrizC[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}