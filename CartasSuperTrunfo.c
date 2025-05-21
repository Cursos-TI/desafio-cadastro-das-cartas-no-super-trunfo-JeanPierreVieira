#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Definição das cartas (estados)
    char* estado1 = "São Paulo";
    int populacao1 = 46649132;
    float area1 = 248219.63;
    float pib1 = 2348.0;
    int pontos_turisticos1 = 85;
    
    char* estado2 = "Rio de Janeiro";
    int populacao2 = 17463349;
    float area2 = 43750.42;
    float pib2 = 758.0;
    int pontos_turisticos2 = 112;
    
    int opcao;
    
    // Cabeçalho do jogo
    printf("=== SUPER TRUNFO - ESTADOS DO BRASIL ===\n\n");
    printf("Iniciando jogo com 2 jogadores...\n\n");
    
    // Exibir carta do jogador
    printf("Sua carta:\n");
    printf("----------------------------------------\n");
    printf("Estado: %s\n", estado1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("----------------------------------------\n\n");
    
    // Jogador escolhe o atributo
    printf("Escolha um atributo para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("Opção: ");
    scanf("%d", &opcao);
    
    // Validação da entrada
    while (opcao < 1 || opcao > 4) {
        printf("Opção inválida. Por favor, escolha entre 1 e 4: ");
        scanf("%d", &opcao);
    }
    
    // Exibir o atributo escolhido
    char* nome_atributo;
    switch (opcao) {
        case 1: nome_atributo = "População"; break;
        case 2: nome_atributo = "Área"; break;
        case 3: nome_atributo = "PIB"; break;
        case 4: nome_atributo = "Pontos Turísticos"; break;
    }
    
    printf("\nVocê escolheu comparar: %s\n", nome_atributo);
    
    // Revelar a carta do computador
    printf("\nCarta do computador:\n");
    printf("----------------------------------------\n");
    printf("Estado: %s\n", estado2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
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
        case 3: // PIB
            printf("Seu PIB: R$ %.2f bilhões\n", pib1);
            printf("PIB do computador: R$ %.2f bilhões\n", pib2);
            jogador_venceu = (pib1 > pib2);
            break;
        case 4: // Pontos Turísticos
            printf("Seus Pontos Turísticos: %d\n", pontos_turisticos1);
            printf("Pontos Turísticos do computador: %d\n", pontos_turisticos2);
            jogador_venceu = (pontos_turisticos1 > pontos_turisticos2);
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
