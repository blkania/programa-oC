#include <stdio.h>

// Estrutura para armazenar os dados de uma carta
typedef struct {
    char estado;
    char codigo[4];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} Carta;

// Função para coletar os dados da carta
void preencherCarta(Carta *carta) {
    printf("Digite o estado (A-H): ");
    scanf(" %c", &carta->estado);

    printf("Digite o código da carta (ex: A01, B03): ");
    scanf(" %3s", carta->codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %s", carta->nomeCidade);
    
    printf("Digite a população: ");
    scanf(" %d", &carta->populacao);
    
    printf("Digite a área em km²: ");
    scanf(" %f", &carta->area);
    
    printf("Digite o PIB em bilhões de reais: ");
    scanf(" %f", &carta->pib);
    
    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &carta->pontosTuristicos);
}

// Função para exibir os dados da carta
void exibirCarta(Carta carta, int num) {
    printf("\nCarta %d:\n", num);
    printf("Estado: %c\n", carta.estado);
    printf("Código: %s\n", carta.codigo);
    printf("Nome da Cidade: %s\n", carta.nomeCidade);
    printf("População: %d\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f bilhões de reais\n", carta.pib);
    printf("Número de Pontos Turísticos: %d\n", carta.pontosTuristicos);
}

int main() {
    Carta carta1, carta2;
    
    printf("\nPreencha os dados da primeira carta:\n");
    preencherCarta(&carta1);
    
    printf("\nPreencha os dados da segunda carta:\n");
    preencherCarta(&carta2);
    
    printf("\n\n--- Cartas Cadastradas ---\n");
    exibirCarta(carta1, 1);
    exibirCarta(carta2, 2);
    
    return 0;
}
