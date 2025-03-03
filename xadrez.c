#include <stdio.h>

// Função recursiva para movimentação da Torre
void moverTorre(int casas, char direcao[]) {
    if (casas == 0) return;
    printf("%s\n", direcao);
    moverTorre(casas - 1, direcao);
}

// Função recursiva para movimentação do Bispo
void moverBispo(int casas, int atual) {
    if (casas == 0) return;
    printf("Diagonal - Cima Direita\n");
    moverBispo(casas - 1, atual + 1);
}

// Função recursiva para movimentação da Rainha
void moverRainha(int casas, char direcao[]) {
    if (casas == 0) return;
    printf("%s\n", direcao);
    moverRainha(casas - 1, direcao);
}

// Movimento do Cavalo usando loops aninhados
void moverCavalo(int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (i == 2 && j == 1) {
                printf("Cavalo move: Duas casas para cima e uma para a direita\n");
                return;
            }
        }
    }
}

int main() {
    int casas = 3;
    
    printf("Movimento da Torre:\n");
    moverTorre(casas, "Cima");
    printf("\n");
    
    printf("Movimento do Bispo:\n");
    moverBispo(casas, 0);
    printf("\n");
    
    printf("Movimento da Rainha:\n");
    moverRainha(casas, "Direita");
    printf("\n");
    
    printf("Movimento do Cavalo:\n");
    moverCavalo(3, 3);
    
    return 0;
}