#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
char estado1 [5];
char estado2 [5];
char codigo [5];
char cidade [20];
int pontos1, pontos2, escolhaatributo;
unsigned long int populacao1, populacao2;
float area1, area2, pib1, pib2, densidade1, densidade2, pibpercapita1, pibpercapita2, superpoder1, superpoder2;
  // Área para entrada de dados
printf("Insira os dados da carta 1 \n");

printf("Estado: ");
scanf("%s", estado1);

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

  //Exibição das informações da carta 1

printf("------------------------------ \n");
printf("Carta 1 \n");
printf("Estado: %s \n", estado1);
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
scanf("%s", estado2);

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

  //Exibição das informações da carta 2

printf("------------------------------ \n");
printf("Carta 2 \n");
printf("Estado: %s \n", estado2);
printf("Código: %s \n", codigo);
printf("Cidade: %s \n", cidade);
printf("População: %lu \n", populacao2);
printf("Área: %.2f \n", area2);
printf("PIB %.2f \n", pib2);
printf("Pontos turísticos: %d \n", pontos2);
printf("Densidade populacional: %f \n", densidade2);
printf("PIB per capita: %f \n", pibpercapita2);
printf ("Super Poder: %f \n", superpoder2);

  //Menu interativo de escolha do atrubuto pelo usuário

printf("------------------------------ \n");
printf("1. Estado\n");
printf("2. População\n");
printf("3. Área\n");
printf("4. PIB\n");
printf("5. Número de pontos turísticos\n");
printf("6. Densidade populacional\n");
printf("7. Super Poder\n");
printf("Escolha um atributo para comparação: ");
scanf("%d", &escolhaatributo);
printf("------------------------------ \n");

switch (escolhaatributo)
{
case 1:
  printf("Estado carta 1: %s \n", estado1);
  printf("Estado carta 2: %s \n", estado2);
  break;
case 2:
  printf("População carta 1: %lu \n", populacao1);
  printf("População carta 2: %lu \n", populacao2);
  printf("------------------------------ \n");
  if (populacao1 > populacao2){
    printf("População da carta 1 venceu!\n");
  } else if (populacao1 < populacao2) {
    printf("População da carta 2 venceu!\n");
  } else {
    printf("Empate!\n");
  }
  break;
case 3:
  printf("Área carta 1: %f \n", area1);
  printf("Área carta 2: %f \n", area2);
  printf("------------------------------ \n");
  if (area1 > area2){
    printf("Área da carta 1 venceu!\n");
  } else if (area1 < area2) {
    printf("área da carta 2 venceu!\n");
  } else {
    printf("Empate!\n");
  }
  break;
case 4:
  printf("PIB carta 1: %f \n", pib1);
  printf("PIB carta 2: %f \n", pib2);
  printf("------------------------------ \n");
  if (pib1 > pib2){
    printf("PIB da carta 1 venceu!\n");
  } else if (pib1 < pib2) {
    printf("PIB da carta 2 venceu!\n");
  } else {
    printf("Empate!\n");
  }
  break;
case 5:
  printf("Pontos turísticos carta 1: %d \n", pontos1);
  printf("Pontos turísticos carta 2: %d \n", pontos2);
  printf("------------------------------ \n");
  if (pontos1 > pontos2){
    printf("Número de pontos da carta 1 venceu!\n");
  } else if (pontos1 < pontos2) {
    printf("Número de pontos da carta 2 venceu!\n");
  } else {
    printf("Empate!\n");
  }
  break;
case 6:
  printf("Densidade carta 1: %f \n", densidade1);
  printf("Densidade carta 2: %f \n", densidade2);
  printf("------------------------------ \n");
  if (densidade1 < densidade2){
    printf("Densidade da carta 1 venceu!\n");
  } else if (densidade1 > densidade2) {
    printf("Densidade da carta 2 venceu!\n");
  } else {
    printf("Empate!\n");
  }
  break;
case 7:
  printf("Super poder carta 1: %f \n", superpoder1);
  printf("Super poder carta 2: %f \n", superpoder2);
  printf("------------------------------ \n");
  if (superpoder1 > superpoder2){
    printf("Super poder da carta da carta 1 venceu!\n");
  } else if (superpoder1 < superpoder2) {
    printf("Super poder da carta 2 venceu!\n");
  } else {
    printf("Empate!\n");
  }
  break;
default:
    printf("Opção inválida!\n");
  break;
}

return 0;


}
