#include <stdio.h>
// Super Trunfo - Jogo de Cartas
// Este desafio consiste em criar um programa em C que simule um jogo de cartas do tipo "Super Trunfo"
int main() {
    char Estado1, Estado2, CodigodaCarta1 [20], CodigodaCarta2 [20], Nomedacidade1 [50], Nomedacidade2 [50];
    int Populacao1, Populacao2, Numerodepontosturisticos1, Numerodepontosturisticos2;
    float Area1, Area2, PIB1, PIB2;
  
    
    // Solicitando as informações das cartas
    printf ("Digite o estado da Carta 1: \n");
    scanf (" %c", &Estado1);
    
    printf ("Digite o codigo da carta 1: \n");
    scanf(" %s", CodigodaCarta1);

    printf ("Digite o nome da Cidade da Carta 1: \n");
    scanf(" %s", Nomedacidade1);

    printf ("Digite a populacao da Cidade da Carta 1: \n");
    scanf(" %d", &Populacao1);

    printf ("Digite a area da Cidade da Carta 1: \n");
    scanf (" %f", &Area1);

    printf ("Digite o PIB da Cidade da Carta 1: \n");
    scanf (" %f", &PIB1); 

    printf ("Digite o numero de pontos turisticos da Cidade da Carta 1: \n");
    scanf (" %d", &Numerodepontosturisticos1);

    printf ("Digite o estado da Carta 2: \n");
    scanf (" %c", &Estado2);
    
    printf ("Digite o codigo da carta 2: \n");
    scanf(" %s", CodigodaCarta2);

    printf ("Digite o nome da Cidade da Carta 2: \n");
    scanf(" %s", Nomedacidade2);

    printf ("Digite a populacao da Cidade da Carta 2: \n");
    scanf(" %d", &Populacao2);

    printf ("Digite a area da Cidade da Carta 2: \n");
    scanf (" %f", &Area2);

    printf ("Digite o PIB da Cidade da Carta 2: \n");
    scanf (" %f", &PIB2); 

    printf ("Digite o numero de pontos turisticos da Cidade da Carta 2: \n");
    scanf (" %d", &Numerodepontosturisticos2);

    // Exibindo as cartas
    printf ("Carta 1: \n");
    printf ("Estado: %c \n", Estado1);
    printf ("Codigo da Carta: %s \n", CodigodaCarta1);
    printf ("Nome da Cidade: %s \n", Nomedacidade1);
    printf ("Populacao: %d \n", Populacao1);
    printf ("Area: %f km²\n", Area1);   
    printf ("PIB: %f bilhoes de reais\n", PIB1);
    printf ("Numero de pontos turisticos: %d \n", Numerodepontosturisticos1);

    printf ("Carta 2: \n");
    printf ("Estado: %c \n", Estado2);    
    printf ("Codigo da Carta: %s \n", CodigodaCarta2);
    printf ("Nome da Cidade: %s \n", Nomedacidade2);
    printf ("Populacao: %d \n", Populacao2);
    printf ("Area: %f km²\n", Area2);   
    printf ("PIB: %f bilhoes de reais\n", PIB2);
    printf ("Numero de pontos turisticos: %d \n", Numerodepontosturisticos2);

     return 0;




}