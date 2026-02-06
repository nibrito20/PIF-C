/*
Crie uma struct chamada Produto com os campos:
nome (máx. 20 caracteres)
preco (float)
No main:
Leia a quantidade de produtos.
Aloque dinamicamente um vetor de Produto com esse tamanho.
Leia os dados de cada produto.
Exiba todos os produtos cadastrados.
Libere a memória no final.
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[20];
    float preco;
}Produto;

int main(){
    int qtd;
    scanf("%d", &qtd);

    Produto *p = (Produto*)malloc(qtd * sizeof(Produto));

    for(int i = 0; i < qtd; i++){
        scanf("%s", (*(p+i)).nome);
        scanf("%f", &(*(p+i)).preco);
    }

    for(int i = 0; i < qtd; i++){
        printf("Produto: %s\n", p[i].nome);
        printf("Preço: %.1f\n", p[i].preco);
        printf("\n");
    }
    free(p);
    return 0;
}