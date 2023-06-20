#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct {
    char nome[100], email[50];
    int telefone;
} Pessoa;

Pessoa cadastro() {
    Pessoa people;

    printf("Digite o nome do individuo: ");
    fgets(people.nome, 100, stdin);

    people.nome[strcspn(people.nome, "\n")] = '\0';

    printf("Digite o email do individuo: ");
    fgets(people.email, 50, stdin);

    people.email[strcspn(people.email, "\n")] = '\0';

    printf("Digite o telefone do individuo: ");
    scanf("%d", &people.telefone);

    getchar();

    return people;
}

int main() {

    Pessoa people;

    for (int i = 0; i < 4; i++) {
        printf("Cadastro de Usuario\n");
        people = cadastro();
    }

}
