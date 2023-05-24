#include <stdio.h>
#include <stdlib.h>

int main() {

    int tempo;
    float A = 80000, B = 200000;

    do {
        A = A + A * 0.03;
        B = B + B * 0.015;
        tempo++;
    } while (A < B);
    printf("%d", tempo);
}
