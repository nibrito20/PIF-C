/*
Implemente uma função que recebe uma matriz quadrada de ordem N e calcula a soma de todos os elementos
*/
#include <stdio.h>
int soma_elementos(int *M, int n){
    int soma = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            soma += *(M + (i*n) + j);
        }
    } 
    return soma;
}

int main(){
    int n;
    scanf("%d", &n);
    int M[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &M[i][j]);
        }
    }
    printf("A soma dos elementos de M é %d\n", soma_elementos(&(M[0][0]), n));

    return 0;
}