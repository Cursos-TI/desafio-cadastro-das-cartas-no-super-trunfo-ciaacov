#include <stdio.h>
#include <string.h>

int main() 
{
    // Declaração de variáveis da primeira carta
    char estado_1[50];
    char codigo_1[50];
    char cidade_1[50];
    int populacao_1 = 0;
    float area_1 = 0;
    float pib_1 = 0;
    int pontos_turisticos_1 = 0;

    // Declaração de variáveis da segunda carta
    char estado_2[50];
    char codigo_2[50];
    char cidade_2[50];
    int populacao_2 = 0;
    float area_2 = 0;
    float pib_2 = 0;
    int pontos_turisticos_2 = 0;

    // Solicitação de dados para a primeira carta

    printf("Digite o estado da primeira carta: ");// Solicita o estado
    scanf("%c", &estado_1);// Lê o estado
    printf("Digite o código da primeira carta: ");// Solicita o código
    scanf("%s", codigo_1);// Lê o código
    printf("Digite o nome da cidade da primeira carta: "); // Solicita o nome da cidade
    scanf("%s", cidade_1);// Lê o nome da cidade
    printf("Digite a população da primeira carta: ");// Solicita a população
    scanf("%d", &populacao_1);// Lê a população
    printf("Digite a área da primeira carta: ");// Solicita a área
    scanf("%f", &area_1);// Lê a área
    printf("Digite o PIB da primeira carta: ");// Solicita o PIB
    scanf("%f", &pib_1);// Lê o PIB
    printf("Digite o número de pontos turísticos da primeira carta: ");// Solicita o número de pontos turísticos
    scanf("%d", &pontos_turisticos_1);// Lê o número de pontos turísticos

    // Solicitação de dados para a segunda carta

    printf("Digite o estado da segunda carta: ");// Solicita o estado
    scanf("%c", &estado_2);// Lê o estado
    printf("Digite o código da segunda carta: ");// Solicita o código
    scanf("%s", codigo_2);// Lê o código
    printf("Digite o nome da cidade da segunda carta: ");// Solicita o nome da cidade
    scanf("%s", cidade_2);// Lê o nome da cidade
    printf("Digite a população da segunda carta: ");// Solicita a população
    scanf("%d", &populacao_2);// Lê a população
    printf("Digite a área da segunda carta: ");// Solicita a área
    scanf("%f", &area_2);// Lê a área
    printf("Digite o PIB da segunda carta: ");// Solicita o PIB
    scanf("%f", &pib_2);// Lê o PIB
    printf("Digite o número de pontos turísticos da segunda carta: ");// Solicita o número de pontos turísticos
    scanf("%d", &pontos_turisticos_2);// Lê o número de pontos turísticos

    // Exibição dos dados da primeira carta

    printf("\n\nDados da primeira carta:\n");// Exibe os dados da primeira carta
    printf("Estado: %c\n", &estado_1);// Exibe o estado
    printf("Código: %s\n", codigo_1);// Exibe o código
    printf("Nome da Cidade: %s\n", cidade_1);// Exibe o nome da cidade
    printf("População: %d\n", &populacao_1);// Exibe a população
    printf("Área: %.2f km²\n", &area_1);// Exibe a área
    printf("PIB: %.2f bilhões de reais\n", &pib_1);// Exibe o PIB
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_1);// Exibe o número de pontos turísticos

    // Exibição dos dados da segunda carta

    printf("\n\nDados da segunda carta:\n");// Exibe os dados da segunda carta
    printf("Estado: %c\n", &estado_2);// Exibe o estado
    printf("Código: %s\n", codigo_2);// Exibe o código
    printf("Nome da Cidade: %s\n", cidade_2);// Exibe o nome da cidade
    printf("População: %d\n", populacao_2);// Exibe a população
    printf("Área: %.2f km²\n", area_2);// Exibe a área
    printf("PIB: %.2f bilhões de reais\n", pib_2);// Exibe o PIB
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_2);// Exibe o número de pontos turísticos
    return (0);
}
