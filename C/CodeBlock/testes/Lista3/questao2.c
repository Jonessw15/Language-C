#include <stdio.h>
#include <stdlib.h>

int main() {

    int cont;

    for (cont = 200; cont <= 351; cont++) {
        if (cont % 2 == 0) {
            continue;
        }
        printf("%d \n\n", cont);
    }

}
