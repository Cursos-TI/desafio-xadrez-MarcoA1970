#include <stdio.h>

/* ================================
   FUNÇÕES RECURSIVAS
   ================================ */

// Torre: movimenta-se horizontalmente para a direita
void moverTorre(int casasRestantes) {
    if (casasRestantes == 0) return; // Condição de parada
    printf("Direita\n");
    moverTorre(casasRestantes - 1); // Chamada recursiva
}

// Rainha: movimenta-se para a esquerda
void moverRainha(int casasRestantes) {
    if (casasRestantes == 0) return;
    printf("Esquerda\n");
    moverRainha(casasRestantes - 1);
}

// Bispo: recursivo + loops aninhados
// Loop externo (vertical): "Cima"
// Loop interno (horizontal): "Direita"
void moverBispo(int casasVerticais, int casasHorizontais) {
    if (casasVerticais == 0) return; // Condição de parada
    for (int v = 1; v <= 1; v++) { // Movimenta 1 casa para cima por recursão
        printf("Cima ");
        for (int h = 1; h <= casasHorizontais; h++) { // Movimento horizontal interno
            printf("Direita");
            if (h < casasHorizontais) printf(" "); // Espaço entre direções
        }
        printf("\n");
    }
    moverBispo(casasVerticais - 1, casasHorizontais); // Próxima etapa na diagonal
}

/* ================================
   CAVALO COM LOOPS COMPLEXOS
   ================================ */
// Movimento em L: 2 casas para cima + 1 para direita
void moverCavalo(int casasCima, int casasDireita) {
    int i, j;
    for (i = 1; i <= casasCima; i++) {

        printf("Cima\n");

        if (i == casasCima) {
            
            for (j = 1; j <= casasDireita; j++) {
                if (j == 1) {
                    printf("Direita\n");
                    break; // Sai do loop horizontal após 1 casa
                }
            }
        } 
    }
}

/* ================================
   FUNÇÃO PRINCIPAL
   ================================ */
int main() {
    // Configurações de movimento
    int casasTorre = 5;
    int casasBispo = 5; // vertical
    int casasBispoHorizontais = 1; // horizontal por passo
    int casasRainha = 8;
    int cavaloCima = 2;
    int cavaloDireita = 1;

    // Torre com recursão
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);
    printf("\n");

    // Bispo com recursão + loops aninhados
    printf("Movimento do Bispo:\n");
    moverBispo(casasBispo, casasBispoHorizontais);
    printf("\n");

    // Rainha com recursão
    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);
    printf("\n");

    // Cavalo com loops complexos
    printf("Movimento do Cavalo:\n");
    moverCavalo(cavaloCima, cavaloDireita);
    printf("\n");

    return 0;
}