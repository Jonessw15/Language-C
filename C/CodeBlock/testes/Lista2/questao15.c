#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int x;

    printf("Digite o valor de x \n");
    scanf("%d", &x);

    if (x <= 35) {
        printf("10");
    } else {
        printf("20");
    }
}
