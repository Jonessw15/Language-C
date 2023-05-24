#include <stdio.h>
#include <stdlib.h>

int main() {

    int n1 = 0, n2 = 0, soma = 0, menos = 0;


    do {
        printf("Digite um numero: \n");
        scanf("%d", &n1);
        printf("Digite um numero: \n");
        scanf("%d", &n2);


        if (n1 == 0) {
            printf("Nao faco somas ou produtos de numeros iguais ou menores que zero \n");
        } else if (n1 % 2 != 0 && n2 % 2 != 0) {
            menos = n1 - n2;
            printf("O produto dos numeros impares e: %d \n", menos);
        } else if (n1 % 2 == 0 && n2 % 2 == 0) {
            soma = n1 + n2;
            printf("A soma dos numeros pares e: %d \n", soma);
        }


    } while (n1 > 0 && n2 > 0);

    printf("Obrigado");
}
