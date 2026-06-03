#include <stdio.h>

int main() {
    int A[3][2], B[3][2], C[3][2];
    int i, j;

    printf("Digite os valores da matriz A:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("A[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nDigite os valores da matriz B:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("B[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &B[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            if (i <= j) {
                C[i][j] = A[i][j];
            } else {
                C[i][j] = B[i][j];
            }
        }
    }

    printf("\nMatriz C:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("%4d", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}