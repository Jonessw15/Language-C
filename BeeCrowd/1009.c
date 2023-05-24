#include <stdio.h>

int main() {

    char nome[30];
    double salario = 0, vendas = 0, total = 0;

    scanf("%s", &nome);
    scanf("%lf", &salario);
    scanf("%lf", &vendas);

    if (vendas > 0) {
        vendas = vendas * 0.15;
    }

    total = salario + vendas;

    printf("TOTAL = R$ %.2f", total);
}