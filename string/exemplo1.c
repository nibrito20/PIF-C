#include <stdio.h>
#include <string.h>

char *procurar(char *string, char ch){
    while(*string != ch && *string != '\0'){
        string++;
    }
    if(*string != '\0'){
        return string;
    }else{
        return NULL;
    }
}

int main(){

    char cor[100] = "Azul";
    char *cor_ptr = cor;
    char cor_2[] = {'A', 'm', 'a', 'r', 'e', 'l', 'o', '\0'};

    printf("%s\n", cor);
    printf("Endereço da memória: %p\n", cor_ptr);
    printf("%s\n", cor_2);
    printf("Primeira letra da primeira cor: %c\n", cor[0]);
    char resultado = *procurar(cor, 'z');
    printf("%c\n", resultado);

    char *str, *new_color = "escuro";
    // strcat() -> junta as strings
    str = strcat(cor, " ");
    str = strcat(str, new_color);
    printf("Resultado da Concatenação: %s\n", str);

    // strlen() -> conta a qtd de caracteres na str
    printf("Tamanho da concatenação: %lu\n", strlen(str));

    // strcpy() -> copia a segunda str na primeira
    strcpy(str, "verde");
    printf("Resultado da copia = %s\n", str);
    printf("Tamanho da cópia: %lu\n", strlen(str));

    // strcmp() -> compara duas strings
    printf("Comparação de duas string diferente %d\n", strcmp(cor_ptr, cor));
    printf("Comparação de duas string diferente %d\n", strcmp(new_color, cor_ptr));

    //  ch = getchar() -> ler caractere por caractere. putchar(ch) ->  imprime o caracter passado como parâmetro

    int i = 0;
    char ch = getchar();
    while(ch!='\n'){
        printf("%c\n", ch);
        str[i] = ch;
        i++;
        ch = getchar();
    }
    str[i] = '\0'; //oq ele faz
    printf("%s\n", str);

}