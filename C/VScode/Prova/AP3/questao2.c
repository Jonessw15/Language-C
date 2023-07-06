#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {

    char stringOne[20], stringTwo[20];
    int cont = 0, cont2 = 0;

    printf("Digite uma palavra: ");
    fgets(stringOne, 20, stdin);

    stringOne[strcspn(stringOne, "\n")] = '\0';

    printf("Digite outra palavra e descubra se eh um anagrama: ");
    fgets(stringTwo, 20, stdin);

    stringTwo[strcspn(stringTwo, "\n")] = '\0';

    for (int i = 0; stringOne[i] != '\0'; i++) {
        /* printf("%c", tolower(stringOne[i])); */
        cont++;
    }

    for (int i = 0; stringOne[i] != '\0'; i++) {
        /* printf("%c", tolower(stringTwo[i])); */
        cont2++;
    }

    int tamanho = strlen(stringOne);
    char caractere1[tamanho];
    char caractere2[tamanho];


    if (cont == cont2) {
      for (int i = 0; i < tamanho - 1; i++) {
        for (int j = i + 1; j < tamanho; j++) {
            if (stringOne[j] < stringOne[i]) {
                char temporaria = stringOne[i];
                stringOne[i] = stringOne[j];
                stringOne[j] = temporaria;
            }
        }
    }
      for (int i = 0; i < tamanho - 1; i++) {
        for (int j = i + 1; j < tamanho; j++) {
            if (stringTwo[j] < stringTwo[i]) {
                char temporaria = stringTwo[i];
                stringTwo[i] = stringTwo[j];
                stringTwo[j] = temporaria;
            }
        }
    }
      for (int i = 0; stringOne[i] != '\0'; i++) {
        char caractere = tolower(stringOne[i]);
        char caractere2 = tolower(stringTwo[i]);
        if (caractere == caractere2) {
          cont--;
        }
      }
    }

    if (cont == 0) {  
        printf("\n\nEh um anagrama");
    } else {
      printf("\n\nNao eh um anagrama");
    }

    return 0;

}