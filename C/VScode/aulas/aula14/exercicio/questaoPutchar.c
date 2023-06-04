#include <stdio.h>
#include <stdlib.h>

int main() {

    char frase[] = "";
    printf("Digite uma frase: ");
    fgets(frase, 100, stdin);
    puts(frase);

}