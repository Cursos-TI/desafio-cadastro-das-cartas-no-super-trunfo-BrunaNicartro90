#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Variáveis Carta 01 - Fortaleza
    char estado01[40] = "CE";
    char codigo01[40] = "C1";
    char cidade01[40] = "FORTALEZA";
    int populacao01 = 4000000;
    float area01 = 3800000.0;
    float pib01 = 55000000.0;
    int pontosTuristicos1 = 65;
    float densidade01 = populacao01 / area01;
    float pibPerCapita01 = pib01 / populacao01;
    float superPoder01 = populacao01 + area01 + pib01 + pontosTuristicos1 + densidade01 + pibPerCapita01;

    // Variáveis Carta 02 - Manaus
    char estado02[40] = "AM";
    char codigo02[40] = "C2";
    char cidade02[40] = "MANAUS";
    int populacao02 = 500000;
    float area02 = 3000000.0;
    float pib02 = 45000000.0;
    int pontosTuristicos2 = 100;
    float densidade02 = populacao02 / area02;
    float pibPerCapita02 = pib02 / populacao02;
    float superPoder02 = populacao02 + area02 + pib02 + pontosTuristicos2 + densidade02 + pibPerCapita02;

    // Variáveis do Jogo
    int pontosJogador1 = 0, pontosJogador2 = 0;
    char atributoEscolhido1, atributoEscolhido2;

    // Bem-vindo ao Jogo
    printf("Bem-Vindo ao Jogo de Cartas!\n");

    // Exibição inicial das cartas
    printf("\nFORTALEZA\n");
    printf("Estado: %s | Código: %s | Cidade: %s\n", estado01, codigo01, cidade01);
    printf("População: %d habitantes | Área: %.3f Km² | PIB: %.3f Bilhões de Reais\n", populacao01, area01, pib01);
    printf("Pontos Turísticos: %d | Densidade: %.3f hab/Km² | PIB Per Capita: %.3f | Super Poder: %.3f\n", pontosTuristicos1, densidade01, pibPerCapita01, superPoder01);

    printf("\nMANAUS\n");
    printf("Estado: %s | Código: %s | Cidade: %s\n", estado02, codigo02, cidade02);
    printf("População: %d habitantes | Área: %.3f Km² | PIB: %.3f Bilhões de Reais\n", populacao02, area02, pib02);
    printf("Pontos Turísticos: %d | Densidade: %.3f hab/Km² | PIB Per Capita: %.3f | Super Poder: %.3f\n", pontosTuristicos2, densidade02, pibPerCapita02, superPoder02);

    // Escolha do Primeiro Jogador
    printf("\nJogador 1: Escolha um atributo para comparar entre as cartas:\n");
    printf("A. Ataque\n");
    printf("D. Defesa\n");
    printf("R. Recuo\n");
    printf("Digite a letra correspondente: ");
    scanf(" %c", &atributoEscolhido1);

    switch (atributoEscolhido1) {
        case 'A': case 'a':
            printf("\nJogador 1 escolheu Ataque com População:\n");
            printf("Fortaleza: %d habitantes\n", populacao01);
            printf("Manaus: %d habitantes\n", populacao02);
            if (populacao01 > populacao02) {
                printf("Jogador 1 venceu este atributo!\n");
                pontosJogador1++;
            } else {
                printf("Jogador 2 venceu este atributo!\n");
                pontosJogador2++;
            }
            break;
        case 'D': case 'd':
            printf("\nJogador 1 escolheu Defesa com Super Poder:\n");
            printf("Fortaleza: %.3f Super Poder\n", superPoder01);
            printf("Manaus: %.3f Super Poder\n", superPoder02);
            if (superPoder01 > superPoder02) {
                printf("Jogador 1 venceu este atributo!\n");
                pontosJogador1++;
            } else {
                printf("Jogador 2 venceu este atributo!\n");
                pontosJogador2++;
            }
            break;
        case 'R': case 'r':
            printf("\nJogador 1 escolheu Recuo com Pontos Turísticos:\n");
            printf("Fortaleza: %d Pontos Turísticos\n", pontosTuristicos1);
            printf("Manaus: %d Pontos Turísticos\n", pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Jogador 1 venceu este atributo!\n");
                pontosJogador1++;
            } else {
                printf("Jogador 2 venceu este atributo!\n");
                pontosJogador2++;
            }
            break;
        default:
            printf("Opção inválida! Jogo encerrado.\n");
            return 0;
    }

    // Escolha do Segundo Jogador
    printf("\nJogador 2: Escolha um atributo para comparar entre as cartas:\n");
    printf("A. Ataque\n");
    printf("D. Defesa\n");
    printf("R. Recuo\n");
    printf("Digite a letra correspondente: ");
    scanf(" %c", &atributoEscolhido2);

    switch (atributoEscolhido2) {
        case 'A': case 'a':
            printf("\nJogador 2 escolheu Ataque com População:\n");
            printf("Fortaleza: %d habitantes\n", populacao01);
            printf("Manaus: %d habitantes\n", populacao02);
            if (populacao01 > populacao02) {
                printf("Jogador 1 venceu este atributo!\n");
                pontosJogador1++;
            } else {
                printf("Jogador 2 venceu este atributo!\n");
                pontosJogador2++;
            }
            break;
        case 'D': case 'd':
            printf("\nJogador 2 escolheu Defesa com Super Poder:\n");
            printf("Fortaleza: %.3f Super Poder\n", superPoder01);
            printf("Manaus: %.3f Super Poder\n", superPoder02);
            if (superPoder01 > superPoder02) {
                printf("Jogador 1 venceu este atributo!\n");
                pontosJogador1++;
            } else {
                printf("Jogador 2 venceu este atributo!\n");
                pontosJogador2++;
            }
            break;
        case 'R': case 'r':
            printf("\nJogador 2 escolheu Recuo com Pontos Turísticos:\n");
            printf("Fortaleza: %d Pontos Turísticos\n", pontosTuristicos1);
            printf("Manaus: %d Pontos Turísticos\n", pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Jogador 1 venceu este atributo!\n");
                pontosJogador1++;
            } else {
                printf("Jogador 2 venceu este atributo!\n");
                pontosJogador2++;
            }
            break;
        default:
            printf("Opção inválida! Jogo encerrado.\n");
            return 0;
    }

    // Determinar o vencedor da batalha final
    printf("\nResultado Final:\n");
    if (pontosJogador1 > pontosJogador2) {
        printf("🎉 Jogador 1 é o grande vencedor 🎉\n", pontosJogador1);
    } else if (pontosJogador2 > pontosJogador1) {
        printf("🎉 Jogador 2 é o grande vencedor 🎉\n", pontosJogador2);
    } else {
        printf("⚔️ A batalha terminou em empate! ⚔️\n", pontosJogador1);
    }

    return 0;
}
