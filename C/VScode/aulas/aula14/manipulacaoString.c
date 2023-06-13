#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    /* char palavra1[15] = "Fundamentos ";
    char palavra2[15] = "Programacao"; */

/*     strcpy(palavra2, palavra1); */
    /* strncpy(palavra2, palavra1, 3); */
    /* strcat(palavra1, palavra2); */
    /* strncat(palavra1, palavra2, 5); */

    /* if (strcmp(palavra1, palavra2) == 0) {
        puts("Sao iguais");
    } else {
        puts("Nao sao iguais");
    }
    if (strncmp(palavra1, palavra2, 2) == 0) {
        puts("Sao iguais");
    } else {
        puts("Nao sao iguais");
    } */

    const char str[] = "Fundamentos de Programacao";
    const char s[] = " ";

    char *token;

    token = strtok(str, s);

    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, s);
    }

/*     printf("%d", strlen(str));
 */





    /* const char str[] = "http://www.tutotialemc.com";
    const char ch = '.';

    char *ret;

/*     ret = strchr(str, ch); */
   // ret = strrchr(str, ch);

   // printf("Depois da string %c tem: %s", ch, ret); 

   /*  puts(palavra1);
    puts(palavra2); */

    return 0;

}