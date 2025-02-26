#include <stdio.h> 


int main() { 
     
     char estado1, estado2;
     char codigo_da_carta1[50], codigo_da_carta2[50];
     char Cidade1[50], Cidade2[50];
     int Populacao1, Populacao2;
     float area_em_km1, area_em_kmA2;
     float PIB1, PIB2;
     int pontos_turisticos1, pontos_turisticos2;
     
     printf("digite o estado1: \n");
     scanf("%c", &estado1);
    
     printf("digite o código da carta do estado1:\n");
     scanf("%s", &codigo_da_carta1);
    
     printf("digite a cidade do estado1:\n");
     scanf("%s", &Cidade1);
    
     printf("digite a populacao da cidade do estado1:\n");
     scanf("%d", &Populacao1);
    
     printf("digite a are em km da cidade do estado1:\n");
     scanf("%f", &area_em_km1);
    
     printf("digite o PIB da cidade do estado1:\n");
     scanf("%f", &PIB1);
    
     printf("digite o numero de pontos turisticos da cidade doestado1:\n");
     scanf("%d", &pontos_turisticos1);

     printf("estado 1\n");
    
     printf("estado: %c\n", estado1);
     printf("codigo da carta: %s\n", codigo_da_carta1);
     printf("Cidade: %s\n", Cidade1);
     printf("Populacao: %d\n", Populacao1);
     printf("are em km: %f\n", area_em_km1);
     printf("PIB: %f\n", PIB1);
     printf("pontos turisticos: %d\n", pontos_turisticos1);
    
    
    
     return 0;
    
    
    
    
    
         }