#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
// Cada carta deve conter as seguintes informações: Estado, Código da carta, Nome da Cidade, População, Área em km², Pib em bilhões de reais e Número de Pontos turísticos.
// Objetivo: No nível Aventureiro você deve calcular a densidade populacional e o pib percapita utilizando as fórmulas: Densidade Populacional = População / Área e Pib percapita = População / Pib para descobrir o quociente da operação e exibir os resultados utilizando printf com duas casas decimais.
 


// Área para definição das variáveis para armazenar as propriedades das cidades;
int main() {
    char estado[20], codigodacarta[10] ,cidade[20];//utilização da variável de caractere unico para armazenar os dados: Estado, Código da carta e Nome da Cidade.
    int populacao, pt; //utilização da variável de número inteiro para armazenar os dados: População e Pontos Turísticos.
    float area, pib;//utilização da variável de ponto flutuante para armazenar os dados: Área em km² e Pib em bilhões de reais.
    float densidadepopulacional;//utilização da variável de ponto flutuante para armazenar o resultado do cálculo da densidade populacional.
    float pibpercapita;//utilização da variável de ponto flutuante para armazenar o resultado do cálculo do pib percapita.
    
    // Área para entrada de dados utilizando scanf:
    printf("Digite o Estado: \n");
    scanf("%s", estado);
    
    printf("Digite o Código Da Carta: \n");
    scanf("%s", codigodacarta);

    printf("Digite o Nome Da Cidade: \n");
    scanf("%s", cidade);

    printf("digite a População: \n");
    scanf("%d", &populacao);

    printf("Área: \n");
    scanf("%f", &area);

    printf("Pib: \n");
    scanf("%f", &pib);

    printf("Número de Pontos turísticos: \n");
    scanf("%d", &pt);

    densidadepopulacional = (float)(populacao / area);//cálculo da densidade populacional utilizando a fórmula: Densidade Populacional = População / Área para descobrir o quociente da operação
    pibpercapita = (float)(populacao / pib);//cálculo do pib percapita utilizando a fórmula: Pib percapita = População / Pib para descobrir o quociente da operação.
    
  // Área para exibição dos dados da cidade utilizando printf:
    printf("Estado: %s \n", estado);//utilização do "%s" para exibir os dados armazenados nas variáveis de caractere unico.
    printf("Código da Carta: %s \n", codigodacarta);//utilização do "%s" para exibir os dados armazenados nas variáveis de caractere unico.
    printf("Nome da Cidade: %s \n", cidade);//utilização do "%s" para exibir os dados armazenados nas variáveis de caractere unico.
    printf("População: %d \n", populacao);//utilização do "%d" para exibir os dados armazenados nas variáveis de número inteiro.
    printf("Area(em km²): %.2f km² \n", area);//utilização do "%.2f" para exibir os dados armazenados nas variáveis de ponto flutuante com duas casas decimais.
    printf("Pib: %.2f bilhões de reais \n", pib);//utilização do "%.2f" para exibir os dados armazenados nas variáveis de ponto flutuante com duas casas decimais.
    printf("Número de Pontos turísticos: %d \n", pt);//utilização do "%d" para exibir os dados armazenados nas variáveis de número inteiro.
    printf("Densidade Populacional: %.2f \n", densidadepopulacional);//utilização do "%.2f" para exibir os dados armazenados nas variáveis de ponto flutuante com duas casas decimais.
    printf("Pib percapita: %.2f \n", pibpercapita);//utilização do "%.2f" para exibir os dados armazenados nas variáveis de ponto flutuante com duas casas decimais.




 //utilização do "\n" para identação do código.
    return 0;

} 

