#include <stdio.h>

float soma(int *a, float *b){
    int x = *a;
    float y = *b;
    float resul = x + y;
    return resul;

}
int main(){

    int a;
    float b;
    scanf("%d", &a);
    scanf("%f", &b);
    printf("\nValor 1: %d", a);
    printf("\nValor 2: %.2f", b);
    printf("\nSoma total: %.2f\n", soma(&a, &b));
    
    return 0;
}