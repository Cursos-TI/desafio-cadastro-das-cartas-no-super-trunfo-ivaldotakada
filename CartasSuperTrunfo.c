#include <stdio.h>
//CADASTRO DE CARTAS PARA DESAFIO: NIVEL AVENTUREIRO (JOGO SUPER TRUNFO)
//Calculando Densidade Populacional e PIB per Capita


int main() {
    // Declaração de variáveis para a primeira carta
    char estado1[3], codigo1[20], cidade1[20];
    unsigned long int populacao1; // Tipo alterado para acomodar números maiores
    int pontos1;
    double area1, pib1;
    double densidade1, pib_per_capita1;
    float super_poder1;

    // Declaração de variáveis para a segunda carta
    char estado2[3], codigo2[20], cidade2[20];
    unsigned long int populacao2; // Tipo alterado para acomodar números maiores
    int pontos2;
    double area2, pib2;
    double densidade2, pib_per_capita2;
    float super_poder2;

    //--CADASTRO DE CARTA 1-- INSERÇAO E ARMAZENAMENTO DE DADOS
    printf("##########JOGO SUPER TRUNFO########## \n");
    printf("--- CADASTRO DA CARTA 1 ---\n");
    
    printf("Digite o estado: ");
    scanf("%s", estado1);
    
    printf("Digite o codigo da carta: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite a populacao: ");
    scanf("%lu", &populacao1); // Usando %lu para ler unsigned long int

    printf("Digite a area (em km²): ");
    scanf("%lf", &area1);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%lf", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    // --- CALCULOS PARA A CARTA 1 ---
    // Nota: O PIB lido em bilhoes precisa ser convertido para reais para o calculo
    // E O NUMERO INTEIRO DE POPULAÇAO PRECISA DE CONVERSAO EXPLICITA (CASTING)
    pib_per_capita1 = (pib1 * 1000000000.0) / (double)populacao1;
    densidade1 = (double)populacao1 / area1;
    super_poder1 = (float)populacao1 + (float)area1 + (float)pib1 + (float)pontos1 + pib_per_capita1 + (1.0 / densidade1);

    //--CADASTRO DE CARTA 2-- INSERÇAO E ARMAZENAMENTO DE DADOS
    printf("\n--- CADASTRO DA CARTA 2 ---\n");

    printf("Digite o estado: ");
    scanf("%s", estado2);
    
    printf("Digite o codigo da carta: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite a populacao: ");
    scanf("%lu", &populacao2); // Usando %lu para ler unsigned long int

    printf("Digite a area (em km²): ");
    scanf("%lf", &area2);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%lf", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    // --- CALCULOS PARA A CARTA 2 ---
    // Nota: O PIB lido em bilhoes precisa ser convertido para reais para o calculo
    // E O NUMERO INTEIRO DE POPULAÇAO PRECISA DE CONVERSAO EXPLICITA (CASTING)
    pib_per_capita2 = (pib2 * 1000000000.0) / (double)populacao2;
    densidade2 = (double)populacao2 / area2;
    super_poder2 = (float)populacao2 + (float)area2 + (float)pib2 + (float)pontos2 + pib_per_capita2 + (1.0 / densidade2);

    //APRESENTAÇAO DAS CARTAS CADASTRADAS
    //CARTA 1
    printf("\n--RESULTADO DE DADOS CADASTRADOS--\n");
    printf("\n CARTA 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("Numero Populaçao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacinal: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    //CARTA 2
    printf("\n CARTA 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("Numero Populaçao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacinal: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f Reais\n", pib_per_capita2);
    
    // --- EXIBIÇÃO DOS RESULTADOS DAS COMPARAÇÕES ---
    printf("\nComparacao de Cartas:\n");
    
    // Comparação de População
    printf("Populacao: Carta %d venceu (%d)\n", (populacao1 > populacao2) ? 1 : 2, populacao1 > populacao2);
    
    // Comparação de Área
    printf("Area: Carta %d venceu (%d)\n", (area1 > area2) ? 1 : 2, area1 > area2);

    // Comparação de PIB
    printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2) ? 1 : 2, pib1 > pib2);

    // Comparação de Pontos Turísticos
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", (pontos1 > pontos2) ? 1 : 2, pontos1 > pontos2);
    
    // Comparação de Densidade Populacional (menor valor vence)
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidade1 < densidade2) ? 1 : 2, densidade1 < densidade2);

    // Comparação de PIB per Capita
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pib_per_capita1 > pib_per_capita2) ? 1 : 2, pib_per_capita1 > pib_per_capita2);

    // Comparação de Super Poder
    printf("Super Poder: Carta %d venceu (%d)\n", (super_poder1 > super_poder2) ? 1 : 2, super_poder1 > super_poder2);

    // --- LÓGICA DE COMPARAÇÃO COM EXEMPLO ESPECÍFICO ---
    printf("\n--- RESULTADO DA BATALHA ---\n");
    printf("Comparacao de cartas (Atributo: Populacao):\n\n");
    
    // Mostra os valores de cada carta
    printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d\n", cidade2, estado2, populacao2);

    // Compara as populações para determinar o vencedor
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: As cartas empataram!\n");
    }
    return 0;
}