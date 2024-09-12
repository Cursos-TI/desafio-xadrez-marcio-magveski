#include <stdio.h>

int Cavalo_mov_vertical = 2;   // O cavalo se move 2 casas para baixo
int Cavalo_mov_horizontal = 1; // O cavalo se move 1 casa para a esquerda

int main() {
    int i, j;

    // Movimentação do Cavalo
    printf("Movimentação do Cavalo:\n");

    // Loop for para movimentação vertical (2 casas para baixo)
    for (i = 1; i <= Cavalo_mov_vertical; i++) {
        printf("Movimento %d: Para baixo\n", i);
    }

    // Loop while para movimentação horizontal (1 casa para a esquerda)
    j = 1; // inicializando o contador
    while (j <= Cavalo_mov_horizontal) {
        printf("Movimento %d: Para a esquerda\n", j);
        j++;
    }

    printf("\nO Cavalo se moveu em L (Baixo, Baixo, Esquerda)\n");

    return 0;
}

