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
int pontos1, pontos2, escolhaatributo1, escolhaatributo2, resultado1, resultado2;
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
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Número de pontos turísticos\n");
printf("5. Densidade populacional\n");
printf("6. Super Poder\n");

printf("Escolha o primeiro atributo para comparação: ");
scanf("%d", &escolhaatributo1);
printf("------------------------------ \n");

switch (escolhaatributo1)
{
case 1:
  printf("Você escolheu o atributo População!\n");
  resultado1 = populacao1 > populacao2 ? 1 : 0;
  printf("População carta 1: %lu / População carta 2: %lu\n", populacao1, populacao2);
  break;
case 2:
  printf("Você escolheu o atributo Área!\n");
  resultado1 = area1 > area2 ? 1 : 0;
  printf("Área carta 1: %f / Área carta 2: %f\n", area1, area2);
  break;
case 3:
  printf("Você escolheu o atributo PIB!\n");
  resultado1 = pib1 > pib2 ? 1 : 0;
  printf("PIB carta 1: %f / PIB carta 2: %f\n", pib1, pib2);
  break;
case 4:
  printf("Você escolheu o atributo Pontos turísticos!\n");
  resultado1 = pontos1 > pontos2 ? 1 : 0;
  printf("Pontos turísticos carta 1: %d / Pontos turísticos carta 2: %d\n", pontos1, pontos2);
  break;
case 5:
  printf("Você escolheu o atributo Densidade populacional (menor vence)!\n");
  resultado1 = densidade1 < densidade2? 1 : 0;
  printf("Densidade carta 1: %f / Densidade carta 2: %f\n", densidade1, densidade2);
  break;
case 6:
  printf("Você escolheu o atributo Super poder!\n");
  resultado1 = superpoder1 > superpoder2 ? 1 : 0;
  printf("Super poder carta 1: %f / Super poder carta 2: %f\n", superpoder1, superpoder2);
  break;
default:
    printf("Opção inválida!\n");
  break;
}

printf("------------------------------ \n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Número de pontos turísticos\n");
printf("5. Densidade populacional\n");
printf("6. Super Poder\n");

printf("Escolha o segundo atributo para comparação (diferente do primeiro atributo): ");
scanf("%d", &escolhaatributo2);
printf("------------------------------ \n");

if (escolhaatributo1 == escolhaatributo2)
{
  printf("Você escolheu o mesmo atributo!\n");
} else {
  switch (escolhaatributo2)
{
  case 1:
    printf("Você escolheu o atributo População!\n");
    resultado2 = populacao1 > populacao2 ? 1 : 0;
    printf("População carta 1: %lu / População carta 2: %lu\n", populacao1, populacao2);
    printf("------------------------------ \n");
    break;
  case 2:
    printf("Você escolheu o atributo Área!\n");
    resultado2 = area1 > area2 ? 1 : 0;
    printf("Área carta 1: %f / Área carta 2: %f\n", area1, area2);
    printf("------------------------------ \n");
    break;
  case 3:
    printf("Você escolheu o atributo PIB!\n");
    resultado2 = pib1 > pib2 ? 1 : 0;
        printf("PIB carta 1: %f / PIB carta 2: %f\n", pib1, pib2);
    printf("------------------------------ \n");
    break;
  case 4:
    printf("Você escolheu o atributo Pontos turísticos!\n");
    resultado2 = pontos1 > pontos2 ? 1 : 0;
    printf("Pontos turísticos carta 1: %d / Pontos turísticos carta 2: %d\n", pontos1, pontos2);
    printf("------------------------------ \n");
    break;
  case 5:
    printf("Você escolheu o atributo Densidade populacional (menor vence)!\n");
    resultado2 = densidade1 < densidade2? 1 : 0;
    printf("Densidade carta 1: %f / Densidade carta 2: %f\n", densidade1, densidade2);
    printf("------------------------------ \n");
    break;
  case 6:
    printf("Você escolheu o atributo Super poder!\n");
    resultado2 = superpoder1 > superpoder2 ? 1 : 0;
    printf("Super poder carta 1: %f / Super poder carta 2: %f\n", superpoder1, superpoder2);
    printf("------------------------------ \n");
    break;
  default:
      printf("Opção inválida!\n");
    break;
}
}

if ((resultado1 == 1) && (resultado2 == 1)){
  printf("Carta 1 venceu!\n");
} else if (resultado1 != resultado2){
  printf("Empate!\n");
} else {
  printf("Carta 2 venceu!\n");
}




return 0;


}
