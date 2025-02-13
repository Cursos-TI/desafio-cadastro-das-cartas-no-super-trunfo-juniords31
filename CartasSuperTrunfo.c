#include <stdio.h>

//Teste JUNIOR SOUZA

int main() {
    char estado;
    int cidade;
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;



    printf("Digite o estado (A-H): ");
    scanf("%c" ,&estado);

    printf("Digite a cidade (1-4): ");
    scanf("%d", &cidade);

    printf("Digite a populacao da cidade:" );
    scanf("%d", &populacao);

    printf("Digite a area da cidade em km²:" );
    scanf("%f", &area);

    printf("Digite o pib da cidade: ");
    scanf("%f", &pib);

    printf("Digite os pontos turisticos da cidade: ");
    scanf("%d", &pontos_turisticos);



    printf("Dados do pais: \n");
    printf("Letra do estado: %c\n", estado);
    printf("Numero da cidade: %d\n", cidade);
    printf("Codigo da carta:%c%d\n" , estado,cidade);
    printf("Area:%f\n", area);
    printf("PIB: %f\n", pib);
    printf("Pontos turisticos:%d, pontos_turisticos");
    







    
    return 0;
}
