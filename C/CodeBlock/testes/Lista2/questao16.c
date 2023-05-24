#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int x;

    printf("Digite o valor de x \n");
    scanf("%d", &x);

    if (x < 10) {
        printf("0");
    } else if (x >= 10 && x < 50) {
        printf("5");
    } else {
        printf("10");
    }
}
