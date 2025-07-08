#include <stdio.h>

//Desafio Super Trunfo - Páises (Nível Novato)
//Teste Alysson Costa


   int main() {

    //Variáveis:carta 1
    char codigo1[4];
    char estado1;
    int populacao1, pontos1;
    float area1, pib1;


    //Variáveis: carta 2
    char codigo2[4];
    char estado2;
    int populacao2, pontos2;
    float area2, pib2;

    //Entrada de dados: Carta 1
    //Utilizar apenas números inteiros
    printf("Digite um Estado: (ex: A)\n", estado1);
    scanf(" %c", &estado1);
    printf("Digite o código primeira carta: (ex: A01)\n");
    scanf("%s", codigo1);
    printf("Digite a população da cidade %s : \n", codigo1);
    scanf("%d", &populacao1);
    printf("Digite o numéro de pontos turísticos da cidade %s : \n", codigo1);
    scanf("%d", &pontos1);
    printf("Digite a aréa da cidade %s (em km²): \n", codigo1);
    scanf("%f", &area1);
    printf("Digite o PIB da cidade %s : \n", codigo1);
    scanf("%f", &pib1);

    printf("\n");

    //Entrada de dados: Carta 2
    //Utilizar apenas números inteiros
    printf("Digite um Estado: (ex:H)\n", estado2);
    scanf(" %c", &estado2);
    printf("Digite o código da segunda carta: (ex: B02)\n");
    scanf("%s", codigo2);
    printf("Digite a população da cidade %s : \n",codigo2);
    scanf("%d", &populacao2);
    printf("Digite o número de pontos turísticos da cidade %s : \n", codigo2);
    scanf("%d", &pontos2);
    printf("Digite a área da cidade %s (em km²): \n", codigo2);
    scanf("%f", &area2);
    printf("Digite o PIB da cidade %s : \n", codigo2);
    scanf("%f", &pib2);

    printf("\n");

    //Apresentação carta 1
    printf("\n===== CARTA 1: %s =====\n", codigo1);
    printf("Estado: %c\n", estado1);
    printf("População: %d\n", populacao1);
    printf("Pontos turísticos: %d\n", pontos1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f Bilhões\n", pib1);

    printf("\n");

    //Apresentação carta 2
    printf("\n===== CARTA 2: %s =====\n", codigo2);
    printf("Estado: %c\n", estado2);
    printf("População: %d\n", populacao2);
    printf("Pontos turísticos: %d\n", pontos2);
    printf("Área: %2.f km²\n", area2);
    printf("PIB: %.2f Bilhões\n", pib2);

    return 0;
}
