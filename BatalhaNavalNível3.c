
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

    // **Posicionar os navios em formas geométricas**
    
    // **Triângulo:** 
    tabuleiro[0][2] = 3; 
    tabuleiro[1][1] = 3; 
    tabuleiro[1][2] = 3; 
    tabuleiro[1][3] = 3; 

    // **Cruz:** 
    tabuleiro[1][5] = 3; 
    tabuleiro[2][5] = 3; 
    tabuleiro[3][5] = 3; 
    tabuleiro[2][4] = 3; 
    tabuleiro[2][6] = 3; 
    tabuleiro[2][3] = 3; 
    tabuleiro[2][7] = 3; 

    // **Octaedro:** 
    tabuleiro[6][7] = 3;
    tabuleiro[7][6] = 3; 
    tabuleiro[7][7] = 3; 
    tabuleiro[7][8] = 3; 
    tabuleiro[8][7] = 3; 

    printf("Tabuleiro Batalha Naval - Formas Geométricas:\n");
    imprimirTabuleiro(tabuleiro, colunas, linhas);

    return 0;
}
