#include <stdio.h>

int transforma(int, int *, int *);

int main() {

    int minutos, h, m;

    printf("Digite o tempo em minutos para transformar em horas e minutos: ");
    scanf("%d", &minutos);

    transforma(minutos, &h, &m);

    printf("O tempo convertido eh: %d:%d", h, m);

    return 0;

}

int transforma(int x, int *hora, int *minutos) {

    *hora = x/60;
    *minutos = x - 60 * (*hora);
    return 0;

}