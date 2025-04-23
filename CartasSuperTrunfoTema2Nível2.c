
#include <stdio.h>

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

    printf("\nFORTALEZA\n");
    printf("Dados da Carta nº1:\n");
    printf("Estado: %s\n", estado01);
    printf("Código da Carta: %s\n", codigo01);
    printf("Cidade: %s\n", cidade01);
    printf("População: %d habitantes \n", populacao01);
    printf("Área total: %.3f Km². \n", area01);
    printf("PIB: %.3f Bilhões de Reais \n", pib01);
    printf("São %d pontos turísticos. \n", pontosTuristicos1);
    printf("Densidade Populacional: %.3f habitantes por Km²\n", densidade01);
    printf("PIB Per Capta: %.3f\n", pibPerCapita01);
    printf("Super Poder: %.3f\n", superPoder01);

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

    printf("\nMANAUS\n");
    printf("Dados da Carta nº2:\n");
    printf("Estado: %s\n", estado02);
    printf("Código da Carta: %s\n", codigo02);
    printf("Cidade: %s\n", cidade02);
    printf("População: %d habitantes \n", populacao02);
    printf("Área total: %.3f Km². \n", area02);
    printf("PIB: %.3f Bilhões de Reais \n", pib02);
    printf("São %d pontos turísticos. \n", pontosTuristicos2);
    printf("Densidade Populacional: %.3f habitantes por Km²\n", densidade02);
    printf("PIB PER Capita: %.3f PIB\n", pibPerCapita02);
    printf("Super Poder: %.3f\n", superPoder02);

    // Contadores de vitórias (declarados corretamente)
    int vitoriasCarta01 = 0;
    int vitoriasCarta02 = 0;

    // Comparações entre os atributos
    printf("\n______________#####______________\n");
    printf("Comparação entre as cartas:\n");

    // População
    if (populacao01 > populacao02) {
        printf("População: A carta %s (%s) é a vencedora!\n", codigo01, cidade01);
        vitoriasCarta01++;
    } else {
        printf("População: A carta %s (%s) é a vencedora!\n", codigo02, cidade02);
        vitoriasCarta02++;
    }

    // Área
    if (area01 > area02) {
        printf("Área: A carta %s (%s) é a vencedora!\n", codigo01, cidade01);
        vitoriasCarta01++;
    } else {
        printf("Área: A carta %s (%s) é a vencedora!\n", codigo02, cidade02);
        vitoriasCarta02++;
    }

    // PIB
    if (pib01 > pib02) {
        printf("PIB: A carta %s (%s) é a vencedora!\n", codigo01, cidade01);
        vitoriasCarta01++;
    } else {
        printf("PIB: A carta %s (%s) é a vencedora!\n", codigo02, cidade02);
        vitoriasCarta02++;
    }

    // Pontos Turísticos
    if (pontosTuristicos1 > pontosTuristicos2) {
        printf("Pontos Turísticos: A carta %s (%s) é a vencedora!\n", codigo01, cidade01);
        vitoriasCarta01++;
    } else {
        printf("Pontos Turísticos: A carta %s (%s) é a vencedora!\n", codigo02, cidade02);
        vitoriasCarta02++;
    }

    // Densidade Populacional
    if (densidade01 > densidade02) {
        printf("Densidade Populacional: A carta %s (%s) é a vencedora!\n", codigo01, cidade01);
        vitoriasCarta01++;
    } else {
        printf("Densidade Populacional: A carta %s (%s) é a vencedora!\n", codigo02, cidade02);
        vitoriasCarta02++;
    }

    // PIB Per Capita
    if (pibPerCapita01 > pibPerCapita02) {
        printf("PIB Per Capita: A carta %s (%s) é a vencedora!\n", codigo01, cidade01);
        vitoriasCarta01++;
    } else {
        printf("PIB Per Capita: A carta %s (%s) é a vencedora!\n", codigo02, cidade02);
        vitoriasCarta02++;
    }

    // Super Poder
    if (superPoder01 > superPoder02) {
        printf("Super Poder: A carta %s (%s) é a vencedora!\n", codigo01, cidade01);
        vitoriasCarta01++;
    } else {
        printf("Super Poder: A carta %s (%s) é a vencedora!\n", codigo02, cidade02);
        vitoriasCarta02++;
    }

    // Determinação da carta vencedora final
    printf("\n______________#####______________\n");
    printf("Resultado Final:\n");

    if (vitoriasCarta01 > vitoriasCarta02) {
        printf("🎉 A carta %s (%s) é a grande vencedora com %d vitórias! 🎉\n", codigo01, cidade01, vitoriasCarta01);
    } else if (vitoriasCarta02 > vitoriasCarta01) {
        printf("🎉 A carta %s (%s) é a grande vencedora com %d vitórias! 🎉\n", codigo02, cidade02, vitoriasCarta02);
    } else {
        printf("⚔️ Empate! Ambas as cartas lutaram com força. ⚔️\n");
    }

    return 0;
}
