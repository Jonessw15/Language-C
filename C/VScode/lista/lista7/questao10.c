#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main() {

    char palavra[20];

    printf("Digite uma palavra: ");
    fgets(palavra, 20, stdin);

    palavra[strcspn(palavra, "\n")] = '\0';

    int tamanho = strlen(palavra);

    for (int i = tamanho; i >= 0; i--) {
        printf("%c", palavra[i]);
    }

    return 0;
    
}