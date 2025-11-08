#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    char estado, estado2, nome[50], nome2[50], codigo[10], codigo2[10];
	// números inteiros para representar a população e pontos turísticos
	int pontos_turisticos, pontos_turisticos2;
    // unsigned possibilita que apenas numeros positivos incluindo o 0 sejam armazenadas e aumenta a capacidade de armazenamento das variaveis junto com long
	unsigned long int populacao, populacao2;
	// números decimais para a área e o pib
	float area, area2, pib, pib2;
	float pib_per_capita1, pib_per_capita2, densidade_populacional1, densidade_populacional2;
	float inverso_densidade_populacional1, inverso_densidade_populacional2;
    // long aumenta a capacidade de armazenamento das variaveis
	long double super_poder1, super_poder2;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

        // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Informações sobre a carta 1 
	printf("Informações sobre a carta 1: \n"); // printf printa as informações e instruções para criação das cartas na tela do terminal
	printf("Insira uma letra de A a H para representar o estado: "); // scanf permite ao usuário inserir as informações desejadas pelo terminal
	scanf(" %c", &estado);

	printf("Insira o código da carta (a letra escolhida para o estado + um número de 01 a 04. Ex: A01, H04): ");
	scanf("%s", codigo);

	printf("Insira o nome da cidade: ");
	scanf("%s", nome);

	printf("Insira o número aproximado de habitantes da cidade (sem pontuação): ");
	scanf("%ld", &populacao);

	printf("Insira a área da cidade em quilômetros quadrados (em números decimais, se necessário): ");
	scanf("%f", &area);

	printf("Insira o PIB (Produto Interno Bruto) da cidade (em números decimais, se necessário. Não é necessário adicionar pontos ou zeros (000) para a casa dos milhões e bilhões): ");
	scanf("%f", &pib);

	printf("Insira o número de pontos turísticos presentes na cidade: ");
	scanf("%d", &pontos_turisticos);

	// Informações sobre a carta 2
	printf("\nInformações sobre a carta 2: \n");
	printf("Insira uma letra de A a H para representar o estado: ");
	scanf(" %c", &estado2);

	printf("Insira o código da carta (a letra escolhida para o estado + um número de 01 a 04. Ex: A01, H04): ");
	scanf("%s", codigo2);

	printf("Insira o nome da cidade: ");
	scanf("%s", nome2);

	printf("Insira o número aproximado de habitantes da cidade (sem pontuação): ");
	scanf("%ld", &populacao2);

	printf("Insira a área da cidade em quilômetros quadrados (em números decimais, se necessário): ");
	scanf("%f", &area2);

	printf("Insira o PIB (Produto Interno Bruto) da cidade (em números decimais, se necessário. Não é necessário adicionar pontos ou zeros (000) para a casa dos milhões e bilhões): ");
	scanf("%f", &pib2);

	printf("Insira o número de pontos turísticos presentes na cidade: ");
	scanf("%d", &pontos_turisticos2);

    // Area para calcular densidade e PIB per capita
	// populacao / area
	densidade_populacional1 = populacao / area;
	densidade_populacional2 = populacao2 / area2;

	inverso_densidade_populacional1 = 1 / densidade_populacional1;
	inverso_densidade_populacional2 = 1 / densidade_populacional2;

	// pib / populacao
	pib_per_capita1 = (pib * 1000000000.0) / populacao;
	pib_per_capita2 = (pib2 * 1000000000.0) / populacao2;

	// Cálculo super poder
	super_poder1 = (float)populacao + area + (pib * 1000000000.0) + (float)pontos_turisticos 
								+ pib_per_capita1 + inverso_densidade_populacional1;
	super_poder2 = (float)populacao2 + area2 + (pib2 * 1000000000.0) + (float)pontos_turisticos2 
								+ pib_per_capita2 + inverso_densidade_populacional2;

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
    
    printf("\nComparação entre as cartas: \n\n");

    if (populacao > populacao2) {
        printf("Carta 1 %s - População: %lu\n", nome, populacao);
        printf("Carta 2 %s - População: %lu\n", nome2, populacao2);
        printf("Resultado: Carta 1 (%s) venceu!\n\n", nome);
    } else {
        printf("Carta 1 %s - População: %lu\n", nome, populacao);
        printf("Carta 2 %s - População: %lu\n", nome2, populacao2);
        printf("Resultado: Carta 2 (%s) venceu!\n\n", nome2);
    }

    if (area > area2) {
        printf("Carta 1 %s - Área: %.2f km²\n", nome, area);
        printf("Carta 2 %s - Área: %.2f km²\n", nome2, area2);
        printf("Resultado: Carta 1 (%s) venceu!\n\n", nome);
    } else {
        printf("Carta 1 %s - Área: %.2f km²\n", nome, area);
        printf("Carta 2 %s - Área: %.2f km²\n", nome2, area2);
        printf("Resultado: Carta 2 (%s) venceu!\n\n", nome2);
    }

    if (pib > pib2) {
        printf("Carta 1 %s - PIB: %.2f bilhões de reais\n", nome, pib);
        printf("Carta 2 %s - PIB: %.2f bilhões de reais\n", nome2, pib2);
        printf("Resultado: Carta 1 (%s) venceu!\n\n", nome);
    } else {
        printf("Carta 1 %s - PIB: %.2f bilhões de reais\n", nome, pib);
        printf("Carta 2 %s - PIB: %.2f bilhões de reais\n", nome2, pib2);
        printf("Resultado: Carta 2 (%s) venceu!\n\n", nome2);
    }

    if (pontos_turisticos > pontos_turisticos2) {
        printf("Carta 1 %s - Pontos Turísticos: %d\n", nome, pontos_turisticos);
        printf("Carta 2 %s - Pontos Turísticos: %d\n", nome2, pontos_turisticos2);
        printf("Resultado: Carta 1 (%s) venceu!\n\n", nome);
    } else {
        printf("Carta 1 %s - Pontos Turísticos: %d\n", nome, pontos_turisticos);
        printf("Carta 2 %s - Pontos Turísticos: %d\n", nome2, pontos_turisticos2);
        printf("Resultado: Carta 2 (%s) venceu!\n\n", nome2);
    }

    if (densidade_populacional1 < densidade_populacional2) {
        printf("Carta 1 %s - Densidade Populacional: %.2f\n", nome, densidade_populacional1);
        printf("Carta 2 %s - Densidade Populacional: %.2f\n", nome2, densidade_populacional2);
        printf("Resultado: Carta 1 (%s) venceu!\n\n", nome);
    } else {
        printf("Carta 1 %s - Densidade Populacional: %.2f\n", nome, densidade_populacional1);
        printf("Carta 2 %s - Densidade Populacional: %.2f\n", nome2, densidade_populacional2);
        printf("Resultado: Carta 2 (%s) venceu!\n\n", nome2);
    }

    if (pib_per_capita1 > pib_per_capita2) {
        printf("Carta 1 %s - Pib Per Capita: %.2f\n", nome, pib_per_capita1);
        printf("Carta 2 %s - Pib Per Capita: %.2f\n", nome2, pib_per_capita2);
        printf("Resultado: Carta 1 (%s) venceu!\n\n", nome);
    } else {
        printf("Carta 1 %s - Pib Per Capita: %.2f\n", nome, pib_per_capita1);
        printf("Carta 2 %s - Pib Per Capita: %.2f\n", nome2, pib_per_capita2);
        printf("Resultado: Carta 2 (%s) venceu!\n\n", nome2);
    }

    if (super_poder1 > super_poder2) {
        printf("Carta 1 %s - Super Poder: %.2Lf\n", nome, super_poder1);
        printf("Carta 2 %s - Super Poder: %.2Lf\n", nome2, super_poder2);
        printf("Resultado: Carta 1 (%s) venceu!\n\n", nome);
    } else {
        printf("Carta 1 %s - Super Poder: %.2Lf\n", nome, super_poder1);
        printf("Carta 2 %s - Super Poder: %.2Lf\n", nome2, super_poder2);
        printf("Resultado: Carta 2 (%s) venceu!\n\n", nome2);
    }

    return 0;
}
