#include <stdio.h>

struct ponto {
    float x, y;
};

void imprime(struct ponto *);

int main() {

    struct ponto p;
    struct ponto *pPtr = &p;

    pPtr -> x = 11;
    pPtr -> y = 12;

    imprime(pPtr);

    return 0;

}

void imprime(struct ponto *pntPtr) {
    printf("%.0f, %.0f", pntPtr -> x, pntPtr -> y);
}