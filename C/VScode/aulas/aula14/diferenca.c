#include <stdio.h>
#include <stdlib.h>

int main() {

   /*  char letra;
    printf("Digite uma letra: ");
    letra = getchar();
    printf("Foi digitado '%c'", letra); */

    /* char palavra[] = " ";
    printf("Digite uma palavra: ");
    fgets(palavra, 10, stdin);
    printf("Foi digitado '%s'", palavra); */

    // TROCA DO PRINTF

    /* char letra;
    printf("Digite uma letra: ");
    letra = getchar();
    putchar(letra); */

    char palavra[] = " ";
    printf("Digite uma palavra: ");
    fgets(palavra, 10, stdin);
    puts(palavra);

}