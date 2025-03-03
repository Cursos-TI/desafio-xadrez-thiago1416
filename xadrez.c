#include <stdio.h>

// Função recursiva para mover a Torre 5 casas para a direita
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para mover a Rainha 8 casas para a esquerda
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva para mover o Bispo 5 casas na diagonal direita para cima
void moverBispo(int casas) {
    if (casas == 0) return;
    printf("Cima-Direita\n");
    moverBispo(casas - 1);
}

// Função para mover o Cavalo uma vez em "L" para cima e para a direita
void moverCavalo() {
    for (int i = 0; i < 2; i++) {
        printf("Cima\n");
    }
    for (int j = 0; j < 1; j++) {
        printf("Direita\n");
    }
}

int main() {
    printf("Movimentacao da Torre:\n");
    moverTorre(5);
    printf("\n");

    printf("Movimentacao da Rainha:\n");
    moverRainha(8);
    printf("\n");

    printf("Movimentacao do Bispo:\n");
    moverBispo(5);
    printf("\n");

    printf("Movimentacao do Cavalo:\n");
    moverCavalo();
    printf("\n");

    return 0;
}