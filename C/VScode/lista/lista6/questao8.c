#include <stdio.h>

void soma(int *, int);

int main() {

    int n1 = 2, n2 = 3;

    soma(&n1, n2);

    printf("%d", n1);

    return 0;

}

void soma(int *num1, int num2) {
    *num1 = *num1 + num2;
}