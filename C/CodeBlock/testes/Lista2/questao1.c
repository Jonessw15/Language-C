#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int num;

    printf("Digite um n�mero: \n");
    scanf("%d", &num);

    if (num == 0) {
        printf("N�mero igual a zero \n");
    } else {
        printf("N�mero diferente de zero \n");
    }
}
