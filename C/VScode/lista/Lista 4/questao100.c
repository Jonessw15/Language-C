#include <stdio.h>

void retorna(int, int, int);

int main() {

    int n1, n2, n3;

    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("Digite um numero: ");
    scanf("%d", &n2);
    printf("Digite um numero: ");
    scanf("%d", &n3);

    retorna(n1, n2, n3);

    return 0;

}

void retorna(int num1, int num2, int num3) {
    int maior = num1;

    if (num2 > num1 && num1 > num3) {
        maior = num2;
    } else if (num2 > num3 && num3 > num1) {
        maior = num2;
    } else if (num3 > num2 && num2 > num1) {
        maior = num3;
    } else if (num3 > num1 && num1 > num2) {
        maior = num3;
    }

        printf("O maior numero: %d", maior);
}

