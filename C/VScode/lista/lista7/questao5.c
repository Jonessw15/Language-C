#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main() {

    char sigla[2];

    printf("Digite a sigla do estado do Nordeste: ");
    scanf("%s", sigla);

    sigla[strcspn(sigla, "\n")] = '\0';

    if (strcmp(sigla, "CE") == 0) {
        printf("Cearense");
    } else if (strcmp(sigla, "BA") == 0) {
        printf("Baiano");
    }

    return 0;

}