#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int n1, n2, n3;

    printf("Digite um n�mero: \n");
    scanf("%d", &n1);
    printf("Digite um n�mero: \n");
    scanf("%d", &n2);
    printf("Digite um n�mero: \n");
    scanf("%d", &n3);

    if (n1 > n2 && n2 > n3) {
        printf("%d, %d, %d", n3, n2, n1);
    } else if (n1 > n3 && n3 > n2) {
        printf("%d, %d, %d", n2, n3, n1);
    } else if (n2 > n1 && n1 > n3) {
        printf("%d, %d, %d", n3, n1, n2);
    } else if (n2 > n3 && n3 > n1) {
        printf("%d, %d, %d", n1, n3, n2);
    } else if (n3 > n1 && n1 > n2) {
        printf("%d, %d, %d", n2, n1, n3);
    } else if (n3 > n2 && n2 > n1) {
        printf("%d, %d, %d", n1, n2, n3);
    }
}
