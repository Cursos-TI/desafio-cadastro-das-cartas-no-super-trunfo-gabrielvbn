#include <stdio.h>

int main() {
 //Variaveis carta 01

    char estado1[20] , cidade1[20] , codigoCarta1 [5];
    int populacao1 , pontosTuristicos1;
    float pib1 , areak2_1;

//Variaveis da carta 02

  char estado2[20] , cidade2[20] , codigoCarta2 [5];
  int populacao2 , pontosTuristicos2;
  float pib2 , areak2_2;
    
//Interação com o usuário para incersão de dados para criação da carta 01

  printf ("Agora vamos criar a primeira carta do jogo\n");
  printf ("Digite o nome do Estado: ");
  scanf ("%s" , estado1);
  printf ("Digite o nome da Cidade: ");
  scanf ("%s" , cidade1);
  printf ("Digite um codigo para a carta(ex: A01,A02): ");
  scanf ("%s" , codigoCarta1);
  printf ("Qual a população desta cidade: ");
  scanf ("%d" , &populacao1);
  printf ("Qual a area total da cidade em km²: ");
  scanf ("%f" , &areak2_1);
  printf ("Qual o PIB desta cidade: ");
  scanf ("%f" , &pib1);
  printf ("Quantos pontos turisticos esta cidade tem: ");
  scanf ("%d" , &pontosTuristicos1);

//Interação com o usuário para incersão de dados para criação da carta 02

  printf ("Agora vamos criar a carta 02 do jogo\n");
  printf ("Digite o nome do Estado: ");
  scanf ("%s" , estado2);
  printf ("Digite o nome da Cidade: ");
  scanf ("%s" , cidade2);
  printf ("Digite um codigo para a carta(ex: A01,A02): ");
  scanf ("%s" , codigoCarta2);
  printf ("Qual a população desta cidade:");
  scanf ("%d" , &populacao2);
  printf ("Qual a area total da cidade em km²: ");
  scanf ("%f" , &areak2_2);
  printf ("Qual o PIB desta cidade: ");
  scanf ("%f" , &pib2);
  printf ("Quantos pontos turisticos esta cidade tem: ");
  scanf ("%d" , &pontosTuristicos2);

//Exibição da carta 01 criadas na tela do usuario

 printf ("Carta 01\n");
 printf ("Estado: " "%s/n" , estado1);
 printf ("Cidade: " "%s\n" , cidade1);
 printf ("Código da carta: " "%s\n" , codigoCarta1);
 printf ("População: " "%d\n" , populacao1);
 printf ("Area em K²: " "%f\n" , areak2_1);
 printf ("PIB: " "%f\n" , pib1);
 printf ("Quantidade de pontos turisticos: " "%d\n" , pontosTuristicos1);

 //Exibição da carta 02 criadas na tela do usuario

 printf ("Carta 02\n");
 printf ("Estado: " "%s/n" , estado2);
 printf ("Cidade: " "%s\n" , cidade2);
 printf ("Código da carta: " "%s\n" , codigoCarta2);
 printf ("População: " "%d\n" , populacao2);
 printf ("Area em K²: " "%f\n" , areak2_2);
 printf ("PIB: " "%f\n" , pib2);
 printf ("Quantidade de pontos turisticos: " "%d\n" , pontosTuristicos2);


    return 0;
}