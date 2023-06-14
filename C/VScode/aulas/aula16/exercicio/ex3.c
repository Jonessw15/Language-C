#include <stdio.h>
#include <string.h>

typedef struct {

    char nome[100];
    int matricula;
    float media;

} Aluno;

void cadastro(Aluno *);
void imprime(Aluno);

int main() {

    Aluno al;
    Aluno *alPtr = &al;

    cadastro(alPtr);
    imprime(al);

    return 0;

}

void cadastro(Aluno *cadPtr) {

    printf("Digite o nome do aluno: ");
    fgets(cadPtr -> nome, 100, stdin);

    cadPtr -> nome[strcspn(cadPtr -> nome, "\n")] = '\0';

    printf("Digite a matricula do aluno: ");
    scanf("%d", &cadPtr -> matricula);
    printf("Digite a media do aluno: ");
    scanf("%f", &cadPtr -> media);

    

}   

void imprime(Aluno al) {
    printf("Nome: %s\n Matricula: %d\n Media: %.2f\n", al.nome, al.matricula, al.media);
}