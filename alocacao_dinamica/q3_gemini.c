/*
1. Peça ao usuário um tamanho para um array de inteiros.
2. Use calloc para alocar o array com o tamanho informado.
3. Verifique se a alocação foi bem-sucedida.
4. Sem atribuir nenhum valor, use um laço for para imprimir todos os elementos do array. Observe o que é impresso.
5. Libere a memória com free().
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d", &n);
    int *V;
    
    V = (int*)calloc(n, sizeof(int));

    if(V == NULL){
        printf("Memória não alocada.\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("| %d |", V[i]);
    }
    
    free(V);
    return 0;
}