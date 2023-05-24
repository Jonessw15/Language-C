#include <stdio.h>
#include <stdlib.h>

/* void media(float, float, float, char);

int main() {

    float n1, n2, n3;
    char op;
    printf("Digite 'A' se quiser calcular a media aritmetica \nDigite 'B' se quiser calcular a media ponderada\n");
    scanf("%c", &op);
    
    printf("Digite a primeira nota do aluno: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota do aluno: ");
    scanf("%f", &n2);
    printf("Digite a terceira nota do aluno: ");
    scanf("%f", &n3);
    

    media(n1, n2, n3, op);

    return 0;
}

void media(float nota1, float nota2, float nota3, char opcao) {
    switch (opcao) {
        case 'A':
            printf("%f", (nota1 + nota2 + nota3) / 3);
            break;
        case 'B':
            printf("%f", (nota1 * 5 + nota2 * 3 + nota3 * 2) / (5 + 3 + 2)); 
            break;
        default:
            printf("Valores indefinidos");
            break;
    }
}
 */
float media(float, float, float, char);

int main() {

    float n1, n2, n3;
    char op;
    printf("Digite 'A' se quiser calcular a media aritmetica \nDigite 'B' se quiser calcular a media ponderada\n");
    scanf("%c", &op);
    
    printf("Digite a primeira nota do aluno: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota do aluno: ");
    scanf("%f", &n2);
    printf("Digite a terceira nota do aluno: ");
    scanf("%f", &n3);
    

    printf("%f", media(n1, n2, n3, op));

    return 0;
}

float media(float nota1, float nota2, float nota3, char opcao) {
    if (opcao == 'A') {
        return (nota1 + nota2 + nota3) / 3;
    } else if (opcao == 'B') {
        return (nota1 * 5 + nota2 * 3 + nota3 * 2) / (5 + 3 + 2); 
    }
}