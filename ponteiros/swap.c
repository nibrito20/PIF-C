#include <stdio.h>

void swap(int* x, int* y){ // x pega o endereço de memória de a. Y pega o endereço de memória de b.
    int t = 0;
    t = *x; // t pegou o valor do endereço de memória que está em x, que é a.
    *x = *y; // colocamos em x valor do endereço de memória que está em y, que é b.
    *y = t; // colocou em y o valor do no endereço de memória que está em t, que é a.

}
int main(){
    int a, b;
    scanf("%d %d", &a, &b); 
    swap(&a, &b); //o & vai pegar o endereço de memória de a e b.
    printf("%d %d\n", a, b);

    return 0;
}
/*
Quando você usa &, você está pegando o endereço de memória onde a variável está armazenada, e não o seu valor. 
A função swap precisa receber esses endereços porque ela foi projetada para trabalhar com ponteiros 
(que são variáveis que armazenam endereços de memória), como você declarou com int *x e int *y.

Se você chamasse a função apenas com swap(a, b), estaria passando apenas as cópias dos valores de a e b.
A função swap trocaria essas cópias, mas as variáveis originais a e b na função main continuariam com os mesmos 
valores, pois a troca não afetaria a memória delas. É por isso que o uso do & é essencial para que a troca funcione corretamente na sua função.
*/