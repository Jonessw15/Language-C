/* Faça um algoritmo que:
a. Preencha um vetor com os números 501 a 597;
b. Mostre os elementos ímpares do vetor.
 */

#include <stdio.h>
/* int main (){
int vetor[96], quinhentos=501 ;
for(int i=0; i<96; i++){
vetor[i]=quinhentos;
quinhentos++;

if(vetor[i]%2==1){
    printf("impar: %d\n",vetor[i]);

}

} */


/* Faça uma função que retorne a quantidade de números pares, dado um vetor de 20
elementos. */
int main (){
int vetor[20], cont=0;
for(int i=0; i<20; i++){
printf("digite um numero: ");
scanf("%d", &vetor[i]);

if(vetor[i]%2==0) {
    cont++;
}
}



printf("Numeros pares: %d", cont);





}




