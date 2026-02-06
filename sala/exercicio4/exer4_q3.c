#include <stdio.h>

char *busca(char *str, char ch){
    while(*str != '\0'){
        if(*str == ch){
            return str;
        }
        str++;
    }
    return NULL;
}

int main(){
    char *result;
    char str[100], ch;
    printf("Insira uma palavra: ");
    scanf("%s", str);
    printf("Insira um caractere: ");
    scanf(" %c", &ch);
    result = busca(str, ch);

    if(result == NULL){
        printf("NULO.\n");
    } else{
        printf("%p\n", result);
    }
    return 0;
}