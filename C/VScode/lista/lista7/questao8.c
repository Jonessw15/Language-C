#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main() {
    
    char frase[255];
    char letra[20];
    char *token;

    printf("Digite uma frase: ");
    fgets(frase, 255, stdin);

    frase[strcspn(frase, "\n")] = '\0';

    puts(frase);
    printf("\nDigite um caractere na qual queira tirar da frase: ");
    scanf("%s", letra);

    token = strtok(frase, letra);

    while (token != NULL) {
        printf("%s", token);
        token = strtok(NULL, letra);
    }

    return 0;

}