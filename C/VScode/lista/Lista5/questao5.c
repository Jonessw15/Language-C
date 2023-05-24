#include <stdio.h>

int main() {

    int v1[] = {1, 2, 3}, v2[] = {4, 5, 6}, resultado = 0;

    for (int i = 0; i < 3; i++) {
        resultado += v1[i] - v2[i];
    }

    printf("%d", resultado);
}