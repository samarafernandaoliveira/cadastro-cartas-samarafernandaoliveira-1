#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

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


  // Área de comparação entre as duas cartas

  printf ("\nComparação entre as cartas: \n\n");
  printf ("População: \n");
  printf ("A carta 1 venceu %d \n",populacao1 > populacao2 );
  printf ("Área: \n");
  printf ("A carta 1 venceu %d \n", area1 > area2);
  printf ("PIB: \n");
  printf ("A carta 1 venceu %d \n", pib1 > pib2);
  printf ("Ponto turístico: \n");
  printf ("A carta 1 venceu %d \n", pontoturistico1 > pontoturistico2);
  printf ("Densidade Populacional: \n");
  printf ("A carta 1 venceu %d \n", densidadepopulacional1 < densidadepopulacional2);
  printf ("PIB per capita: \n");
  printf ("A carta 1 venceu %d \n", pibpercapita1 > pibpercapita2);
  printf ("SuperPoder: \n");
  printf ("A carta 1 venceu %d \n", superpoder1 > superpoder2);





return 0;
} 
