#include <stdio.h>

/*
Implemente uma função que recebe dois vetores de inteiros e calcula o produto escalar (soma dos produtos dos elementos correspondentes)
A = [1,2,3], B = [4,5,6] → Produto escalar = 1×4 + 2×5 + 3×6 = 32
*/

float produto_escalar(int *a, int *b, int n){
    float produto = 0;
    for(int i=0; i<n; i++){
        produto += a[i] * b[i];
    }
    return produto;
}

int main(){

    int n;
    scanf("%d", &n);
    int A[n], B[n];
    
    printf("Array A\n");
    for(int i=0; i<n; i++){
        scanf("%d", &A[i]);
    }
    
    printf("Array B\n");
    for(int i=0; i<n; i++){
        scanf("%d", &B[i]);
    }
    
    printf("Produto escalar = %.1f\n", produto_escalar(A, B, n));
    
    return 0;
}