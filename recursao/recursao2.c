#include <stdio.h>
#include <stdlib.h>

int mdc(int a, int b){
    if(b == 0){
        return a;
    }
    return mdc(b, a%b);
}

void decToBin(int n){
    if(n == 0){
        return;
    }
    decToBin(n/2);
    printf("%d", n%2);
}



int main(){
    //printf("%d\n", mdc(90, 25));
    decToBin(6);
    return 0;
}