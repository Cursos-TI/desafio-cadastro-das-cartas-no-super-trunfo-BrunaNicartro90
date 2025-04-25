#include <stdio.h>

int main() {
    // Mover a torre 5 casas para a direita
    printf("Movendo a torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // Mover o bispo 5 casas para a diagonal
    printf("\nMovendo o bispo:\n");
    int i = 1;
    while (i <= 5) {
        printf("Diagonal para a direita\n");
        i++;
    }

    // Mover o Rainha 8 casas para a esquerda
    printf("\nMovendo a Rainha:\n");
    int j = 1;
    do {
        printf("Esquerda\n");
        j++;
     } while (j <= 8);

    return 0;
}
