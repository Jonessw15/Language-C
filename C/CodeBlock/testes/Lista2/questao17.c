#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int x;

    printf("Digite o valor de x \n");
    scanf("%d", &x);

    if (x <= 1) {
        printf("1");
    } else if (x > 1 && x <= 2) {
        printf("2");
    } else if (x > 2 && x <= 5) {
        printf("%d", x * x);
    } else if (x > 5) {
        printf("%d", x * x * x);
    }
}
