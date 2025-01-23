#include <stdio.h>
    int main(){

        char nome[10];
        float populacao;
        float area;
        double PIB;
        int PT;

    printf("País: \n");
    scanf("%s", nome); 

    printf("Número populacional do país: \n");
    scanf("%f", &populacao);

    printf("Área territorial: \n");
    scanf("%f", &area);

    printf("Quantos pontos turísticos existe?: \n");
    scanf("%d", &PT);

    printf("Digite o PIB do país: \n");
    scanf("%lf", &PIB);

    printf("Numero da população: %.2f \nÁrea territorial: %.2f\n", populacao, area);
    printf("Pontos turisticos: %d \nPIB: %.2lf\n", PT, PIB);
    printf("Nome do país: %s\n", nome);
    return 0;


    }