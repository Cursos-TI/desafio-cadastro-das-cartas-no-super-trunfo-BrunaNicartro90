#include <stdio.h>

// Função para mover a torre recursivamente
void MoverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        MoverTorre(casas - 1);
    }
}

// Função para mover o cavalo simulando o movimento em L
void MoverCavalo() {
    for (int i = 0; i < 2; i++) {
        printf("Cima\n");
    }
    printf("Direita\n");
}

// Função para mover a rainha 8 casas para cima
void MoverRainha(int casas) {
    if (casas > 0) {
        printf("Cima\n");
        MoverRainha(casas - 1);
    }
}

int main() {
    // Variável para a entrada do usuário
    char atributoEscolhido;

    // Mover a Torre
    printf("Deseja mover a torre 5 casas para a direita?\n");
    printf("A. SIM\n");
    printf("B. NÃO\n");
    printf("Digite a sua escolha: ");
    scanf(" %c", &atributoEscolhido);

    if (atributoEscolhido == 'A' || atributoEscolhido == 'a') {
        printf("\nIniciando movimento da torre...\n");
        MoverTorre(5); // Movendo 5 casas
    } else if (atributoEscolhido == 'B' || atributoEscolhido == 'b') {
        printf("\nMovimento cancelado. A torre permanece na posição atual.\n");
    } else {
        printf("\nOpção inválida! Por favor, escolha A (SIM) ou B (NÃO).\n");
    }

    // Mover o Cavalo
    printf("\nDeseja mover o cavalo para cima duas vezes e uma casa para a direita?\n");
    printf("A. SIM\n");
    printf("B. NÃO\n");
    printf("Digite a sua escolha: ");
    scanf(" %c", &atributoEscolhido);

    if (atributoEscolhido == 'A' || atributoEscolhido == 'a') {
        printf("\nIniciando movimento do cavalo...\n");
        MoverCavalo(); // Movendo em L
    } else if (atributoEscolhido == 'B' || atributoEscolhido == 'b') {
        printf("\nMovimento cancelado. O cavalo permanece na posição atual.\n");
    } else {
        printf("\nOpção inválida! Por favor, escolha A (SIM) ou B (NÃO).\n");
    }

    // Mover a Rainha
    printf("\nDeseja mover a rainha 8 casas para cima?\n");
    printf("A. SIM\n");
    printf("B. NÃO\n");
    printf("Digite a sua escolha: ");
    scanf(" %c", &atributoEscolhido);

    if (atributoEscolhido == 'A' || atributoEscolhido == 'a') {
        printf("\nIniciando movimento da rainha...\n");
        MoverRainha(8); // Movendo 8 casas para cima
    } else if (atributoEscolhido == 'B' || atributoEscolhido == 'b') {
        printf("\nMovimento cancelado. A rainha permanece na posição atual.\n");
    } else {
        printf("\nOpção inválida! Por favor, escolha A (SIM) ou B (NÃO).\n");
    }

    // Exibir Xeque-Mate
    printf("\nXeque-mate!\n");

    return 0;
}
