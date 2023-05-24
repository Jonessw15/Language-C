/* Faça um programa que recebe um vetor de 10 elementos e, por fim, imprima sua
média. */

#include <stdio.h>
int main () 
{
    float vetor[10], soma=0, media=0;
   
    for(int i=0; i<10; i++) {
    printf("Digite um numero: ");
    scanf("%f", &vetor[i]);
    soma= vetor[i]+ soma;
    }
    media= soma/10;
    printf("A media dos numeros e: %.1f", media);


}
