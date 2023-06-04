#include <stdio.h>

int main() {

    int n1, n2;

    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("Digite um numero: ");
    scanf("%d", &n2);

    int armazena[2] = {n1, n2};

    int *n1Ptr = &n1;
    int *n2Ptr = &n2;

    int soma = *n1Ptr * 2 + *n2Ptr * 2;

    *n1Ptr *= 2;
    *n2Ptr *= 2;

    printf("O %d dobrado eh: %d\n", armazena[0], *n1Ptr);
    printf("O %d dobrado eh: %d\n", armazena[1], *n2Ptr);
    printf("A soma do dobro dos numeros sao: %d\n", soma);

    return 0;

}