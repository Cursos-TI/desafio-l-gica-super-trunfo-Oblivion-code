#include <stdio.h>

int main() {
    // Declaração de variáveis para armazenar os dados das duas cartas
    char estado1[3], estado2[3];
    char codigo_da_carta1[4], codigo_da_carta2 [4];
    char nome_da_cidade1[15], nome_da_cidade2[15];
    unsigned long int populacao1, populacao2;
    float area_em_km21, area_em_km22;
    float PIB1, PIB2;
    int numero_de_pontos_turisticos1, numero_de_pontos_turisticos2;
    float densidadePopulacional1, densidadePopulacional2;
    float PIBPercapta1, PIBPercapta2;
    float superPoder1, superPoder2;

    // Recebimento das Informações da Primeira Carta utilizando o scanf
   
    printf ("Insira as Informações da Primeira Carta \n"); // O printf exibe uma mensagem pedindo a informação ao usuário

    printf ("\nQual o Estado?: (utilize apenas a inicial)\n"); // O scanf recebe um caractere e armazena na variável estado1
    scanf (" %s", estado1);
    
    printf ("\nQual o Código da Carta?:(Inicial do estado e dois numeros de 01 a 04)\n"); // O scanf recebe uma string e armazena na variável codigo_da_carta1
    scanf ("%s", codigo_da_carta1);

    printf ("\nQual a Cidade?:\n"); // O scanf recebe uma string (nome da cidade) e armazena em nome_da_cidade1
    scanf ("%s", nome_da_cidade1);

    printf ("\nQual a População da Cidade?: \n");  // O scanf recebe um número inteiro e armazena em populacao1
    scanf ("%lu", &populacao1);

    printf ("\nQual a Área (em km²)?: \n "); // O scanf recebe um número decimal (float) e armazena em area_em_km21
    scanf ("%f", &area_em_km21);

    printf ("\nQual o PIB da Cidade?: \n");  // O scanf recebe um número decimal (float) e armazena em PIB1
    scanf ("%f", &PIB1);

    printf("\nQual o número de Pontos Turístico?: \n"); // O scanf recebe um número inteiro e armazena em numero_de_pontos_turisticos1
    scanf ("%d", &numero_de_pontos_turisticos1);

    // Cálcular a densidade populacional e o PIB per capita.
    densidadePopulacional1 = (populacao1 / area_em_km21);
    PIBPercapta1 = (PIB1 / populacao1 );

    printf ("\n--------------------------------------------------------------\n");
   
    // Recebimento das Informações da Segunda Carta utilizando o scanf
    printf ("\nInsira as Informações da Segunda Carta \n");

    printf ("\nQual o Estado?: (utilize apenas a inicial)\n");
    scanf ("%s", estado2);
    
    printf ("\nQual o Código da Carta?:(Inicial do estado e dois numeros de 01 a 04)\n");
    scanf ("%s", codigo_da_carta2);

    printf ("\nQual a Cidade?:\n");
    scanf ("%s", nome_da_cidade2);

    printf ("\nQual a População da Cidade?: \n");
    scanf ("%lu", &populacao2);

    printf ("\nQual a Área (em km²)?: \n ");
    scanf ("%f", &area_em_km22);

    printf ("\nQual o PIB da Cidade?: \n");
    scanf ("%f", &PIB2);

    printf("\nQual o número de Pontos Turístico?: \n");
    scanf ("%d", &numero_de_pontos_turisticos2);

    // Cálcular a densidade populacional e o PIB per capita. 
    densidadePopulacional2 = (populacao2 / area_em_km22);
    PIBPercapta2 = (PIB2 / populacao2 );

    
    printf ("\n--------------------------------------------------------------\n");
    
    // Exibindo as informações coletadas da Primeira Carta utilizando printf

    printf("Carta 1:\n");
    printf ("Estado: %s \n", estado1);
    printf ("Código: %s \n", codigo_da_carta1);
    printf ("Nome da Cidade: %s \n", nome_da_cidade1);
    printf ("População: %lu \n", populacao1);
    printf ("Área: %.2f km² \n", area_em_km21);
    printf ("PIB: R$%.2f Bilhões \n", PIB1);
    printf ("Número de Pontos Turísticos: %d \n", numero_de_pontos_turisticos1);
    printf ("Densidade Populacional: %.2f de Pessoas por km² \n", densidadePopulacional1);
    printf ("PIB Per Capta: R$%.2f \n", PIBPercapta1);

    printf ("\n--------------------------------------------------------------\n");
 
    // Exibindo as informações coletadas da Segunda Carta utilizando printf 

    printf("\nCarta 2:\n");
    printf ("Estado: %s \n", estado2);
    printf ("Código: %s \n", codigo_da_carta2);
    printf ("Nome da Cidade: %s \n", nome_da_cidade2);
    printf ("População: %lu \n", populacao2);
    printf ("Área: %.2f km² \n", area_em_km22);
    printf ("PIB: R$%.2f Bilhões \n", PIB2);
    printf ("Número de Pontos Turísticos: %d \n", numero_de_pontos_turisticos2);
    printf ("Densidade Populacional: %.2f de Pessoas por km² \n", densidadePopulacional2);
    printf ("PIB Per Capta: R$%.2f \n", PIBPercapta2);

    // Comparação de cartas
    printf ("\nComparação de cartas (Atributo: População) \n");

    printf ("\nCarta 1 - %s (%s): %lu \n", nome_da_cidade1, estado1, populacao1);
    printf ("Carta 2 - %s (%s): %lu \n", nome_da_cidade2, estado2, populacao2);
   
    //Comparar a População (maior valor vence)

    if (populacao1 > populacao2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", nome_da_cidade1);
    } else if (populacao2 > populacao1) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", nome_da_cidade2);
    }
    return 0;
}