#include <stdio.h>

int main() {

    int n;


    printf("Digite o numero de elementos do vetor: ");
    scanf("%d", &n);
    
    int vetor[n];
    int matriz[n][n];


    for (int i = 0; i < n; i++) {
        printf("Digite o numero para a posicao do vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                matriz[i][j] = vetor[i];
            } else {
                matriz[i][j] = 0;
            }
            
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }



    return 0;

}