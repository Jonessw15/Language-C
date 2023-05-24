#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    float MB;

    printf("Diga um valor em MB: \n");
    scanf("%f", &MB);

    printf("O valor em GB é: %f \n", MB / 1024);
    printf("O valor em KB é: %f \n", MB * 1024);


}
