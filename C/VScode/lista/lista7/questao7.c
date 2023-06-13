#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main() {

    char frase[] = "Fundamentos da Programação";
    int vogais = 0, consoantes = 0;

    for (int i = 0; frase[i] != '\0'; i++) {
        char caracteres = tolower(frase[i]);
        if (caracteres == 'a' || caracteres == 'e' || caracteres == 'i' || caracteres == 'o' || caracteres == 'u') {
            vogais++;
        } else {
            consoantes++;
        }
    }

    printf("Existem %d vogais e %d consoantes.", vogais, consoantes);

    return 0;

}