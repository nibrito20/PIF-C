#include <stdio.h>

/*
O operador de endereço ou referência '&' opera sobre o nome de uma variável e resulta seu endereço;
Já o operador de desreferência '*' opera sobre o endereço de uma variável (sobre um ponteiro) e resulta seu valor;
*/

int main(){

    int a[10]; // O endereço pode ser, por exemplo: 100, 104, 108, 112 e sucesivamente. cada número ocupa 4 bytes. O programa acaba no endereço 139 porque o ultimo elemento ocupa 4 bytes.
    int x = 10;
    int *p; 
    p = &x; // '&' remete a endereço
    printf("%d", *p);
    p = a; 
    /*
    Equivale ao endereço do primeiro elemento. o nome de um array é um ponteiro constante para seu primeiro elemento. 
    A[2] = a + (n * 4) = 100 + (2 * 4) = 108. Logo o elemento de indíce dois está no endereço 108.
    *(M + i) = M[i].
    Eu posso usar ponteiros como se fossem arrays, DESDE que ele aponte para arrays.
    p[2] = a[2]
    */

    return 0;
}