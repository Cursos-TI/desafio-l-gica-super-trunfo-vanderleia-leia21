#include <stdio.h>

int main () {
  // Variáveis da Carta 1
    char estado1[50], codigo1[50], cidade1[50];
    int populacao1, pontos1;
    float area1, pib1;

  // Variáveis da Carta 2
    char estado2[50], codigo2[50], cidade2[50];
    int populacao2, pontos2;
    float area2, pib2;

   printf("====Desafio Super Trunfo - Países====\n\n");

// Entrada da Carta 1
    printf("---- Digite os dados da CARTA 1 ----\n");
    printf("Estado: ");
    scanf("%s", &estado1);
    printf("Código da carta: ");
    scanf("%s", &codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", &cidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área : ");
    scanf("%f", &area1);
    printf("PIB : ");
    scanf("%f", &pib1);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos1);

   // Entrada da Carta 2
    printf("\n---- Digite os dados da CARTA 2 ----\n");
    printf("Estado: ");
    scanf("%s", &estado2);
    printf("Código da carta: ");
    scanf("%s", &codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", &cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área : ");
    scanf("%f", &area2);
    printf("PIB : ");
    scanf("%f", &pib2);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos2);

// Cálculos
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pibPercapita1 = (pib1 * 1000000) / populacao1;
    float pibPercapita2 = (pib2 * 1000000) / populacao2;

// Exibição das cartas
    printf("\n===== CARTA 1 =====\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s \n", cidade1);
    printf("População: %d de pessoas\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f milhões de reais\n", pib1);
    printf("Pontos turísticos: %d\n", pontos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: R$ %.2f\n\n", pibPercapita1);

    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s \n", cidade2);
    printf("População: %d de pessoas\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f milhões de reais\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: R$ %.2f\n\n", pibPercapita2);

 // Exibição dos resultados dos atributos
    printf("---Comparação dos Atributos---\n");

    printf("CARTA 1\nCidade de %s\n", cidade1);
    printf("Área: %.2f km²\n", area1);

    printf("CARTA 2\nCidade de %s\n", cidade2);
    printf("Área: %.2f km²\n", area2);

     // Comparação de Área
    printf("\n======= RESULTADO =======\n");
    if (area1 > area2) {
        printf("A CARTA 1 é a vencedora com maior área!!!\n\n");
    } else if (area2 > area1) {
        printf("A CARTA 2 é a vencedora com maior área!!!\n\n");
    } else {
        printf("Empate: As duas cartas têm a mesma área.\n\n");
    }

    return 0;
}