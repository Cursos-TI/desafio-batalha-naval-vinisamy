#include <stdio.h>

#define TAMANHO 10

void imprimirTabuleiro(int tabuleiro[TAMANHO][TAMANHO]) {
    printf("\nTabuleiro:\n");
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

void aplicarHabilidadeCone(int tabuleiro[TAMANHO][TAMANHO], int x, int y) {
    if (x >= 2 && y >= 2 && y < TAMANHO - 2) {
        tabuleiro[x][y] = 1;
        tabuleiro[x-1][y-1] = 1;
        tabuleiro[x-1][y] = 1;
        tabuleiro[x-1][y+1] = 1;
        tabuleiro[x-2][y] = 1;
    }
}

void aplicarHabilidadeCruz(int tabuleiro[TAMANHO][TAMANHO], int x, int y) {
    if (x >= 1 && x < TAMANHO - 1 && y >= 1 && y < TAMANHO - 1) {
        tabuleiro[x][y] = 1;
        tabuleiro[x-1][y] = 1;
        tabuleiro[x+1][y] = 1;
        tabuleiro[x][y-1] = 1;
        tabuleiro[x][y+1] = 1;
    }
}

void aplicarHabilidadeOctaedro(int tabuleiro[TAMANHO][TAMANHO], int x, int y) {
    if (x >= 1 && x < TAMANHO - 1 && y >= 1 && y < TAMANHO - 1) {
        tabuleiro[x][y] = 1;
        tabuleiro[x-1][y] = 1;
        tabuleiro[x+1][y] = 1;
        tabuleiro[x][y-1] = 1;
        tabuleiro[x][y+1] = 1;
    }
}

int main() {
    int tabuleiro[TAMANHO][TAMANHO] = {0}; // Inicializa o tabuleiro com 0
    
    // Posicionamento dos navios
    int linhaH = 2, colunaH = 2;
    for (int i = 0; i < 4; i++) {
        tabuleiro[linhaH][colunaH + i] = 3;
    }
    
    int linhaV = 3, colunaV = 5;
    for (int i = 0; i < 4; i++) {
        tabuleiro[linhaV + i][colunaV] = 3;
    }
    
    int linhaD1 = 1, colunaD1 = 1;
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaD1 + i][colunaD1 + i] = 3;
    }
    
    int linhaD2 = 6, colunaD2 = 3;
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaD2 - i][colunaD2 + i] = 3;
    }
    
    // Aplicação das habilidades especiais
    aplicarHabilidadeCone(tabuleiro, 5, 5);
    aplicarHabilidadeCruz(tabuleiro, 7, 7);
    aplicarHabilidadeOctaedro(tabuleiro, 3, 3);
    
    // Exibição das coordenadas dos navios
    printf("Coordenadas dos navios:\n");
    printf("Navio horizontal: ");
    for (int i = 0; i < 4; i++) {
        printf("(%d, %d) ", linhaH, colunaH + i);
    }
    printf("\n");
    
    printf("Navio vertical: ");
    for (int i = 0; i < 4; i++) {
        printf("(%d, %d) ", linhaV + i, colunaV);
    }
    printf("\n");
    
    printf("Navio diagonal principal: ");
    for (int i = 0; i < 3; i++) {
        printf("(%d, %d) ", linhaD1 + i, colunaD1 + i);
    }
    printf("\n");
    
    printf("Navio diagonal secundária: ");
    for (int i = 0; i < 3; i++) {
        printf("(%d, %d) ", linhaD2 - i, colunaD2 + i);
    }
    printf("\n");
    
    // Exibir tabuleiro atualizado
    imprimirTabuleiro(tabuleiro);
    
    return 0;
}