#include <stdio.h>

void contar_caracteres(char *str){ //passando o endereço do primeiro elemento do vetor
    int cont = 0;
    while(*str != '\0'){ //acessando o elemento do primeiro  
        cont++;
        str++;
    }
    printf("%s tem %d caracteres\n", str - cont,  cont);
}
int main(){
    char palavra[100];
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    contar_caracteres(palavra);
    return 0;
}