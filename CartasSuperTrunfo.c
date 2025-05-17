#include <stdio.h>

int main() {
    // variaveis carta 1 
    char estado1;
    char codigo1[4];
    char NomeCidade1[50];
    unsigned long int populacao1;  // Alterado para unsigned long int
    float area1;
    float pib1;
    int PontosTuristicos1;
    float densidade1, pibPerCapita1, superPoder1;  // Adicionado superPoder1

    // variaveis carta 2
    char estado2;
    char codigo2[4];
    char NomeCidade2[50];
    unsigned long int populacao2;  // Alterado para unsigned long int
    float area2;
    float pib2;
    int PontosTuristicos2;
    float densidade2, pibPerCapita2, superPoder2;  // Adicionado superPoder2

    // cadastro carta 1
    printf("Cadastro da carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    getchar();

    printf("Código da carta (ex: A01): ");
    scanf("%3s", codigo1);
    getchar();

    printf("Insira o nome da cidade: ");
    scanf(" %[^\n]", NomeCidade1);

    printf("Informe a população: ");
    scanf("%lu", &populacao1);  // %lu para unsigned long int

    printf("Informe a área em km: ");
    scanf("%f", &area1);

    printf("Informe o PIB: ");
    scanf("%f", &pib1);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &PontosTuristicos1);
    getchar();

    // cadastro carta 2
    printf("Cadastro da carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    getchar();

    printf("Código da carta (ex: A01): ");
    scanf("%3s", codigo2);
    getchar();

    printf("Insira o nome da cidade: ");
    scanf(" %[^\n]", NomeCidade2);

    printf("Informe a população: ");
    scanf("%lu", &populacao2);  // %lu para unsigned long int

    printf("Informe a área em km: ");
    scanf("%f", &area2);

    printf("Informe o PIB: ");
    scanf("%f", &pib2);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &PontosTuristicos2);
    getchar();

    // Cálculos para Carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1e9) / populacao1;
    superPoder1 = populacao1 + area1 + pib1 + PontosTuristicos1 + pibPerCapita1 + (1/densidade1);

    // Cálculos para Carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1e9) / populacao2;
    superPoder2 = populacao2 + area2 + pib2 + PontosTuristicos2 + pibPerCapita2 + (1/densidade2);

    // Exibindo os dados das cartas
    printf("\nDados da carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", NomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", PontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\nDados da carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", NomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", PontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparação das cartas
    printf("\nComparação de Cartas:\n");
    printf("População: Carta %d venceu (%d)\n", (populacao1 > populacao2) ? 1 : 2, populacao1 > populacao2);
    printf("Área: Carta %d venceu (%d)\n", (area1 > area2) ? 1 : 2, area1 > area2);
    printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2) ? 1 : 2, pib1 > pib2);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (PontosTuristicos1 > PontosTuristicos2) ? 1 : 2, PontosTuristicos1 > PontosTuristicos2);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidade1 < densidade2) ? 1 : 2, densidade1 < densidade2);
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pibPerCapita1 > pibPerCapita2) ? 1 : 2, pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta %d venceu (%d)\n", (superPoder1 > superPoder2) ? 1 : 2, superPoder1 > superPoder2);

    return 0;
}