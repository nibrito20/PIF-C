#include <stdio.h>

void contar_vogais(char *str){
    int vogal = 0;
    int count = 0;
    while(*str != '\0'){
        if(*str == 'a' || *str == 'A' || *str == 'e' || *str == 'E' || *str == 'i' || *str == 'I' || *str == 'o' || *str == 'O' || *str == 'u' || *str == 'U'){
            vogal++;
        }
        str++;
        count++;
    }
    printf("%s tem %d vogais\n", str - count, vogal);
}

int main(){
    char palavra[100];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    contar_vogais(palavra);
    return 0;
}