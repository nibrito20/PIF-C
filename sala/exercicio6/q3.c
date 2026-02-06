/*
Crie uma struct chamada Turma com os campos:
quantidade (int)
notas (ponteiro para float)
O programa deve ler a quantidade de alunos, alocar dinamicamente o vetor de notas dentro da Turma
preencher com valores digitados pelo usuário e exibir as notas na tela.
*/
#include <stdio.h>
#include <stdlib.h>

struct Turma{
    int quantidade;
    float *notas;
};

int main(){

    struct Turma turma;
    scanf("%d", &turma.quantidade);

    turma.notas = (float*)malloc(turma.quantidade * sizeof(float));

    for (int i = 0; i < turma.quantidade; i++){
        printf("Aluno %d: ", i+1);
        scanf("%f", &turma.notas[i]);
    }

    for (int i = 0; i < turma.quantidade; i++){
        printf("Aluno %d: - Nota: %f\n", i+1, turma.notas[i]);
    }

    free(turma.notas);
    return 0;
}