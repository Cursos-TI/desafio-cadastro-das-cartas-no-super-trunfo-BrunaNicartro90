#include <stdio.h>

int main() {
    // Variáveis Carta 01
    char estado01[40] = "CE";
    char codigo01[40] = "C1";
    char cidade01[40] = "FORTALEZA";
    int populacao01 = 4000000;
    float area01 = 3800000;
    float pib01 = 55000000;
    int pontosTuristicos1 = 65;

  printf("\nFORTALEZA\n");
  printf("Dados da Carta nº1:\n");
  printf("Estado: %s\n", estado01);
  printf("Código da Carta: %s\n", codigo01);
  printf("Cidade: %s\n", cidade01);
  printf("População: %d habitantes \n", populacao01);
  printf("Área total: %.3f Km². \n", area01);
  printf("PIB: %.3f Bilhões de Reais \n", pib01);
  printf("São %d pontos turísticos. \n", pontosTuristicos1);

    printf("FORTALEZA\n");
    printf("Carta nº1: \n");

    printf("Insira o Código do Estado: ");
    scanf("%s", &estado01);

    printf("Insira o Código da Carta: ");
    scanf("%s", &codigo01);

    printf("Insira o nome da cidade: ");
    scanf(" %s", &cidade01);

    printf("Insira o Nº Populacional: ");
    scanf("%d", &populacao01);

    printf("Insira a Área da cidade: ");
    scanf("%f", &area01);

    printf("Insira o PIB: ");
    scanf("%f", &pib01);

    printf("Nº de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    char estado02[40] = "AM"; 
    char codigo02[40] = "C2";
    char cidade02[40] = "MANAUS";
    int populacao02 = 500000; 
    float area02 = 3000000;
    float pib02 = 45000000;
    int pontosturisticos2 = 100; 

        printf("\nMANAUS\n");
        printf("Dados da Carta nº2:\n");
        printf("Estado: %s\n", estado02);
        printf("Código da Carta: %s\n", codigo02);
        printf("Cidade: %s\n", cidade02);
        printf("População: %d habitantes \n", populacao02);
        printf("Área total: %.3f Km². \n", area02);
        printf("PIB: %.3f Bilhões de Reais \n", pib02);
        printf("São %d pontos turísticos. \n", pontosturisticos2);

    printf("Insira o Código do Estado: ");
    scanf(" %s", &estado02);

    printf("Insira o Código da Carta: ");
    scanf(" %s", &codigo02);

    printf("Insira o nome da cidade: ");
    scanf(" %s", &cidade02);

    printf("Insira o Nº Populacional: ");
    scanf("%d", &populacao02);

    printf("Insira a Área total da cidade: ");
    scanf("%f", &area02);

    printf("Insira o PIB referente: ");
    scanf("%f", &pib02);

    printf("Nº de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos2);

    return 0;
}