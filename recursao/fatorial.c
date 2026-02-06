#include <stdio.h>
#include <stdlib.h>

long long fat(long long n){
    if(n == 1) return 1;
    return n * fat(n-1);
}

int soma(int n){
    if(n == 1) return 1;
    return n + soma(n-1);
}

long long soma_impares(int n){
    if(n == 1) return 1;
    return (2*n-1) + soma_impares(n-1);
}

long long fib(int n){
    if(n == 1) return 0;
    else if(n == 2) return 1;
    else return fib(n-1) + fib(n-2);
}

int main(void){
    int n;
    scanf("%d", &n);
    printf("%lld\n", fat(n));
    printf("%d\n", soma(n));
    printf("%lld\n", soma_impares(n));
    printf("%lld\n", fib(n));
}