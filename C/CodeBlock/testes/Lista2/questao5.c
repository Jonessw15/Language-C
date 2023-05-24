#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int num;

    printf("Digite um número: \n");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 5 == 0) {
        printf("É divísivel por 3 e 5");
    } else {
        printf("Não é divísivel por 3 e 5");
    }
}
