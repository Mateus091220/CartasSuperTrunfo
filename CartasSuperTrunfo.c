#include <stdio.h>

int main() {
    // Variáveis para a primeira carta
    char estado1;
    char codigo1[4]; // Tamanho 4: 1 letra + 2 números + '\0'
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Variáveis para a segunda carta
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Variáveis para os cálculos
    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    // Instruções para o usuário
    printf("=== Cadastro das Cartas do Super Trunfo ===\n");

    // Leitura dos dados da primeira carta
    printf("\n--- Carta 1 ---\n");
    printf("Estado (letra de 'A' a 'H'): ");
    scanf(" %c", &estado1); // Espaço antes de %c para evitar problemas com o buffer

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1); // Lê até o final da linha, incluindo espaços

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Leitura dos dados da segunda carta
    printf("\n--- Carta 2 ---\n");
    printf("Estado (letra de 'A' a 'H'): ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos para a primeira carta
    densidadePopulacional1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1; // Convertendo bilhões para unidades
    superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0f / densidadePopulacional1);

    // Cálculos para a segunda carta
    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2; // Convertendo bilhões para unidades
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0f / densidadePopulacional2);

    // Comparação entre as cartas
    int compPopulacao = (populacao1 > populacao2) ? 1 : 0;
    int compArea = (area1 > area2) ? 1 : 0;
    int compPib = (pib1 > pib2) ? 1 : 0;
    int compPontosTuristicos = (pontosTuristicos1 > pontosTuristicos2) ? 1 : 0;
    int compDensidadePopulacional = (densidadePopulacional1 < densidadePopulacional2) ? 1 : 0;
    int compPibPerCapita = (pibPerCapita1 > pibPerCapita2) ? 1 : 0;
    int compSuperPoder = (superPoder1 > superPoder2) ? 1 : 0;

    // Exibição dos resultados das comparações
    printf("\n=== Comparação de Cartas ===\n");
    printf("População: Carta %d venceu (%d)\n", compPopulacao ? 1 : 2, compPopulacao);
    printf("Área: Carta %d venceu (%d)\n", compArea ? 1 : 2, compArea);
    printf("PIB: Carta %d venceu (%d)\n", compPib ? 1 : 2, compPib);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", compPontosTuristicos ? 1 : 2, compPontosTuristicos);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", compDensidadePopulacional ? 1 : 2, compDensidadePopulacional);
    printf("PIB per Capita: Carta %d venceu (%d)\n", compPibPerCapita ? 1 : 2, compPibPerCapita);
    printf("Super Poder: Carta %d venceu (%d)\n", compSuperPoder ? 1 : 2, compSuperPoder);

    return 0;
}