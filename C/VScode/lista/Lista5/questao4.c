#include <stdio.h>

int main() {

    int x[5] = {1, 2, 3, 4, 5}, y[5] = {6, 7, 8, 9, 10}, produtosEscalar = 0;

    for (int i = 0; i < 5; i++) {
        produtosEscalar += x[i] * y[i];
    }

    printf("O produto escalar entre x e y: %d", produtosEscalar);

    return 0;
}
