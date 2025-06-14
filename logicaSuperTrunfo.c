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

   printf("---Desafio Super Trunfo - Países---\n\n");

// Entrada da Carta 1
    printf("---Desafio Super Trunfo - Países---\n\n");
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




    return 0;
}