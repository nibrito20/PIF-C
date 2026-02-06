/*
1. Pergunte ao usuário quantos números ele deseja armazenar e leia esse valor para uma variável (ex: int tamanho;).
2. Use malloc para alocar um array de doubles com o tamanho que o usuário inseriu.
3. Crucial: Verifique se a alocação de memória falhou (se o ponteiro é NULL). Se falhar, exiba uma mensagem de erro e termine o programa.
4. Se funcionar, use um laço (for) para preencher o array com valores à sua escolha (pode ser o próprio índice do laço, por exemplo).
5. Use outro laço para imprimir todos os valores do array.
6. Ao final, não se esqueça de liberar a memória com free().
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d", &n);
    int *V;

    V = (int*)malloc(n * sizeof(int));

    if(V == NULL){
        printf("Memória não alocada.\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &V[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("| %d |", V[i]);
    }
    free(V);
    return 0;
}