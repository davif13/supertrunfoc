#include <stdio.h>
#include <string.h>

int main() {
    // Variáveis para as duas cartas do Super Trunfo em C
    char estado1[3], estado2[3];
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
    printf("Estado (ex: SP, RJ): ");
    scanf("%2s", estado1);
    printf("Codigo da Carta: ");
    scanf("%3s", codigo1);
    getchar();  // Limpa o buffer
    printf("Nome da Cidade: ");
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = '\0'; // Remover quebra de linha
    printf("Populacao: ");
    scanf("%lu", &populacao1);
    printf("Area (km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhoes de reais): ");
    scanf("%f", &pib1);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos da Carta 1
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;
    superTrunfo1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (densidadePopulacional1 * -1);

    // Leitura dos dados da Carta 2
    printf("\nInsira os dados da Carta 2:\n");
    printf("Estado (ex: SP, RJ): ");
    scanf("%2s", estado2);
    printf("Codigo da Carta: ");
    scanf("%3s", codigo2);
    getchar();  // Limpa o buffer
    printf("Nome da Cidade: ");
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = '\0'; // Remover quebra de linha
    printf("Populacao: ");
    scanf("%lu", &populacao2);
    printf("Area (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhoes de reais): ");
    scanf("%f", &pib2);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos da Carta 2
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;
    superTrunfo2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (densidadePopulacional2 * -1);

    // Comparação de atributo (escolhendo População para a comparação)
    printf("\nComparação de Cartas (Atributo: População):\n");
    printf("Carta 1 - %s (%s): %lu habitantes\n", nomeCidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %lu habitantes\n", nomeCidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (populacao1 < populacao2) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Empate!\n");
    }

    return 0;
}
