#include <stdio.h>

void imprimirTabuleiro(int tabuleiro[10][10], char colunas[], int linhas[]) {
    
    printf("  ");
    for (int c = 0; c < 10; c++) {
        printf("%c ", colunas[c]);
    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        printf("%d ", linhas[i]); 
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]); 
        }
        printf("\n");
    }
}

int main() {
    
    char colunas[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int linhas[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int tabuleiro[10][10] = {0};

    // Posicionar os navios

    tabuleiro[2][4] = 3; 
    tabuleiro[2][5] = 3;
    tabuleiro[2][6] = 3; 

    tabuleiro[5][7] = 3;
    tabuleiro[6][7] = 3; 
    tabuleiro[7][7] = 3; 

    printf("Tabuleiro Batalha Naval:\n");
    imprimirTabuleiro(tabuleiro, colunas, linhas);

    return 0;
}
