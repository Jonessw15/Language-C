#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main() {

    char frase[100];
    int cont = 0;

    while (cont == 0) {
        printf("Digite uma frase com no maximo 20 letras: ");
        fgets(frase, 100, stdin);

        frase[strcspn(frase, "\n")] = '\0';

        int tamanho = strlen(frase);

        if (tamanho > 20) {
            printf("Tamanho excedido, por favor envie uma frase menor\n");
        } else {
            cont++;
        }
    }

    for (int i = 0; frase[i] != '\0'; i++) {
        printf("%c\n", frase[i]);
    }


    return 0;

}