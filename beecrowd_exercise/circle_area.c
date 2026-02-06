#include <stdio.h>
 
int main() {
 
    double n;
    scanf("%lf", &n);
    double area = 3.14159 * (n*n);
    printf("A=%.4lf\n", area);
     
    return 0;
}