#include <stdio.h>

int main() {
    int A[3][4], B[4][3], C[4][4];
    int i, j, k;

    printf("Digite os valores da matriz A 3x4:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("A[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nDigite os valores da matriz B 4x3:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("B[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &B[i][j]);
        }
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            C[i][j] = 0;

            for (k = 0; k < 3; k++) {
                C[i][j] += B[i][k] * A[k][j];
            }
        }
    }

    printf("\nMatriz C 4x4, resultado de B x A:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%5d", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}