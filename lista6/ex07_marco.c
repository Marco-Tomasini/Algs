#include <stdio.h>

int main() {
    int N1[4][6], N2[4][6], M1[4][6], M2[4][6];
    int i, j;

    printf("Digite os valores da matriz N1:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 6; j++) {
            printf("N1[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &N1[i][j]);
        }
    }

    printf("\nDigite os valores da matriz N2:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 6; j++) {
            printf("N2[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &N2[i][j]);
        }
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 6; j++) {
            M1[i][j] = N1[i][j] + N2[i][j];
            M2[i][j] = N1[i][j] - N2[i][j];
        }
    }

    printf("\nMatriz N1:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 6; j++) {
            printf("%4d", N1[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz N2:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 6; j++) {
            printf("%4d", N2[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz M1 - soma:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 6; j++) {
            printf("%4d", M1[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz M2 - diferença:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 6; j++) {
            printf("%4d", M2[i][j]);
        }
        printf("\n");
    }

    return 0;
}