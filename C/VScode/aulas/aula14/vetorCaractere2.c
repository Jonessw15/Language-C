#include <stdio.h>

int main() {

    char palavra[50];

    scanf("%[^123456789]", palavra);
    printf("%s", palavra);


    return 0;

}