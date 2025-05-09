#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    printf("DESAFIO SUPER TRUNFO DE PAÍSES\n");

    char estado1;
    //definição de estado 

    char codcarta1[4];
    //definição código da carta

    char cidade1[50];
    //definição nome da cidade

    int populacao1;
    //definição numero população 

    int pontoturistico1;
    //definição a quantidade de pontos turisticos 

    float area1;
    //definição em KM²
 
    float pib1;
    //definição em Produto Interno Bruto

   


    //país 2


    char estado2;
    //definição de estado 

    char codcarta2[4];
    //definição código da carta

    char cidade2[50];
    //definição nome da cidade

    int populacao2;
    //definição numero população 

    int pontoturistico2;
    //definição a quantidade de pontos turisticos 

    float area2;
    //definição em KM²
 
    float pib2;
    //definição em Produto Interno Bruto




    //Inicialização

    printf("Cadrastro Carta 1\n");

    printf("Escolha uma letra de A á H:");
    scanf("%c",&estado1);

    
    printf("Nome da cidade:");
    scanf("%s",&cidade1);
    
    
    printf("População/Habitantes:");
    scanf(" %d",&populacao1);




 






    //printf("");
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
