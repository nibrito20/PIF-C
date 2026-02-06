#include <stdio.h>
#include <stdlib.h>

int main(){
    float **M;
    float *V;
    int L, C;
    float soma, media;
    scanf("%d %d", &L, &C);

    M = (float **)malloc(L * sizeof(float*));

    if (M == NULL) {
        printf("Erro ao alocar memoria para as linhas.\n");
        return 1;
    }

    for(int i = 0; i < L; i++){
        M[i] = (float*)malloc(C * sizeof(float));
    }

    for (int i = 0; i < L; i++){
        for(int j = 0; j < C; j++){
            scanf("%f", &M[i][j]);
        }
    }

    V = (float*)malloc(L * sizeof(float));

    if (V == NULL) {
        printf("Erro ao alocar memoria para as linhas.\n");
        return 1;
    }

    for (int i = 0; i < L; i++){
        soma = 0.0;
        for(int j = 0; j < C; j++){
            soma += M[i][j];
        }
        V[i] = soma/C;
    }

    for (int i = 0; i < L; i++){
        printf("Média linha %d = %.2f\n", i+1, V[i]);
    }

    for (int i = 0; i < L; i++){
        free(M[i]);
    }
    free(V);
    free(M);
    
    return 0;
}