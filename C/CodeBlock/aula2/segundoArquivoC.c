#include <stdio.h>
#include <stdlib.h>

int main() {

 //   printf("Hello World \n");

 //   int n1 = 3;
 //   printf("Valor de n1: %d, dobro de n: %d, \n", n1, 2*n1);

 //   float n2 = 5.2;
 //   printf("O valor de n2: %.2f \n", n2);

 //   int n;
 //   scanf("%d", &n);
 //  printf("O valor de n: %d", n);

      int nota = 8;
      printf("A nota do aluno foi %d \n", nota);

      int altura = 150;
      float peso = 72.90;
      printf("Sua altura e %d cm, seu peso e %.2f kg. \n", altura, peso);

      int x = 18;
      printf("A metade de %d e %d \n", x, x/2);

      printf("A nota do aluno foi \n");
      scanf("%d", &nota);

      printf("Sua altura e: \n");
      scanf("%d", &altura);
      printf("Seu peso e: \n");
      scanf("%f", &peso);

      printf("A metade de: ");
      scanf("%d", &x);
      printf("%d", x/2);

      char nome[20];
printf(“Digite seu nome: ”);
gets (nome);
printf(“\n\nSeu nome é: %s”, nome);
}
