#include <stdio.h>
//CADATRO DE CARTAS PARA DESAFIO: NIVEL NOVATO (JOGO SUPER TRUNFO)
int main() {
    int populaçao1, populaçao2, pontos1, pontos2;
    double area1, area2, pib1, pib2;
    char estado1[3], estado2[3], cidade1[20],cidade2[20],codigo2[20], codigo1[20];


    //--CADASTRO DE CARTA 1--
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

//--CADASTRO DE CARTA 2--
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

    //APRESENTAÇAO DAS CARTAS CADASTRADAS
    //CARTA 1
    printf("\n--DADOS CADASTRADOS--\n");
    printf("\n CARTA 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("Numero Populaçao: %d\n", populaçao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos1);

    //CARTA 2
    printf("\n CARTA 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("Numero Populaçao: %d\n", populaçao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos2);

    return 0;


}