#include <stdio.h>

int main() {
    char estado1, estado2;
    int cidade1, cidade2;
    char nomedacidade1[100], nomedacidade2[100];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    float densidade_populacional1, densidade_populacional2;
    float pib_per_capita1, pib_per_capita2;
    float super_poder1, super_poder2;

    // Coleta dados carta 1
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o número da cidade (1-4): ");
    scanf("%d", &cidade1);

    printf("Nome da cidade: ");
    scanf("%99s", nomedacidade1);

    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao1);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos1);

    // Calcular densidade populacional e PIB per capita
    densidade_populacional1 = (float)populacao1 / area1;
    pib_per_capita1 = pib1 / (float)populacao1;

    // Calcular super poder
    super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + (1 / densidade_populacional1);

    // Exibir dados carta 1
    printf("\nDados da carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Cidade: %d\n", cidade1);
    printf("Código da carta: %c%02d\n", estado1, cidade1);
    printf("Nome da cidade: %s\n", nomedacidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f\n", densidade_populacional1);
    printf("Pib per capita: %.2f\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);

    // Coleta dados carta 2
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o número da cidade (1-4): ");
    scanf("%d", &cidade2);

    printf("Nome da cidade: ");
    scanf("%99s", nomedacidade2);

    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos2);

    // Calcular densidade populacional e PIB per capita
    densidade_populacional2 = (float)populacao2 / area2;
    pib_per_capita2 = pib2 / (float)populacao2;

    // Calcular super poder
    super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1 / densidade_populacional2);

    // Exibir dados carta 2
    printf("\nDados da carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Cidade: %d\n", cidade2);
    printf("Código da carta: %c%02d\n", estado2, cidade2);
    printf("Nome da cidade: %s\n", nomedacidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
printf("Densidade Populacional: %.2f\n", densidade_populacional2);
printf("Pib per capita: %.2f\n", pib_per_capita2);
printf("Super Poder: %.2f\n", super_poder2);

// Comparar as cartas
printf("\nComparação de Cartas:\n");
printf("População: %s venceu (%d)\n", (populacao1 > populacao2) ? "Carta 1" : "Carta 2", (populacao1 > populacao2) ? 1 : 0);
printf("Área: %s venceu (%d)\n", (area1 > area2) ? "Carta 1" : "Carta 2", (area1 > area2) ? 1 : 0);
printf("PIB: %s venceu (%d)\n", (pib1 > pib2) ? "Carta 1" : "Carta 2", (pib1 > pib2) ? 1 : 0);
printf("Pontos Turísticos: %s venceu (%d)\n", (pontos_turisticos1 > pontos_turisticos2) ? "Carta 1" : "Carta 2", (pontos_turisticos1 > pontos_turisticos2) ? 1 : 0);
printf("Densidade Populacional: %s venceu (%d)\n", (densidade_populacional1 < densidade_populacional2) ? "Carta 1" : "Carta 2", (densidade_populacional1 < densidade_populacional2) ? 1 : 0);
printf("Pib per capita: %s venceu (%d)\n", (pib_per_capita1 > pib_per_capita2) ? "Carta 1" : "Carta 2", (pib_per_capita1 > pib_per_capita2) ? 1 : 0);
printf("Super Poder: %s venceu (%d)\n", (super_poder1 > super_poder2) ? "Carta 1" : "Carta 2", (super_poder1 > super_poder2) ? 1 : 0);

return 0;
}

