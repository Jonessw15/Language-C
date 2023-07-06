/* a) Um programa em linguagem de programação que crie seguintes dois conjuntos 
M e N e mostre na tela FALSO ou VERDADEIRO para a pertinência dos 
elementos.
b) Uma função chamada subconjunto ao ser mostrada na tela retorna FALSO ou 
VERDADEIRO quando entra com os dois conjuntos criados anteriormente. */

#include <stdio.h>

#define MAX_SIZE 100

// Função para verificar pertinência de um elemento em um conjunto
int verificaPertinencia(int elemento, int conjunto[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (conjunto[i] == elemento) {
            return 1;  // Pertence ao conjunto
        }
    }
    return 0;  // Não pertence ao conjunto
}

int main() {
    int M[MAX_SIZE];  // Conjunto M
    int N[MAX_SIZE];  // Conjunto N
    int tamanhoM, tamanhoN;  // Tamanhos dos conjuntos
    int elemento;  // Elemento a ser verificado

    // Leitura do conjunto M
    printf("Digite o tamanho do conjunto M: ");
    scanf("%d", &tamanhoM);
    printf("Digite os elementos do conjunto M:\n");
    for (int i = 0; i < tamanhoM; i++) {
        scanf("%d", &M[i]);
    }

    // Leitura do conjunto N
    printf("Digite o tamanho do conjunto N: ");
    scanf("%d", &tamanhoN);
    printf("Digite os elementos do conjunto N:\n");
    for (int i = 0; i < tamanhoN; i++) {
        scanf("%d", &N[i]);
    }

    // Verificação da pertinência dos elementos
    printf("Digite um elemento para verificar sua pertinencia: ");
    scanf("%d", &elemento);

    // Verificação no conjunto M
    if (verificaPertinencia(elemento, M, tamanhoM)) {
        printf("VERDADEIRO: O elemento %d pertence ao conjunto M.\n", elemento);
    } else {
        printf("FALSO: O elemento %d nao pertence ao conjunto M.\n", elemento);
    }

    // Verificação no conjunto N
    if (verificaPertinencia(elemento, N, tamanhoN)) {
        printf("VERDADEIRO: O elemento %d pertence ao conjunto N.\n", elemento);
    } else {
        printf("FALSO: O elemento %d nao pertence ao conjunto N.\n", elemento);
    }

    return 0;
}
