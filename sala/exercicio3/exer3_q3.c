/*
Escreva uma função em C chamada contar_elementos_unicos que receba um vetor de inteiros v e seu tamanho n. 
O vetor pode conter elementos repetidos. A função deve contar a quantidade de elementos distintos (únicos) no vetor.
Sua função deve retornar a contagem de elementos únicos.
*/

#include <stdio.h>

int contar_elementos_unicos(int *V, int n){
    int qtd_elementos_unicos = 0;
    for (int i = 0; i < n; i++){
        int repetido = 0;
        for (int j = 0; j < i; j++){ // A ideia é apenas verificar os elementos anteriores ao índice.
            if(V[i] == V[j]){
                repetido++;
                break;
            }
        }
        if (repetido == 0) {
            qtd_elementos_unicos++;
        }
    }
    return qtd_elementos_unicos;
}

int main(){
    int n;
    scanf("%d", &n);
    int V[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &V[i]);
    }
    printf("Há %d elementos distintos no vetor.\n", contar_elementos_unicos(V, n));
}