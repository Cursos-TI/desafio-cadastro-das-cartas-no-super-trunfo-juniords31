#include <stdio.h>

int main() {
    char estado;
    int cidade;
    char nomedacidade[100];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;

// coleta dados carta 1
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado);

    printf("Digite o número da cidade (1-4): ");
    scanf("%d", &cidade);

    printf("Nome da cidade: ");
    scanf("%99s", nomedacidade);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos);

    // Calcular densidade populacional e PIB per capita
    densidade_populacional =  populacao / area;
    pib_per_capita = pib / populacao;


// exibir dados carta 1
    printf("\nDados da carta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Cidade: %d\n", cidade);
    printf("Código da carta: %c%02d\n", estado, cidade);
    printf("Nome da cidade: %s\n", nomedacidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %2.f\n",densidade_populacional);
    printf("Pib per capita: %.2f\n",pib_per_capita);

// coleta dados carta 2
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado);

    printf("Digite o número da cidade (1-4): ");
    scanf("%d", &cidade);

    printf("Nome da cidade: ");
    scanf("%99s", nomedacidade);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos);

 //exibir dados carta 2   
    printf("\nDados da carta 2:\n");
    printf("Estado: %c\n", estado);
    printf("Cidade: %d\n", cidade);
    printf("Código da carta: %c%02d\n", estado, cidade);
    printf("Nome da cidade: %s\n", nomedacidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos);
    printf("Densidade populacional: %2.f\n",densidade_populacional);
    printf("Pib per capita: %2.f\n",pib_per_capita);





    return 0;
}
