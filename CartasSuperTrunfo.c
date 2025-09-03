#include <stdio.h>
//CADASTRO DE CARTAS PARA DESAFIO: NIVEL AVENTUREIRO (JOGO SUPER TRUNFO).
//Calculando Densidade Populacional e PIB per Capita.

int main() {
    int populaçao1, populaçao2, pontos1, pontos2;
    double area1, area2, pib1, pib2;
    char estado1[3], estado2[3], cidade1[20],cidade2[20],codigo2[20], codigo1[20];
    float densidade1, densidade2, percapita1, percapita2;


    //--CADASTRO DE CARTA 1-- INSERÇAO E ARMAZENAMENTO DE DADOS.
    printf("##########JOGO SUPER TRUNFO########## \n");
    printf("--CADASTRO DE CARTA 1-- \n");
    printf("Digite o estado: \n");
    scanf("%s", estado1);
   
    printf("Digite o codigo: \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade1);

    printf("Numero Populaçao: \n");
    scanf("%d", &populaçao1);

    printf("Digite a Area: \n");
    scanf("%lf", &area1);

    printf("Digite o PIB: \n");
    scanf("%lf", &pib1);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontos1);

    // Nota: O PIB lido em bilhoes precisa ser convertido para reais para o calculo.
    // E O NUMERO INTEIRO DE POPULAÇAO PRECISA DE CONVERSAO EXPLICITA (CASTING).
    percapita1 = (pib1 * 1000000000) / populaçao1;
    densidade1 = (double)populaçao1 / area1;

    //--CADASTRO DE CARTA 2-- INSERÇAO E ARMAZENAMENTO DE DADOS.
    printf("--CADASTRO DE CARTA 2-- \n");
    printf("Digite o estado: \n");
    scanf("%s", estado2);
   
    printf("Digite o codigo: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);

    printf("Numero Populaçao: \n");
    scanf("%d", &populaçao2);

    printf("Digite a Area: \n");
    scanf("%lf", &area2);

    printf("Digite o PIB: \n");
    scanf("%lf", &pib2);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontos2);

    // Nota: O PIB lido em bilhoes precisa ser convertido para reais para o calculo.
    // E O NUMERO INTEIRO DE POPULAÇAO PRECISA DE CONVERSAO EXPLICITA (CASTING).
    percapita2 = (pib2 * 1000000000) / populaçao2;
    densidade2 = (double)populaçao2 / area2;

    //APRESENTAÇAO DAS CARTAS CADASTRADAS.
    //CARTA 1
    printf("\n--RESULTADO DE DADOS CADASTRADOS--\n");
    printf("\n CARTA 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("Numero Populaçao: %d\n", populaçao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacinal: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", percapita1);

    //CARTA 2
    printf("\n CARTA 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("Numero Populaçao: %d\n", populaçao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacinal: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f Reais\n", percapita2);

    return 0;


    
}
