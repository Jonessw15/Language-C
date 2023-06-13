#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main() {

    char palavra1[] = "Hello";
    char palavra2[] = "Hello";

    if (strcmp(palavra1, palavra2) == 0) {
        printf("Sao iguais");
    } else {
        printf("Sao diferentes");
    }

}