#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int lados;

    printf("Digite o n�mero de lados do pol�gono: \n");
    scanf("%d", &lados);

    if (lados == 3) {
        printf("Tri�ngulo");
    } else if (lados == 4) {
        printf("Quadrado");
    } else if (lados == 5) {
        printf("Pent�gono");
    }

}
