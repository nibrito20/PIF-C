/*
Escreva uma função em C chamada encontrar_elemento_unico que receba um vetor de inteiros v e seu tamanho n. 
O vetor contém um número ímpar de elementos, e todos os elementos, exceto um, aparecem exatamente duas vezes. 
A função deve encontrar e retornar o elemento que aparece apenas uma vez.
*/
#include <stdio.h>

int encontrar_elemento_unico(int *V, int n){
    int num;
    for(int i = 0; i < n; i++){
        int cont = 0; // Atenção na hora de zerar o contador!!!
        int P = V[i];
        for(int j = 0; j < n; j++){
            if(P == V[j]){
                cont++;
            } 
        }
        if(cont == 1){
            num = P;
            
        }
    }
    return num;
}

int main(){

    int n;
    scanf("%d", &n);
    int V[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &V[i]);
    }
    printf("O elemento %d aparece apenas uma vez\n", encontrar_elemento_unico(V, n));
    return 0;
}