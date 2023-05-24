#include <stdio.h>

void matrizID(int);

int main() {

    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);

    matrizID(num);
}

void matrizID(int n1) {
    int matriz[n1][n1];
    int um = 1;
    int zero = 0;
    
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n1; j++) {
                if (i == j) {
                    matriz[i][j] = um;
                } else {
                    matriz[i][j] = zero;
                }
                printf("%d ", matriz[i][j]);
            }
            printf("\n");
        }
        
        
    
    }
