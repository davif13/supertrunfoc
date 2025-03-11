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
    int escolha1, escolha2;
    float valor1Carta1, valor1Carta2, valor2Carta1, valor2Carta2;
    float somaCarta1, somaCarta2;
    
    // Leitura dos dados da Carta 1
    printf("\nInsira os dados da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Codigo da Carta: ");
    scanf(" %3s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("Populacao: ");
    scanf(" %lu", &populacao1);
    printf("Area (km²): ");
    scanf(" %f", &area1);
    printf("PIB (bilhoes de reais): ");
    scanf(" %f", &pib1);
    printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &pontosTuristicos1);
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;
    
    // Leitura dos dados da Carta 2
    printf("\nInsira os dados da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Codigo da Carta: ");
    scanf(" %3s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("Populacao: ");
    scanf(" %lu", &populacao2);
    printf("Area (km²): ");
    scanf(" %f", &area2);
    printf("PIB (bilhoes de reais): ");
    scanf(" %f", &pib2);
    printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &pontosTuristicos2);
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;
    
    // Escolha dos atributos
    printf("\nEscolha o primeiro atributo para a comparação:\n");
    printf("1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n5. Densidade Demográfica\n");
    do {
        printf("Digite sua escolha: ");
        scanf(" %d", &escolha1);
    } while (escolha1 < 1 || escolha1 > 5);
    
    printf("\nEscolha o segundo atributo para a comparação (diferente do primeiro):\n");
    do {
        printf("Digite sua escolha: ");
        scanf(" %d", &escolha2);
    } while (escolha2 < 1 || escolha2 > 5 || escolha2 == escolha1);
    
    // Definição dos valores dos atributos escolhidos
    switch (escolha1) {
        case 1: valor1Carta1 = populacao1; valor1Carta2 = populacao2; break;
        case 2: valor1Carta1 = area1; valor1Carta2 = area2; break;
        case 3: valor1Carta1 = pib1; valor1Carta2 = pib2; break;
        case 4: valor1Carta1 = pontosTuristicos1; valor1Carta2 = pontosTuristicos2; break;
        case 5: valor1Carta1 = densidadePopulacional1; valor1Carta2 = densidadePopulacional2; break;
    }
    switch (escolha2) {
        case 1: valor2Carta1 = populacao1; valor2Carta2 = populacao2; break;
        case 2: valor2Carta1 = area1; valor2Carta2 = area2; break;
        case 3: valor2Carta1 = pib1; valor2Carta2 = pib2; break;
        case 4: valor2Carta1 = pontosTuristicos1; valor2Carta2 = pontosTuristicos2; break;
        case 5: valor2Carta1 = densidadePopulacional1; valor2Carta2 = densidadePopulacional2; break;
    }
    
    // Soma dos atributos
    somaCarta1 = valor1Carta1 + valor2Carta1;
    somaCarta2 = valor1Carta2 + valor2Carta2;
    
    // Exibição dos resultados
    printf("\nComparação de Cartas:\n");
    printf("%s vs %s\n", nomeCidade1, nomeCidade2);
    printf("Atributo 1: %f vs %f\n", valor1Carta1, valor1Carta2);
    printf("Atributo 2: %f vs %f\n", valor2Carta1, valor2Carta2);
    printf("Soma dos atributos: %f vs %f\n", somaCarta1, somaCarta2);
    
    if (somaCarta1 > somaCarta2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (somaCarta1 < somaCarta2) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: Empate!\n");
    }
    
    return 0;
}

