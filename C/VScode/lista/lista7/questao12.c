#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main() {

    char palavra[20];
    char letra;
    char letraTrocar;

    printf("Digite uma palavra: ");
    fgets(palavra, 20, stdin);

    palavra[strcspn(palavra, "\n")] = '\0';

    puts(palavra);

    printf("\nDigite a letra da palavra e a letra que voce quer trocar da palavra: ");
    scanf("%c %c", &letra, &letraTrocar);
    

    for (int i = 0; palavra[i] != '\0'; i++) {
        if (palavra[i] == letra) {
            palavra[i] = letraTrocar;
        }
        printf("%c", palavra[i]);
    }

    return 0;

}