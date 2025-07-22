#include <stdio.h>

    // progama: Super Trunfo de Cidades, feito por Ruan Vitor Bett. Este progama irá recolher dados de duas cartas e
    // apresentar os dados ao final!

    int main (){

        //variaveis da primeira carta

        char Estado1[20], Codigo1[10], Cidade1[20];
        int Populacao1, Pontos_Turisticos1;
        float Area1, PIB1;

        // variaveis da segunda carta

        char Estado2[20], Codigo2[10], Cidade2[20];
        int Populacao2, Pontos_Turisticos2;
        float Area2, PIB2;

        // entrada e saida de dados das duas cartas, as mesmas possuem variaveis semelhantes porém divergentes

        printf("Estado da carta 01: \n");
        scanf("%19s", Estado1);

        printf("Codigo da Carta: \n");
        scanf("%9s", Codigo1);

        printf("Qual a Cidade: \n");
        scanf("%19s", Cidade1);

        printf("Qual a População: \n");
        scanf("%d" , &Populacao1);

        printf ("Qual a área: \n");
        scanf ("%f" , &Area1);

        printf("Qual seu PIB: \n");
        scanf ("%f", &PIB1);

        printf("Quantos pontos turisticos á na cidade: ");
        scanf("%d" , &Pontos_Turisticos1);

        printf("Estado da carta 02: \n");
        scanf("%19s", Estado2);

        printf("Codigo da Carta: \n");
        scanf("%9s", Codigo2);

        printf("Qual a Cidade: \n");
        scanf("%19s", Cidade2);

        printf("Qual a População: \n");
        scanf("%d" , &Populacao2);

        printf ("Qual a área: \n");
        scanf ("%f" , &Area2);

        printf("Qual seu PIB: \n");
        scanf ("%f", &PIB2);

        printf("Quantos pontos turisticos á na cidade: ");
        scanf("%d" , &Pontos_Turisticos2);

        // saida de dados das duas cartas, informando as estasticicas de cada carta conforme atividade

        printf("Dados da carta 01 \n");
        printf("Estado: %s \n", Estado1);
        printf("Codigo: %s \n", Codigo1);
        printf("Cidade: %S \n", Cidade1);
        printf("População: %d habitantes \n", Populacao1);
        printf("Área: %f m² \n", Area1);
        printf("PIB: %f R$ \n", PIB1);
        printf("Pontos Turisticos: %d \n", Pontos_Turisticos1);

        printf("Dados da carta 02 \n");
        printf("Estado: %s \n", Estado2);
        printf("Codigo: %s \n", Codigo2);
        printf("Cidade: %S \n", Cidade2);
        printf("População: %d habitantes \n", Populacao2);
        printf("Área: %f m² \n", Area2);
        printf("PIB: %f R$ \n", PIB2);
        printf("Pontos Turisticos: %d \n", Pontos_Turisticos2);


        return 0;
    }