/*
Crie uma struct chamada Pessoa com os campos nome (máx. 30 caracteres) e idade (int).
No main, leia os dados de uma única pessoa e exiba na tela.
*/
#include <stdio.h>

struct Pessoa{
    char nome[30];
    int idade;
};

int main(){
    struct Pessoa pessoa;
    scanf("%s", pessoa.nome);
    scanf("%d", &pessoa.idade);
    printf("Nome: %s", pessoa.nome);
    printf("\nIdade: %d", pessoa.idade);
    return 0;
}