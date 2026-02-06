#include <stdio.h>

float* dobrar_e_retornar(int *a, float *b){
    int num = *a;
    int dobro = num * 2;
    *a = dobro;
  
    return b;

}
int main(){

    int a;
    float b;
    scanf("%d", &a);
    scanf("%f", &b);
    printf("Valor do inteiro: %d\n", a);
    dobrar_e_retornar(&a, &b);
    printf("Endereço do float: %p\n", &b);
    printf("Valor do inteiro depois: %d\n", a);
    

    return 0;
}