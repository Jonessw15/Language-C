#include <stdio.h>
#include <stdlib.h>

int main() {

    int cont;

    for (cont = 550; cont <= 690; cont++) {
        if (cont % 5 == 0) {
            printf("%d \n\n", cont);
        }
    }

}
