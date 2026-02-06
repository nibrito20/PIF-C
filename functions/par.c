#include <stdio.h>

int ehPar(int a){
    if(a % 2 == 0){
        printf("Par");
        return 1;
    }
    printf("Ímpar");
    return 0;
}

int main(){
    int a;
    scanf("%d", &a);
    ehPar(a);
}