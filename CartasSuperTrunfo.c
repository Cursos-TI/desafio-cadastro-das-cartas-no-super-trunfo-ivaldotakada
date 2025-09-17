#include <stdio.h>
//(JOGO SUPER TRUNFO) CADASTRO DE CARTAS PARA DESAFIO: NIVEL MESTRE.
//COM COMPARAÇAO DE CARTAS USANDO IF E IF-ELSE.
//ADICIONADO INTERATIVIDADE E LOGICA DE COMPARAÇAO AO JOGO.
//IMPLEMENTAÇAO DE MENUS DINAMICOS COM SWITCHS E OPERADOR TERNARIO.

int main() {
    // Declaração de variáveis para a primeira carta
    char estado1[3], codigo1[20], cidade1[20];
    int populacao1, pontos1;
    double area1, pib1, densidade1, pib_per_capita1;

    // Declaração de variáveis para a segunda carta
    char estado2[3], codigo2[20], cidade2[20];
    int populacao2, pontos2;
    double area2, pib2, densidade2, pib_per_capita2;
    
    // Variáveis para a escolha dos atributos e para a soma final
    int escolha1, escolha2;
    double valor1_carta1, valor1_carta2;
    double valor2_carta1, valor2_carta2;
    double soma1, soma2;

    // --- CADASTRO DA CARTA 1 ---
    printf("--- CADASTRO DA CARTA 1 ---\n");
    
    printf("Digite o estado (ex: A,B,C...): \n");
    scanf("%s", estado1);
    
    printf("Digite o codigo da carta (ex: A01,B02,C03...): \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade1);

    printf("Digite a populacao: \n");
    scanf("%d", &populacao1);

    printf("Digite a area (em km2): \n");
    scanf("%lf", &area1);

    printf("Digite o PIB (em bilhoes de reais): \n");
    scanf("%lf", &pib1);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontos1);

    // --- CALCULOS PARA A CARTA 1 ---
    pib_per_capita1 = (pib1 * 1000000000.0) / (double)populacao1;
    densidade1 = (double)populacao1 / area1;

    // --- CADASTRO DA CARTA 2 ---
    printf("\n--- CADASTRO DA CARTA 2 ---\n");

    printf("Digite o estado (ex: A,B,C...): \n");
    scanf("%s", estado2);
    
    printf("Digite o codigo da carta (ex: A01,B02,C03...): \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);

    printf("Digite a populacao: \n");
    scanf("%d", &populacao2);

    printf("Digite a area (em km2): \n");
    scanf("%lf", &area2);

    printf("Digite o PIB (em bilhoes de reais): \n");
    scanf("%lf", &pib2);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontos2);

    // --- CALCULOS PARA A CARTA 2 ---
    pib_per_capita2 = (pib2 * 1000000000.0) / (double)populacao2;
    densidade2 = (double)populacao2 / area2;

    // --- PRIMEIRO MENU DE ESCOLHA ---
    printf("\n--- ESCOLHA O ATRIBUTO PARA A BATALHA ---\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("6 - PIB per Capita\n");
    printf("Escolha o PRIMEIRO atributo (1 a 6): ");
    scanf("%d", &escolha1);

    // Garante que a primeira escolha seja valida
    if (escolha1 < 1 || escolha1 > 6) {
        printf("\nOpcao invalida. Por favor, reinicie o programa.\n");
        return 1;
    }

    // --- SEGUNDO MENU DINAMICO ---
    printf("\nEscolha o SEGUNDO atributo para a batalha:\n");
    printf("O atributo '%d' nao esta mais disponivel.\n", escolha1);
    
    // O menu é construído dinamicamente, excluindo a primeira escolha
    if (escolha1 != 1) printf("1 - Populacao\n");
    if (escolha1 != 2) printf("2 - Area\n");
    if (escolha1 != 3) printf("3 - PIB\n");
    if (escolha1 != 4) printf("4 - Pontos Turisticos\n");
    if (escolha1 != 5) printf("5 - Densidade Demografica\n");
    if (escolha1 != 6) printf("6 - PIB per Capita\n");
    printf("Digite sua opcao: ");
    scanf("%d", &escolha2);

    // Garante que a segunda escolha seja valida e diferente da primeira
    if (escolha2 < 1 || escolha2 > 6 || escolha2 == escolha1) {
        printf("\nOpcao invalida. Por favor, reinicie o programa.\n");
        return 1;
    }
    
    // --- LÓGICA DE ATRIBUIÇÃO DOS VALORES E CÁLCULO DA SOMA ---
    
    // Usa um switch para lidar com a primeira escolha e um switch aninhado para a segunda
    switch(escolha1) {
        case 1: valor1_carta1 = populacao1; valor1_carta2 = populacao2; break;
        case 2: valor1_carta1 = area1; valor1_carta2 = area2; break;
        case 3: valor1_carta1 = pib1; valor1_carta2 = pib2; break;
        case 4: valor1_carta1 = pontos1; valor1_carta2 = pontos2; break;
        case 5: valor1_carta1 = densidade1; valor1_carta2 = densidade2; break;
        case 6: valor1_carta1 = pib_per_capita1; valor1_carta2 = pib_per_capita2; break;
    }
    
    switch(escolha2) {
        case 1: valor2_carta1 = populacao1; valor2_carta2 = populacao2; break;
        case 2: valor2_carta1 = area1; valor2_carta2 = area2; break;
        case 3: valor2_carta1 = pib1; valor2_carta2 = pib2; break;
        case 4: valor2_carta1 = pontos1; valor2_carta2 = pontos2; break;
        case 5: valor2_carta1 = densidade1; valor2_carta2 = densidade2; break;
        case 6: valor2_carta1 = pib_per_capita1; valor2_carta2 = pib_per_capita2; break;
    }
    
    soma1 = valor1_carta1 + valor2_carta1;
    soma2 = valor1_carta2 + valor2_carta2;

    // --- APRESENTAÇÃO DOS RESULTADOS ---
    printf("\n--- RESULTADO DA BATALHA ---\n");
    printf("Atributos escolhidos: %d e %d\n", escolha1, escolha2);
    
    printf("\nCarta 1 (%s - %s):\n", cidade1, estado1);
    printf("  Valor do 1o atributo: %.2f\n", valor1_carta1);
    printf("  Valor do 2o atributo: %.2f\n", valor2_carta1);
    printf("  Soma total: %.2f\n", soma1);
    
    printf("\nCarta 2 (%s - %s):\n", cidade2, estado2);
    printf("  Valor do 1o atributo: %.2f\n", valor1_carta2);
    printf("  Valor do 2o atributo: %.2f\n", valor2_carta2);
    printf("  Soma total: %.2f\n", soma2);

    // --- DETERMINA O VENCEDOR ---
    printf("\nResultado Final: ");
    if (soma1 == soma2) {
        printf("Empate!\n");
    } else if (soma1 > soma2) {
        printf("Carta 1 (%s) venceu!\n", cidade1);
    } else {
        printf("Carta 2 (%s) venceu!\n", cidade2);
    }
    
    return 0;
}