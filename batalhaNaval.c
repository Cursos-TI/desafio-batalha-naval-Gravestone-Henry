#include <stdio.h>
//desafio batalha naval  :P
int main() {
    int tabuleiro[10][10];
    int i, j;

    // Inicializando o mar
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Posicionamento
    tabuleiro[2][3] = 3;
    tabuleiro[2][4] = 3;
    tabuleiro[2][5] = 3;

    tabuleiro[6][1] = 3;
    tabuleiro[7][1] = 3;
    tabuleiro[8][1] = 3;

    for (i = 0; i < 3; i++) {
        tabuleiro[4 + i][7 + i] = 3; 
    }

    // poder cruz
    printf("\n --- AREA DE EFEITO: HABILIDADE EM CRUZ --- \n");
    int centroL = 5, centroC = 5;
    int alcance = 2; // Define o tamanho dos braços da cruz

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            if ((i == centroL && j >= centroC - alcance && j <= centroC + alcance) ||
                (j == centroC && i >= centroL - alcance && i <= centroL + alcance)) {
                tabuleiro[i][j] = 1; 
            }
        }
    }

    // Tabuleiro
    printf("    0 1 2 3 4 5 6 7 8 9\n");
    for (i = 0; i < 10; i++) {
        printf("%d | ", i);
        for (j = 0; j < 10; j++) {
            if (tabuleiro[i][j] == 3) {
                printf("3 "); // Navio
            } else if (tabuleiro[i][j] == 1) {
                printf("* "); // Habilidade
            } else {
                printf("~ "); // Água
            }
        }
        printf("\n");
    }

    printf("\n// Navios posicionados. Se o inimigo não ver, ele apanha. //\n");

    return 0;
}