#include <stdio.h>
#include <stdlib.h>

void area(int, int);
void perimetro(int, int);

int main() {
    int comprimento, largura;
    printf("Digite um numero para o comprimento: ");
    scanf("%d", &comprimento);
    printf("Digite um numero para o largura: ");
    scanf("%d", &largura);

    area(comprimento, largura);
    perimetro(comprimento, largura);
}

void area(int comp, int larg) {
    float resultado = comp * larg;
    printf("area: %.0f\n", resultado);
}

void perimetro(int comp, int larg) {
    float resultado = comp + comp + larg + larg;
    printf("perimetro: %.0f\n", resultado);
}