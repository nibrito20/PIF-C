#include <stdio.h>
#include <stdlib.h>

/*
int mat[3][4] -> é como se fosse um array contínuo
malooc() -> aloca espaços de memória contínuo
calloc() -> aloca múltiplos espaços de memória
realloc() -> realoca espaços de memória inicialmente criados por malloc ou calloc
free() -> libera os espaços previamente reservados
*/

int main(){
    int L = 2, C = 3;
    int **M; // é um ponteiro duplo

    M = (int**)malloc(L * sizeof(int*)); // tamanho é qtd_linhas x tamanho do ponteiro. No malloc ele nao necessariamente dá espaços contínuos

    for (int i = 0; i < L; i++){
        M[i] = (int*)malloc(C * sizeof(int*));
    }

    for (int i = 0; i < L; i++){
        for(int j = 0; j < C; j++){
            scanf("%d", &M[i][j]);
        }
    }
    
    for (int i = 0; i < L; i++){
        for(int j = 0; j < C; j++){
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < L; i++){
        for(int j = 0; j < C; j++){
            printf("Endereço do elemento[%d][%d]: %p.\n", i, j, &M[i][j]);
        }
    }
    for (int i = 0; i < L; i++){
        free(M[i]);
    }
    free(M);
    return 0;
}