#include <stdio.h>
int main() {
    int codigo, populacao, pontosTuristicos;
    float area, pib;
    char nome[50];

    printf("Cadastro da Cidade:\n");

    printf("Código da cidade: ");
    scanf("%d", &codigo);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome);

    printf("População: ");
    scanf("%d", &populacao);

    printf("Área (km²): ");
    scanf("%f", &area);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib);

    printf("Nº de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    printf("\n--- Dados Cadastrados ---\n");
    printf("Código: %d\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos turísticos: %d\n", pontosTuristicos);

    return 0;
}
