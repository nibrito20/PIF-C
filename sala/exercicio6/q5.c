/*
Crie uma struct chamada Aluno com os campos:
nome (máx. 30 caracteres)
nota (float)
No main:
Aloque dinamicamente memória para armazenar 2 alunos.
Leia os dados dos 2 alunos.
Use realloc para aumentar o vetor e permitir armazenar mais 2 alunos.
Leia os novos alunos e exiba todos na tela.
Libere a memória ao final.
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char *nome;
    float nota;
}Aluno;

int main(){

    Aluno *p = (Aluno*)malloc(2 * sizeof(Aluno));
    for (int i = 0; i < 2; i++){
        p[i].nome = (char*)malloc(30 * sizeof(char));
        scanf("%s", p[i].nome);
        scanf("%f", &p[i].nota);
    }
    for(int i = 0; i < 2; i++){
        printf("Aluno: %s - ", p[i].nome);
        printf("Nota: %.1f\n", p[i].nota);
        printf("\n");
    }

    p = (Aluno*)realloc(p, 4 * sizeof(Aluno));

    for (int i = 2; i < 4; i++){
        p[i].nome = (char*)malloc(30 * sizeof(char));
        scanf("%s", p[i].nome);
        scanf("%f", &p[i].nota);
    }

    for(int i = 0; i < 4; i++){
        printf("Aluno: %s - ", p[i].nome);
        printf("Nota: %.1f\n", p[i].nota);
        printf("\n");
    }

    free(p);
    return 0;
}