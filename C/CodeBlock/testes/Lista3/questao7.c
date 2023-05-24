#include <stdio.h>
#include <stdlib.h>

int main() {

    int cont, imp = 0;

    for (cont = 410; cont <= 551; cont++) {
        if (cont % 2 != 0) {
            imp += cont;
        }
    }
    printf("%d", imp);

}
