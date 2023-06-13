#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {

    char frase[255] = "Programadores sao ferramentas para converter cafeina em codigo";

    for (int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u' || 
            frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I' || frase[i] == 'O' || frase[i] == 'U') {
                continue;
            }
            printf("%c", frase[i]);
    }

    return 0;

}