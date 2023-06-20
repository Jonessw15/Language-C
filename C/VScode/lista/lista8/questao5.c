#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct {
    int dia, mes, ano;
} Data;

typedef struct {
    char nome[100], endereco[50];
    Data inscricao;
    Data nascimento;
    float peso;
} Academia;

Academia lerAluno() {
    Academia workout;

    printf("Digite o nome do usuario: ");
    fgets(workout.nome, 100, stdin);

    workout.nome[strcspn(workout.nome, "\n")] = '\0';

    printf("Digite o endereco do usuario: ");
    fgets(workout.endereco, 50, stdin);

    workout.endereco[strcspn(workout.endereco, "\n")] = '\0';

    printf("Digite a data de nascimento do usuario: ");
    scanf("%d %d %d", &workout.nascimento.dia, &workout.nascimento.mes, &workout.nascimento.ano);
    printf("Digite a data de inscricao do usuario: ");
    scanf("%d %d %d", &workout.inscricao.dia, &workout.inscricao.mes, &workout.inscricao.ano);
    printf("Digite seu peso: ");
    scanf("%f", &workout.peso);

    getchar();

    return workout;
}

void exiba(Academia );

int main() {
    
    Academia vetor[3];

    for (int i = 0; i < 3; i++) {
        printf("Cadastro Usuario\n");
        vetor[i] = lerAluno();
    }

    for (int i = 0; i < 3; i++) {
        printf("Exibir Cadastro\n");
        exiba(vetor[i]);
    }

}


void exiba(Academia aluno) {
    printf("O nome do aluno eh: %s\n", aluno.nome);
    printf("O endereco do aluno eh: %s\n", aluno.endereco);
    printf("A data de nascimento do aluno eh: %d/%d/%d\n", aluno.nascimento.dia, aluno.nascimento.mes, aluno.nascimento.ano);
    printf("A data de inscricao do aluno eh: %d/%d/%d\n", aluno.inscricao.dia, aluno.inscricao.mes, aluno.inscricao.ano);
    printf("O peso do aluno eh: %.2f", aluno.peso);
}