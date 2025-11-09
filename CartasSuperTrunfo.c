#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main(){
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado01[50], estado02[50];
  char codigo01[5], codigo02[5];
  char nomedacid01[50], nomedacid02[50];
  int populacao01, populacao02;
  float area01, area02;
  float pib01, pib02;
  int numerodept01, numerodept02;

  printf("Digite o estado da sua primeira carta: ");
  scanf("%s", &estado01);
  printf("Digite o codigo da primeira carta (ex: A01, B02): ");
  scanf("%s", &codigo01);
  printf("Digite o nome da cidade: ");
  scanf("%s", &nomedacid01);
  printf("Digite a população da cidade inserida acima: ");
  scanf("%d", &populacao01);
  printf("Digite a área desta cidade: ");
  scanf("%f", &area01);
  printf("Digite o PIB da cidade inserida acima: ");
  scanf("%f", &pib01);
  printf("Digite o número de pontos turisticos da região: ");
  scanf("%d", &numerodept01);// Área para entrada de dados

  printf("Carta 01:\n");
  printf("Estado: %s\n", estado01);
  printf("Codigo de carta: %s\n", codigo01);
  printf("Nome da Cidade: %s\n", nomedacid01);
  printf("População: %d\n", populacao01);
  printf("Área: %.2fkm²\n", area01);
  printf("PIB: %.2f bilhôes de reais.\n", pib01);
  printf("Número de Pontos Turísticos: %d\n", numerodept01);// Área para exibição dos dados da cidade

  printf("Digite o estado da sua segunda carta: ");
  scanf("%s", &estado02);
  printf("Digite o codigo da primeira carta (ex: A01, B02): ");
  scanf("%s", &codigo02);
  printf("Digite o nome da cidade: ");
  scanf("%s", &nomedacid02);
  printf("Digite a população da cidade inserida acima: ");
  scanf("%d", &populacao02);
  printf("Digite a área desta cidade: ");
  scanf("%f", &area02);
  printf("Digite o PIB da cidade inserida acima: ");
  scanf("%f", &pib02);
  printf("Digite o número de pontos turisticos da região: ");
  scanf("%d", &numerodept02);// Área para entrada de dados

  printf("Carta 02:\n");
  printf("Estado: %s\n", estado02);
  printf("Codigo de carta: %s\n", codigo02);
  printf("Nome da Cidade: %s\n", nomedacid02);
  printf("População: %d\n", populacao02);
  printf("Área: %.2fkm²\n", area02);
  printf("PIB: %.2f bilhôes de reais.\n", pib02);
  printf("Número de Pontos Turísticos: %d\n", numerodept02);// Área para exibição dos dados da cidade

return 0;
} 