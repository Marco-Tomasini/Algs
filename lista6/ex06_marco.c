#include <stdio.h>

int main() {
    int M[5][5];
    int SL[5], SC[5];
    int i, j;

    for (i = 0; i < 5; i++) {
        SL[i] = 0;
        SC[i] = 0;
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("Digite o valor da posição [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &M[i][j]);
        }
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            SL[i] += M[i][j];
            SC[j] += M[i][j];
        }
    }

    printf("\nMatriz M:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%4d", M[i][j]);
        }
        printf("\n");
    }

    printf("\nVetor SL - soma das linhas:\n");
    for (i = 0; i < 5; i++) {
        printf("%4d", SL[i]);
    }

    printf("\n\nVetor SC - soma das colunas:\n");
    for (i = 0; i < 5; i++) {
        printf("%4d", SC[i]);
    }

    printf("\n");

    return 0;
}