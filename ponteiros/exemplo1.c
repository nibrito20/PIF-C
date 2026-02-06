#include <stdio.h>

void preencher_array(int *A, int n){
    printf("Valor de A: %p\n", A);
    printf("Digite %d valores separados por espaço\n", n);
    for(int i = 0; i<n; i++){

        scanf("%d", &A[i]);
    }
}
void imprimir_array(int *A, int n){
    printf("[2] Valor de A: %p\n", A);
    for (int i = 0; i < n; i++){
        printf("Array[%d] =  %d \n", i, *(A + i));
    }
    
}

int main(){

    int n;
    printf("Digite o tamanho do array: ");
    scanf("%d", &n);
    int Array[n];
    preencher_array(Array, n);
    imprimir_array(Array, n);
    return 0;
}