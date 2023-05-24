#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    float maca;

    printf("Quantas maças você vai comprar? \n");
    scanf("%f", &maca);


    if (maca <= 12) {
        printf("Cada maça custará R$ 0,50 totalizando um valor de R$ %.0f \n", maca * 0.5);
    } else {
        printf("Cada maça custará R$ 0,25 totalizando um valor de R$ %.0f \n", maca * 0.25);
    }
}
