#include <stdio.h>
#include <stdlib.h>

/*
vetor = (int *) malloc(n * sizeof(int));
sizeof(int) -> Diz ao compilador quantos bytes ocupa um int na sua máquina.
n * sizeof(int) -> Calcula o total de memória necessária para armazenar n inteiros.
malloc(n * sizeof(int)) -> A função malloc() pede ao sistema um bloco contínuo de memória com o tamanho especificado (em bytes).
(int *) -> Faz um casting: converte o ponteiro genérico (void *) em um ponteiro para int.
*/

int main() {
    int n, *vetor;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    // Alocando memória para n inteiros
    vetor = (int *) malloc(n * sizeof(int));

    if (vetor == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    // Preenchendo o vetor
    for (int i = 0; i < n; i++) {
        vetor[i] = i * 2;
    }

    // Exibindo o vetor
    printf("Vetor: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }

    // Liberando memória
    free(vetor);

    return 0;
}
