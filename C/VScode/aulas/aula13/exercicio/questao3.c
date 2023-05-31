#include <stdio.h>

void troca(int *, int *);

int main() {

    int n1, n2;

    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("Digite um numero: ");
    scanf("%d", &n2);

    troca(&n1, &n2);

    return 0;

}

void troca(int *num1, int *num2) {
    int valor = *num1;
    *num1 = *num2;
    *num2 = valor;
    printf("%d\n", *num1);
    printf("%d\n", *num2);

}