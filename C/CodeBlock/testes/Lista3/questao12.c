#include <stdio.h>
#include <stdlib.h>

int main() {

    int i;
    float alunos, notas, media;

    printf("Quantos alunos tem na sua sala? ");
    scanf("%f", &alunos);

    for (i = 1; i <= alunos; i++) {
        printf("Digite a nota do aluno: ");
        scanf("%f", &notas);

        media += notas;
    }
    media /= alunos;
    printf("A media da turma e: %f", media);
}
