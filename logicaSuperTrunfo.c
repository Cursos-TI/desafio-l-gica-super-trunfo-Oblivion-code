#include <stdio.h>

int main() {
    // Menu interativo do jogo
    int opcao;

    printf ("\nMenu Principal\n");
    printf ("\n1. Iniciar Jogo\n");
    printf ("2. Ver Regras\n");
    printf ("3. Sair\n");
    printf ("\nEscolha uma Opção:\n");
    scanf ("%d", &opcao);

    switch (opcao) {
        case 1: {
            // Declaração de variáveis
            char estado1[3], estado2[3];
            char codigo_da_carta1[4], codigo_da_carta2[4];
            char nome_da_cidade1[15], nome_da_cidade2[15];
            unsigned long int populacao1, populacao2;
            float area_em_km21, area_em_km22;
            float PIB1, PIB2;
            int numero_de_pontos_turisticos1, numero_de_pontos_turisticos2;
            float densidadePopulacional1, densidadePopulacional2;
            float PIBPercapta1, PIBPercapta2;

            printf ("\n****Iniciando Jogo****\n");

            // Receber dados da primeira carta
            printf ("\nInsira as Informações da Primeira Carta \n");
            printf ("\nQual o Estado?: (utilize apenas a inicial)\n");
            scanf (" %s", estado1);

            printf ("\nQual o Código da Carta? (Inicial do estado e dois numeros de 01 a 04)\n");
            scanf ("%s", codigo_da_carta1);

            printf ("\nQual a Cidade?:\n");
            scanf ("%s", nome_da_cidade1);

            printf ("\nQual a População da Cidade?: \n");
            scanf ("%lu", &populacao1);

            printf ("\nQual a Área (em km²)?: \n");
            scanf ("%f", &area_em_km21);

            printf ("\nQual o PIB da Cidade?: \n");
            scanf ("%f", &PIB1);

            printf("\nQual o número de Pontos Turístico?: \n");
            scanf ("%d", &numero_de_pontos_turisticos1);

            // Cálculo densidade populacional
            densidadePopulacional1 = populacao1 / area_em_km21;
            PIBPercapta1 = PIB1 / populacao1;

            printf ("\n--------------------------------------------------------------\n");

            // Segunda carta
            printf ("\nInsira as Informações da Segunda Carta \n");

            printf ("\nQual o Estado?: (utilize apenas a inicial)\n");
            scanf ("%s", estado2);

            printf ("\nQual o Código da Carta? (Inicial do estado e dois numeros de 01 a 04)\n");
            scanf ("%s", codigo_da_carta2);

            printf ("\nQual a Cidade?:\n");
            scanf ("%s", nome_da_cidade2);

            printf ("\nQual a População da Cidade?: \n");
            scanf ("%lu", &populacao2);

            printf ("\nQual a Área (em km²)?: \n");
            scanf ("%f", &area_em_km22);

            printf ("\nQual o PIB da Cidade?: \n");
            scanf ("%f", &PIB2);

            printf("\nQual o número de Pontos Turístico?: \n");
            scanf ("%d", &numero_de_pontos_turisticos2);

            // Cálculo densidade populacional
            densidadePopulacional2 = populacao2 / area_em_km22;
            PIBPercapta2 = PIB2 / populacao2;

            // Comparação de cartas
            int atributo;
            printf("\nEscolha o atributo para comparar as cartas:\n");
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Número de Pontos Turísticos\n");
            printf("5. Densidade Populacional\n");
            printf("6. PIB Per Capta\n");
            printf("Digite o número correspondente ao atributo: ");
            scanf("%d", &atributo);

            printf ("\n--------------------------------------------------------------\n");

            // Exibição carta 1
            printf("Carta 1:\n");
            printf ("Estado: %s \n", estado1);
            printf ("Código: %s \n", codigo_da_carta1);
            printf ("Nome da Cidade: %s \n", nome_da_cidade1);
            printf ("População: %lu \n", populacao1);
            printf ("Área: %.2f km² \n", area_em_km21);
            printf ("PIB: R$%.2f Bilhões \n", PIB1);
            printf ("Número de Pontos Turísticos: %d \n", numero_de_pontos_turisticos1);
            printf ("Densidade Populacional: %.2f Pessoas/km² \n", densidadePopulacional1);
            printf ("PIB Per Capta: R$%.2f \n", PIBPercapta1);

            printf ("\n--------------------------------------------------------------\n");

            // Exibição carta 2
            printf("\nCarta 2:\n");
            printf ("Estado: %s \n", estado2);
            printf ("Código: %s \n", codigo_da_carta2);
            printf ("Nome da Cidade: %s \n", nome_da_cidade2);
            printf ("População: %lu \n", populacao2);
            printf ("Área: %.2f km² \n", area_em_km22);
            printf ("PIB: R$%.2f Bilhões \n", PIB2);
            printf ("Número de Pontos Turísticos: %d \n", numero_de_pontos_turisticos2);
            printf ("Densidade Populacional: %.2f Pessoas/km² \n", densidadePopulacional2);
            printf ("PIB Per Capta: R$%.2f \n", PIBPercapta2);

            // Comparação
            switch (atributo) {
                case 1:
                    printf ("\nComparação de cartas - Atributo: População\n");
                    printf ("%s: %lu habitantes\n", nome_da_cidade1, populacao1);
                    printf ("%s: %lu habitantes\n", nome_da_cidade2, populacao2);
                    if (populacao1 > populacao2)
                        printf("\nResultado: Carta 1 (%s) venceu!\n", nome_da_cidade1);
                    else if (populacao2 > populacao1)
                        printf("\nResultado: Carta 2 (%s) venceu!\n", nome_da_cidade2);
                    else
                        printf("\nEmpate!\n");
                    break;
                
                case 2:
                    printf ("\nComparação de cartas - Atributo: Área\n");
                    printf ("%s: %.2f km²\n", nome_da_cidade1, area_em_km21);
                    printf ("%s: %.2f km²\n", nome_da_cidade2, area_em_km22);
                    if (area_em_km21 > area_em_km22)
                        printf("\nResultado: Carta 1 (%s) venceu!\n", nome_da_cidade1);
                    else if (area_em_km22 > area_em_km21)
                        printf("\nResultado: Carta 2 (%s) venceu!\n", nome_da_cidade2);
                    else
                        printf("\nEmpate!\n");
                    break;
            
                case 3:
                    printf ("\nComparação de cartas - Atributo: PIB\n");
                    printf ("%s: R$%.2f bilhões\n", nome_da_cidade1, PIB1);
                    printf ("%s: R$%.2f bilhões\n", nome_da_cidade2, PIB2);
                    if (PIB1 > PIB2)
                        printf("\nResultado: Carta 1 (%s) venceu!\n", nome_da_cidade1);
                    else if (PIB2 > PIB1)
                        printf("\nResultado: Carta 2 (%s) venceu!\n", nome_da_cidade2);
                    else
                        printf("\nEmpate!\n");
                    break;
            
                case 4:
                    printf ("\nComparação de cartas - Atributo: Número de Pontos Turísticos\n");
                    printf ("%s: %d pontos\n", nome_da_cidade1, numero_de_pontos_turisticos1);
                    printf ("%s: %d pontos\n", nome_da_cidade2, numero_de_pontos_turisticos2);
                    if (numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2)
                        printf("\nResultado: Carta 1 (%s) venceu!\n", nome_da_cidade1);
                    else if (numero_de_pontos_turisticos2 > numero_de_pontos_turisticos1)
                        printf("\nResultado: Carta 2 (%s) venceu!\n", nome_da_cidade2);
                    else
                        printf("\nEmpate!\n");
                    break;
            
                case 5:
                    printf ("\nComparação de cartas - Atributo: Densidade Demográfica (quanto menor, melhor)\n");
                    printf ("%s: %.2f pessoas/km²\n", nome_da_cidade1, densidadePopulacional1);
                    printf ("%s: %.2f pessoas/km²\n", nome_da_cidade2, densidadePopulacional2);
                    if (densidadePopulacional1 < densidadePopulacional2)
                        printf("\nResultado: Carta 1 (%s) venceu!\n", nome_da_cidade1);
                    else if (densidadePopulacional2 < densidadePopulacional1)
                        printf("\nResultado: Carta 2 (%s) venceu!\n", nome_da_cidade2);
                    else
                        printf("\nEmpate!\n");
                    break;
            
                case 6:
                    printf ("\nComparação de cartas - Atributo: PIB Per Capta\n");
                    printf ("%s: R$%.2f por pessoa\n", nome_da_cidade1, PIBPercapta1);
                    printf ("%s: R$%.2f por pessoa\n", nome_da_cidade2, PIBPercapta2);
                    if (PIBPercapta1 > PIBPercapta2)
                        printf("\nResultado: Carta 1 (%s) venceu!\n", nome_da_cidade1);
                    else if (PIBPercapta2 > PIBPercapta1)
                        printf("\nResultado: Carta 2 (%s) venceu!\n", nome_da_cidade2);
                    else
                        printf("\nEmpate!\n");
                    break;
            
                default:
                    printf("\nOpção inválida! Nenhuma comparação realizada.\n");
                    break;
            }
            
            break; // <-- final do case 1
        }

        case 2:
            printf ("\nRegras do Jogo:\n");
            printf("\n1. Escolha uma opção no menu.\n");
            printf("2. Se você escolher 'Iniciar Jogo', preencha as informações questionadas.\n");
            printf("3. O jogo termina quando você escolhe 'Sair'.\n");
            break;

        case 3:
            printf ("Saindo...\n");
            break;

        default:
            printf ("Opção inválida. Tente novamente.\n");
    }

    return 0;
}
