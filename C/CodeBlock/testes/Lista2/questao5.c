#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int num;

    printf("Digite um n�mero: \n");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 5 == 0) {
        printf("� div�sivel por 3 e 5");
    } else {
        printf("N�o � div�sivel por 3 e 5");
    }
}
