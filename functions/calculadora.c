#include <stdio.h>

void imprime(int total){
    printf("\nResultado = %d\n", total);
}

int soma(int a, int b) {
    int soma = a + b;
    imprime(soma);
    return soma;
}

int sub(int a, int b) {
    int sub = a - b;
    imprime(sub);
    return sub;
}

int mul(int a, int b) {
    imprime(a*b);
    return a * b;
}

int div(int a, int b) {
    imprime(a/b);
    return a/b;
}

int main(){

    int opcao, a, b, i;
    
    while (opcao != 0){

        printf("\n1 - soma; \n2 - subtração; \n3 - multiplicação; \n4 - divisão; \n0 - encerrar;\n");
        printf("\nEscolha a opção: ");
        scanf("%d", &opcao);

        if(opcao == 0){
            break;
        }

        printf("\nDigite A: ");
        scanf("%d", &a);
        printf("Digite B: ");
        scanf("%d", &b);

        if(opcao == 1){
            soma(a, b);
        } else if(opcao == 2){
            sub(a, b);
        } else if(opcao == 3){
            mul(a, b);
        } else{
            div(a, b);
        }
    }
}