#include <stdio.h>
//Alteração feita por Igor Leite
// Desafio Super Trunfo - Países

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Variáveis de strings, usadas para nomes
  char estado1, estado2;
  char codigo1[3], codigo2[3];
  char cidade1[50], cidade2[50];
  //Utilizei o Ponteiro(*): Para quando a comparação dê 0 (Carta 2) ou 1 (Carta 1)
  //Tive que pesquisar uma solução quanto a questão do ponteiro para o uso da escolha da carta sem o uso do if/else
  char *vencedor[2] = {"Carta 2", "Carta 1"}; 

  // Variáveis numéricas, int como inteiras e float para decimais
  unsigned long int populacao1, populacao2; //alteração para o tipo "unsigned long int"
  int pontosTuristicos1, pontosTuristicos2;
  float area1, area2;
  float pib1, pib2;
  float dencidadeP1, dencidadeP2;
  float perCapita1, perCapita2;

  // Novas variáveis do desafio nivel mestre
  int compPopulacao, compArea, compPib, compTurismos, compDencidadeP, compPerCapita, compSuperPoder;
  float superPoderA, superPoderB;


  // Área para entrada de dados
  // Dados da Carta 1
  printf ("Informe os dados da Carta 1\nEscolha de A a H para o nome do estado: ");
  scanf (" %c", &estado1);
  printf ("Escolha entre 01,04,03,04 para o codigo do estado: ");
  scanf ("%s", codigo1);
  printf ("Digite o nome da cidade: ");
  scanf ("%s", cidade1);
  printf ("Digite a populacao dessa cidade: ");
  scanf ("%lu", &populacao1);
  printf ("Digite o tamanho em km dessa cidade: ");
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
  scanf ("%lu", &populacao2);
  printf ("Digite o tamanho em km dessa cidade: ");
  scanf ("%f", &area2);
  printf ("Digite o PIB dessa cidade: ");
  scanf ("%f", &pib2);
  printf ("Digite a quantidade de pontos turisticos dessa cidade: ");
  scanf("%d", &pontosTuristicos2);

  // Área de caulculo - carta 1 e 2
  dencidadeP1 = populacao1 / area1;
  dencidadeP2 = populacao2 / area2;
  perCapita1 = pib1 / populacao1;
  perCapita2 = pib2 / populacao2;

  //Novo atributo "super poder"
  superPoderA = populacao1 + area1 + pib1 + pontosTuristicos1 + dencidadeP1 + perCapita1;
  superPoderB = populacao2 + area2 + pib2 + pontosTuristicos2 + dencidadeP2 + perCapita2;

  // Área para exibição dos dados da cidade
  // Carta 1
  printf ("\nCarta 1\nEstado: %c\nCodigo: %c%s\nNome da Cidade: %s\nPopulacao: %lu\nArea: %.2f km\nPIB: %.2f bilhoes de reais\nNumero de Pontos Turisticos: %d\n", estado1, estado1, codigo1, cidade1, populacao1, area1, pib1, pontosTuristicos1);
  printf ("Densidade Populacional: %.2f hab/km\nPIB per Capita: %.2f reais\n", dencidadeP1, perCapita1);
  printf ("Super Poder: %f pontos\n", superPoderA); //Novo printf para o Super Poder
  // Carta 2
  printf ("\nCarta 2\nEstado: %c\nCodigo: %c%s\nNome da Cidade: %s\nPopulacao: %lu\nArea: %.2f km\nPIB: %.2f bilhoes de reais\nNumero de Pontos Turisticos: %d\n", estado2, estado2, codigo2, cidade2, populacao2, area2, pib2, pontosTuristicos2);
  printf ("Densidade Populacional: %.2f hab/km\nPIB per Capita: %.2f reais\n", dencidadeP2, perCapita2);
  printf ("Super Poder: %f pontos\n", superPoderB); //Novo printf para o Super Poder

  // Área de caulculo 2 - para comparar os resultados"
  compPopulacao = populacao1 > populacao2;
  compArea = area1 > area2;
  compPib = pib1 > pib2;
  compTurismos = pontosTuristicos1 > pontosTuristicos2;
  compDencidadeP = dencidadeP1 > dencidadeP2;
  compPerCapita = perCapita1 > perCapita2;
  compSuperPoder = superPoderA > superPoderB;

  // Comparação entre as cartas
  // Valor verdadeiro(1): Carta 1; Valor falso(0): Carta 2;
  printf ("\nComparacao de Cartas:\nPopulacao: %s venceu (%d)\nArea: %s venceu (%d)", vencedor[compPopulacao], compPopulacao, vencedor[compArea], compArea);
  printf ("\nPIB: %s venceu (%d)\nPontos Turisticos: %s venceu (%d)", vencedor[compPib], compPib, vencedor[compTurismos], compTurismos);
  printf ("\nDensidade Populacional: %s venceu (%d)\nPIB per Capita: %s venceu (%d)", vencedor[compDencidadeP], compDencidadeP, vencedor[compPerCapita], compPerCapita);
  printf ("\nSuper Poder: %s venceu (%d)\n", vencedor[compSuperPoder], compSuperPoder);

  // Fim
  return 0;
}