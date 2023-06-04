#include <stdio.h>
#include <ctype.h>

int main() {

/*     char palavra[50];
 */    
    /* scanf("%s", palavra); */

    printf("%d\n", isdigit('2'));
    printf("%s\n", isalpha('3') ? "eh letra" : "nao eh letra");
    printf("%d\n", isalnum('&'));
    printf("%d\n", islower('h'));
    printf("%d\n", isupper('H'));
    printf("%d\n", tolower('H'));
    printf("%d\n", toupper('h'));
    
    return 0;

}