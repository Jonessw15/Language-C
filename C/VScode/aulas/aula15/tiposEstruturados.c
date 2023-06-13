#include <stdio.h>

// STRUCT
struct ponto {
    float x;    // a estrutura não precisa ter colchete para serem vetores;
    float y;
};

struct fichaAluno {
    char nome[40];
    int matricula;
    float nota;
};

int main() {

/*     struct ponto p[100];

    p.x = 10.0;
    p.y = 20.0;

    p[0].x = 20.0;
    p[0].y = 10.0;

    printf("%f %f\n", p.x, p.y);
 */

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

}