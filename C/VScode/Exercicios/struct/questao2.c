#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50], titulo[50];
    int ano;
} Livro;

void cadastro(Livro *);
void imprime(Livro );

int main() {

    Livro vetor[5];

    for (int i = 0; i < 5; i++) {
        printf("\n---Cadastro %d---\n\n", i + 1);
        cadastro(&vetor[i]);
    }

    for (int i = 0; i < 5; i++) {
        printf("\n---Livro---\n\n");
        imprime(vetor[i]);
    }
 
    return 0;

}

void cadastro(Livro *livroPtr) {
    printf("Digite o nome do autor do livro: ");
    fgets(livroPtr -> nome, 50, stdin);

    livroPtr -> nome[strcspn(livroPtr-> nome, "\n")] = '\0';

    printf("Digite o titulo deste livro: ");
    fgets(livroPtr -> titulo, 50, stdin);

    livroPtr -> titulo[strcspn(livroPtr -> titulo, "\n")] = '\0';

    printf("Digite o ano deste livro: ");
    scanf("%d", &livroPtr -> ano);

    while (livroPtr -> ano < 1800 || livroPtr -> ano > 2023) {
        printf("Ano invalido, digite novamente o ano deste livro: ");
        scanf("%d", &livroPtr -> ano);
    }
    
    getchar();
}

void imprime(Livro liv) {
    printf("O nome do autor do livro eh: %s\n", liv.nome);
    printf("A idade do livro eh: %s\n", liv.titulo);
    printf("O ano do livro eh: %d\n", liv.ano);
}