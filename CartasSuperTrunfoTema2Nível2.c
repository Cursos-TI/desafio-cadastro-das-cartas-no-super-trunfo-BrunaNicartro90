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

    // Exibição inicial das cartas
    printf("\nFORTALEZA\n");
    printf("Dados da Carta nº1:\n");
    printf("Estado: %s\n", estado01);
    printf("Código da Carta: %s\n", codigo01);
    printf("Cidade: %s\n", cidade01);
    printf("População: %d habitantes\n", populacao01);
    printf("Área total: %.3f Km²\n", area01);
    printf("PIB: %.3f Bilhões de Reais\n", pib01);
    printf("São %d pontos turísticos\n", pontosTuristicos1);
    printf("Densidade Populacional: %.3f habitantes por Km²\n", densidade01);
    printf("PIB Per Capita: %.3f\n", pibPerCapita01);
    printf("Super Poder: %.3f\n", superPoder01);

    printf("\nMANAUS\n");
    printf("Dados da Carta nº2:\n");
    printf("Estado: %s\n", estado02);
    printf("Código da Carta: %s\n", codigo02);
    printf("Cidade: %s\n", cidade02);
    printf("População: %d habitantes\n", populacao02);
    printf("Área total: %.3f Km²\n", area02);
    printf("PIB: %.3f Bilhões de Reais\n", pib02);
    printf("São %d pontos turísticos\n", pontosTuristicos2);
    printf("Densidade Populacional: %.3f habitantes por Km²\n", densidade02);
    printf("PIB Per Capita: %.3f\n", pibPerCapita02);
    printf("Super Poder: %.3f\n", superPoder02);

    // Escolha do jogador
    int escolha;
    printf("\nEscolha um atributo para disputar a batalha:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Populacional\n6 - PIB Per Capita\n7 - Super Poder\n");
    printf("Digite o número correspondente ao atributo: ");
    scanf("%d", &escolha);

    // Realização da batalha com switch
    switch (escolha) {
        case 1:
            if (populacao01 > populacao02) {
                printf("População: A carta %s (%s) é a vencedora!\n", codigo01, cidade01);
            } else {
                printf("População: A carta %s (%s) é a vencedora!\n", codigo02, cidade02);
            }
            break;
        case 2:
            if (area01 > area02) {
                printf("Área: A carta %s (%s) é a vencedora!\n", codigo01, cidade01);
            } else {
                printf("Área: A carta %s (%s) é a vencedora!\n", codigo02, cidade02);
            }
            break;
        case 3:
            if (pib01 > pib02) {
                printf("PIB: A carta %s (%s) é a vencedora!\n", codigo01, cidade01);
            } else {
                printf("PIB: A carta %s (%s) é a vencedora!\n", codigo02, cidade02);
            }
            break;
        case 4:
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Pontos Turísticos: A carta %s (%s) é a vencedora!\n", codigo01, cidade01);
            } else {
                printf("Pontos Turísticos: A carta %s (%s) é a vencedora!\n", codigo02, cidade02);
            }
            break;
        case 5:
            if (densidade01 > densidade02) {
                printf("Densidade Populacional: A carta %s (%s) é a vencedora!\n", codigo01, cidade01);
            } else {
                printf("Densidade Populacional: A carta %s (%s) é a vencedora!\n", codigo02, cidade02);
            }
            break;
        case 6:
            if (pibPerCapita01 > pibPerCapita02) {
                printf("PIB Per Capita: A carta %s (%s) é a vencedora!\n", codigo01, cidade01);
            } else {
                printf("PIB Per Capita: A carta %s (%s) é a vencedora!\n", codigo02, cidade02);
            }
            break;
        case 7:
            if (superPoder01 > superPoder02) {
                printf("Super Poder: A carta %s (%s) é a vencedora!\n", codigo01, cidade01);
            } else {
                printf("Super Poder: A carta %s (%s) é a vencedora!\n", codigo02, cidade02);
            }
            break;
        default:
            printf("Opção inválida! Por favor, escolha entre 1 e 7.\n");
    }

    return 0;
}
