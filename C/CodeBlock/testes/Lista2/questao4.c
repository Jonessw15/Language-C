#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int num;

    printf("Digite um n�mero: \n");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("PAR");
    } else {
        printf("�MPAR");
    }
}
