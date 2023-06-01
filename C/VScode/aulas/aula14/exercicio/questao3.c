#include <stdio.h>
#include <ctype.h>

int main() {

    char letra;

    printf("Digite uma letra: ");
    scanf("%c", &letra);

    if (islower(letra) != 0) {
        printf("%c", toupper(letra));
    } else {
        printf("%c", tolower(letra));
    }

}