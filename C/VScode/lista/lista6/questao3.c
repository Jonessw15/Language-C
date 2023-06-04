#include <stdio.h>

int main() {

    int a = 2, *b = &a, **c = &b, ***d = &c;

    int bDobro = *b * 2;
    int cTriplo = **c * 3;
    int dQuadruplo = ***d * 4;

    printf("%d\n", bDobro);
    printf("%d\n", cTriplo);
    printf("%d\n", dQuadruplo);

    return 0;

}