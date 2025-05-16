#include <stdio.h>

int main() {
    // Carta 1
    char estado1[50];  
    char codigodacarta1[50];
    char nomedacidade1[50];
    unsigned long int populacao1;  // Corrigido tipo para suportar cidades grandes
    float areaemkm1;
    float pib1;
    int numerodepontosturisticos1;

    // Carta 2
    char estado2[50];  
    char codigodacarta2[50];
    char nomedacidade2[50];
    unsigned long int populacao2;
    float areaemkm2;
    float pib2;
    int numerodepontosturisticos2;

    // Variáveis para cálculos
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    // Entrada carta 1
    printf("Digite o estado (Carta 1): \n");
    scanf("%s", estado1);

    printf("Digite o código da carta: \n");
    scanf("%s", codigodacarta1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomedacidade1);

    printf("Informe a população: \n");
    scanf("%lu", &populacao1);  // Corrigido %d para %lu

    printf("Digite a área em km: \n");
    scanf("%f", &areaemkm1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numerodepontosturisticos1);

    // Entrada carta 2
    printf("\nDigite o estado (Carta 2): \n");
    scanf("%s", estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", codigodacarta2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomedacidade2);

    printf("Informe a população: \n");
    scanf("%lu", &populacao2);  // Corrigido %d para %lu

    printf("Digite a área em km: \n");
    scanf("%f", &areaemkm2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numerodepontosturisticos2);

    // Cálculos
    densidade1 = populacao1 / areaemkm1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    densidade2 = populacao2 / areaemkm2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    superPoder1 = (float)populacao1 + areaemkm1 + pib1 + numerodepontosturisticos1 + pibPerCapita1 + (1.0 / densidade1);
    superPoder2 = (float)populacao2 + areaemkm2 + pib2 + numerodepontosturisticos2 + pibPerCapita2 + (1.0 / densidade2);

    // Saída carta 1
    printf("\nCarta 1\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigodacarta1);
    printf("Nome da cidade: %s\n", nomedacidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", areaemkm1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", numerodepontosturisticos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: R$ %.2f\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);  // Corrigido %d para %.2f

    // Saída carta 2
    printf("\nCarta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigodacarta2);
    printf("Nome da cidade: %s\n", nomedacidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", areaemkm2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", numerodepontosturisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: R$ %.2f\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);  // Corrigido %d para %.2f

    // Comparação
    printf("\nResultados da comparação (1 = Carta 1 vence, 0 = Carta 2 vence):\n");
    printf("População: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", areaemkm1 > areaemkm2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos turísticos: %d\n", numerodepontosturisticos1 > numerodepontosturisticos2);
    printf("PIB per capita: %d\n", pibPerCapita1 > pibPerCapita2);
    printf("Densidade populacional (menor vence): %d\n", densidade1 < densidade2);
    printf("Super Poder: %d\n", superPoder1 > superPoder2);

    return 0;
}