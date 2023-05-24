#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int media;

    printf("Digite a média do aluno: \n");
    scanf("%d", &media);

    if (media < 0 || media > 10) {
        printf("Média inválida");
    } else if (media >= 7) {
        printf("Aprovado");
    } else if (media > 4 && media < 7) {
        printf("Fazerá a avaliação final");
    } else {
        printf("Reprovado");
    }

}
