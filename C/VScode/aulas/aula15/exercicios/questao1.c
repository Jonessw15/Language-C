#include <stdio.h>

struct calendar {
    int dia;
    int mes;
    int ano;
};

int main() {

    struct calendar data;

    printf("\n-------Calendario-------\n");
    printf("Digite um numero de 1 a 30 para o dia: ");
    scanf("%d", &data.dia);
    printf("Digite o mes: \n");
    scanf("%d", data.mes);
    printf("Digite o ano: ");
    scanf("%d", &data.ano);

    printf("\n-------Mostre-me o calendario-------\n");
    printf("%d de %d de %d", data.dia, data.mes, data.ano);

    return 0;

}