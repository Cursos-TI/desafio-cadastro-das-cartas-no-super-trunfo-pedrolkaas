#include <stdio.h> 


int main() { 
     
     char estado;
     char codigo_da_carta[50];
     char Cidade[50];
     int populaçao;
     float area_em_km²;
     float PIB;
     int pontos_turisticos;
     
     printf("digite o estado: \n");
     scanf("%c", &estado);
    
     printf("digite o código da carta:\n");
     scanf("%s", &codigo_da_carta);
    
     printf("digite a cidade:\n");
     scanf("%s", &Cidade);
    
     printf("digite a populaçao:\n");
     scanf("%d", &populaçao);
    
     printf("digite a are em km²:\n");
     scanf("%f", &area_em_km²);
    
     printf("digite o PIB:\n");
     scanf("%f", &PIB);
    
     printf("digite o numero de pontos turisticos:\n");
     scanf("%d", &pontos_turisticos);
     
    
     printf("estado: %c\n", estado);
     printf("codigo da carta: %s\n", codigo_da_carta);
     printf("cidade: %s\n", Cidade);
     printf("população: %d\n", populaçao);
     printf("are em km²: %f\n", area_em_km²);
     printf("PIB: %f\n", PIB);
     printf("pontos turisticos: %d\n", pontos_turisticos);
    
    
    
     return 0;
    
    
    
    
    
         }