#include <stdio.h>
#include <stdlib.h>

int main() {

    printf("************* \n");
    printf("*Calculadora* \n");
    printf("************* \n \n");

    float n1, n2 /*, soma, subtrair, multiplicacao, divisao */;

    printf("Digite um numero: \n");
    scanf("%f", &n1);
    printf("Digite um numero: \n");
    scanf("%f", &n2);

   /* soma = n1 + n2;
    subtrair = n1 - n2;
    multiplicacao = n1 * n2;
    divisao = n1 / n2; */

    printf("\n Sua soma e: %.2f \n", n1 + n2);
    printf("\n Sua subtracao e: %.2f \n", n1 - n2);
    printf("\n Sua multipicacao e: %.2f \n", n1 * n2);
    printf("\n Sua divisao e: %.2f \n", n1 / n2);

    system("pause");

}
