#include <stdio.h>
 
int main() {
 
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);
    
    if (x == 1){
        float valor = 4 * y;
        printf("Total: R$ %.2f\n", valor);
    }
    else if (x == 2){
        float valor = 4.5 * y;
        printf("Total: R$ %.2f\n", valor);
    }
    else if (x == 3){
        float valor = 5 * y;
        printf("Total: R$ %.2f\n", valor);
    }
    else if (x == 4){
        float valor = 2 * y;
        printf("Total: R$ %.2f\n", valor);
    }
    else{
        float valor = 1.5 * y;
        printf("Total: R$ %.2f\n", valor);
    }

    return 0;
}