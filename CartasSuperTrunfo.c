#include <stdio.h>
//(JOGO SUPER TRUNFO) CADASTRO DE CARTAS PARA DESAFIO: NIVEL AVENTUREIRO
//COM COMPARAÇAO DE CARTAS USANDO IF E IF-ELSE
//ADICIONADO INTERATIVIDADE E LOGICA COMPLEXA AO JOGO

int main() {
    // Declaração de variáveis para a primeira carta
    char estado1[3], codigo1[20], cidade1[20];
    int populacao1, pontos1;
    double area1, pib1; // Usando double para maior precisão
    double densidade1, pib_per_capita1;

    // Declaração de variáveis para a segunda carta
    char estado2[3], codigo2[20], cidade2[20];
    int populacao2, pontos2;
    double area2, pib2; // Usando double para maior precisão
    double densidade2, pib_per_capita2;
    
    // Variável para a escolha do jogador
    int escolha;

    // --- CADASTRO DA CARTA 1 --- INSERÇAO E ARMAZENAMENTO DE DADOS
    printf("--- CADASTRO DA CARTA 1 ---\n");
    
    printf("Digite o estado: ");
    scanf("%s", estado1);
    
    printf("Digite o codigo da carta: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a area (em km2): ");
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

    // --- CADASTRO DA CARTA 2 --- INSERÇAO E ARMAZENAMENTO DE DADOS
    printf("\n--- CADASTRO DA CARTA 2 ---\n");

    printf("Digite o estado: ");
    scanf("%s", estado2);
    
    printf("Digite o codigo da carta: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area (em km2): ");
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

    // --- MENU INTERATIVO E LÓGICA DE COMPARAÇÃO ---
    printf("\n--- ESCOLHA O ATRIBUTO PARA A BATALHA ---\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("6 - PIB per Capita\n");
    printf("Escolha uma opcao (1 a 6): ");
    scanf("%d", &escolha);

    printf("\n--- RESULTADO DA BATALHA ---\n");

    // Usa a estrutura switch para lidar com a escolha do usuario
    switch(escolha) {
        case 1:
            printf("Atributo: Populacao\n");
            printf("Carta 1 (%s): %d habitantes\n", cidade1, populacao1);
            printf("Carta 2 (%s): %d habitantes\n", cidade2, populacao2);
            if (populacao1 > populacao2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2:
            printf("Atributo: Area\n");
            printf("Carta 1 (%s): %.2f km2\n", cidade1, area1);
            printf("Carta 2 (%s): %.2f km2\n", cidade2, area2);
            if (area1 > area2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (area2 > area1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("Carta 1 (%s): %.2f bilhoes de reais\n", cidade1, pib1);
            printf("Carta 2 (%s): %.2f bilhoes de reais\n", cidade2, pib2);
            if (pib1 > pib2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (pib2 > pib1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        
        case 4:
            printf("Atributo: Pontos Turisticos\n");
            printf("Carta 1 (%s): %d pontos\n", cidade1, pontos1);
            printf("Carta 2 (%s): %d pontos\n", cidade2, pontos2);
            if (pontos1 > pontos2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (pontos2 > pontos1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5:
            printf("Atributo: Densidade Demografica\n");
            printf("Carta 1 (%s): %.2f hab/km2\n", cidade1, densidade1);
            printf("Carta 2 (%s): %.2f hab/km2\n", cidade2, densidade2);
            // Regra especial: menor valor vence
            if (densidade1 < densidade2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (densidade2 < densidade1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 6:
            printf("Atributo: PIB per Capita\n");
            printf("Carta 1 (%s): %.2f reais\n", cidade1, pib_per_capita1);
            printf("Carta 2 (%s): %.2f reais\n", cidade2, pib_per_capita2);
            if (pib_per_capita1 > pib_per_capita2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (pib_per_capita2 > pib_per_capita1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("Opcao invalida! Por favor, escolha um numero entre 1 e 6.\n");
            break;
    }

    return 0;
}