/*
Escreva uma função em C chamada rotacionar_vetor que receba um vetor de inteiros v, seu tamanho n e um número k. 
A função deve rotacionar os elementos do vetor para a esquerda em k posições.
A rotação deve ser feita "in-place", ou seja, sem a necessidade de um vetor auxiliar para armazenar os elementos temporariamente. 
A complexidade de espaço deve ser O(1).
Exemplo:
Para o vetor v = {0, 1, 2, 3, 4, 5, 6}, n = 7 e k = 3.
Após a rotação para a esquerda em 3 posições, o vetor deve se tornar {4, 5, 6, 7, 1, 2, 3}.
*/
#include <stdio.h>

void rotacionar_vetor(int *V, int n, int k){
    
    for(int i=0; i<k; i++){
        int P = V[0];
        for(int j=0; j<n-1; j++){ 
            V[j] = V[j+1];
        }
        V[n-1] = P;
    }
}

int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    int V[n];
    
    for(int i=0; i<n; i++){
        scanf("%d", &V[i]);
    }
    
    rotacionar_vetor(V, n, k);
    
    for(int i=0; i<n; i++){
        printf("%d ", V[i]);
    }
    return 0;
}