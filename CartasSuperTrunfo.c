#include <stdio.h>

//Teste JUNIOR SOUZA

int main() {
    //Declaração de variaveis
    char estado;
    char codigodacarta;
    char nomedacidade;
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;


// Entrada de dados
    printf("Digite o estado (A-H): ");
    scanf("%c" ,&estado);

    printf("Digite o código da carta (1-4)");
    scaf("%c", &codigodacarta);

    printf("Digite o nome da cidade : ");
    scanf("%c", &nomedacidade);

    printf("Digite a populacao da cidade:" );
    scanf("%d", &populacao);

    printf("Digite a area da cidade em km²:" );
    scanf("%f", &area);

    printf("Digite o pib da cidade: ");
    scanf("%f", &pib);

    printf("Digite os pontos turisticos da cidade: ");
    scanf("%d", &pontos_turisticos);


// saída de dados
    printf("Dados do pais: \n");
    printf("Letra do estado: %c\n", estado);
    printf("Numero da cidade: %d\n", cidade);
    printf("Codigo da carta: %c%d\n" , estado,cidade);
    printf("Area: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turisticos: %d\n", pontos_turisticos);
    







    
    return 0;
}
