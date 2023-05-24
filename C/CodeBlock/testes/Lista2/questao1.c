#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int num;

    printf("Digite um número: \n");
    scanf("%d", &num);

    if (num == 0) {
        printf("Número igual a zero \n");
    } else {
        printf("Número diferente de zero \n");
    }
}
