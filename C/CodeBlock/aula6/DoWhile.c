#include <stdio.h>
#include <stdlib.h>

int main() {
// QUEST�O 1
//    int cont = 1;
//
//    do {
//        printf("%d \n", cont);
//        cont++;
//    } while (cont <= 75);

// QUEST�O 2
//    int cont = 8;
//
//    do {
//        cont++;
//        if (cont % 2 == 0) {
//            continue;
//        }
//            printf("%d \n", cont);
//    } while (cont <= 47);

// QUEST�O 3
    int cont = 100;

    do {
        cont--;
        if (cont % 2 == 1) {
            continue;
        }
        printf("%d \n", cont);
    } while (cont > 49);
}
