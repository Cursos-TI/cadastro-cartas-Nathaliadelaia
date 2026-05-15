#include <stdio.h>
// Super Trunfo - Jogo de Cartas
// Este desafio consiste em criar um programa em C que simule um jogo de cartas do tipo "Super Trunfo"
int main() {
    char Estado1, Estado2, CodigodaCarta1 [20], CodigodaCarta2 [20], Nomedacidade1 [50], Nomedacidade2 [50];
    int Numerodepontosturisticos1, Numerodepontosturisticos2;
    float Area1, Area2, PIB1, PIB2, densidadepopulacao1, densidadepopulacao2, PIBpercapita1, PIBpercapita2, superPoderA, superPoderB;
    unsigned long int Populacao1, Populacao2;
    
    // Solicitando as informações das cartas
    printf ("Digite o estado da Carta 1: \n");
    scanf (" %c", &Estado1);
    
    printf ("Digite o codigo da carta 1: \n");
    scanf(" %s", CodigodaCarta1);

    printf ("Digite o nome da Cidade da Carta 1: \n");
    scanf(" %s", Nomedacidade1);

    printf ("Digite a populacao da Cidade da Carta 1: \n");
    scanf(" %lu", &Populacao1);

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
    scanf(" %lu", &Populacao2);

    printf ("Digite a area da Cidade da Carta 2: \n");
    scanf (" %f", &Area2);

    printf ("Digite o PIB da Cidade da Carta 2: \n");
    scanf (" %f", &PIB2); 

    printf ("Digite o numero de pontos turisticos da Cidade da Carta 2: \n");
    scanf (" %d", &Numerodepontosturisticos2);

    densidadepopulacao1 = Populacao1/Area1;
    densidadepopulacao2 = Populacao2/Area2;
    PIBpercapita1 = PIB1/Populacao1;
    PIBpercapita2 = PIB2/Populacao2;
    superPoderA = (float) Populacao1 + (float)Area1 + (float)PIB1 + (float)Numerodepontosturisticos1 + (float)PIBpercapita1 + (float)(1/densidadepopulacao1); 
    superPoderB = (float) Populacao2 + (float)Area2 + (float)PIB2 + (float)Numerodepontosturisticos2 + (float)PIBpercapita2 + (float)(1/densidadepopulacao2);


    // Exibindo as cartas
    printf ("Carta 1: \n");
    printf ("Estado: %c \n", Estado1);
    printf ("Codigo da Carta: %s \n", CodigodaCarta1);
    printf ("Nome da Cidade: %s \n", Nomedacidade1);
    printf ("Populacao: %lu \n", Populacao1);
    printf ("Area: %f km²\n", Area1);   
    printf ("PIB: %f bilhoes de reais\n", PIB1);
    printf ("Numero de pontos turisticos: %d \n", Numerodepontosturisticos1);
    printf ("Densidade Populacional: %.2f habitantes por km² \n", densidadepopulacao1);
    printf ("PIB per capita: %.2f reais \n", PIBpercapita1);
    printf ("O super poder de A e: %f \n", superPoderA);

    printf ("Carta 2: \n");
    printf ("Estado: %c \n", Estado2);    
    printf ("Codigo da Carta: %s \n", CodigodaCarta2);
    printf ("Nome da Cidade: %s \n", Nomedacidade2);
    printf ("Populacao: %lu \n", Populacao2);
    printf ("Area: %f km²\n", Area2);   
    printf ("PIB: %f bilhoes de reais\n", PIB2);
    printf ("Numero de pontos turisticos: %d \n", Numerodepontosturisticos2);
    printf ("Densidade Populacional: %.2f habitantes por km² \n", densidadepopulacao2);
    printf ("PIB per capita: %.2f reais \n", PIBpercapita2);
    printf ("O super poder de B e: %f \n", superPoderB);

    printf ("*** Comparando as Cartas ***\n ");

    printf("População 1 e maior que a populacao 2? %d\n", Populacao1 > Populacao2);
    printf("Area 1 e maior que a Area 2? %d\n", Area1 > Area2);
    printf("PIB 1 e maior que o PIB 2? %d\n", PIB1 > PIB2);
    printf("Numeros de pontos turisticos 1 e maior que a Numeros de pontos turistico 2? %d\n", Numerodepontosturisticos1 > Numerodepontosturisticos2);
    printf("A densidade populacional 1 e menor que a densidade populacional 2? %.d\n", densidadepopulacao1 < densidadepopulacao2);
    printf("O PIB percapita 1 e maior que a o PIB percapita 2? %d\n", PIBpercapita1 > PIBpercapita2);
    printf("O super poder de 1 e maior que o super poder de 2? %d\n", superPoderA > superPoderB);

     return 0;




}