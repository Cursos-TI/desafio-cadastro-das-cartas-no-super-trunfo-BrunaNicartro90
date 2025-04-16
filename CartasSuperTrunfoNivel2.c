//CARTA 01 - FORTALEZA

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
    float densidade01 = populacao01 / area01;
    float pibPerCapta01 = pib01 / area01;

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
  printf("PIB Per Capta: %.3f\n", pibPerCapta01);

//CARTA 02 - MANAUS
    //Variáveis carta 02

    char estado02[40] = "AM"; 
    char codigo02[40] = "C2";
    char cidade02[40] = "MANAUS";
    int populacao02 = 500000; 
    float area02 = 3000000;
    float pib02 = 45000000;
    int pontosturisticos2 = 100; 
    float densidade02 = populacao02 / area02;
    float pibPerCapita2 = pib02 / area02;

        printf("\nMANAUS\n");
        printf("Dados da Carta nº2:\n");
        printf("Estado: %s\n", estado02);
        printf("Código da Carta: %s\n", codigo02);
        printf("Cidade: %s\n", cidade02);
        printf("População: %d habitantes \n", populacao02);
        printf("Área total: %.3f Km². \n", area02);
        printf("PIB: %.3f Bilhões de Reais \n", pib02);
        printf("São %d pontos turísticos. \n", pontosturisticos2);
        printf("Densidade Populacional: %.3f habitantes por Km²\n", densidade02);
        printf("PIB PER Capita: %.3f PIB\n", pibPerCapita2);

    return 0;
}