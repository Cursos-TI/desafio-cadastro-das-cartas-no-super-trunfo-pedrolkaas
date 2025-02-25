#include <stdio.h> 



int main() {
    
     char estado;
     char código_da_carta[50];
     char Cidade[50];
     int populaçao;
     float área_em_km²;
     float PIB;
     int pontos_turísticos;
     
     printf("digite o estado: \n");
     scanf("%d", &estado);
    
    printf("digite o código da carta:\n");
    scanf("%s", &código_da_carta);
    
     printf("digite a cidade:\n");
     scanf("%s", &cidade);
    
     printf("digite a populaçao:\n);
     scanf("%d", &populaçao);
    
    printf("digite a áre em km²:\n");
    scanf("%d", &Área_em_km²);
    
    printf("digite o PIB:\n");
    scanf("%d", &PIB);
    
    printf("digite o numero de pontos turísticos:\n");
    scanf("%d", &pontos_turísticos);
     
    
    printf("estado: %d\n", estado);
    printf("código da carta: %s\n", código_da_carta);
    printf("cidade: %s\n", cidade);
    printf("população: %d\n", populaçao);
    printf("áre em km²: %d\n", área_em_km²);
    printf("PIB: %d\n", PIB);
    printf("pontos turísticos: %d\n", pontos_turísticos);
    
    
    
    return 0;
    
    
    
    
    
    }