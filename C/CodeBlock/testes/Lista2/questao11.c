#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int formaPaga;
    float valor, desconto, prestacao;

    printf("Qual o valor do produto? \n");
    scanf("%f", &valor);
    printf("Qual a forma de pagamento? \n (Por favor digite 1 para 'a vista' ou 2 para 'a prazo') \n");
    scanf("%d", &formaPaga);

    if (formaPaga == 1) {
        desconto = valor * 0.1;
        printf("Você irá pagar %.2f \n", valor - desconto);
    } else if (formaPaga == 2) {
        prestacao = valor / 5;
        printf("O valor das prestações do seu produto será: %.2f \n", prestacao);
    }
}
