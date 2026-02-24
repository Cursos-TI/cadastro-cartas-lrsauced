#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.



int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Dados da Carta 1
  char estado1;
  char codigo1 [4];
  char cidade1[50];
  int populacao1;
  float area1;
  float pib1;
  int pontosTuristicos1;
  float densidade_pop1;
  float pib_capta01;


  // Dados da Carta 2
  char estado2;
  char codigo2 [4];
  char cidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontosTuristicos2;
  float densidade_pop2;
  float pib_capta02;

  // Área para entrada de dados carta 01
  printf("============================\n");
  printf("=== Cadastro da Carta 01 === \n");
  printf("============================\n");
  printf("Digite uma letra entre A e H para representar o Estado: ");
  scanf("%c", &estado1);
  
  printf("Digite o nome da cidade: ");
  scanf(" %s", cidade1);

  printf("Digite a população da cidade: ");
  scanf(" %d", &populacao1);

  printf("Digite a área em Km²: ");
  scanf(" %f", &area1);

  printf("Digite o PIB em bilhões de reais: ");
  scanf(" %f", &pib1);

  printf("Digite a quantidade de pontos turísticos: ");
  scanf(" %d", &pontosTuristicos1);
  printf("                             \n ");


  // Código para automatizar a geração do código, contatenando a letra escolhida pelo usuário e o número da carta
  sprintf(codigo1, "%c01", estado1);
  sprintf(codigo2, "%c02", estado2);

  densidade_pop1 = (float) populacao1 / area1;
  pib_capta01 = (float) pib1 / populacao1;


  // Área para entrada de dados carta 02

  printf("============================\n");
  printf("=== Cadastro da Carta 02 === \n");
  printf("============================\n");
  printf("Digite uma letra entre A e H para representar o Estado: ");
  scanf(" %c", &estado2);

  printf("Digite o nome da cidade: ");
  scanf(" %s", cidade2);

  printf("Digite a população da cidade: ");
  scanf(" %d", &populacao2);

  printf("Digite a área em Km²: ");
  scanf(" %f", &area2);

  printf("Digite o PIB em bilhões de reais: ");
  scanf(" %f", &pib2);

  printf("Digite a quantidade de pontos turísticos: ");
  scanf(" %d", &pontosTuristicos2);

  densidade_pop2 = (float) populacao2 / area2;
  pib_capta02 = (float) pib2 / populacao2;


  // Área para exibição dos dados da cidade 01
  
  printf("======================\n");
  printf("Carta: 01\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Cidade: %s\n", cidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.0f\n", area1);
  printf("PIB: %.0f\n", pib1);
  printf("Pontos turísticos: %d\n",pontosTuristicos1);
  printf("Densidade demográfica: %.0f \n", densidade_pop1);
  printf("PIB per Capta: %.2f \n", pib_capta01);

  printf("======================\n");


  // Área para exibição dos dados da cidade 02
  
  printf("Carta: 02\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.0f\n", area2);
  printf("PIB: %.0f\n", pib2);
  printf("Pontos turísticos: %d\n",pontosTuristicos2);
  printf("Densidade demográfica: %.0f \n", densidade_pop2);
  printf("PIB per Capta: %.2f \n", pib_capta02);
  printf("======================\n\n\n\n\n\n");


    return 0;
} 


