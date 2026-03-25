#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
char estado [5];
char codigo [5];
char cidade [20];
int pontos1, pontos2;
unsigned long int populacao1, populacao2;
float area1, area2, pib1, pib2, densidade1, densidade2, pibpercapita1, pibpercapita2, superpoder1, superpoder2;
  // Área para entrada de dados
printf("Insira os dados da carta 1 \n");

printf("Estado: ");
scanf("%s", estado);

printf("Código: ");
scanf("%s", codigo);

printf("Cidade: ");
scanf("%s", cidade);

printf("População: ");
scanf("%lu", &populacao1);

printf("Área: ");
scanf("%f", &area1);

printf("PIB: ");
scanf("%f", &pib1);

printf("Número de pontos turísticos: ");
scanf("%d", &pontos1);
  // Área para exibição dos dados da cidade
densidade1 = populacao1 / area1;
pibpercapita1 = pib1 / populacao1;
superpoder1 = (float) populacao1 + area1 + pib1 + pontos1 + pibpercapita1 - densidade1;

printf("------------------------------ \n");
printf("Carta 1 \n");
printf("Estado: %s \n", estado);
printf("Código: %s \n", codigo);
printf("Cidade: %s \n", cidade);
printf("População: %lu \n", populacao1);
printf("Área: %.2f \n", area1);
printf("PIB %.2f \n", pib1);
printf("Pontos turísticos: %d \n", pontos1);
printf("Densidade populacional: %f \n", densidade1);
printf("PIB per capita: %f \n", pibpercapita1);
printf ("Super Poder: %f \n", superpoder1);
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
scanf("%lu", &populacao2);

printf("Área: ");
scanf("%f", &area2);

printf("PIB: ");
scanf("%f", &pib2);

printf("Número de pontos turísticos: ");
scanf("%d", &pontos2);

densidade2 = populacao2 / area2;
pibpercapita2 = pib2 / populacao2;
superpoder2 = (float) populacao2 + area2 + pib2 + pontos2 + pibpercapita2 - densidade2;

printf("------------------------------ \n");
printf("Carta 2 \n");
printf("Estado: %s \n", estado);
printf("Código: %s \n", codigo);
printf("Cidade: %s \n", cidade);
printf("População: %lu \n", populacao2);
printf("Área: %.2f \n", area2);
printf("PIB %.2f \n", pib2);
printf("Pontos turísticos: %d \n", pontos2);
printf("Densidade populacional: %f \n", densidade2);
printf("PIB per capita: %f \n", pibpercapita2);
printf ("Super Poder: %f \n", superpoder2);

printf("------------------------------ \n");

printf("População: %lu \n", populacao1 > populacao2);
printf("Área: %d \n", area1 > area2);
printf("PIB: %d \n", pib1 > pib2);
printf("Pontos turísticos: %d \n", pontos1 > pontos2);
printf("Densidade populacional: %d \n", densidade1 < densidade2);
printf("PIB per capita: %d \n", pibpercapita1 > pibpercapita2);
printf("Super poder: %d \n", superpoder1 > superpoder2);
printf("------------------------------ \n");

if(populacao1 > populacao2) {
  printf("População da carta 1 venceu!\n");
} else {
  printf("População da carta 2 venceu!\n");
}

if (area1 > area2) {
  printf("Área da carta 1 venceu!\n");
} else {
  printf("Área da carta 2 venceu!\n");
}

if (pib1 > pib2) {
  printf("PIB da carta 1 venceu!\n");
} else {
  printf("PIB da carta 2 venceu!\n");
}

if (pontos1 > pontos2) {
  printf("Pontos turísticos da carta 1 venceu!\n");
} else {
  printf("Pontos turísticos da carta 2 venceu!\n");
}

if (densidade1 < densidade2) {
  printf("Densidade populacional da carta 1 venceu!\n");
} else {
  printf("Densidade populacional da carta 2 venceu!\n");
}

if (pibpercapita1 > pibpercapita2) {
  printf("PIB per capita da carta 1 venceu!\n");
} else {
  printf("PIB per capita da carta 2 venceu!\n");
}

if (superpoder1 > superpoder2) {
  printf("Super poder da carta 1 venceu!\n");
} else {
  printf("Super poder da carta 2 venceu!\n");
}


return 0;
} 
