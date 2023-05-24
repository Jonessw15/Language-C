#include <stdio.h>

int main() {

    float comprimento, largura;

    printf("Calculo de area e perimetro do retangulo em centimetros \n \n");
    printf("Digite o comprimento do retangulo: \n");
    scanf("%f", &comprimento);

    printf("Digite a largura do retangulo: \n");
    scanf("%f", &largura);

    printf("A area do retangulo e: %.2f cm2 \n", comprimento * largura);
    printf("O perimetro do retangulo e: %.2f cm\n", comprimento * 2 + largura * 2);


}
