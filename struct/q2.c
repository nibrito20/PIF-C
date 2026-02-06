/*
Defina um novo tipo (struct) chamado aluno, que tem os seguintes atributos:
 - nome: array de caracteres de tamanho maximo 50
 - matricula: inteiro
 - disciplinas: vetor do tipo disciplina, tamanho 4, com os seguintes elementos:
     - nota: float
     - faltas: int
     - nome: array de char com 10 elementos
 
Implemente um programa que faz um cadastro de alunos, recebendo a quantidade de alunos de uma turma
e preenchendo os campos de cada aluno.

Depois imprima os dados de todos os alunos cadastrados.
*/
#include <stdio.h>

typedef struct{
    int faltas;
    float nota;
    char nome[50];
}disciplina;

typedef struct{
    char nome[50];
    int matricula;
    disciplina disc[4];
}aluno;

int main(){
    int qtd;
    scanf("%d", &qtd);

    for (int i = 0; i < qtd; i++){
        scanf()
    }
    
    return 0;
}
