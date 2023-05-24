#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int n1, n2, n3;

    printf("Digite um número: \n");
    scanf("%d", &n1);
    printf("Digite um número: \n");
    scanf("%d", &n2);
    printf("Digite um número: \n");
    scanf("%d", &n3);

    if (n1 < n2 && n1 < n3) {
        printf("O menor número é: %d", n1);
    } else if (n2 < n1 && n2 < n3) {
        printf("O menor número é: %d", n2);
    } else if (n3 < n1 && n3 < n2) {
        printf("O menor número é: %d", n3);
    }
}
