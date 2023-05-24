#include <stdio.h>

int main() {

    printf("Transformar Celsius em Fahrenheit");

    int C, F;

    printf("Digite a temperatura em Celsius \n");
    scanf("%d", &C);

    F = (9 * C + 160) / 5;

    printf("A temperatura %d transformada em Fahrenheit e: %d", C, F);

}
