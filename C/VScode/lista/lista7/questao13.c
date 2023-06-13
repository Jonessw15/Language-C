#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main() {

    char senha[20];
    int cont = 0;

    while (cont == 0) {
        printf("Digite uma senha: ");
        fgets(senha, 20, stdin);

        int tamanho = strlen(senha);

        if (tamanho >= 6 && tamanho <= 12 ) {
            cont++;
        }
    }

}