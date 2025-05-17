#include <stdio.h>

int main()
{
    // variaveis carta 1 
    char estado1;
    char codigo1[4];
    char NomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int PontosTuristicos1;
    float densidade1, pibPerCapita1; // Novas variáveis para cálculos

    // variaveis carta 2
    char estado2;
    char codigo2[4];
    char NomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int PontosTuristicos2;
    float densidade2, pibPerCapita2; // Novas variáveis para cálculos

    // cadastro carta 1
    printf("Cadastro da carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    getchar(); // Limpa o buffer

    printf("Código da carta (ex: A01): ");
    scanf("%s", codigo1);
    getchar(); // Limpa o buffer

    printf("Insira o nome da cidade: ");
    scanf(" %[^\n]", NomeCidade1);         

    printf("Informe a população: ");
    scanf("%d", &populacao1);

    printf("Informe a área em km: ");
    scanf("%f", &area1);

    printf("Informe o PIB: ");
    scanf("%f", &pib1);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &PontosTuristicos1);
    getchar(); // Limpa o buffer

    // cadastro carta 2
    printf("Cadastro da carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    getchar(); // Limpa o buffer

    printf("Código da carta (ex: A01): ");
    scanf("%s", codigo2);
    getchar(); // Limpa o buffer

    printf("Insira o nome da cidade: ");
    scanf(" %[^\n]", NomeCidade2);

    printf("Informe a população: ");
    scanf("%d", &populacao2);

    printf("Informe a área em km: ");
    scanf("%f", &area2);

    printf("Informe o PIB: ");
    scanf("%f", &pib2);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &PontosTuristicos2);
    getchar(); // Limpa o buffer

    // Cálculos para Carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1e9) / populacao1; // Convertendo PIB para reais (bilhões -> unidades)

    // Cálculos para Carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1e9) / populacao2; // Convertendo PIB para reais (bilhões -> unidades)

    //Exibindo os dados da carta 1
    printf("\nDados da carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", NomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", PontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    //Exibindo dados da carta 2
    printf("\nDados da carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", NomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", PontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}