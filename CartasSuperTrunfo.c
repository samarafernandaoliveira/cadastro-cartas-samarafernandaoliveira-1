#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
 
  // Área para definição das variáveis para armazenar as propriedades das cidades
char estado1 [14];
char codigo1 [10];
char nomedacidade1 [50];
int populacao1;
float area1;
float pib1;
int pontoturistico1;
float densidadepopulacional1;
float pibpercapita1;


char estado2 [14];
char codigo2 [10];
char nomedacidade2 [50];
int populacao2;
float area2;
float pib2;
int pontoturistico2;
float densidadepopulacional2;
float pibpercapita2;



  // Área para entrada de dados
printf ("Carta 1: \n");

printf ("Estado: \n"); 
scanf("%s", estado1); // %s é o formato da variável char estado

printf ("Código: \n");
scanf("%s", codigo1); // %s é o formato da variável char codigo

printf ("Nome da cidade: \n");
scanf("%s", nomedacidade1); // %s é o formato da variável char nomedecidade

printf ("População: \n");
scanf("%d", &populacao1); // %d é o formato da variável int populacao

printf ("Área: \n");
scanf("%f", &area1); // %f é o formato da variável float area

printf ("PIB: \n"); 
scanf("%f", &pib1);  // %f é o formato da variável float pib

printf ("Ponto turístico: \n");
scanf("%d", &pontoturistico1); // %d é o formato da variável int pontoturistico

densidadepopulacional1 = (float) populacao1 / area1;
pibpercapita1 = pib1 / populacao1;

printf ("Densidade populacional: %f \n", densidadepopulacional1);  // %f é o formato da variável float densidadepopulacional

printf ("Pib per capita: %f \n", pibpercapita1);  // %f é o formato da variável pibpercapita

  // Área para exibição dos dados da cidade
  
printf ("Carta 2: \n" );
printf ("Estado: \n");
scanf("%s", estado2); // %s é o formato da variável char estado


printf ("Código: \n");
scanf("%s", codigo2); // %s é o formato da variável char codigo

printf ("Nome da cidade: \n");
scanf("%s", nomedacidade2); // %s é o formato da variável char nomedacidade

printf ("População: \n");
scanf("%d", &populacao2); // %d é o formato da variável int populacao

printf ("Área: \n");
scanf("%f", &area2); // %f é o formato da variável float area

printf ("PIB: \n");
scanf("%f", &pib2); // %f é o formato da variável float pib

printf ("Ponto turístico: \n");
scanf("%d", &pontoturistico2); // %d é o formato da variável int pontoturistico

densidadepopulacional2 = (float) populacao2 / area2;
pibpercapita2 = pib2 / populacao2;

printf ("Densidade populacional: %f \n", densidadepopulacional2); // %f é o formato da variável float densidadepopulacional

printf ("PIB per capita: %f \n", pibpercapita2); // %f é o formato da variável pibpercapita


  // Área para exibição dos dados da cidade

return 0;
} 
