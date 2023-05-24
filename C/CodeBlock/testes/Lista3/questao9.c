#include <stdio.h>
#include <stdlib.h>

int main() {
    float salario, imposto;
    int i;

    for(i = 1; i <= 3; i++) {
        printf("Digite o salario bruto da pessoa %d: ", i);
        scanf("%f", &salario);

        if(salario < 1300) {
            imposto = 0;
        } else if(salario >= 1300 && salario < 2300) {
            imposto = salario * 0.1;
        } else {
            imposto = salario * 0.15;
        }

        printf("Salario bruto: R$ %.2f\n", salario);
        printf("Imposto devido: R$ %.2f\n", imposto);
        printf("------------------------\n");
    }

    return 0;
}
