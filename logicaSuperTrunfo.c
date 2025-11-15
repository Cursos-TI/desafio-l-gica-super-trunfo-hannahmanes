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
    int pontos_turisticos = 50, pontos_turisticos2 = 50;
	float area = 1521.11, area2 = 1521.11; // 1200.25 
    float pib = 699.28, pib2 = 300.50;
	float densidade_populacional1, densidade_populacional2;
    int opcao, comparacao1, comparacao2;
    float result1_1, result2_1, result1_2, result2_2, soma1, soma2;

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
            printf("Escolha o primeiro atributo para comparar: \n");
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Número de pontos turísticos\n");
            printf("5. Densidade demográfica\n");
            scanf("%d", &comparacao1);

            // Area para seleção de atributos a serem comparados
            switch (comparacao1) {
                case 1:
                    printf("\n%s - População: %d\n", nome, populacao);
                    printf("         X\n");
                    printf("%s - População: %d\n\n", nome2, populacao2);
                    result1_1 = populacao;
                    result2_1 = populacao2;
                    if (populacao > populacao2) {
                        printf("%s tem a maior população!\n", nome);
                    } else if (populacao < populacao2) {
                        printf("%s tem a maior população!\n", nome2);
                    } else {
                        printf("Empate!\n");
                    }
                    break;
                case 2:
                    printf("\n%s - Área: %.2f km²\n", nome, area);
                    printf("         X\n");
                    printf("%s - Área: %.2f km²\n\n", nome2, area2);
                    result1_1 = area;
                    result2_1 = area2;
                    if (area > area2) {
                        printf("%s tem a maior área!\n", nome);
                    } else if (area < area2) {
                        printf("%s tem a maior área!\n", nome2);
                    } else {
                        printf("Empate!\n");
                    }
                    break;
                case 3:
                    printf("\n%s - PIB: %.2f bilhões\n", nome, pib);
                    printf("         X\n");
                    printf("%s - PIB: %.2f bilhões\n\n", nome2, pib2);
                    result1_1 = pib;
                    result2_1 = pib2;
                    if (pib > pib2) {
                        printf("%s tem o maior PIB!\n", nome);
                    } else if (pib < pib2) {
                        printf("%s tem o maior PIB!\n", nome2);
                    } else {
                        printf("Empate!\n");
                    }
                    break;
                case 4:
                    printf("\n%s - Pontos turísticos: %d\n", nome, pontos_turisticos);
                    printf("         X\n");
                    printf("%s - Pontos turísticos: %d\n\n", nome2, pontos_turisticos2);
                    result1_1 = pontos_turisticos;
                    result2_1 = pontos_turisticos2;
                    if (pontos_turisticos > pontos_turisticos2) {
                        printf("%s tem mais pontos turísticos!\n", nome);
                    } else if (pontos_turisticos < pontos_turisticos2) {
                        printf("%s tem mais pontos turísticos!\n", nome2);
                    } else {
                        printf("Empate!\n");
                    }
                    break;
                case 5:
                    printf("\n%s - Densidade demográfica: %.2f hab/km²\n", nome, densidade_populacional1);
                    printf("         X\n");
                    printf("%s - Densidade demográfica: %.2f hab/km²\n\n", nome2, densidade_populacional2);
                    result1_1 = densidade_populacional1;
                    result2_1 = densidade_populacional2;
                    if (densidade_populacional1 < densidade_populacional2) {
                        printf("%s tem a menor densidade demográfica!\n", nome);
                    } else if (densidade_populacional1 > densidade_populacional2) {
                        printf("%s tem a menor densidade demográfica!\n", nome2);
                    } else {
                        printf("Empate!\n");
                    }
                    break;
                default:
                    printf("Opção inválida!\n");
            }
            printf("\nEscolha o segundo atributo para comparar: \n");
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Número de pontos turísticos\n");
            printf("5. Densidade demográfica\n");
            scanf("%d", &comparacao2);

            if (comparacao1 != comparacao2) {
                switch (comparacao2) {
                case 1:
                    printf("\n%s - População: %d\n", nome, populacao);
                    printf("         X\n");
                    printf("%s - População: %d\n\n", nome2, populacao2);
                    result1_2 = populacao;
                    result2_2 = populacao2;
                    if (populacao > populacao2) {
                        printf("%s tem a maior população!\n", nome);
                    } else if (populacao < populacao2) {
                        printf("%s tem a maior população!\n", nome2);
                    } else {
                        printf("Empate!\n");
                    }
                    break;
                case 2:
                    printf("\n%s - Área: %.2f km²\n", nome, area);
                    printf("         X\n");
                    printf("%s - Área: %.2f km²\n\n", nome2, area2);
                    result1_2 = area;
                    result2_2 = area2;
                    if (area > area2) {
                        printf("%s tem a maior área!\n", nome);
                    } else if (area < area2) {
                        printf("%s tem a maior área!\n", nome2);
                    } else {
                        printf("Empate!\n");
                    }
                    break;
                case 3:
                    printf("\n%s - PIB: %.2f bilhões\n", nome, pib);
                    printf("         X\n");
                    printf("%s - PIB: %.2f bilhões\n\n", nome2, pib2);
                    result1_2 = pib;
                    result2_2 = pib2;
                    if (pib > pib2) {
                        printf("%s tem o maior PIB!\n", nome);
                    } else if (pib < pib2) {
                        printf("%s tem o maior PIB!\n", nome2);
                    } else {
                        printf("Empate!\n");
                    }
                    break;
                case 4:
                    printf("\n%s - Pontos turísticos: %d\n", nome, pontos_turisticos);
                    printf("         X\n");
                    printf("%s - Pontos turísticos: %d\n\n", nome2, pontos_turisticos2);
                    result1_2 = pontos_turisticos;
                    result2_2 = pontos_turisticos2;
                    if (pontos_turisticos > pontos_turisticos2) {
                        printf("%s tem mais pontos turísticos!\n", nome);
                    } else if (pontos_turisticos < pontos_turisticos2) {
                        printf("%s tem mais pontos turísticos!\n", nome2);
                    } else {
                        printf("Empate!\n");
                    }
                    break;
                case 5:
                    printf("\n%s - Densidade demográfica: %.2f hab/km²\n", nome, densidade_populacional1);
                    printf("         X\n");
                    printf("%s - Densidade demográfica: %.2f hab/km²\n\n", nome2, densidade_populacional2);
                    result1_2 = densidade_populacional1;
                    result2_2 = densidade_populacional2;
                    if (densidade_populacional1 < densidade_populacional2) {
                        printf("%s tem a menor densidade demográfica!\n", nome);
                    } else if (densidade_populacional1 > densidade_populacional2) {
                        printf("%s tem a menor densidade demográfica!\n", nome2);
                    } else {
                        printf("Empate!\n");
                    }
                default:
                    printf("Opção inválida!\n");
                }
            } else {
                printf("Escolha atributos diferentes!\n");
                break;
            }

            // Area para o resultado final da comparação com a soma
            soma1 = result1_1 + result1_2;
            soma2 = result2_1 + result2_2;

            printf("\nO super poder de %s é: %.2f\n", nome, soma1);
            printf("O super poder de %s é: %.2f\n", nome2, soma2);

            if (soma1 == soma2) printf("\nO jogo empatou!\n");
            else {
                soma1 > soma2 ? printf("\nA carta 1 (%s) é a vencedora!\n", nome) 
                            : printf("A carta 2 (%s) é a vencedora!\n", nome2);
            }

            break;
        case 2:
            printf("\nAdicione as seguintes informações sobre as cartas:\n1. Uma letra para representar o estado.\n2. Um código para a carta.\n3. O nome da cidade.\n4. O total de habitantes da cidade.\n5. A área total da cidade.\n6. O PIB da cidade.\n6. O número de pontos turísticos da cidade.\nEm seguida, escolha dois atributos que você queira comparar.\nPor fim, cheque o resultado da soma desses atributos.\nQual carta foi a vencedora?\n");
            break;
        case 3:
            printf("Saindo do jogo...\n");
            break;
        default:
            printf("Opção inválida!\n");
    }

    return 0;
}
