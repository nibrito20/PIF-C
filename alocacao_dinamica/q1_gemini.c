/*
1. Declare um ponteiro para um inteiro (int *ptr;).
2. Use malloc para alocar espaço na memória para um inteiro.
3. Verifique se o ponteiro retornado por malloc não é NULL.
4. Se a alocação foi bem-sucedida, atribua o valor 2024 à área de memória apontada por ptr.
5. Imprima o valor para confirmar que foi armazenado corretamente.
6. Use free() para liberar a memória que você alocou.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr;
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));
    
    if(ptr == NULL){
        printf("Memória não alocada.\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }
    
    ptr[0] = 2024;

    for (int i = 0; i < n; i++)
    {
        printf("| %d |", ptr[i]);
    }
    
    free(ptr);
    return 0;
}