#include <stdio.h>

int main() {
    // Movimentação do Bispo
    int movimento_atual, total_movimentos;

    printf("Movimentação do Bispo:\n");
    movimento_atual = 1;
    total_movimentos = 5;

    // para o Bispo
    while (movimento_atual <= total_movimentos) {
        printf("Movimento %d: Diagonal superior direita (Cima + Direita)\n", movimento_atual);
        movimento_atual++;
    }
    printf("\n");

    // Movimentação da Torre
    printf("Movimentação da Torre:\n");
    movimento_atual = 1;
    total_movimentos = 5;

    // para a Torre
    while (movimento_atual <= total_movimentos) {
        printf("Movimento %d: Direita\n", movimento_atual);
        movimento_atual++;
    }
    printf("\n");

    // Movimentação da Rainha
    printf("Movimentação da Rainha:\n");
    movimento_atual = 1;
    total_movimentos = 8;

    // para a Rainha
    while (movimento_atual <= total_movimentos) {
        printf("Movimento %d: Esquerda\n", movimento_atual);
        movimento_atual++;
    }
    printf("\n");

    // Movimentação do Cavalo
    printf("Movimentação do Cavalo:\n");
    int i, j;

    // Loop aninhado para mover duas casas para cima e uma casa para a direita
    for (i = 1, j = 1; i <= 2 && j <= 1; i++) {
        if (i == 1) {
            printf("Movimento %d: Para cima\n", i);
        }

        if (i == 2) {
            printf("Movimento %d: Para cima\n", i);
        }

        if (i == 2) {
            // Movimento da segunda parte do "L"
            printf("Movimento %d: Para a direita\n", j);
            break; // Para o loop assim que o movimento em "L" estiver completo
        }
    }

    printf("\nO Cavalo se moveu em L (Cima, Cima, Direita)\n");

    return 0;
}
