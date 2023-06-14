#include <stdio.h>

typedef struct {
    int hora, min, seg;
} Horario;

int main() {

    Horario vetor[3];
    
    for (int i = 0; i < 3; i++) {
        vetor[i].hora = i + 1;
        printf("%d\n", vetor[i].hora);
    }

    return 0;

}