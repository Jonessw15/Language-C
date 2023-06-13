#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main() {

    char frase[255];
    char *token;

    printf("Digite uma frase: ");
    fgets(frase, 255, stdin);

    token = strtok(frase, " ");

    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }

    return 0;

}