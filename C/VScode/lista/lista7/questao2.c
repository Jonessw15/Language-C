#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {

    char frase[255] = "A melhor maneira de prever o futuro é inventa-lo.";
    int soma = 0;

    for (int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u' || 
            frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I' || frase[i] == 'O' || frase[i] == 'U') {
                soma++;
            }
    }

    printf("%d", soma);

}