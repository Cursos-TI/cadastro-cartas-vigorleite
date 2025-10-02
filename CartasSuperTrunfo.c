#include <stdio.h>
//Alteração feita por Igor Leite

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Variáveis de strings, usadas para nomes
  char estado1, estado2;
  char codigo1[3], codigo2[3];
  char cidade1[50], cidade2[50];
  // Variáveis numéricas, int como inteiras e float para decimais
  int populacao1, populacao2;
  int pontosTuristicos1, pontosTuristicos2;
  float area1, area2;
  float pib1, pib2;

  // Área para entrada de dados
  // Será usado o printf para mostrar o texto e o scanf para ler o usuário
  // Dados da Carta 1
  printf ("Informe os dados da Carta 1\nEscolha de A a H para o nome do estado: ");
  scanf (" %c", &estado1);
  printf ("Escolha entre 01,04,03,04 para o codigo do estado: ");
  scanf ("%s", codigo1);
  printf ("Digite o nome da cidade: ");
  scanf ("%s", cidade1);
  printf ("Digite a populacao dessa cidade: ");
  scanf ("%d", &populacao1);
  printf ("Digite o tamanho em km² dessa cidade: ");
  scanf ("%f", &area1);
  printf ("Digite o PIB dessa cidade: ");
  scanf ("%f", &pib1);
  printf ("Digite a quantidade de pontos turisticos dessa cidade: ");
  scanf ("%d", &pontosTuristicos1);

  // Dados da Carta 2
  printf ("\n\nInforme os dados da Carta 2\nEscolha de A a H para o nome do estado: ");
  scanf (" %c", &estado2);
  printf ("Escolha entre 01,04,03,04 para o codigo do estado: ");
  scanf ("%s", codigo2);
  printf ("Digite o nome da cidade: ");
  scanf ("%s", cidade2);
  printf ("Digite a populacao dessa cidade: ");
  scanf ("%d", &populacao2);
  printf ("Digite o tamanho em km² dessa cidade: ");
  scanf ("%f", &area2);
  printf ("Digite o PIB dessa cidade: ");
  scanf ("%f", &pib2);
  printf ("Digite a quantidade de pontos turisticos dessa cidade: ");
  scanf("%d", &pontosTuristicos2);

  // Área para exibição dos dados da cidade
  // O uso do printf aqui é apenas para a exibição dos dados acima
  // Carta 1
  printf ("\nCarta 1\nEstado: %c\nCodigo: %c%s\nNome da Cidade: %s\nPopulacao: %d\nArea: %f km²\nPIB: %f bilhoes de reais\nNumero de Pontos Turisticos: %d\n", estado1, estado1, codigo1, cidade1, populacao1, area1, pib1, pontosTuristicos1);
  //Carta 2
  printf ("\nCarta 2\nEstado: %c\nCodigo: %c%s\nNome da Cidade: %s\nPopulacao: %d\nArea: %f km²\nPIB: %f bilhoes de reais\nNumero de Pontos Turisticos: %d\n", estado2, estado2, codigo2, cidade2, populacao2, area2, pib2, pontosTuristicos2);

  //Fim
return 0;
}