#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    char letra;

    printf("Digite a letra na qual se encaixa o aluno \n");
    scanf("%c", &letra);

    switch (letra) {
    case 'A':
        printf("�timo");
        break;
    case 'B':
        printf("Bom");
        break;
    case 'C':
        printf("Regular");
        break;
    case 'D':
        printf("Ruim");
        break;
    case 'E':
        printf("P�ssimo");
        break;
    default:
        printf("Letra inv�lida");
    }
}
