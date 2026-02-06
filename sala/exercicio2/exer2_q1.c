/*
Implemente um programa que recebe do usuário um valor N representando o tamanho dos arrays e depois 2 arrays de inteiros de tamanho N. 
Implemente uma função para calcular a soma dos arrays, elemento a elemento, usando ponteiros, preenchendo um terceiro array resultante que também 
foi passado como parametro. 
Por ex: o primeiro elemento do vetor resultante é a soma do primeiro elemento do primeiro vetor mais o primeiro elemento do segundo vetor, C[0] = A[0] + B[0]. 
Seu programa deve chamar essa função e imprimir o array resultante na tela.
*/

#include <stdio.h>

void somar_arrays(int *A, int *B, int *C, int n){
    for(int i = 0; i<n; i++, A++, B++, C++){
        *C = *A + *B;
    }
}

int main(){

    int n;
    scanf("%d", &n);
    int A[n], B[n], C[n];

    printf("Array A:\n");
    for(int i = 0; i<n; i++){
        scanf("%d", &A[i]);
    }

    printf("\nArray B:\n");
    for(int i = 0; i<n; i++){
        scanf("%d", &B[i]);
    }

    somar_arrays(A, B, C, n);
    printf("\n");
    for(int i = 0; i<n; i++){
        printf("C[%d] = %d\n", i, C[i]);
    }

    return 0;
}