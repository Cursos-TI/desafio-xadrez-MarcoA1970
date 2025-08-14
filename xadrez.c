#include <stdio.h>

int main() {
    // Número de casas a mover
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // Cavalo: movimento em L → 2 casas para baixo + 1 para esquerda
    int casasBaixoCavalo = 2;
    int casasEsquerdaCavalo = 1;

    int i, j; // Variáveis de controle dos loops

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

    printf("\n");

    // --- Cavalo: movimento em L usando FOR + WHILE aninhados ---
    printf("Movimento do Cavalo:\n");

    for (i = 1; i <= casasBaixoCavalo; i++) {
        printf("Baixo\n");
        j = 1;
        while (j <= casasEsquerdaCavalo && i == casasBaixoCavalo) {
            printf("Esquerda\n");
            j++;
        }
    }

    return 0;
}