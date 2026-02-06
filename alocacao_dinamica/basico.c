#include <stdio.h>
#include <stdlib.h>

int *cria_preenche_array(int tamanho){
    int *ip = (int*)malloc(tamanho * sizeof(int));

    printf("Digte os elementos do array: ");
    for (int i = 0; i < tamanho; i++){
        scanf("%d", (ip + i));
    }
    return (ip);
}

int main(){
    int *ip;
    char *cp;
    int len;

    printf("Digite o tamanho do array: ");
    scanf("%d", &len);

    ip = cria_preenche_array(len); // ler os 4 bytes de uma vez só
    cp = (char*)ip; // 1 byte de cada vez, um byte é tipo (0001)

    // cp[4] = 'A';

    printf("Endereços alocados e valores:\n");
    for (int i = 0; i < len; i++){
        printf("IP: %p: %d\n", (ip+i), *(ip+i));
        // printf("CP: %p: %d\n", (cp+i), *(cp + i));
        printf("CP: %p: %d %d %d %d\n", (cp+(i*4)), *(cp + (i*4)), *(cp + (i*4) + 1), *(cp + (i*4) + 2), *(cp + (i*4) + 3));
    }

    printf("Endereço de *IP: %p\n", ip);
    printf("ip[0] = %d\n", ip[0]);
    return 0;
}