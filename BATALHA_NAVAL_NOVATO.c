#include <stdio.h>

#define TAMANHO 5

void imprimirTabuleiro(int tabuleiro[TAMANHO][TAMANHO]) {
    printf("\nTabuleiro:\n");
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int tabuleiro[TAMANHO][TAMANHO] = {0}; // Inicializa o tabuleiro com 0
    
    // Posicionamento dos navios
    // Navio horizontal (3 espaços) na linha 1 começando da coluna 1
    int linhaH = 1, colunaH = 1;
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaH][colunaH + i] = 1;
    }
    
    // Navio vertical (3 espaços) na coluna 3 começando da linha 2
    int linhaV = 2, colunaV = 3;
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaV + i][colunaV] = 1;
    }
    
    // Exibição das coordenadas dos navios
    printf("Coordenadas dos navios:\n");
    printf("Navio horizontal: ");
    for (int i = 0; i < 3; i++) {
        printf("(%d, %d) ", linhaH, colunaH + i);
    }
    printf("\n");
    
    printf("Navio vertical: ");
    for (int i = 0; i < 3; i++) {
        printf("(%d, %d) ", linhaV + i, colunaV);
    }
    printf("\n");
    
    // Exibir tabuleiro
    imprimirTabuleiro(tabuleiro);
    
    return 0;
}