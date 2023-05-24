#include <stdio.h>
#include <stdlib.h>

int main() {

    int num, maior, menor, i;

    printf("Digite o 1 numero: ");
    scanf("%d", &num);

    maior = num;
    menor = num;

    for (i = 2; i <= 10; i++) {
        printf("Digite o %d numero: ", i);
        scanf("%d", &num);

        if (num > maior) {
            maior = num;
        }
        if (num < menor) {
            menor = num;
        }
    }
    printf("O maior numero eh: %d \n", maior);
    printf("O menor numero eh: %d \n", menor);


}
