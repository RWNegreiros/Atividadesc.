#include <stdio.h>

int main() {
    // Dados da Carta 1 - Teresina, Piauí
    char estado1[10] = "Piaui";
    char codigo1[10] = "A01";
    char nomeCidade1[20] = "Teresina";
    int populacao1 = 868075;
    float area1 = 1391.77;
    float pib1 = 20.510; // em bilhões de reais
    int pontosTuristicos1 = 12;

    // Dados da Carta 2 - São Luís, Maranhão
    char estado2[10] = "Maranhao";
    char codigo2[10] = "B02";
    char nomeCidade2[20] = "Sao Luis";
    int populacao2 = 1014000;
    float area2 = 834.780;
    float pib2 = 31.100; // em bilhões de reais
    int pontosTuristicos2 = 18;

    // Exibição dos dados da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // Exibição dos dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
