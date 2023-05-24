#include <stdio.h>

int retorna(int);

int main() {

    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("%d", retorna(num));

    return 0;

}

int retorna(int desvira) {
    if (desvira) {
        return desvira;
    } else {
        return desvira % 10 * retorna(desvira * 10);
    }
}