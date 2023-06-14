#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50], email[25];
    int telefone, idade;
} Funcionario;

void cadastro(Funcionario *);
void imprime(Funcionario);

int main() {

    Funcionario vetor[3];

    for (int i = 0; i < 3; i++) {
        printf("---Cadastro %d---\n\n", i + 1);
        cadastro(&vetor[i]);
    }

    for (int i = 0; i < 3; i++) {
        printf("\n---Usuario---\n\n");
        imprime(vetor[i]);
    }
 
    return 0;

}

void cadastro(Funcionario *funcPtr) {
    printf("Digite o nome do funcionario: ");
    fgets(funcPtr -> nome, 50, stdin);

    funcPtr -> nome[strcspn(funcPtr -> nome, "\n")] = '\0';

    printf("Digite o email deste funcionario: ");
    fgets(funcPtr -> email, 25, stdin);

    funcPtr -> email[strcspn(funcPtr -> email, "\n")] = '\0';

    printf("Digite a idade deste funcionario: ");
    scanf("%d", &funcPtr -> idade);

    printf("Digite o telefone deste funcionario: ");
    scanf("%d", &funcPtr -> telefone);

    getchar();
}

void imprime(Funcionario func) {
    printf("O nome do funcionario eh: %s\n", func.nome);
    printf("A idade do funcionario eh: %d\n", func.idade);
    printf("O email do funcionario eh: %s\n", func.email);
    printf("O telefone do funcionario eh: %d", func.telefone);
}