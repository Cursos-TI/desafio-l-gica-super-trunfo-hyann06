#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

// Definição das variáveis para armazenar as propriedades das cidades
// Você pode utilizar o código do primeiro desafio

// Cadastro das Cartas:
// Implemente a lógica para solicitar ao usuário que insira os dados das cidades
// utilizando a função scanf para capturar as entradas.
// utilize o código do primeiro desafio

// Exemplo:
// printf("Digite o código da cidade: ");
// scanf("%s", codigo);
//
// (Repita para cada propriedade)

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

int main()
{
    int opcao;
    unsigned long int populacao, POPULACAO;
    long long int superpoder, SUPERPODER;
    int turistico, TURISTICO;
    float area, AREA;
    float pib, PIB;
    float denp, DENP;     // Densidade populacional
    float pibper, PIBPER; // PIB Percapto
    char estado, ESTADO;
    char nome[30], NOME[30];
    char codigo[30], CODIGO[30];

    printf("BEM VINDO AO JOGO SUPER TRUNFO!\n\n"); // Texto de boas avindas
    printf("1. Jogar\n");
    printf("2. Regras\n");
    printf("3. Sair\n\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    printf("\n\n");

    switch (opcao)
    {
    case 1:

        printf(">Começe cadastrando suas cartas<\n"); // Solicitação pra cadastrar as cartas

        printf("\n");

        // INFORMAÇÕES DA PRIMEIRA CARTA
        printf("    >Carta 1<     \n");
        printf("\n");

        printf("Escolha uma letra de 'A' a 'H': "); // Letra da carta
        scanf(" %c", &estado);

        printf("Digite o código da carta, do '01' ao '04': "); // Numeração da carta
        scanf("%s", codigo);

        printf("Digite o nome do estado: "); // Nome do estado escolhido
        scanf(" %[^\n]", nome);

        printf("Digite a população do estado: ");
        scanf("%lu", &populacao);

        printf("Digite a área do estado: ");
        scanf("%f", &area);

        printf("Digite o PIB do estado: ");
        scanf("%f", &pib);

        printf("Digite a quantidade de pontos turisticos do estado: ");
        scanf("%d", &turistico);

        printf("\n");
        printf("\n");

        // INFORMAÇÕES DA SEGUNDA CARTA
        printf("    >Carta 2<     \n");
        printf("\n");

        printf("Escolha uma letra de 'A' a 'H' que não tenha escolhido antes: ");
        scanf(" %c", &ESTADO);

        printf("Digite o códico da carta, do '01' ao '04': ");
        scanf("%s", CODIGO);

        printf("Digite o nome do estado: ");
        scanf(" %[^\n]", NOME);

        printf("Digite a população do estado: ");
        scanf("%lu", &POPULACAO);

        printf("Digite a área do estado: ");
        scanf("%f", &AREA);

        printf("Digite o pib do estado: ");
        scanf("%f", &PIB);

        printf("Digite a quantidade de pontos turisticos do estado: ");
        scanf("%d", &TURISTICO);

        denp = (float)(populacao / area);  // DENSIDADE POPULACIONAL DA PRIMEIRA CARTA
        DENP = (float)(POPULACAO / AREA);  // DENSIDADE POPULACIONAL DA SEGUNDA CARTA
        pibper = (float)(pib / populacao); // PIB PERCAPTO DA PRIMEIRA CARTA
        PIBPER = (float)(PIB / POPULACAO); // PIB PERCAPTO DA SEGUNDA CARTA
        superpoder = (int)(populacao + area + turistico + pib + (denp / 1) + pibper);
        SUPERPODER = (int)(POPULACAO + AREA + TURISTICO + PIB + (DENP / 1) + PIBPER);

        printf("\n");
        printf("\n");

        printf("    INFORMAÇÕES DAS CARTAS  \n"); // Parte que imprime o quje o usuario preencheu no formulário
        printf("\n");

        printf(">Carta 1 \n"); // Info da primeira carta
        printf("Código: %c%s \n", estado, codigo);
        printf("Nome da Cidade: %s \n", nome);
        printf("População: %lu \n", populacao);
        printf("Área: %.3fKm² \n", area);
        printf("PIB: R$ %.3f \n", pib);
        printf("Numero de pontos turisticos: %d \n", turistico);
        printf("Densidade Populacional: %.2f \n", denp);
        printf("PIB Percapto: %.2f \n", pibper);
        printf("Super Poder: %lld \n", superpoder);

        printf("\n");
        printf("\n");

        printf(">Carta 2 \n"); // ifo da segunda carta
        printf("Código: %c%s \n", ESTADO, CODIGO);
        printf("Nome da Cidade: %s \n", NOME);
        printf("População: %lu \n", POPULACAO);
        printf("Área: %.3fKm² \n", AREA);
        printf("PIB: R$ %.3f \n", PIB);
        printf("Numero de pontos turisticos: %d \n", TURISTICO);
        printf("Densidade Populacional: %.2F \n", DENP);
        printf("PIB Percapto: %.2f \n", PIBPER);
        printf("Super Poder: %lld \n", SUPERPODER);

        printf("\n");
        printf(">COMPARANDO OS ATRIBUTOS< \n"); // comparação de atributos um por um
        printf("\n");

        printf("Carta 1 (1) / Carta 2 (0)\n\n");

        printf("População: (%d) venceu!\n", populacao > POPULACAO);
        printf("Área: (%d) venceu!\n", area > AREA);
        printf("PIB: (%d) venceu!\n", pib > PIB);
        printf("Pontos Turísticos: (%d)venceu!\n", turistico > TURISTICO);
        printf("Densidade Populacional: (%d) venceu!\n", denp < DENP);
        printf("PIB Percapto: (%d) venceu!\n", pibper > PIBPER);
        printf("Super Poder: (%d) venceu!\n\n", superpoder > SUPERPODER);

        printf("Comparação de carta (Atributo: Área)\n\n"); // carta que ganha por um atributo individual

        printf("Carta 1 - %s: %f\n", nome, area);
        printf("Carta 2 - %s: %f\n", NOME, AREA);

        if (area > AREA)
        {
            printf("Carta 1 %s Venceu!\n", nome);
        }
        else
        {
            printf("Carta 2 - %s Venceu!\n", NOME);
        }
        break;

    case 2:
        printf("As regras são...");
        break;
    case 3:

        printf("Deseja sair do Jogo Super Trunfo?: ");
        break;

    defalut:
        printf("!Opçao Inválida!");
        break;
    }
    return 0;
}