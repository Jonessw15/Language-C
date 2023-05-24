#include <stdio.h>

float investimento(float);

int main() {

    int tempo;

    printf("Quanto tempo voce deixou 1000 reais investidos? ");
    scanf("%d", &tempo);

    printf("%.2f", investimento(tempo));

    return 0;

}

float investimento(float n) {
    if (n == 0) {
        return 1000;
    } else if (n != 0) {
        return 1.007 * investimento(n - 1);
    }
}