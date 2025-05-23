#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Definição das cartas (estados) - Base
    char* estado1 = "São Paulo";
    int populacao1 = 46649132;
    float area1 = 248219.63;
    float pib1_bilhoes = 2348.0; 
    int pontos_turisticos1 = 85;
    
    char* estado2 = "Rio de Janeiro";
    int populacao2 = 17463349;
    float area2 = 43750.42;
    float pib2_bilhoes = 758.0; 
    int pontos_turisticos2 = 112;

    // Declaração das variáveis para os atributos calculados
    float densidade_populacional1;
    float pib_per_capita1;
    float densidade_populacional2;
    float pib_per_capita2;

    // --- CÁLCULO AUTOMÁTICO DOS ATRIBUTOS ---
    // Estado 1
    densidade_populacional1 = (float)populacao1 / area1;
    pib_per_capita1 = (pib1_bilhoes * 1000000000.0) / populacao1;

    // Estado 2
    densidade_populacional2 = (float)populacao2 / area2;
    pib_per_capita2 = (pib2_bilhoes * 1000000000.0) / populacao2;
    // --- FIM DO CÁLCULO AUTOMÁTICO ---
    
    int opcao;
    
    // Cabeçalho do jogo
    printf("=== SUPER TRUNFO - ESTADOS DO BRASIL ===\n\n");
    printf("Iniciando jogo com 2 jogadores...\n\n");
    
    // Exibir carta do jogador com atributos (incluindo os calculados)
    printf("Sua carta:\n");
    printf("----------------------------------------\n");
    printf("Estado: %s\n", estado1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", pib1_bilhoes); // Usando a variável original do PIB
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1); // Valor calculado
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita1);                // Valor calculado
    printf("----------------------------------------\n\n");
    
    // Jogador escolhe o atributo
    printf("Escolha um atributo para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB (em bilhões)\n"); // Esclarecendo a unidade
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("Opção: ");
    scanf("%d", &opcao);
    
    // Validação da entrada
    while (opcao < 1 || opcao > 6) {
        printf("Opção inválida. Por favor, escolha entre 1 e 6: ");
        scanf("%d", &opcao);
    }
    
    // Exibir o atributo escolhido
    char* nome_atributo;
    switch (opcao) {
        case 1: nome_atributo = "População"; break;
        case 2: nome_atributo = "Área"; break;
        case 3: nome_atributo = "PIB (em bilhões)"; break;
        case 4: nome_atributo = "Pontos Turísticos"; break;
        case 5: nome_atributo = "Densidade Populacional"; break;
        case 6: nome_atributo = "PIB per Capita"; break;
    }
    
    printf("\nVocê escolheu comparar: %s\n", nome_atributo);
    
    // Revelar a carta do computador com atributos (incluindo os calculados)
    printf("\nCarta do computador:\n");
    printf("----------------------------------------\n");
    printf("Estado: %s\n", estado2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2_bilhoes); // Usando a variável original do PIB
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2); // Valor calculado
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita2);                // Valor calculado
    printf("----------------------------------------\n\n");
    
    // Comparar os atributos e determinar o vencedor
    int jogador_venceu = 0;
    
    printf("RESULTADO:\n");
    
    switch (opcao) {
        case 1: // População
            printf("Sua População: %d habitantes\n", populacao1);
            printf("População do computador: %d habitantes\n", populacao2);
            jogador_venceu = (populacao1 > populacao2);
            break;
        case 2: // Área
            printf("Sua Área: %.2f km²\n", area1);
            printf("Área do computador: %.2f km²\n", area2);
            jogador_venceu = (area1 > area2);
            break;
        case 3: // PIB (em bilhões)
            printf("Seu PIB: R$ %.2f bilhões\n", pib1_bilhoes);
            printf("PIB do computador: R$ %.2f bilhões\n", pib2_bilhoes);
            jogador_venceu = (pib1_bilhoes > pib2_bilhoes);
            break;
        case 4: // Pontos Turísticos
            printf("Seus Pontos Turísticos: %d\n", pontos_turisticos1);
            printf("Pontos Turísticos do computador: %d\n", pontos_turisticos2);
            jogador_venceu = (pontos_turisticos1 > pontos_turisticos2);
            break;
        case 5: // Densidade Populacional (Calculado)
            printf("Sua Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
            printf("Densidade Populacional do computador: %.2f hab/km²\n", densidade_populacional2);
            jogador_venceu = (densidade_populacional1 > densidade_populacional2);
            break;
        case 6: // PIB per Capita (Calculado)
            printf("Seu PIB per Capita: R$ %.2f\n", pib_per_capita1);
            printf("PIB per Capita do computador: R$ %.2f\n", pib_per_capita2);
            jogador_venceu = (pib_per_capita1 > pib_per_capita2);
            break;
    }
    
    // Anunciar o vencedor
    if (jogador_venceu) {
        printf("\nParabéns! Você venceu esta rodada!\n");
    } else {
        printf("\nO computador venceu esta rodada!\n");
    }
    
    printf("\nFim do jogo. Obrigado por jogar!\n");
    
    return 0;
}

