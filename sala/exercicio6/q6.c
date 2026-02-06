/*
Crie duas structs:
Endereco, contendo rua (máx. 40 chars) e numero (int).
Pessoa, contendo nome (máx. 30 chars), idade (int) e um campo do tipo Endereco.
No main:
Leia os dados de uma pessoa (incluindo endereço).
Exiba todos os dados formatados.
*/
#include <stdio.h>

typedef struct{
    char nome[30];
    int idade;
    char tipo_endereco[30];

    struct{
        int numero;
        char rua[40];
    }Endereco;

}Pessoa;

int main(){

    Pessoa p1;
    
    printf("Digite o nome: ");
    scanf("%s", p1.nome);
    printf("Digite a idade: ");
    scanf("%d", &p1.idade);
    printf("Digite o tipo de endereço: ");
    scanf("%s", p1.tipo_endereco);
    printf("Digite a rua: ");
    scanf("%s", p1.Endereco.rua);
    printf("Digite o número da rua: ");
    scanf("%d", &p1.Endereco.numero);

    printf("%s - %d anos - %s - Rua %s, N° %d.\n", p1.nome, p1.idade, p1.tipo_endereco, p1.Endereco.rua, p1.Endereco.numero);
    return 0;
}