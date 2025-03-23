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

int main() {
    int tabuleiro[TAMANHO][TAMANHO] = {0}; // Inicializa o tabuleiro com 0
    
    // Posicionamento dos navios
    // Navio horizontal (4 espaços) na linha 2 começando da coluna 2
    int linhaH = 2, colunaH = 2;
    for (int i = 0; i < 4; i++) {
        tabuleiro[linhaH][colunaH + i] = 3;
    }
    
    // Navio vertical (4 espaços) na coluna 5 começando da linha 3
    int linhaV = 3, colunaV = 5;
    for (int i = 0; i < 4; i++) {
        tabuleiro[linhaV + i][colunaV] = 3;
    }
    
    // Navio diagonal principal (3 espaços) começando em (1,1)
    int linhaD1 = 1, colunaD1 = 1;
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaD1 + i][colunaD1 + i] = 3;
    }
    
    // Navio diagonal secundária (3 espaços) começando em (6,3)
    int linhaD2 = 6, colunaD2 = 3;
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaD2 - i][colunaD2 + i] = 3;
    }
    
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
    
    // Exibir tabuleiro
    imprimirTabuleiro(tabuleiro);
    
    return 0;
}