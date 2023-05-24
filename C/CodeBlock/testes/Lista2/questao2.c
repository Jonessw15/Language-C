#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int SalRec, SalGasto;

    printf("Digite o seu salário \n");
    scanf("%d", &SalRec);
    printf("Digite o quanto gasto \n");
    scanf("%d", &SalGasto);

    if (SalRec >= SalGasto) {
        printf("Gastos dentro do orçamento \n");
    } else {
        printf("Orçamento estourado \n");
    }
}
