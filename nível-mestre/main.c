#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 3 - Implementação dos menus, juntamente com a soma de dois atributos diferentes para cada carta

int main() {
 
  // Área para definição das variáveis para armazenar as propriedades das cidades
char estado1 [14];
char codigo1 [10];
char nomedacidade1 [50];
unsigned long int populacao1;
float area1;
float pib1;
int pontoturistico1;
float densidadepopulacional1;
float pibpercapita1;
float superpoder1;

char estado2 [14];
char codigo2 [10];
char nomedacidade2 [50];
unsigned long int populacao2;
float area2;
float pib2;
int pontoturistico2;
float densidadepopulacional2;
float pibpercapita2;
float superpoder2;


  // Área para entrada de dados
printf ("\nCarta 1: \n");

printf ("Estado: \n"); 
scanf("%s", estado1); // %s é o formato da variável char estado

printf ("Código: \n");
scanf("%s", codigo1); // %s é o formato da variável char codigo

printf ("Nome da cidade: \n");
scanf("%s", nomedacidade1); // %s é o formato da variável char nomedecidade

printf ("População: \n");
scanf("%lu", &populacao1); // %lu é o formato da variável unsigned long int populacao

printf ("Área: \n");
scanf("%f", &area1); // %f é o formato da variável float area

printf ("PIB: \n"); 
scanf("%f", &pib1);  // %f é o formato da variável float pib

printf ("Ponto turístico: \n");
scanf("%d", &pontoturistico1); // %d é o formato da variável int pontoturistico

densidadepopulacional1 = (float) populacao1 / area1;
pibpercapita1 = pib1 / populacao1;
superpoder1 = (float) populacao1 + area1 + pib1 + pontoturistico1 + (1.0 / densidadepopulacional1) + pibpercapita1;

printf ("Densidade populacional: %f \n", densidadepopulacional1);  // %f é o formato da variável float densidadepopulacional

printf ("Pib per capita: %f \n", pibpercapita1);  // %f é o formato da variável float pibpercapita

printf ("SuperPoder: %f\n", superpoder1); // %f é o formato da variável float superpoder

  // Área para exibição dos dados da cidade
  
printf ("\nCarta 2: \n" );
printf ("Estado: \n");
scanf("%s", estado2); // %s é o formato da variável char estado


printf ("Código: \n");
scanf("%s", codigo2); // %s é o formato da variável char codigo

printf ("Nome da cidade: \n");
scanf("%s", nomedacidade2); // %s é o formato da variável char nomedacidade

printf ("População: \n");
scanf("%lu", &populacao2); // %lu é o formato da variável unsigned long int populacao

printf ("Área: \n");
scanf("%f", &area2); // %f é o formato da variável float area

printf ("PIB: \n");
scanf("%f", &pib2); // %f é o formato da variável float pib

printf ("Ponto turístico: \n");
scanf("%d", &pontoturistico2); // %d é o formato da variável int pontoturistico

densidadepopulacional2 = (float) populacao2 / area2;
pibpercapita2 = pib2 / populacao2;
superpoder2 = (float) populacao2 + area2 + pib2 + pontoturistico2 + (1.0 / densidadepopulacional2) + pibpercapita2;


printf ("Densidade populacional: %f \n", densidadepopulacional2); // %f é o formato da variável float densidadepopulacional

printf ("PIB per capita: %f \n", pibpercapita2); // %f é o formato da variável float pibpercapita
printf ("SuperPoder: %f\n", superpoder2); // %f é o formato da variável float superpoder

// Área destinada ao menu 1 do jogo

int opcao1, opcao2;
float valor1_carta1, valor1_carta2;
float valor2_carta1, valor2_carta2;

printf("\n Escolha o atributo 1 para comparação: \n");
/*
Regra geral: A carta com maior soma de atributo vence, exceto o atributo Densidade Populacional em que a lógica se inverte (a carta com o menor atributo vence)
*/
printf("1 - População \n");
printf("2 - Área \n");
printf("3 - PIB \n");
printf("4 - Ponto Turístico \n");
printf("5 - Densidade Populacional \n");

scanf("%d", &opcao1);

switch(opcao1) {
    case 1:
         valor1_carta1 = populacao1;
         valor1_carta2 = populacao2;

         break;

    case 2:
         valor1_carta1 = area1;
         valor1_carta2 = area2;

         break;

    case 3:
         valor1_carta1 = pib1;
         valor1_carta2 = pib2;

         break;
         
    case 4:
         valor1_carta1 = pontoturistico1;
         valor1_carta2 = pontoturistico2;

         break;

    case 5:
         valor1_carta1 = 1 / densidadepopulacional1;
         valor1_carta2 = 1 / densidadepopulacional2;

         break;

    default:
         printf("Opção inválida! \n");
         break;
}

//Área destinada ao menu 2 do jogo

printf("Escolha o atributo 2: \n");

if(opcao1 != 1) printf("1 - População \n");
if(opcao1 != 2) printf("2 - Área \n");
if(opcao1 != 3) printf("3 - PIB \n");
if(opcao1 != 4) printf("4 - Ponto Turístico \n");
if(opcao1 != 5) printf("5 - Densidade Populacional \n");

scanf("%d", &opcao2);

if(opcao1 == opcao2){
    printf("Você não pode escolher o mesmo atributo! \n");
}else{
    switch(opcao2){
    case 1:
         valor2_carta1 = populacao1;
         valor2_carta2 = populacao2;

         break;

    case 2:
         valor2_carta1 = area1;
         valor2_carta2 = area2;

         break;

    case 3:
         valor2_carta1 = pib1;
         valor2_carta2 = pib2;

         break;

    case 4:
         valor2_carta1 = pontoturistico1;
         valor2_carta2 = pontoturistico2;

         break;

    case 5:
         valor2_carta1 = 1 / densidadepopulacional1;
         valor2_carta2 = 1 / densidadepopulacional2;

         break;

    default:
         printf("Opção Inválida! \n");

     
         break;
    }

}

//Soma dos atributos

float soma1 = valor1_carta1 + valor2_carta1;
float soma2 = valor1_carta2 + valor2_carta2;

//Exibição do resultado

printf("\n Carta 1 (%s): %.2f \n", nomedacidade1, soma1);
printf("\n Carta 2 (%s): %.2f \n", nomedacidade2, soma2);

if(soma1 == soma2){
    printf("\n Empatou! \n");
}else{
    char* vencedor = (soma1 > soma2) ? nomedacidade1 : nomedacidade2;
    printf("\n Vencedor: %s \n", vencedor);
}

return 0;
}