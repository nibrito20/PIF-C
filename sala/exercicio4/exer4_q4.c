#include <stdio.h>
#include <string.h>

int palindromo(char *str){
    size_t qtd = strlen(str);
    char *aux = str + qtd-1;
    while(*str != '\0'){
        if(*str != *aux){
            return 0;
        }
        str++;
        aux--;
    }
    return 1;
    
}

int main(){
    char palavra[100];
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    int result = palindromo(palavra);

    if(result == 0){
        printf("Não é um palíndromo.\n");
    } else{
        printf("Palíndromo.\n");
    }
    return 0;
}