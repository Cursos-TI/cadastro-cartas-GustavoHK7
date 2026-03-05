#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
// Área para definição das variáveis para armazenar as propriedades das cidades
    char estado[20],codigodacarta[10],cidade[20];//utilização da variável de caractere unico para armazenar os dados: Estado, Código da carta e Nome da Cidade.
    int populacao,pt;//utilização da variável de número inteiro para armazenar os dados: População e Pontos Turísticos.
    double area,pib;//utilização da variável de ponto flutuante para armazenar os dados: Área em km² e Pib em bilhões de reais.

// Área para entrada de dados utilizando scanf:
    printf("Digite o Estado: \n");
    scanf("%s", estado);
    
    printf("Digite o Código Da Carta: \n");
    scanf("%s", codigodacarta);

    printf("Digite o Nome Da Cidade: \n");
    scanf("%s", cidade);

    printf("População: \n");
    scanf("%d", &populacao);

    printf("Area(em km²): %.2f \n", area);
    scanf("%lf", &area);

    printf("Pib: %.2f \n", pib);
    scanf("%lf", &pib);

    printf("Número de Pontos turísticos: %d\n", pt);
    scanf("%d", &pt);

// Área para exibição dos dados da cidade
    printf("Estado: %s \n", estado);
    printf("Código da Carta: %s \n", codigodacarta);
    printf("Nome da Cidade: %s \n", cidade);
    printf("População: %d \n", populacao);
    printf("Area(em km²): %.2f km² \n", area);
    printf("Pib: %.2f bilhões de reais \n", pib);
    printf("Número de Pontos turísticos: %d \n", pt);

//utilização do "\n" para a identação.
    return 0;


} 

