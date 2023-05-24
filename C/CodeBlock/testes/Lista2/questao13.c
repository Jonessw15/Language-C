#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int lado1, lado2, lado3;

    printf("Digite um lado do triângulo: \n");
    scanf("%d", &lado1);
    printf("Digite um lado do triângulo: \n");
    scanf("%d", &lado2);
    printf("Digite um lado do triângulo: \n");
    scanf("%d", &lado3);

    if (lado1 == 90 || lado2 == 90 || lado3 == 90) {
        printf("Triângulo retângulo");
    } else if (lado1 > 90 || lado2 > 90 || lado3 > 90){
        printf("Triângulo Obtusângulo");
    } else {
        printf("Triângulo Acutângulo");
    }
}
