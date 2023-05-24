#include <stdio.h>

int main() {

    int v[10];
    for (int i = 0; i < 10; i++) {
        printf("Digite um numero: \n");
        scanf("%d", &v[i]);
    }
    printf("Os numeros na ordem inversa sao: ");
    for (int i = 9; i >= 0; i--) {
        printf("\n%d\n", v[i]);
    }
}

