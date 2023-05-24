#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int lados;

    printf("Digite o nùmero de lados do polígono: \n");
    scanf("%d", &lados);

    if (lados == 3) {
        printf("Triângulo");
    } else if (lados == 4) {
        printf("Quadrado");
    } else if (lados == 5) {
        printf("Pentágono");
    }

}
