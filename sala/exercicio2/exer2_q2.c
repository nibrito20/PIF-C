/*
Implemente uma função que calcula a média dos valores contidos na diagonal principal de uma matriz, usando ponteiros. 
Depois, implemente um programa que recebe um inteiro N representando a ordem da matriz quadrada, os seus valores, chama a função para 
calcular a média da diagonal e imprime o resultado na tela.
*/

/*
Os elementos da matriz são armazenados um após o outro na memória, em uma única linha, sendo um "array de arrays".
Assim {0, 1, 2 | 3, 4, 5 | 6, 7, 8}

M: o nome de um array é um ponteiro constante do primeiro elemento. O valor sempre será 0.

(i * n): Isso calcula o "salto" para a linha desejada. O n é a largura da coluna.
Se eu quero ir para o segundo elemento da linha 1. O cálculo fica 1*3 = 3.Isso faz você chegar a linha correta, mas você precisa chegar na coluna desejada...
O + j faz exatamente isso, ele soma o deslocamento da coluna j.

*(): Por fim, o operador de desreferência '*' acessa o valor armazenado no endereço de memória calculado, que é o valor real do primeiro elemento da matriz.
*/

#include <stdio.h>

double media_diagonal(int *M, int n){
    int soma = 0;
    for(int i = 0; i < n; i++){
        soma += *(M +(i*n)+ i); // os dois sao i pq na dig prin a linha e coluna sao iguais.
    }
    return soma / n;
}
    
int main(){

    int n;
    scanf("%d", &n);
    int M[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("Elemento[%d][%d]: ", i, j);
            scanf("%d", &M[i][j]);
        }
    }
    printf("Média dos elementos da diagonal principal = %.2lf\n", media_diagonal(&M[0][0], n));// ele vai pegar o endereço do primeiro elemento, sem o & só passa o valor.
    return 0;
}