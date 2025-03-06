#include <stdio.h>
#include <string.h>

int main() {
    // Variáveis para as duas cartas do Super Trunfo em C
    char estado1[3], estado2[3];
    char codigo1[4], codigo2[4];
    char nomePais1[50], nomePais2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidadePopulacional1, densidadePopulacional2;
    int escolha;

    // Leitura dos dados da Carta 1
    printf("\nInsira os dados da Carta 1:\n");
    printf("Estado (ex: BR, US): ");
    scanf("%2s", estado1);
    printf("Codigo da Carta: ");
    scanf("%3s", codigo1);
    getchar();  // Limpa o buffer
    printf("Nome do Pais: ");
    fgets(nomePais1, sizeof(nomePais1), stdin);
    nomePais1[strcspn(nomePais1, "\n")] = '\0';
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

    // Leitura dos dados da Carta 2
    printf("\nInsira os dados da Carta 2:\n");
    printf("Estado (ex: BR, US): ");
    scanf("%2s", estado2);
    printf("Codigo da Carta: ");
    scanf("%3s", codigo2);
    getchar();  // Limpa o buffer
    printf("Nome do Pais: ");
    fgets(nomePais2, sizeof(nomePais2), stdin);
    nomePais2[strcspn(nomePais2, "\n")] = '\0';
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

    // Menu de escolha de atributo
    printf("\nEscolha um atributo para comparar:\n");
    printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Numero de Pontos Turisticos\n5 - Densidade Demografica\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);

    // Comparação
    printf("\nComparacao de Cartas:\n");
    switch (escolha) {
        case 1:
            printf("Atributo: Populacao\n");
            printf("%s: %lu habitantes\n", nomePais1, populacao1);
            printf("%s: %lu habitantes\n", nomePais2, populacao2);
            if (populacao1 > populacao2)
                printf("Vencedor: %s\n", nomePais1);
            else if (populacao1 < populacao2)
                printf("Vencedor: %s\n", nomePais2);
            else
                printf("Empate!\n");
            break;
        case 2:
            printf("Atributo: Area\n");
            printf("%s: %.2f km²\n", nomePais1, area1);
            printf("%s: %.2f km²\n", nomePais2, area2);
            if (area1 > area2)
                printf("Vencedor: %s\n", nomePais1);
            else if (area1 < area2)
                printf("Vencedor: %s\n", nomePais2);
            else
                printf("Empate!\n");
            break;
        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f bilhoes\n", nomePais1, pib1);
            printf("%s: %.2f bilhoes\n", nomePais2, pib2);
            if (pib1 > pib2)
                printf("Vencedor: %s\n", nomePais1);
            else if (pib1 < pib2)
                printf("Vencedor: %s\n", nomePais2);
            else
                printf("Empate!\n");
            break;
        case 4:
            printf("Atributo: Numero de Pontos Turisticos\n");
            printf("%s: %d pontos\n", nomePais1, pontosTuristicos1);
            printf("%s: %d pontos\n", nomePais2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2)
                printf("Vencedor: %s\n", nomePais1);
            else if (pontosTuristicos1 < pontosTuristicos2)
                printf("Vencedor: %s\n", nomePais2);
            else
                printf("Empate!\n");
            break;
        case 5:
            printf("Atributo: Densidade Demografica\n");
            printf("%s: %.2f hab/km²\n", nomePais1, densidadePopulacional1);
            printf("%s: %.2f hab/km²\n", nomePais2, densidadePopulacional2);
            if (densidadePopulacional1 < densidadePopulacional2)
                printf("Vencedor: %s\n", nomePais1);
            else if (densidadePopulacional1 > densidadePopulacional2)
                printf("Vencedor: %s\n", nomePais2);
            else
                printf("Empate!\n");
            break;
        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}

