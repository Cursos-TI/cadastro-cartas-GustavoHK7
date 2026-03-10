#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
// Cada carta deve conter as seguintes informações: Estado, Código da carta, Nome da Cidade, População, Área em km², Pib em bilhões de reais e Número de Pontos turísticos.
// Objetivo: No nível Aventureiro você deve calcular a densidade populacional e o pib percapita utilizando as fórmulas: Densidade Populacional = População / Área e Pib percapita = População / Pib para descobrir o quociente da operação e exibir os resultados utilizando printf com duas casas decimais.
//Objetivo no nível mestre aplicar a comparação entre as cartas para declarar um vencedor. 


// Área para definição das variáveis para armazenar as propriedades das cidades;
int main() {
    //variáveis para armazenar os dados da carta 1:
    char estadoA[20], codigodacartaA[10], cidadeA[20];//utilização da variável de caractere unico para armazenar os dados: Estado, Código da carta e Nome da Cidade.
    int ptA; //utilização da variável de número inteiro para armazenar os dados: População e Pontos Turísticos.
    unsigned long int populacaoA;//utilização da variável de número inteiro sem sinal para armazenar os dados: População, pois a população não pode ser negativa. 
    float areaA, pibA;//utilização da variável de ponto flutuante para armazenar os dados: Área em km² e Pib em bilhões de reais.
    float densidadepopulacionalA;//utilização da variável de ponto flutuante para armazenar o resultado do cálculo da densidade populacional.
    float pibpercapitaA;//utilização da variável de ponto flutuante para armazenar o resultado do cálculo do pib percapita.
    float superpoderA = (populacaoA + pibA + ptA + pibpercapitaA) - (densidadepopulacionalA);//utilização da variável de ponto flutuante para armazenar o resultado do cálculo do superpoder da carta A utilizando a fórmula: Superpoder = Área + Pib + Pontos Turísticos + Densidade Populacional + Pib percapita para descobrir a soma dos valores das propriedades da carta A.
   
    
    //variáveis para armazenar os dados da carta 2:
    char estadoB[20], codigodacartaB[10], cidadeB[20];
    int ptB;
    unsigned long int populacaoB;
    float areaB, pibB;
    float densidadepopulacionalB;
    float pibpercapitaB;
    float superpoderB = (populacaoB + pibB + ptB + pibpercapitaB) - (densidadepopulacionalB);

    //utilização da variável inteira para armazenar o resultado da comparação entre as cartas 1 e 2.
    int resultado;
    // Área para entrada de dados utilizando scanf:
    
    //carta 1:
    printf("Digite o Estado: \n");
    scanf("%s", estadoA);
    
    printf("Digite o Código Da Carta: \n");
    scanf("%s", codigodacartaA);

    printf("Digite o Nome Da Cidade: \n");
    scanf("%s", cidadeA);

    printf("digite a População: \n");
    scanf("%lu", &populacaoA);

    printf("Área: \n");
    scanf("%f", &areaA);

    printf("Pib: \n");
    scanf("%f", &pibA);

    printf("Número de Pontos turísticos: \n");
    scanf("%d", &ptA);

    densidadepopulacionalA = (float)(populacaoA / areaA);//cálculo da densidade populacional utilizando a fórmula: Densidade Populacional = População / Área para descobrir o quociente da operação
    pibpercapitaA = (float)(populacaoA / pibA);//cálculo do pib percapita utilizando a fórmula: Pib percapita = População / Pib para descobrir o quociente da operação.

    //carta 2:
    printf("Digite o Estado: \n");
    scanf("%s", estadoB);
    
    printf("Digite o Código Da Carta: \n");
    scanf("%s", codigodacartaB);

    printf("Digite o Nome Da Cidade: \n");
    scanf("%s", cidadeB);

    printf("digite a População: \n");
    scanf("%lu", &populacaoB);

    printf("Área: \n");
    scanf("%f", &areaB);

    printf("Pib: \n");
    scanf("%f", &pibB);

    printf("Número de Pontos turísticos: \n");
    scanf("%d", &ptB);

    densidadepopulacionalB = (float)(populacaoB / areaB);
    pibpercapitaB = (float)(populacaoB / pibB);

    // Área para exibição dos dados da cidade utilizando printf:
    
    //carta 1: 
    printf("Estado: %s \n", estadoA);//utilização do "%s" para exibir os dados armazenados nas variáveis de caractere unico.
    printf("Código da Carta: %s \n", codigodacartaA);//utilização do "%s" para exibir os dados armazenados nas variáveis de caractere unico.
    printf("Nome da Cidade: %s \n", cidadeA);//utilização do "%s" para exibir os dados armazenados nas variáveis de caractere unico.
    printf("População: %lu \n", populacaoA);//utilização do "%lu" para exibir os dados armazenados nas variáveis de número inteiro sem sinal.
    printf("Area(em km²): %.2f km² \n", areaA);//utilização do "%.2f" para exibir os dados armazenados nas variáveis de ponto flutuante com duas casas decimais.
    printf("Pib: %.2f bilhões de reais \n", pibA);//utilização do "%.2f" para exibir os dados armazenados nas variáveis de ponto flutuante com duas casas decimais.
    printf("Número de Pontos turísticos: %d \n", ptA);//utilização do "%d" para exibir os dados armazenados nas variáveis de número inteiro.
    printf("Densidade Populacional: %.2f \n", densidadepopulacionalA);//utilização do "%.2f" para exibir os dados armazenados nas variáveis de ponto flutuante com duas casas decimais.
    printf("Pib percapita: %.2f \n", pibpercapitaA);//utilização do "%.2f" para exibir os dados armazenados nas variáveis de ponto flutuante com duas casas decimais.

    //carta 2:
    printf("Estado: %s \n", estadoB);
    printf("Código da Carta: %s \n", codigodacartaB);
    printf("Nome da Cidade: %s \n", cidadeB);
    printf("População: %lu \n", populacaoB);
    printf("Area(em km²): %.2f km² \n", areaB);
    printf("Pib: %.2f bilhões de reais \n", pibB);
    printf("Número de Pontos turísticos: %d \n", ptB);
    printf("Densidade Populacional: %.2f \n", densidadepopulacionalB);
    printf("Pib percapita: %.2f \n", pibpercapitaB);
    
    //Área para inicialização da variável inteira resultado:
    
    resultado = (populacaoA > populacaoB);//utilização do operador de subtração para comparar os dados armazenados nas variáveis de número inteiro sem sinal e armazenar o resultado da comparação na variável inteira resultadoA.
    resultado = (areaA > areaB);//utilização do operador de subtração para comparar os dados armazenados nas variáveis de ponto flutuante e armazenar o resultado da comparação na variável inteira resultadoA.
    resultado = (pibA > pibB);//utilização do operador de subtração para comparar os dados armazenados nas variáveis de ponto flutuante e armazenar o resultado da comparação na variável inteira resultadoB.
    resultado = (ptA > ptB);//utilização do operador de subtração para
    resultado = (densidadepopulacionalA > densidadepopulacionalB);//utilização do operador de subtração para comparar os dados armazenados nas variáveis de ponto flutuante e armazenar o resultado da comparação na variável inteira resultadoB.
    resultado = (pibpercapitaA > pibpercapitaB);//utilização
    resultado = (superpoderA > superpoderB);//utilização do operador de subtração para comparar os dados armazenados nas variáveis de ponto flutuante e armazenar o resultado da comparação na variável inteira resultadoB.    
    
    resultado = (populacaoB > populacaoA);//utilização do operador de subtração para comparar os dados armazenados nas variáveis de número inteiro sem sinal e armazenar o resultado da comparação na variável inteira resultadoA.
    resultado = (areaB > areaA);//utilização do operador de subtração para comparar os dados armazenados nas variáveis de ponto flutuante e armazenar o resultado da comparação na variável inteira resultadoA.
    resultado = (pibB > pibA);//utilização do operador de subtração para comparar os dados armazenados nas variáveis de ponto flutuante e armazenar o resultado da comparação na variável inteira resultadoB.
    resultado = (ptB > ptA);//utilização do operador de subtração para
    resultado = (densidadepopulacionalB > densidadepopulacionalA);//utilização do operador de subtração para comparar os dados armazenados nas variáveis de ponto flutuante e armazenar o resultado da comparação na variável inteira resultadoB.
    resultado = (pibpercapitaB > pibpercapitaA);//utilização
    resultado = (superpoderB > superpoderA);//utilização do operador de subtração para comparar os dados armazenados nas variáveis de ponto flutuante e armazenar o resultado da comparação na variável inteira resultadoB.    
    
    //Área para exibição da comparação e decisão do vencedor entre as cartas 1 e 2:
    printf("População: carta 1 (%lu) é maior que a carta 2 (%lu) ? carta 1 vence (%d) \n", populacaoA, populacaoB, (populacaoA > populacaoB));//utilização do operador ternário para comparar os dados armazenados nas variáveis de número inteiro sem sinal e exibir a resposta utilizando printf.
    printf("Área: carta 1 (%.2f) maior que a carta 2 (%.2f) ? carta 1 vence (%d) \n", areaA, areaB, (areaA > areaB));//utilização do operador ternário para comparar os dados armazenados nas variáveis de ponto flutuante e exibir a resposta utilizando printf.
    printf("Pib: carta 1 (%.2f) é maior que a carta 2 (%.2f) ? carta 1 vence (%d) \n", pibA, pibB, (pibA > pibB));//utilização do operador ternário para comparar os dados armazenados nas variáveis de ponto flutuante e exibir a resposta utilizando printf.
    printf("Número de Pontos turísticos: carta 1 (%d) é maior que a carta 2 (%d) ? carta 1 vence (%d) \n", ptA, ptB, (ptA > ptB));//utilização do operador ternário para comparar os dados armazenados nas variáveis de número inteiro e exibir a resposta utilizando printf.
    printf("Densidade Populacional: carta 1 (%.2f) é maior que a carta 2(%.2f)? carta 1 vence (%d) \n", densidadepopulacionalA, densidadepopulacionalB, (densidadepopulacionalA > densidadepopulacionalB));//utilização do operador ternário para comparar os dados armazenados nas variáveis de ponto flutuante e exibir a resposta utilizando printf.
    printf("Pib percapita: carta 1 (%.2f) é maior que a carta 2 (%.2f) ? carta 1 vence (%d) \n", pibpercapitaA, pibpercapitaB, (pibpercapitaA > pibpercapitaB));//utilização do operador ternário para comparar os dados armazenados nas variáveis de ponto flutuante e exibir a resposta utilizando printf.
    printf("Superpoder: carta 1 (%.2f) é maior que a carta 2 (%.2f) ? carta 1 vence (%d) \n", superpoderA, superpoderB, (superpoderA > superpoderB));//utilização do operador ternário para comparar os dados armazenados nas variáveis de ponto flutuante e exibir a resposta utilizando printf.
    
    printf("População: carta 2 (%lu) é maior que a carta 1 (%lu) ? carta 2 vence (%d) \n", populacaoB, populacaoA, (populacaoB > populacaoA));//utilização do operador ternário para comparar os dados armazenados nas variáveis de número inteiro sem sinal e exibir a resposta utilizando printf.
    printf("Área: carta 2 (%.2f) maior que a carta 1 (%.2f) ? carta 2 vence (%d) \n", areaB, areaA, (areaB > areaA));//utilização do operador ternário para comparar os dados armazenados nas variáveis de ponto flutuante e exibir a resposta utilizando printf.
    printf("Pib: carta 2 (%.2f) é maior que a carta 1 (%.2f) ? carta 2 vence (%d) \n", pibB, pibA, (pibB > pibA));//utilização do operador ternário para comparar os dados armazenados nas variáveis de ponto flutuante e exibir a resposta utilizando printf.
    printf("Número de Pontos turísticos: carta 2 (%d) é maior que a carta 1 (%d) ? carta 2 vence (%d) \n", ptB, ptA, (ptB > ptA));//utilização do operador ternário para comparar os dados armazenados nas variáveis de número inteiro e exibir a resposta utilizando printf.
    printf("Densidade Populacional: carta 2 (%.2f) é maior que a carta 1 (%.2f)? carta 2 vence (%d) \n", densidadepopulacionalB, densidadepopulacionalA, (densidadepopulacionalB > densidadepopulacionalA));//utilização do operador ternário para comparar os dados armazenados nas variáveis de ponto flutuante e exibir a resposta utilizando printf.
    printf("Pib percapita: carta 2 (%.2f) é maior que a carta 1 (%.2f) ? carta 2 vence (%d) \n", pibpercapitaB, pibpercapitaA, (pibpercapitaB > pibpercapitaA));//utilização do operador ternário para comparar os dados armazenados nas variáveis de ponto flutuante e exibir a resposta utilizando printf.
    printf("Superpoder: carta 2 (%.2f) é maior que a carta 1 (%.2f) ? carta 2 vence (%d) \n", superpoderB, superpoderA, (superpoderB > superpoderA));//utilização do operador ternário para comparar os dados armazenados nas variáveis de ponto flutuante e exibir a resposta utilizando printf.
    
    return 0;

} 

