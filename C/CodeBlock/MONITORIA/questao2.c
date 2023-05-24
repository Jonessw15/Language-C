#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    float hora, minutos;
    printf("Dê o tempo de uma receita em horas e minutos: \n");
    scanf("%f", &hora, &minutos);

    printf("Essa hora convertido em segundos é: %f %f", hora * 60, minutos * 60);

}

// Não concluido
