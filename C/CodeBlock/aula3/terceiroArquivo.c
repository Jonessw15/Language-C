#include <stdio.h>
#include <locale.h>

int main() {

//    int n1, n2, media;
//
//    printf("Digite a primeira nota do aluno: \n");
//    scanf("%d", &n1);
//
//    printf("Digite a segunda nota do aluno: \n");
//    scanf("%d", &n2);
//
//    media = (n1 + n2) / 2;
//
//    if (media > 6) {
//        printf("Aluno aprovado");
//    } else {
//        printf("Aluno reprovado");
//    }
//
//    return 0;




//    int vaiChover;
//
//    printf("Vai chover hoje? 1 - Sim ou 0 - Nao \n");
//    scanf("%d", &vaiChover);
//
//    if (vaiChover != 0) {
//        printf("Vai chover");
//    } else {
//        printf("Nao vai chover");
//    }




//    int x = 5;
//
//    if (x > -10 && x < 10) {
//        printf("Dentro do intervalo");
//    }
//
//    if (x > -10 || x < 10) {
//        printf("Dentro do intervalo");
//    }


//      int n1;
//
//      printf("Digite um numero: \n");
//      scanf("%d", &n1);
//
//      if (n1 >= 100) {
//        printf("Numero maior ou igual a 100 \n \n");
//      } else {
//        printf("Numero menor que 100 \n \n");
//      }
//
//      printf("Digite um numero: \n \n");
//      scanf("%d", &n1);
//
//      if (n1 > 10 && n1 < 100) {
//        printf("Este numero esta entre 10 e 100");
//      } else {
//        printf("Este numero nao esta entre 10 e 100");
//      }



      int n1;
      int r;

      printf("Digite um numero \n");
      scanf("%d", &n1);

      r = n1 <= 100 ? 1 : 0;

      printf("%d", r);
}
