#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste larissa

int main() {
    // Criando Variáveis
    // Atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    printf("DESAFIO SUPERTRUNFO!\n");

    char estado1;
    char codigo_carta1[5], nome_cidade1[50];
    unsigned long int populacao1;
    int num_pontos_turisticos1;
    float area1, pib1, densidade_populacional1, pib_percapita1, inverso_densidade_populacional1, super_poder1;

    char estado2;
    char codigo_carta2[5], nome_cidade2[50];
    unsigned long int populacao2;
    int num_pontos_turisticos2;
    float area2, pib2, densidade_populacional2, pib_percapita2, inverso_densidade_populacional2, super_poder2;

    int resultado_populacao, resultado_area, resultado_pib, resultado_pontos_turisticos, resultado_densidade_populacional, resultado_pib_percapita, resultado_super_poder;
    
    // Cadastro das Cartas:
    // Recebendo valores do usuário
    // Solicitando ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf(">> CADASTRO DE CARTAS:\n");

    printf("Estado - Carta 1 (A - H): ");
    scanf("%c", &estado1);

    printf("Código - Carta 1: ");
    scanf("%s", codigo_carta1);

    printf("Nome da Cidade - Carta 1: ");
    scanf("%s", nome_cidade1);

    printf("População - Carta 1: ");
    scanf("%lu", &populacao1);

    printf("Área (km²) - Carta 1: ");
    scanf("%f", &area1);

    printf("PIB - Carta 1: ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos - Carta 1: ");
    scanf("%d", &num_pontos_turisticos1);

    printf("---\n");

    printf("Estado - Carta 2 (A - H): ");
    scanf(" %c", &estado2);

    printf("Código - Carta 2: ");
    scanf("%s", codigo_carta2);

    printf("Nome da Cidade - Carta 2: ");
    scanf("%s", nome_cidade2);

    printf("População - Carta 2: ");
    scanf("%lu", &populacao2);

    printf("Área (km²) - Carta 2: ");
    scanf("%f", &area2);

    printf("PIB - Carta 2: ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos - Carta 2: ");
    scanf("%d", &num_pontos_turisticos2);

    // Realizando cálculos das variáveis.
    densidade_populacional1 = populacao1 / area1;
    densidade_populacional2 = populacao2 / area2;

    inverso_densidade_populacional1 = 1 / densidade_populacional1;
    inverso_densidade_populacional2 = 1 / densidade_populacional2;

    pib_percapita1 = pib1 / populacao1;
    pib_percapita2 = pib2 / populacao2;

    super_poder1 = (float)populacao1 + area1 + pib1 + (float)num_pontos_turisticos1 + pib_percapita1 + inverso_densidade_populacional1;
    super_poder2 = (float)populacao2 + area2 + pib2 + (float)num_pontos_turisticos2 + pib_percapita2 + inverso_densidade_populacional2;

    // Variáveis das comparações
    resultado_populacao = populacao1 > populacao2;
    resultado_area = area1 > area2;
    resultado_pib = pib1 > pib2;
    resultado_pontos_turisticos = num_pontos_turisticos1 > num_pontos_turisticos2;
    resultado_densidade_populacional = densidade_populacional1 < densidade_populacional2;
    resultado_pib_percapita = pib_percapita1 > pib_percapita2;
    resultado_super_poder = super_poder1 > super_poder2;
    
    // Exibição dos Dados das Cartas:
    // Exibindo os valores inseridos para cada atributo da cidade, um por linha.
    printf("\n>> DADOS DAS CARTAS:\n");

    printf("-- Carta 1 --\n");
    printf("Estado: %c\nCódigo da Carta: %c%s\nNome da Cidade: %s\nPopulação: %lu\nÁrea: %.2fkm²\nPIB: %.2f\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\nSuperPoder: %.2f\n",estado1, estado1, codigo_carta1, nome_cidade1, populacao1, area1, pib1, num_pontos_turisticos1, densidade_populacional1, pib_percapita1, super_poder1);
    printf("\n-- Carta 2 --\n");
    printf("Estado: %c\nCódigo da Carta: %c%s\nNome da Cidade: %s\nPopulação: %lu\nÁrea: %.2fkm²\nPIB: %.2f\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\nSuperPoder: %.2f\n",estado2, estado2, codigo_carta2, nome_cidade2, populacao2, area2, pib2, num_pontos_turisticos2, densidade_populacional2, pib_percapita2, super_poder2);

    // Exibindo a comparação das cartas
    printf("\n>> COMPARANDO AS CARTAS:\n");
    printf("1 - Carta 1 Ganhou\n0 - Carta 2 ganhou\n");
    printf("---\n");
    printf("População: %d\n", resultado_populacao);
    printf("Área: %d\n", resultado_area);
    printf("PIB: %d\n", resultado_pib);
    printf("Pontos Turísticos: %d\n", resultado_pontos_turisticos);
    printf("Densidade Populacional: %d\n", resultado_densidade_populacional);
    printf("PIB per Capita: %d\n", resultado_pib_percapita);
    printf("Super Poder: %d\n", resultado_super_poder);

    printf("---\n");
    return 0;
}
