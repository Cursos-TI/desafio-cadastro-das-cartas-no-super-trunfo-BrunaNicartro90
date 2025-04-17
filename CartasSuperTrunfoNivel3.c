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
    float superPoder02 = populacao02 + area02 + pib02 + pontosTuristicos2 + densidade01 + pibPerCapita02;

    
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


    // Comparação das variáveis e exibição dos resultados

    
        int pop1 = 10;
        int pop2 = 20;
    
        float area1 = 10.0;
        float area2 = 20.0;
    
        float pib1 = 10.0;
        float pib2 = 20.0;

        int ptsturisticos1 = 10;
        int ptsturisticos2 = 20;
    
        float densidade1 = 10.0;
        float densidade2 = 20.0;
    
        float perCapita1 = 10.0;
        float perCapita2 = 20.0;
    
        float superPoder1 = 10.0;
        float superPoder2 = 20.0;
    

        printf("População - a > b: %d\n", pop1 > pop2);
        printf("População - a < b: %d\n", pop1 < pop2);
        printf("População - a == b: %d\n", pop1 == pop2);
        printf("População - a != b: %d\n", pop1 != pop2);
    
        printf("Área - a > b: %d\n", area1 > area2);
        printf("Área - a < b: %d\n", area1 < area2);
        printf("Área - a == b: %d\n", area1 == area2);
        printf("Área - a != b: %d\n", area1 != area2);
    
        printf("PIB - a > b: %d\n", pib1 > pib2);
        printf("PIB - a < b: %d\n", pib1 < pib2);
        printf("PIB - a == b: %d\n", pib1 == pib2);
        printf("PIB - a != b: %d\n", pib1 != pib2);

        printf("Pontos Turisticos - a > b: %d\n", ptsturisticos1 > ptsturisticos2);
        printf("Pontos Turisticos - a < b: %d\n", ptsturisticos1 < ptsturisticos2);
        printf("Pontos Turisticos - a == b: %d\n", ptsturisticos1 = ptsturisticos2);
        printf("Pontos Turisticos - a != b: %d\n", ptsturisticos1 != ptsturisticos2);
    
        printf("Densidade - a > b: %d\n", densidade1 > densidade2);
        printf("Densidade - a < b: %d\n", densidade1 < densidade2);
        printf("Densidade - a == b: %d\n", densidade1 == densidade2);
        printf("Densidade - a != b: %d\n", densidade1 != densidade2);
    
        printf("PIB Per Capita - a > b: %d\n", perCapita1 > perCapita2);
        printf("PIB Per Capita - a < b: %d\n", perCapita1 < perCapita2);
        printf("PIB Per Capita - a == b: %d\n", perCapita1 == perCapita2);
        printf("PIB Per Capita - a != b: %d\n", perCapita1 != perCapita2);
    
        printf("Super Poder - a > b: %d\n", superPoder1 > superPoder2);
        printf("Super Poder - a < b: %d\n", superPoder1 < superPoder2);
        printf("Super Poder - a == b: %d\n", superPoder1 == superPoder2);
        printf("Super Poder - a != b: %d\n", superPoder1 != superPoder2);
    
        return 0;
    }