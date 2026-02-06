/*
Crie uma struct chamada Cidade contendo:
nome (ponteiro para char)
populacao (int)
No main, aloque dinamicamente memória para armazenar o nome da cidade (até 40 caracteres), leia os dados e exiba-os.
*/
#include <stdio.h>
#include <stdlib.h>

struct Cidade{
    char *nome;
    int populacao;
};

int main(){

    struct Cidade c;

    c.nome = (char*)malloc(41 * sizeof(char));
    
    scanf("%s", c.nome);
    scanf("%d", &c.populacao);

    printf("Cidade: %s\n", c.nome);
    printf("População: %d\n", c.populacao);
    free(c.nome);
    return 0;
}