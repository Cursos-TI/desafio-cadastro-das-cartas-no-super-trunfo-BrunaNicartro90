#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10

void imprimirTabuleiro(int tabuleiro[LINHAS][COLUNAS], char colunas[COLUNAS], int linhas[LINHAS]) {
    
    printf("  ");
    for (int c = 0; c < COLUNAS; c++) {
        printf("%c ", colunas[c]);
    }
    printf("\n");

    for (int i = 0; i < LINHAS; i++) {
        printf("%d ", linhas[i]); 
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d ", tabuleiro[i][j]); 
        }
        printf("\n");
    }
}

int main() {
    
    char colunas[COLUNAS] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int linhas[LINHAS] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int tabuleiro[LINHAS][COLUNAS] = {0};

    // Posicionar os navios:
    // Navio horizontal: 
    tabuleiro[2][4] = 3;
    tabuleiro[2][5] = 3; 
    tabuleiro[2][6] = 3; 

    // Navio vertical:
    tabuleiro[5][7] = 3;
    tabuleiro[6][7] = 3; 
    tabuleiro[7][7] = 3; 

    // Posicionar os navios diagonais
    // Terceiro navio: Diagonal
    tabuleiro[0][0] = 3; 
    tabuleiro[1][1] = 3; 
    tabuleiro[2][2] = 3; 

    // Quarto navio: Diagonal
    tabuleiro[2][8] = 3;
    tabuleiro[3][7] = 3;
    tabuleiro[4][6] = 3; 

    // Imprime o tabuleiro
    printf("Tabuleiro Batalha Naval:\n");
    imprimirTabuleiro(tabuleiro, colunas, linhas);

    return 0;
}

