#include <stdio.h>
#include <stdlib.h>

void retorna(int);

int main() {
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);

    retorna(num);

}

void retorna(int n1) {
    if (n1 > 0) {
        printf("1");
    } else if (n1 == 0) {
        printf("0");
    } else if (n1 < 0) {
        printf("-1");
    }
}