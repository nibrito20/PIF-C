#include <stdio.h>

int main() {

    int a;
    printf("Digite um número de 0 a 10: ");
    scanf("%d", &a);
    int soma = 0;
    int i;

    /*
    for (inicialização, condição/condição de parada, atualização)
    */
    for (i= 0; i<=a; i++){
        soma = soma + i;
    }

    printf("A soma dos %d primeiros número é: %d.\n", a, soma);

    return 0;
}