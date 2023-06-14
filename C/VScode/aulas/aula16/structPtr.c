#include <stdio.h>

struct pontos {
    float x, y;
};

int main() {

    struct pontos p;
    struct pontos *pPtr = &p;

    p.x = 11.0;
    pPtr -> x = 14.5;
    (*pPtr).x = 11.0;

    printf("%.2f\n", pPtr -> x);
    printf("%.2f", p.x);

    return 0;

}