#include <stdio.h>

struct fichaAluno {
    char nome[40];
    int matricula;
    float nota;
};

int main() {

    struct fichaAluno aluno;

    printf("\n-------Cadastro-------\n");
    printf("Nome do aluno: ");
    fgets(aluno.nome, 40, stdin);
    printf("Matricula: ");
    scanf("%d", &aluno.matricula);
    printf("Nota: ");
    scanf("%f", &aluno.nota);

    printf("\n---------DADOS CADASTRADOS---------\n");
    printf("Nome: %s", aluno.nome);
    printf("Matricula: %d\n", aluno.matricula);
    printf("Nota: %.2f\n", aluno.nota);

    return 0;


    return 0;

}