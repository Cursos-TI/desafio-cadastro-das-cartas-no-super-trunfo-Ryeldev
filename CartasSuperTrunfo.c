#include <stdio.h>

int main() {
    // Carta 1 //Vou primeiro colocara as variáveis para as duas cartas indicando com 1 e 2
    char estado1[50];  
    char codigodacarta1[50];
    char nomedacidade1[50];
    int populacao1;
    float areaemkm1;
    float pib1;
    int numerodepontosturisticos1;

    // Carta 2
    char estado2[50];  
    char codigodacarta2[50];
    char nomedacidade2[50];
    int populacao2;
    float areaemkm2;
    float pib2;
    int numerodepontosturisticos2;

    // Essa parte e a entrada de dados da carta 1
    printf("Digite o estado (Carta 1): \n");
    scanf("%s", estado1);

    printf("Digite o código da carta: \n");
    scanf("%s", codigodacarta1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomedacidade1);

    printf("Informe a população: \n");
    scanf("%d", &populacao1);

    printf("Digite a área em km: \n");
    scanf("%f", &areaemkm1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numerodepontosturisticos1);

    // Entrada de dados da carta 2
    printf("\nDigite o estado (Carta 2): \n");
    scanf("%s", estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", codigodacarta2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomedacidade2);

    printf("Informe a população: \n");
    scanf("%d", &populacao2);

    printf("Digite a área em km: \n");
    scanf("%f", &areaemkm2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numerodepontosturisticos2);

    // Saída Carta 1
    printf("\nCarta 1\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigodacarta1);
    printf("Nome da cidade: %s\n", nomedacidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", areaemkm1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", numerodepontosturisticos1);

    // Saída Carta 2
    printf("\nCarta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigodacarta2);
    printf("Nome da cidade: %s\n", nomedacidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", areaemkm2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", numerodepontosturisticos2);

    return 0;
}
