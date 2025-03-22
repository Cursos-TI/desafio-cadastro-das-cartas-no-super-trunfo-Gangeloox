#include <stdio.h>

    int main() {

    // Carta 1:
    char estado1;
    char codigo1[4];
    char nome1[30];
    int populacao1;
    float area1;
    float pib1;
    int turistico1;
    float densidade1;
    float capita1;

     // Carta 2:
    
    char estado2;
    char codigo2[4];
    char nome2[30];
    int populacao2;
    float area2;
    float pib2;
    int turistico2;
    float densidade2;
    float capita2;

             //   ENTRADA

    printf("**** Super Trunfo *****\n");

    printf("*** Carta 1:\n");
    printf("Digite aqui uma letra de A a H representando um dos oito estados: ");
    scanf(" %c", &estado1);
    printf("Digite o código da carta (Ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf("%s", nome1);
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);
    printf("Digite a área da cidade: ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade: ");
    scanf(" %f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &turistico1);
    densidade1 = (populacao1 / area1);
    capita1 = (pib1 / populacao1);

    printf("*** Carta 2: \n");
    printf("Digite aqui uma letra de A a H representando um dos oito estados: ");
    scanf(" %c", &estado2);
    printf("Digite aqui a letra do estado seguida de um número de 01 a 04: ");
    scanf("%s", codigo2);
    printf("Digite aqui o nome da cidade: ");
    scanf("%s", nome2);
    printf("Digite aqui a população desta cidade: ");
    scanf("%d", &populacao2);
    printf("Digite aqui a área desta cidade: ");
    scanf("%f", &area2);
    printf("Digite aqui o PIB desta cidade: ");
    scanf("%f", &pib2);
    printf("Digite aqui quantos pontos turísticos tem esta cidade: ");
    scanf("%d", &turistico2);
    densidade2 = (populacao2 / area2);
    capita2 = (pib2 / populacao2);
    

              //   SAÍDA

    printf("\n *** Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", turistico1);
    printf("Densidade: %.2f hab/km²\n", densidade1);
    printf("PIB por Capita: %.2f reais\n", capita1);

    printf("\n *** Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2fkm²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turistico2);
    printf("Densidade: %.2f hab/km²\n", densidade2);
    printf("PIB por Capita: %.2f reais\n", capita2);

    return 0;
}