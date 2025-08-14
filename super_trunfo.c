#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

    // Definição das variáveis para armazenar as propriedades das cidades
        struct Carta {
    char estado[50];
    int codigo;
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
};
    // Cadastro
        void cadastrarCarta(struct Carta *carta) {
    printf("Estado: ");
    scanf(" %[^\n]", carta->estado);

    printf("Código da carta: ");
    scanf("%d", &carta->codigo);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta->nome);

    printf("População: ");
    scanf("%d", &carta->populacao);

    printf("Área (km²): ");
    scanf("%f", &carta->area);

    printf("PIB (em bilhões): ");
    scanf("%f", &carta->pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &carta->pontosTuristicos);
}
    // Exibição
        void exibirCarta(struct Carta carta) {
    printf("\n--- Carta da Cidade ---\n");
    printf("Estado: %s\n", carta.estado);
    printf("Código: %d\n", carta.codigo);
    printf("Cidade: %s\n", carta.nome);
    printf("População: %d\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f bilhões\n", carta.pib);
    printf("Pontos Turísticos: %d\n", carta.pontosTuristicos);
}

    // Comparação de Cartas pelo PIB:
        void compararCartas(struct Carta c1, struct Carta c2, char atributo[]) {
    printf("\n--- Comparação (%s) ---\n", atributo);

    if (strcmp(atributo, "populacao") == 0) {
        if (c1.populacao > c2.populacao)
            printf("A cidade vencedora é: %s\n", c1.nome);
        else if (c2.populacao > c1.populacao)
            printf("A cidade vencedora é: %s\n", c2.nome);
        else
            printf("Empate!\n");
    } else if (strcmp(atributo, "area") == 0) {
        if (c1.area > c2.area)
            printf("A cidade vencedora é: %s\n", c1.nome);
        else if (c2.area > c1.area)
            printf("A cidade vencedora é: %s\n", c2.nome);
        else
            printf("Empate!\n");
    } else if (strcmp(atributo, "pib") == 0) {
        if (c1.pib > c2.pib)
            printf("A cidade vencedora é: %s\n", c1.nome);
        else if (c2.pib > c1.pib)
            printf("A cidade vencedora é: %s\n", c2.nome);
        else
            printf("Empate!\n");
    } else if (strcmp(atributo, "pontos") == 0) {
        if (c1.pontosTuristicos > c2.pontosTuristicos)
            printf("A cidade vencedora é: %s\n", c1.nome);
        else if (c2.pontosTuristicos > c1.pontosTuristicos)
            printf("A cidade vencedora é: %s\n", c2.nome);
        else
            printf("Empate!\n");
    } else if (strcmp(atributo, "densidade") == 0) {
        float densidade1 = c1.populacao / c1.area;
        float densidade2 = c2.populacao / c2.area;
        if (densidade1 < densidade2)
            printf("A cidade vencedora é: %s (menor densidade)\n", c1.nome);
        else if (densidade2 < densidade1)
            printf("A cidade vencedora é: %s (menor densidade)\n", c2.nome);
        else
            printf("Empate!\n");
    } else {
        printf("Atributo inválido.\n");
    }
}
    // Exibição dos Resultados:
        int main() {
    struct Carta carta1, carta2;

    printf("Cadastro da primeira carta:\n");
    cadastrarCarta(&carta1);

    printf("\nCadastro da segunda carta:\n");
    cadastrarCarta(&carta2);

    exibirCarta(carta1);
    exibirCarta(carta2);
    compararCartas(carta1, carta2, "pib");

    return 0;
}


