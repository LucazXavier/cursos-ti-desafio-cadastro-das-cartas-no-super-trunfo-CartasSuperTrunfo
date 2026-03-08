#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Lucas Daniel Xavier Barreto

int main(){
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos
       
        /*Carta 1*/
        char estado1;
        char codigo1[4];
        char cidade1[30];
        int populaçao1;
        float area1;
        float PIB1;
        int pontos_turisticos1;
    
        /*Carta 2*/
        char estado2;
        char codigo2[4];
        char cidade2[30];
        int populaçao2;
        float area2;
        float PIB2;
        int pontos_turisticos2;

        /*Cadastro carta 1*/
        printf("Carta 1\nDigite uma letra de 'A' a 'H' para o estado:");
        scanf(" %c", &estado1);
        
        printf("Digite o código da carta:\n");
        scanf("%s", codigo1);

        printf("Digite o nome da cidade:\n");
        scanf("%s", cidade1);

        printf("Digite o número da população:\n");
        scanf("%d", &populaçao1);

        printf("Digite a área da cidade em km²:\n");
        scanf("%f", &area1);

        printf("Digite o PIB da cidade:\n");
        scanf("%f", &PIB1);

        printf("Digite a quantidade de pontos turísticos:\n");
        scanf("%d", &pontos_turisticos1);


        /*Cadastro carta 2*/
        printf("Carta 2\nDigite uma letra de 'A' a 'H' para o estado:\n");
        scanf(" %c", &estado2);
        
        printf("Digite o código da carta:\n");
        scanf("%s", codigo2);

        printf("Digite o nome da cidade:\n");
        scanf("%s", cidade2);

        printf("Digite o número da população:\n");
        scanf("%d", &populaçao2);

        printf("Digite a área da cidade em km²:\n");
        scanf("%f", &area2);

        printf("Digite o PIB da cidade:\n");
        scanf("%f", &PIB2);

        printf("Digite a quantidade de pontos turísticos:\n");
        scanf("%d\n", &pontos_turisticos2);
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    /* Exibição dos Dados da carta 1:*/

        printf("Carta 1 \n");
        printf("Estado: %c \n", estado1);
        printf("Código: %s \n", codigo1);
        printf("Nome da cidade: %s \n", cidade1);
        printf("Número de população: %d \n", populaçao1);
        printf("Área da cidade: %f \n", area1);
        printf("PIB da cidade: %f \n", PIB1);
        printf("Quantidade de pontos túristicos: %d\n", pontos_turisticos1);

    /* Exibição dos Dados da carta 2:*/

        printf("Carta 2 \n");
        printf("Estado: %c \n", estado2);
        printf("Código: %s \n", codigo2);
        printf("Nome da cidade: %s \n", cidade2);
        printf("Número de população: %d \n", populaçao2);
        printf("Área da cidade: %.3f KM² \n", area2);
        printf("PIB da cidade: %f \n", PIB2);
        printf("Quantidade de pontos túristicos: %d \n", pontos_turisticos2);
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}