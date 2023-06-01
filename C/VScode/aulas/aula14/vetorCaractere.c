#include <stdio.h>

int main() {

   /*  char palavra[] = "mundo";
    printf("%s\n", palavra);
    for (int i = 0; i < 5; i++) {
        printf("%c\n", palavra[i]);
    } */

    char palavra[12] = "Programacao";

    for (int i = 0; palavra[i] != '\0'; i++) {
        printf("%c\n", palavra[i]);
    }

    /* scanf("%s", palavra); */

    return 0;

}