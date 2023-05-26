#include <stdio.h>

int soma(int, int);
int operacao(int, int, int(*)(int, int));

int main() {

    int m;

    m = operacao(7, 3, soma);

    printf("%d", m);

}

int soma(int a, int b) {
    return a + b;
}

int operacao(int x, int y, int(*function)(int, int)) {
    return (*function)(x, y);
}