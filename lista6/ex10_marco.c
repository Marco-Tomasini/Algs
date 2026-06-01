#include <stdio.h>

int main() {
    int A[5][5];
    int i, j;
    int maior;
    int linhaM, ColM;
    int minimax;
    int colunaMinimax;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("Digite o valor da posição [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    }

    maior = A[0][0];
    linhaM = 0;
    ColM = 0;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (A[i][j] > maior) {
                maior = A[i][j];
                linhaM = i;
                ColM = j;
            }
        }
    }

    minimax = A[linhaM][0];
    colunaMinimax = 0;

    for (j = 0; j < 5; j++) {
        if (A[linhaM][j] < minimax) {
            minimax = A[linhaM][j];
            colunaMinimax = j;
        }
    }

    printf("\nMatriz A:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%4d", A[i][j]);
        }
        printf("\n");
    }

    printf("\nMaior elemento da matriz: %d", maior);
    printf("\nPosição do maior elemento: linha %d, coluna %d", linhaM + 1, ColM + 1);

    printf("\n\nElemento minimax: %d", minimax);
    printf("\nPosição do minimax: linha %d, coluna %d\n", linhaM + 1, colunaMinimax + 1);

    return 0;
}