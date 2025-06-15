#include <stdio.h>

// TORRE - movimento recursivo para a direita
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// RAINHA - movimento recursivo para a esquerda
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// BISPO - movimento recursivo + loops aninhados (cima e direita)
void moverBispoRecursivo(int casas) {
    if (casas <= 0) return;

    // simulando diagonal com loop vertical e horizontal
    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 1; j++) {
            printf("Cima Direita\n");
        }
    }

    moverBispoRecursivo(casas - 1);
}

// CAVALO - loops aninhados com controle usando break/continue
void moverCavalo() {
    int movimentos = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (movimentos == 0 && i == 0) {
                printf("Cima\n");
                movimentos++;
                continue;
            }
            if (movimentos == 1 && i == 1) {
                printf("Cima\n");
                movimentos++;
                continue;
            }
            if (movimentos == 2 && j == 2) {
                printf("Direita\n");
                movimentos++;
                break;
            }
        }
        if (movimentos >= 3) {
            break;
        }
    }
}

int main() {
    // Movimento da TORRE
    moverTorre(5);
    printf("\n");

    // Movimento do BISPO
    moverBispoRecursivo(5);
    printf("\n");

    // Movimento da RAINHA
    moverRainha(8);
    printf("\n");

    // Movimento do CAVALO
    moverCavalo();
    printf("\n");

    return 0;
}
