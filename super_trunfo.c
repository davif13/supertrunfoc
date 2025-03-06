#include <stdio.h>

int main() {
    // Variáveis para as duas cartas do Super Trunfo em C
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapita1, pibPerCapita2;
    float superTrunfo1, superTrunfo2;
    
    // Leitura dos dados da Carta 1
    printf("\nInsira os dados da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Codigo da Carta: ");
    scanf(" %3s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("Populacao: ");
    scanf(" %d", &populacao1);
    printf("Area (km²): ");
    scanf(" %f", &area1);
    printf("PIB (bilhoes de reais): ");
    scanf(" %f", &pib1);
    printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &pontosTuristicos1);
    densidadePopulacional1 = (populacao1 / area1);
    pibPerCapita1 = (pib1 / populacao1);
    superTrunfo1 = (populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (densidadePopulacional1 * -1);
    
    // Leitura dos dados da Carta 2
    printf("\nInsira os dados da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Codigo da Carta: ");
    scanf(" %3s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("Populacao: ");
    scanf(" %d", &populacao2);
    printf("Area (km²): ");
    scanf(" %f", &area2);
    printf("PIB (bilhoes de reais): ");
    scanf(" %f", &pib2);
    printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &pontosTuristicos2);
    densidadePopulacional2 = (populacao2 / area2);
    pibPerCapita2 = (pib2 / populacao2);
    superTrunfo2 = (populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (densidadePopulacional2 * -1);
    
    // Exibição dos dados da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    
    // Exibição dos dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    // Comparativo entre as cartas
    printf ("\nComparação de Cartas:\n");
    if (populacao1 > populacao2) {
        printf("População: Carta 1 venceu\n");
    } else {
        printf("População: Carta 2 venceu\n");
    }

    if (area1 > area2) {
        printf("Area: Carta 1 venceu\n");
    } else {
        printf("Area: Carta 2 venceu\n");
    }
    
    if (pib1 > pib2) {
        printf("PIB: Carta 1 venceu\n");
    } else {
        printf("PIB: Carta 2 venceu\n");
    }

    if (pontosTuristicos1 > pontosTuristicos2) {
        printf("Pontos Turisticos: Carta 1 venceu\n");
    } else {
        printf("Pontos Turisticos: Carta 2 venceu\n");
    }

    if (densidadePopulacional1 > densidadePopulacional2) {
        printf("Densidade Populacional: Carta 1 venceu\n");
    } else {
        printf("Densidade Populacional: Carta 2 venceu\n");
    }
    
    if (pibPerCapita1 > pibPerCapita2) {
        printf("PIB Per Capita: Carta 1 venceu\n");
    } else {
        printf("PIB Per Capita: Carta 2 venceu\n");
    }

    if (superTrunfo1 > superTrunfo2) {
        printf("Super Poder: Carta 1 venceu\n");
    } else {
        printf("Super Poder: Carta 2 venceu\n");
    }
    
    
    return 0;
}
