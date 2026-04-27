#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 3 - Implementação do menu

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

// Área destinada ao menu do jogo

int opcao;

printf("\n Escolha o atributo para comparação: \n");
/*
Regra geral: A carta com maior atributo vence, exceto o atributo Densidade Populacional em que a lógica se inverte (a carta com o menor atributo vence)
*/
printf("1 - População \n");
printf("2 - Área \n");
printf("3 - PIB \n");
printf("4 - Ponto Turístico \n");
printf("5 - Densidade Populacional \n");

scanf("%d", &opcao);

switch(opcao) {
    case 1:
         printf("\n Comparação por População: \n");

         if(populacao1 > populacao2){
            printf("A carta 1 (%s) venceu! \n", nomedacidade1);
            printf("A carta 1 (%s): %lu \n", nomedacidade1, populacao1);
            printf("A carta 2 (%s): %lu \n", nomedacidade2, populacao2);
         }else if(populacao2 > populacao1){
            printf("A carta 2 (%s) venceu! \n", nomedacidade2);
            printf("A carta 1 (%s): %lu \n", nomedacidade1, populacao1);
            printf("A carta 2 (%s): %lu \n", nomedacidade2, populacao2);
         }else{
            printf("Empate! \n");
         }
         break;

    case 2:
         printf("\n Comparação por Área: \n");

         if(area1 > area2){
            printf("A carta 1 (%s) venceu! \n", nomedacidade1);
            printf("A carta 1 (%s): %f \n", nomedacidade1, area1);
            printf("A carta 2 (%s): %f \n", nomedacidade2, area2);
         }else if(area2 > area1){
            printf("A carta 2 (%s) venceu! \n", nomedacidade2);
            printf("A carta 1 (%s): %f \n", nomedacidade1, area1);
            printf("A carta 2 (%s): %f \n", nomedacidade2, area2);
         }else{
            printf("Empate! \n");
         }
         break;

    case 3:
         printf("\n Comparação por PIB: \n");

         if(pib1 > pib2){
            printf("A carta 1 (%s) venceu! \n", nomedacidade1);
            printf("A carta 1 (%s): %f \n", nomedacidade1, pib1);
            printf("A carta 2 (%s): %f \n", nomedacidade2, pib2);
         }else if(pib2 > pib1){
            printf("A carta 2 (%s) venceu! \n", nomedacidade2);
            printf("A carta 1 (%s): %f \n", nomedacidade1, pib1);
            printf("A carta 2 (%s): %f \n", nomedacidade2, pib2);
         }else{
            printf("Empate! \n");
         }
         break;
         
    case 4:
         printf("\n Comparação por Ponto Turístico: \n");

         if(pontoturistico1 > pontoturistico2){
            printf("A carta 1 (%s) venceu! \n", nomedacidade1);
            printf("A carta 1 (%s): %d \n", nomedacidade1, pontoturistico1);
            printf("A carta 2 (%s): %d \n", nomedacidade2, pontoturistico2);
         }else if(pontoturistico2 > pontoturistico1){
            printf("A carta 2 (%s) venceu! \n", nomedacidade2);
            printf("A carta 1 (%s): %d \n", nomedacidade1, pontoturistico1);
            printf("A carta 2 (%s): %d \n", nomedacidade2, pontoturistico2);
         }else{
            printf("Empate! \n");
         }
         break;

    case 5:
         printf("\n Comparação por Densidade Populacional: \n");

         if(densidadepopulacional1 < densidadepopulacional2){
            printf("A carta 1 (%s) venceu! \n", nomedacidade1);
            printf("A carta 1 (%s): %f \n", nomedacidade1, densidadepopulacional1);
            printf("A carta 2 (%s): %f \n", nomedacidade2, densidadepopulacional2);
         }else if(densidadepopulacional2 < densidadepopulacional1){
            printf("A carta 2 (%s) venceu! \n", nomedacidade2);
            printf("A carta 1 (%s): %f \n", nomedacidade1, densidadepopulacional1);
            printf("A carta 2 (%s): %f \n", nomedacidade2, densidadepopulacional2);
         }else{
            printf("Empate! \n");
         }
         break;

    default:
         printf("Opção inválida! \n");
         break;
}

return 0;
}