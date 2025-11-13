#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    // Informações sobre as cartas
    char estado = 'A', estado2 = 'H'; 
    char nome[50] = "São Paulo", nome2[50] = "Rio de Janeiro";
    char codigo[10] = "A01", codigo2[10] = "H01";
	int populacao = 12325000, populacao2 = 6748000; 
    int pontos_turisticos = 50, pontos_turisticos2 = 30;
	float area = 1521.11, area2 = 1200.25; 
    float pib = 699.28, pib2 = 300.50;
	float densidade_populacional1, densidade_populacional2;
    int opcao, comparacao;

    // Cálculo da densidade demográfica
    densidade_populacional1 = (float)populacao / area;
    densidade_populacional2 = (float)populacao2 / area2;

    printf("### Jogo de Super Trunfo ###\n\n");
    // Menu de inicialização
    printf("1. Começar a batalha!\n");
    printf("2. Regras do jogo.\n");
    printf("3. Sair do jogo.\n");
    scanf("%d", &opcao);
    switch(opcao) {
        case 1:
            // Menu interativo de seleção de atributos
            printf("\n### Hora da Batalha! ###\n");
            printf("Escolha um atributo para comparar: \n");
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Número de pontos turísticos\n");
            printf("5. Densidade demográfica\n");
            scanf("%d", &comparacao);

            // Area para comparação
            switch (comparacao) {
                case 1:
                    printf("\n%s - População: %d\n", nome, populacao);
                    printf("         X\n");
                    printf("%s - População: %d\n\n", nome2, populacao2);
                    if (populacao > populacao2) {
                        printf("%s ganhou!\n", nome);
                    } else if (populacao < populacao2) {
                        printf("%s ganhou!\n", nome2);
                    } else {
                        printf("Empate!\n");
                    }
                    break;
                case 2:
                    printf("\n%s - Área: %.2f km²\n", nome, area);
                    printf("         X\n");
                    printf("%s - Área: %.2f km²\n\n", nome2, area2);
                    if (area > area2) {
                        printf("%s ganhou!\n", nome);
                    } else if (area < area2) {
                        printf("%s ganhou!\n", nome2);
                    } else {
                        printf("Empate!\n");
                    }
                    break;
                case 3:
                    printf("\n%s - PIB: %.2f bilhões\n", nome, pib);
                    printf("         X\n");
                    printf("%s - PIB: %.2f bilhões\n\n", nome2, pib2);
                    if (pib > pib2) {
                        printf("%s ganhou!\n", nome);
                    } else if (pib < pib2) {
                        printf("%s ganhou!\n", nome2);
                    } else {
                        printf("Empate!\n");
                    }
                    break;
                case 4:
                    printf("\n%s - Pontos turísticos: %d\n", nome, pontos_turisticos);
                    printf("         X\n");
                    printf("%s - Pontos turísticos: %d\n\n", nome2, pontos_turisticos2);
                    if (pontos_turisticos > pontos_turisticos2) {
                        printf("%s ganhou!\n", nome);
                    } else if (pontos_turisticos < pontos_turisticos2) {
                        printf("%s ganhou!\n", nome2);
                    } else {
                        printf("Empate!\n");
                    }
                    break;
                case 5:
                    printf("\n%s - Densidade demográfica: %.2f hab/km²\n", nome, densidade_populacional1);
                    printf("         X\n");
                    printf("%s - Densidade demográfica: %.2f hab/km²\n\n", nome2, densidade_populacional2);
                    if (densidade_populacional1 < densidade_populacional2) {
                        printf("%s ganhou!\n", nome);
                    } else if (densidade_populacional1 > densidade_populacional2) {
                        printf("%s ganhou!\n", nome2);
                    } else {
                        printf("Empate!\n");
                    }
                    break;
                default:
                    printf("Opção inválida!\n");
            }

            break;
        case 2:
            printf("Adicione as seguintes informações sobre as cartas:\n1. Uma letra para representar o estado.\n2. Um código para a carta.\n3. O nome da cidade.\n4. O total de habitantes da cidade.\n5. A área total da cidade.\n6. O PIB da cidade.\n6. O número de pontos turísticos da cidade.\nEm seguida, escolha qual atributo você quer comparar e, por fim, cheque o resultado.\n");
            break;
        case 3:
            printf("Saindo do jogo...\n");
            break;
        default:
            printf("Opção inválida!\n");
    }

    // Area para calcular densidade e PIB per capita
	// populacao / area
	// densidade_populacional1 = populacao / area;
	// densidade_populacional2 = populacao2 / area2;

	// inverso_densidade_populacional1 = 1 / densidade_populacional1;
	// inverso_densidade_populacional2 = 1 / densidade_populacional2;

	// pib / populacao
	// pib_per_capita1 = (pib * 1000000000.0) / populacao;
	// pib_per_capita2 = (pib2 * 1000000000.0) / populacao2;

	// Cálculo super poder
	// super_poder1 = (float)populacao + area + (pib * 1000000000.0) + (float)pontos_turisticos 
	// 							+ pib_per_capita1 + inverso_densidade_populacional1;
	// super_poder2 = (float)populacao2 + area2 + (pib2 * 1000000000.0) + (float)pontos_turisticos2 
	// 							+ pib_per_capita2 + inverso_densidade_populacional2;


    // *** Nivel Novato ***

    // Sei que era para escolher apenas um, mas fiz todos para praticar.
    // if (populacao > populacao2) {
    //     printf("Carta 1 %s - População: %lu\n", nome, populacao);
    //     printf("Carta 2 %s - População: %lu\n", nome2, populacao2);
    //     printf("Resultado: Carta 1 (%s) venceu!\n\n", nome);
    // } else {
    //     printf("Carta 1 %s - População: %lu\n", nome, populacao);
    //     printf("Carta 2 %s - População: %lu\n", nome2, populacao2);
    //     printf("Resultado: Carta 2 (%s) venceu!\n\n", nome2);
    // }

    // if (area > area2) {
    //     printf("Carta 1 %s - Área: %.2f km²\n", nome, area);
    //     printf("Carta 2 %s - Área: %.2f km²\n", nome2, area2);
    //     printf("Resultado: Carta 1 (%s) venceu!\n\n", nome);
    // } else {
    //     printf("Carta 1 %s - Área: %.2f km²\n", nome, area);
    //     printf("Carta 2 %s - Área: %.2f km²\n", nome2, area2);
    //     printf("Resultado: Carta 2 (%s) venceu!\n\n", nome2);
    // }

    // if (pib > pib2) {
    //     printf("Carta 1 %s - PIB: %.2f bilhões de reais\n", nome, pib);
    //     printf("Carta 2 %s - PIB: %.2f bilhões de reais\n", nome2, pib2);
    //     printf("Resultado: Carta 1 (%s) venceu!\n\n", nome);
    // } else {
    //     printf("Carta 1 %s - PIB: %.2f bilhões de reais\n", nome, pib);
    //     printf("Carta 2 %s - PIB: %.2f bilhões de reais\n", nome2, pib2);
    //     printf("Resultado: Carta 2 (%s) venceu!\n\n", nome2);
    // }

    // if (pontos_turisticos > pontos_turisticos2) {
    //     printf("Carta 1 %s - Pontos Turísticos: %d\n", nome, pontos_turisticos);
    //     printf("Carta 2 %s - Pontos Turísticos: %d\n", nome2, pontos_turisticos2);
    //     printf("Resultado: Carta 1 (%s) venceu!\n\n", nome);
    // } else {
    //     printf("Carta 1 %s - Pontos Turísticos: %d\n", nome, pontos_turisticos);
    //     printf("Carta 2 %s - Pontos Turísticos: %d\n", nome2, pontos_turisticos2);
    //     printf("Resultado: Carta 2 (%s) venceu!\n\n", nome2);
    // }

    // if (densidade_populacional1 < densidade_populacional2) {
    //     printf("Carta 1 %s - Densidade Populacional: %.2f\n", nome, densidade_populacional1);
    //     printf("Carta 2 %s - Densidade Populacional: %.2f\n", nome2, densidade_populacional2);
    //     printf("Resultado: Carta 1 (%s) venceu!\n\n", nome);
    // } else {
    //     printf("Carta 1 %s - Densidade Populacional: %.2f\n", nome, densidade_populacional1);
    //     printf("Carta 2 %s - Densidade Populacional: %.2f\n", nome2, densidade_populacional2);
    //     printf("Resultado: Carta 2 (%s) venceu!\n\n", nome2);
    // }

    // if (pib_per_capita1 > pib_per_capita2) {
    //     printf("Carta 1 %s - Pib Per Capita: %.2f\n", nome, pib_per_capita1);
    //     printf("Carta 2 %s - Pib Per Capita: %.2f\n", nome2, pib_per_capita2);
    //     printf("Resultado: Carta 1 (%s) venceu!\n\n", nome);
    // } else {
    //     printf("Carta 1 %s - Pib Per Capita: %.2f\n", nome, pib_per_capita1);
    //     printf("Carta 2 %s - Pib Per Capita: %.2f\n", nome2, pib_per_capita2);
    //     printf("Resultado: Carta 2 (%s) venceu!\n\n", nome2);
    // }

    // if (super_poder1 > super_poder2) {
    //     printf("Carta 1 %s - Super Poder: %.2Lf\n", nome, super_poder1);
    //     printf("Carta 2 %s - Super Poder: %.2Lf\n", nome2, super_poder2);
    //     printf("Resultado: Carta 1 (%s) venceu!\n\n", nome);
    // } else {
    //     printf("Carta 1 %s - Super Poder: %.2Lf\n", nome, super_poder1);
    //     printf("Carta 2 %s - Super Poder: %.2Lf\n", nome2, super_poder2);
    //     printf("Resultado: Carta 2 (%s) venceu!\n\n", nome2);
    // }

    return 0;
}
