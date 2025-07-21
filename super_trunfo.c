#include <stdio.h>

    int main (){

        char Estado[20];
        char Codigo[10];
        char Cidade[20];
        int Populaçao;
        float Area;
        float PIB;
        int Pontos_Turisticos;

        printf("Estado da carta: \n");
        scanf("%19s", Estado);

        printf("Codigo da Carta: \n");
        scanf("%9s", Codigo);

        printf("Qual a Cidade: \n");
        scanf("%19s", Cidade);

        printf("Qual a População: \n");
        scanf("%d" , &Populaçao);

        printf ("Qual a área: \n");
        scanf ("%f" , &Area);

        pritnf ("Qual seu PIB: \n");
        scanf ("%f", &PIB);

        printf("Quantos pontos turisticos á na cidade: ");
        scanf("%d" , Pontos_Turisticos);

        



        return 0;
    }