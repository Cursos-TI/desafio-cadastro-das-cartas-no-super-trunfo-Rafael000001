#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

     // variaveis carta 1 
     char estado1;
     char codigo1[4];
     char NomeCidade1[50];
     int populacao1;
     float area1;
     float pib1;
     int PontosTuristicos1;
 
     // variaveis carta 2
     char estado2;
     char codigo2[4];
     char NomeCidade2[50];
     int populacao2;
     float area2;
     float pib2;
     int PontosTuristicos2;
 
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
 
 
     //Exibindo os dados da carta 1
     printf("\nDados da carta 1:\n");
     printf("Estado: %c\n", estado1);
     printf("Código: %s\n", codigo1);
     printf("Nome da Cidade: %s\n", NomeCidade1);
     printf("População: %d\n", populacao1);
     printf("Área: %.2f km²\n", area1);
     printf("PIB: %.2f bilhões de reais\n", pib1);
     printf("Número de Pontos Turísticos: %d\n", PontosTuristicos1);
 
 
     //Exibindo dados da carta 2
     printf("\nDados da carta 2:\n");
     printf("Estado: %c\n", estado2);
     printf("Código: %s\n", codigo2);
     printf("Nome da Cidade: %s\n", NomeCidade2);
     printf("População: %d\n", populacao2);
     printf("Área: %.2f km²\n", area2);
     printf("PIB: %.2f bilhões de reais\n", pib2);
     printf("Número de Pontos Turísticos: %d\n", PontosTuristicos2);
 
     

    return 0;
}
