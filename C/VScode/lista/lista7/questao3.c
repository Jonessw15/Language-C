#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {

    char frase[255];
    char letra;
    int soma = 0;

    printf("Digite sua frase: ");
    fgets(frase, 255, stdin);
    printf("Digite a letra que voce quer que o programa procure: ");
    scanf("%c", &letra);

    for (int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == letra) {
            soma++;
        }
    }

    printf("A letra %c apareceu %d vez(es).", letra, soma);

    return 0;

}