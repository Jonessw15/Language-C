#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int SalRec, SalGasto;

    printf("Digite o seu sal�rio \n");
    scanf("%d", &SalRec);
    printf("Digite o quanto gasto \n");
    scanf("%d", &SalGasto);

    if (SalRec >= SalGasto) {
        printf("Gastos dentro do or�amento \n");
    } else {
        printf("Or�amento estourado \n");
    }
}
