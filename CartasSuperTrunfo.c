#include <stdio.h>

int main () {
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    int cidade;
    char estado;
    
    // Entrada da letra do estado
    printf ("identifique qual estado de (A-H)\n");
    scanf ("%c", &estado);

    // Entrada do número da cidade (A01, A02, B01, B02)
    printf ("identifique numero da cidade (1-4)\n");
    scanf ("%d", &cidade);

    // Entrada da população
    printf ("identifique numero da populacao\n");
    scanf  ("%d", &populacao);

    // Entrada da área
    // Entrada da área
    printf ("identifique numero da area\n");
    scanf  ("%f", &area);

    // Entrada do PIB
    printf ("identifique numero do pib\n");
    scanf  ("%f", &pib);

     // Entrada dos pontos turísticos
    printf ("identifique numero dos pontos pontos_turisticos\n");
    scanf ("%d", &pontos_turisticos);

// Exibir os dados inseridos
printf("\nDados inseridos:\n");
printf("Estado: %d\n", estado);
printf("Cidade: %d\n", cidade);
printf("Populacao: %d\n", populacao);
printf("Area: %.2f km²\n", area);
printf("PIB: %.2f\n", pib);
printf("Pontos Turisticos: %d\n", pontos_turisticos);

return 0;
}
