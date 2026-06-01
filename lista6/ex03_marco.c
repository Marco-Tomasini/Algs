#include <stdio.h>

int main() {
    int matriz[5][5];
    int i, j;
    int somaL4 = 0, somaC2 = 0;
    int somaDiagonalP = 0, somaDiagonalS = 0;
    int somaTotal = 0;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("Digite o valor da posição [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            somaTotal += matriz[i][j];

            if (i == 3) {
                somaL4 += matriz[i][j];
            }

            if (j == 1) {
                somaC2 += matriz[i][j];
            }

            if (i == j) {
                somaDiagonalP += matriz[i][j];
            }

            if (i + j == 4) {
                somaDiagonalS += matriz[i][j];
            }
        }
    }

    printf("\nMatriz:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nSoma da linha 4: %d", somaL4);
    printf("\nSoma da coluna 2: %d", somaC2);
    printf("\nSoma da diagonal principal: %d", somaDiagonalP);
    printf("\nSoma da diagonal secundária: %d", somaDiagonalS);
    printf("\nSoma de todos os elementos: %d\n", somaTotal);

    return 0;
}