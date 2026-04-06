#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
 
  // Área para definição das variáveis para armazenar as propriedades das cidades
char estado1 [14] = "Bahia";
char codigo1 [10] = "B01";
char nomedacidade1 [50] = "Salvador";
int populacao1 = 4063170;
float area1 = 693.44;
float pib1 = 31724.15;
int pontoturistico1 = 30;

char estado2 [14] = "Pernambuco";
char codigo2 [10] = "B02";
char nomedacidade2 [50] = "Recife";
int populacao2 = 1488920;
float area2 = 218.843;
float pib2 = 54970305;
int pontoturisco2 = 30;


  // Área para entrada de dados
printf ("Carta 1: \n");

printf ("Estado: %s \n", estado1); // %s é o formato da variável char estado

printf ("Código: %s \n", codigo1); // %s é o formato da variável char codigo

printf ("Nome da cidade: %s \n", nomedacidade1); // %s é o formato da variável char nomedecidade

printf ("População: %d \n", populacao1); // %d é o formato da variável int populacao

printf ("Área: %f \n", area1); // %f é o formato da variável float area

printf ("PIB: %f \n", pib1); // %f é o formato da variável float pib

printf ("Ponto turístico: %d \n\n", pontoturistico1); // %d é o formato da variável int pontoturistico
  // Área para exibição dos dados da cidade
  
 printf ("Carta 2: \n" );

printf ("Estado: %s \n", estado2); // %s é o formato da variável char estado

printf ("Código: %s \n", codigo2); // %s é o formato da variável char codigo

printf ("Nome da cidade: %s \n", nomedacidade2); // %s é o formato da variável char nomedecidade

printf ("População: %d \n", populacao2); // %d é o formato da variável int populacao

printf ("Área: %f \n", area2); // %f é o formato da variável float area

printf ("PIB: %f \n", pib2); // %f é o formato da variável float pib

printf ("Ponto turístico: %d \n", pontoturisco2); // %d é o formato da variável int pontoturistico

  // Área para exibição dos dados da cidade

return 0;
} 
