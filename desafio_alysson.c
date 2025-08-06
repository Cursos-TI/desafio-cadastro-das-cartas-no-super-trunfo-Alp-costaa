#include <stdio.h>

//Desafio Super Trunfo - Páises (Nível Novato)
//Teste Alysson Costa


   int main() {

    //Variáveis:carta 1
    char codigo1[4];
    char estado1;
    char nome1[50];
    int populacao1, pontos1;
    float area1, pib1;
    //Declarando váriaveis utilizando operadores matématicos para encontrar a densidade populacional e o pib per-capta(carta1)
    float densidadep1;
    float pibpc1;


    //Variáveis: carta 2
    char codigo2[4];
    char estado2;
    char nome2[50];
    int populacao2, pontos2;
    float area2, pib2;
     //Declarando váriaveis utilizando operadores matématicos para encontrar a densidade populacional e o pib per-capta(carta2)
    float densidadep2;
    float pibpc2;
    

    

    //Entrada de dados: Carta 1
    //Utilizar apenas números inteiros
    printf("Digite um Estado: (ex: A)\n", estado1);
    scanf(" %c", &estado1);
    printf("Digite o código primeira carta: (ex: A01)\n");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: (ex: Rio de Janeiro)\n", nome1);
    scanf("%s", &nome1);
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
    printf("Digite o nome da cidade: (ex: Rio de Janeiro)\n", nome2);
    scanf("%s", &nome2);
    printf("Digite a população da cidade %s : \n",codigo2);
    scanf("%d", &populacao2);
    printf("Digite o número de pontos turísticos da cidade %s : \n", codigo2);
    scanf("%d", &pontos2);
    printf("Digite a área da cidade %s (em km²): \n", codigo2);
    scanf("%f", &area2);
    printf("Digite o PIB da cidade %s : \n", codigo2);
    scanf("%f", &pib2);

    printf("\n");

    //Realizando operações para encontrar a densidade populacional e o PIB per Capita carta 1
    densidadep1 = (float)(populacao1) / (area1);
    pibpc1 = (float)(pib1 * 1000000000.0) / (populacao1);

    //Realizando operações para encontrar a densidade populacional e o PIB per Capita carta 2
    densidadep2 = (float)(populacao2) / (area2);
    pibpc2 = (float)(pib2 * 1000000000.0) / (populacao2);
    //




    //Apresentação carta 1
    printf("\n===== CARTA 1: %s =====\n", codigo1);
    printf("Estado: %c\n", estado1);
    printf("Nome da Cidade: %c\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Pontos turísticos: %d\n", pontos1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f Bilhões\n", pib1);
    //atualizando a primeira carta com pib per capta e densidade populacional
    printf("Densidade populacional: %.2f hab/km²\n", densidadep1);
    printf("PIB per Capita: %.2f reais\n", pibpc1);

    printf("\n");

    //Apresentação carta 2
    printf("\n===== CARTA 2: %s =====\n", codigo2);
    printf("Estado: %c\n", estado2);
    printf("Nome da Cidade: %c\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Pontos turísticos: %d\n", pontos2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f Bilhões\n", pib2);
    //atualizando a segunda carta com pib per capta e densidade populacional
    printf("Densidade populacional: %.2f hab/km²\n", densidadep2);
    printf("PIB per Capita: %.2f reais\n", pibpc2);

    return 0;
}
