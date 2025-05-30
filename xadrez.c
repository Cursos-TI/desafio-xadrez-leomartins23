#include <stdio.h>

// Função recursiva para mover a Torre
void moverTorre(int movimentos) {
    if (movimentos == 0) return;
    printf("Direita\n");
    moverTorre(movimentos - 1);
}

// Função recursiva para mover a Rainha
void moverRainha(int movimentos) {
    if (movimentos == 0) return;
    printf("Esquerda\n");
    moverRainha(movimentos - 1);
}

// Função recursiva para mover o Bispo, com loops aninhados
void moverBispo(int movimentosVerticais, int movimentosHorizontais) {
    if (movimentosVerticais == 0) return;

    for (int i = 0; i < movimentosHorizontais; i++) {
        printf("Cima Direita\n");
    }

    moverBispo(movimentosVerticais - 1, movimentosHorizontais);
}

int main() {
    // Movimento da Torre
    printf("Movimento da Torre:\n");
    moverTorre(5);

    printf("\n");

    // Movimento do Bispo
    printf("Movimento do Bispo:\n");
    moverBispo(5, 1);

    printf("\n");

    // Movimento da Rainha
    printf("Movimento da Rainha:\n");
    moverRainha(8);

    printf("\n");

    // Movimento do Cavalo (duas casas para cima e uma para a direita)
    printf("Movimento do Cavalo:\n");

    int movimentosCima = 2;
    int movimentosDireita = 1;

    // Loop externo para movimento vertical (Cima)
    for (int i = 1; i <= movimentosCima; i++) {
        printf("Cima\n");

        // Quando estiver no segundo movimento para cima, faz o movimento para a direita
        if (i == movimentosCima) {
            int contadorDireita = 0;
            while (contadorDireita < movimentosDireita) {
                printf("Direita\n");
                contadorDireita++;
            }
        }
    }

    return 0;
}
