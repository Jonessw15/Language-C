#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int num;

    printf("Digite um número para mostrar a classificação do alimento; (De 1 até 4). \n");
    scanf("%d", &num);

    if (num == 1) {
        printf("Alimento não-perecível");
    } else if (num == 2) {
        printf("Alimento perecível");
    } else if (num == 3) {
        printf("Vestuário");
    } else if (num == 4) {
        printf("Limpeza");
    }
}
