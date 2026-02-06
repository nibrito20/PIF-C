#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d", &n);

    int *lista = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &lista[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", lista[i]);
    }

    free(lista);
    return 0;
}