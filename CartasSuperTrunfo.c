#include <stdio.h>

int main() {
 //Variaveis carta 01

    char estado1[50] , cidade1[50] , codigoCarta1 [5];
    int populacao1 , pontosTuristicos1;
    float pib1 , areak2_1;

//Variaveis da carta 02

    char estado2[50] , cidade2[50] , codigoCarta2 [5];
    int populacao2 , pontosTuristicos2;
    float pib2 , areak2_2;
    
//Interação com o usuário para incersão de dados para criação da carta 01

    printf ("Agora vamos criar a primeira carta do jogo\n");
    printf ("Digite o nome do Estado: ");
    fgets (estado1 , 50 , stdin);
    printf ("Digite o nome da Cidade: ");
    fgets (cidade1 , 50 , stdin);
    printf ("Digite um codigo para a carta(Use Letras a A a H , numeros de 1 a 4 , ex A01): ");
    scanf (" %s" , codigoCarta1);
    printf ("Qual a população desta cidade: ");
    scanf (" %d" , &populacao1);
    printf ("Qual a area total da cidade em km²: ");
    scanf (" %f" , &areak2_1);
    printf ("Qual o PIB desta cidade: ");
    scanf (" %f" , &pib1);
    printf ("Quantos pontos turisticos esta cidade tem: ");
    scanf (" %d" , &pontosTuristicos1);

//Interação com o usuário para incersão de dados para criação da carta 02

    printf ("Agora vamos criar a carta 02 do jogo\n");
    getchar ();
    printf ("Digite o nome do Estado: ");
    fgets (estado2 , 50 , stdin);
    printf ("Digite o nome da Cidade: ");
    fgets (cidade2 , 50 , stdin);
    printf ("Digite um codigo para a carta(Use Letras a A a H , numeros de 1 a 4 , ex A01): ");
    getchar ();
    scanf ("%s" , codigoCarta2);
    printf ("Qual a população desta cidade:");
    scanf (" %d" , &populacao2);
    printf ("Qual a area total da cidade em km²: ");
    scanf (" %f" , &areak2_2);
    printf ("Qual o PIB desta cidade: ");
    scanf (" %f" , &pib2);
    printf ("Quantos pontos turisticos esta cidade tem: ");
    scanf (" %d" , &pontosTuristicos2);

//Calculo de Densidade populacional e pib per capta
    float densidade1 , densidade2 , pibpercapta1 , pibpercapta2 ;
    densidade1 = populacao1 / areak2_1 ;
    densidade2 = populacao2 / areak2_2 ;
    pibpercapta1 = pib1 / populacao1 ;
    pibpercapta2 = pib2 / populacao2 ;

//Super Poder
    float superPoder1 = populacao1 + areak2_1 + pib1 + pontosTuristicos1 + pibpercapta1 + ( 1 / densidade1);
    float superPoder2 = populacao2 + areak2_2 + pib2 + pontosTuristicos2 + pibpercapta2 + ( 1 / densidade2);


//Exibição da carta 01 criadas na tela do usuario

   printf ("Carta 01\n");
   printf ("Estado: %s" , estado1);
   printf ("Cidade: %s" , cidade1);
   printf ("Código da carta: %s\n" , codigoCarta1);
   printf ("População: %d\n" , populacao1);
   printf ("Area em K²: %f\n" , areak2_1);
   printf ("PIB: %f\n" , pib1);
   printf ("Quantidade de pontos turisticos: %d\n" , pontosTuristicos1);
   printf ("Densidade Populacional: %f\n" , densidade1);
   printf ("PIB per Capta: %f\n" , pibpercapta1);
   printf ("Super Poder: %.f\n" , superPoder1) ;

//Exibição da carta 02 criadas na tela do usuario

   printf ("Carta 02\n");
   printf ("Estado: %s" , estado2);
   printf ("Cidade: %s" , cidade2);
   printf ("Código da carta: %s\n" , codigoCarta2);
   printf ("População: %d\n" , populacao2);
   printf ("Area em K²: %f\n" , areak2_2);
   printf ("PIB: %f\n" , pib2);
   printf ("Quantidade de pontos turisticos: %d\n" , pontosTuristicos2);
   printf ("Densidade Populacional: %f\n" , densidade2);
   printf ("PIB per Capta: %f\n" , pibpercapta2);
   printf ("Super Poder: %.f\n" , superPoder2) ;

//comparação das cartas
   double resultPopulacao, resultArea , resultPIB , result_P_turisticos , resultPIBpCapta , resultDensidadeInv , resultSuperPoder , resultGeral ;
   resultPopulacao = populacao1 > populacao2 ;
   resultArea = areak2_1 > areak2_2 ;
   resultPIB = pib1 > pib2 ;
   result_P_turisticos = pontosTuristicos1 > pontosTuristicos2 ;
   resultPIBpCapta = pibpercapta1 > pibpercapta2 ;
   resultDensidadeInv = ( 1 / densidade1 ) > ( 1 / densidade2 ) ;
   resultSuperPoder = superPoder1 > superPoder2 ;

//Imprimindo Resultado
    printf ("Vencedor em População: %.f\n" , resultPopulacao ) ;
    printf ("Vencedor em Area: %.f\n" , resultArea ) ;
    printf ("Vencedor em PIB: %.f\n" , resultPIB ) ;
    printf ("Vencedor em Pontos turisticos: %.f\n" , result_P_turisticos ) ;
    printf ("Vencedor em PIB per Capta: %.f\n" , resultPIBpCapta ) ;
    printf ("Vencedor em Densidade: %.f\n" , resultDensidadeInv ) ;
    printf ("Vencedor em Super Poder: %.f\n" , resultSuperPoder ) ;
    printf ("Legenda: \n");
    printf ("Resultado 1: Vencedor é a Carta 01\n") ;
    printf ("Resultado 0: Vencedor e a Carta 02\n") ;



    return 0;
}