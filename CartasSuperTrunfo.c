#include <stdio.h>

int main() {
    // Variáveis Carta 01
    char estado01[40];
    char codigo01[40];
    char cidade01[40];
    int populacao01;
    float area01;
    float pib01;
    int pontosTuristicos1;

    // Entrada de dados - Carta 1 - FORTALEZA - CE
    printf("FORTALEZA\n");
    printf("Carta nº1: \n");

    printf("Insira o Código do Estado: ");
    scanf(" %[^\n]", estado01);

    printf("Insira o Código da Carta: ");
    scanf(" %[^\n]", codigo01);

    printf("Insira o nome da cidade: ");
    scanf(" %[^\n]", cidade01);

    printf("Insira o Nº Populacional: ");
    scanf("%d", &populacao01);

    printf("Insira a Área da cidade: ");
    scanf("%f", &area01);

    printf("Insira o PIB: ");
    scanf("%f", &pib01);

    printf("Nº de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Saída de dados - Carta 1- FORTALEZA-CE
    printf("\nFORTALEZA\n");
    printf("Dados da Carta nº1:\n");
    printf("Estado: %s\n", estado01);
    printf("Código da Carta: %s\n", codigo01);
    printf("Cidade: %s\n", cidade01);
    printf("População: %d habitantes \n", populacao01);
    printf("Área total: %.3f Km². \n", area01);
    printf("PIB: %.3f Bilhões de Reais \n", pib01);
    printf("São %d pontos turísticos. \n", pontosTuristicos1);

    // Variáveis Carta 2 - MANAUS- AM
    char estado02[40];
    char codigo02[40];
    char cidade02[40];
    int populacao02;
    float area02;
    float pib02;
    int pontosturisticos2;

    // Entrada de dados - Carta 2
    printf("\nMANAUS\n");
    printf("Carta nº2: \n");

    printf("Insira o Código do Estado: ");
    scanf(" %[^\n]", estado02);

    printf("Insira o Código da Carta: ");
    scanf(" %[^\n]", codigo02);

    printf("Insira o nome da cidade: ");
    scanf(" %[^\n]", cidade02);

    printf("Insira o Nº Populacional: ");
    scanf("%d", &populacao02);

    printf("Insira a Área total da cidade: ");
    scanf("%f", &area02);

    printf("Insira o PIB referente: ");
    scanf("%f", &pib02);

    printf("Nº de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos2);

    // Saída de dados - Carta 2
    printf("\nMANAUS\n");
    printf("Dados da Carta nº2:\n");
    printf("Estado: %s\n", estado02);
    printf("Código da Carta: %s\n", codigo02);
    printf("Cidade: %s\n", cidade02);
    printf("População: %d habitantes \n", populacao02);
    printf("Área total: %.3f Km². \n", area02);
    printf("PIB: %.3f Bilhões de Reais \n", pib02);
    printf("São %d pontos turísticos. \n", pontosturisticos2);

    return 0;
}