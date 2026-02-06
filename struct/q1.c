#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct point{
    int x;
    int y;
};

struct rect {
    struct point p1;
    struct point p2;
};

int areaRect(struct rect retangulo) {
    int base = abs(retangulo.p1.x - retangulo.p2.x);
    int altura = abs(retangulo.p1.y - retangulo.p2.y);
    return base*altura;
}

int main(){
    struct rect r;
    struct point p1;
    struct point p2;
    printf("Coordenadas do primeiro ponto: ");
    scanf("%d %d", &p1.x, &p1.y);
    printf("Coordenadas do segundo ponto: ");
    scanf("%d %d", &p2.x, &p2.y);

    int xSqr = (p1.x - p2.x) * (p1.x - p2.x);
    int ySqr = (p1.y - p2.y) * (p1.y - p2.y);
    float distancia = sqrt(xSqr + ySqr);
    printf("Distância entre os dois pontos: %.2f\n", distancia);
    printf("Area do retangulo: %d\n", areaRect(r));
    return 0;
}