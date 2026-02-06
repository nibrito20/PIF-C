#include <stdio.h>
#include <stdlib.h>

int main(){
    int *vetor;
    int n;
    char resposta;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    vetor = (int*)malloc(n * sizeof(int));

    if(vetor == NULL){
        printf("Alocação do malloc falhou.\n");
        return 1;
    }

    for (int i = 0; i < n; i++){
        printf("V[%d]: ", i);
        scanf("%d", &vetor[i]);
    }
    
    printf("\nVocê deseja adicionar mais números? (s/n): ");
    scanf(" %c", &resposta);

    if(resposta == 's'){
        int qtd_nova;
        printf("\nDigite a quantidade que você deseja adicionar: ");
        scanf("%d", &qtd_nova);

        int novo_tamanho_total = n + qtd_nova;
        vetor = realloc(vetor, novo_tamanho_total * sizeof(int));
        
        if (vetor == NULL){
            printf("Realocacao de memoria falhou!\n");
            free(vetor);
            return 1;
        }

        for (int i = n; i < novo_tamanho_total; i++){
            printf("V[%d]: ", i);
            scanf("%d", &vetor[i]);
        }

        printf("\n--- Vetor final completo ---\n");
        for (int i = 0; i < novo_tamanho_total; i++) {
            printf("%d ", vetor[i]);
        }
    } else{
        printf("\nFinalizando...\n");
    }
    free(vetor);
    return 0;
}