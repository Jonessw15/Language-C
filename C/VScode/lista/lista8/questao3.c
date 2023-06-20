#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct {
    char nome[100];
    int matricula;
    float media;
} Aluno;

int main() {

    Aluno ficha;
    int cont = 0;

    printf("Digite o nome do aluno: ");
    fgets(ficha.nome, 100, stdin);

    ficha.nome[strcspn(ficha.nome, "\n")] = '\0';

    for (int i = 0; ficha.nome[i] != '\0'; i++) {
        if (isalpha(ficha.nome[i]) == 0) {
            cont++;
        }
    }

    while (cont != 0) {
        printf("Nome contem um digito, digite novamente o nome do aluno: ");
        fgets(ficha.nome, 100, stdin);

        ficha.nome[strcspn(ficha.nome, "\n")] = '\0';

        for (int i = 0; ficha.nome[i] != '\0'; i++) {
            if (isalpha(ficha.nome[i]) != 0) {
                cont--;
            }
            if (cont < 0) {
                cont = 0;
            }
        }
    }

    printf("Digite a matricula do Aluno: ");
    scanf("%d", &ficha.matricula);

    while (ficha.matricula != 0) {
        ficha.matricula /= 10;
        cont++;
    }

    printf("%d", cont);

    while (cont != 6) {
        printf("Por favor, a matricula deve conter 6 digitos. Digite a matricula do Aluno: ");
        scanf("%d", &ficha.matricula);

        cont = 0;

        while (ficha.matricula != 0) {
            ficha.matricula /= 10;
            cont++;
        }
    }

    printf("Digite a media do aluno: ");
    scanf("%f", &ficha.media);

    while (ficha.media < 0 || ficha.media > 10) {
        printf("Media errada, por favor, digite a media do aluno: ");
        scanf("%f", &ficha.media);
    }
    
}