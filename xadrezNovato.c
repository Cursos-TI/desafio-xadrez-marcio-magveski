#include <stdio.h>

int Bispo_mov = 5;
int Torre_mov = 5;
int Rainha_mov = 5;


int main( ){

    //variavel de inicio do controle dos loops

    int i;

 // Movimentação do Bispo - 5 casas na diagonal superior direita
    printf("Movimentação do Bispo:\n");
    for (i = 1; i <= Bispo_mov; i++) {
        printf("Movimento %d: Diagonal superior direita (Cima + Direita)\n", i);
    }
    printf("\n");

    // Movimentação da Torre - 5 casas para a direita
    printf("Movimentação da Torre:\n");
    i = 1; // inicializando o contador
    while (i <= Torre_mov) {
        printf("Movimento %d: Direita\n", i);
        i++;
    }
    printf("\n");

    // Movimentação da Rainha - 8 casas para a esquerda
    printf("Movimentação da Rainha:\n");
    i = 1; // reinicializando o contador
    do {
        printf("Movimento %d: Esquerda\n", i);
        i++;
    } while (i <= Rainha_mov);
    printf("\n");

    return 0;

}