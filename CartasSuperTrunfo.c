#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
char estado [5];
char codigo [5];
char cidade [20];
int populacao, pontos;
float area, pib, densidade, pibpercapita;
  // Área para entrada de dados
printf("Insira os dados da carta 1 \n");

printf("Estado: ");
scanf("%s", estado);

printf("Código: ");
scanf("%s", codigo);

printf("Cidade: ");
scanf("%s", cidade);

printf("População: ");
scanf("%d", &populacao);

printf("Área: ");
scanf("%f", &area);

printf("PIB: ");
scanf("%f", &pib);

printf("Número de pontos turísticos: ");
scanf("%d", &pontos);
  // Área para exibição dos dados da cidade
densidade = populacao / area;
pibpercapita = pib / populacao;

printf("------------------------------ \n");
printf("Carta 1 \n");
printf("Estado: %s \n", estado);
printf("Código: %s \n", codigo);
printf("Cidade: %s \n", cidade);
printf("População: %d \n", populacao);
printf("Área: %.2f \n", area);
printf("PIB %.2f \n", pib);
printf("Pontos turísticos: %d \n", pontos);
printf("Densidade populacional: %f \n", densidade);
printf("PIB per capita: %f \n", pibpercapita);
printf("------------------------------ \n");

//Informações carta 2

printf("Insira os dados da carta 2 \n");
printf("Estado: ");
scanf("%s", estado);

printf("Código: ");
scanf("%s", codigo);

printf("Cidade: ");
scanf("%s", cidade);

printf("População: ");
scanf("%d", &populacao);

printf("Área: ");
scanf("%f", &area);

printf("PIB: ");
scanf("%f", &pib);

printf("Número de pontos turísticos: ");
scanf("%d", &pontos);

densidade = populacao / area;
pibpercapita = pib / populacao;

printf("------------------------------ \n");
printf("Carta 2 \n");
printf("Estado: %s \n", estado);
printf("Código: %s \n", codigo);
printf("Cidade: %s \n", cidade);
printf("População: %d \n", populacao);
printf("Área: %.2f \n", area);
printf("PIB %.2f \n", pib);
printf("Pontos turísticos: %d \n", pontos);
printf("Densidade populacional: %f \n", densidade);
printf("PIB per capita: %f \n", pibpercapita);

return 0;
} 
