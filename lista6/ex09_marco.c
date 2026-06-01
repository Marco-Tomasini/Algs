#include <stdio.h>

int main() {
    int A[6][6], B[6][6], C[6][6];
    int linA, colA, linB, colB;
    int i, j, k;

    printf("Digite o número de linhas da matriz A: ");
    scanf("%d", &linA);

    printf("Digite o número de colunas da matriz A: ");
    scanf("%d", &colA);

    printf("Digite o número de linhas da matriz B: ");
    scanf("%d", &linB);

    printf("Digite o número de colunas da matriz B: ");
    scanf("%d", &colB);

    if (linA < 1 || linA > 6 || colA < 1 || colA > 6 ||
        linB < 1 || linB > 6 || colB < 1 || colB > 6) {
        printf("\nErro: as matrizes devem ter no máximo tamanho 6x6.\n");
        return 0;
    }

    if (colA != linB) {
        printf("\nErro: não é possível multiplicar as matrizes.\n");
        printf("O número de colunas de A deve ser igual ao número de linhas de B.\n");
        return 0;
    }

    printf("\nDigite os valores da matriz A:\n");
    for (i = 0; i < linA; i++) {
        for (j = 0; j < colA; j++) {
            printf("A[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nDigite os valores da matriz B:\n");
    for (i = 0; i < linB; i++) {
        for (j = 0; j < colB; j++) {
            printf("B[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &B[i][j]);
        }
    }

    for (i = 0; i < linA; i++) {
        for (j = 0; j < colB; j++) {
            C[i][j] = 0;

            for (k = 0; k < colA; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("\nMatriz C, resultado de A x B:\n");
    for (i = 0; i < linA; i++) {
        for (j = 0; j < colB; j++) {
            printf("%5d", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}