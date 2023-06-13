#include <stdio.h>
#include <string.h>

int main() {
    char frase[255];
    char palavra[100];
    int cont = 0;
    char *token;

    printf("Digite uma frase para o sistema: ");
    fgets(frase, 255, stdin);
    printf("Digite uma palavra para o sistema encontrar: ");
    scanf("%s", palavra);

    frase[strcspn(frase, "\n")] = '\0';

    token = strtok(frase, " ");

    while (token != NULL) {
        if (strcmp(frase, palavra) == 0) {
            cont++;
        }
        token = strtok(NULL, " ");
    }

    printf("%d", cont);

    return 0;
}
