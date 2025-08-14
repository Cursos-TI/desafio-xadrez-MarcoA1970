#include <stdio.h>

int main() {
    // Número de casas a mover
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    int i; // variável de controle

    // --- Torre: movimento horizontal para a direita usando FOR ---
    printf("Movimento da Torre:\n");
    for (i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // --- Bispo: movimento diagonal para cima e à direita usando WHILE ---
    printf("Movimento do Bispo:\n");
    i = 1;
    while (i <= casasBispo) {
        printf("Cima Direita\n");
        i++;
    }

    printf("\n");

    // --- Rainha: movimento para a esquerda usando DO-WHILE ---
    printf("Movimento da Rainha:\n");
    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= casasRainha);

    return 0;
}