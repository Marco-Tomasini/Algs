#include <stdio.h>

int main() {
    int A[5][3];
    int i, j;
    int pares = 0, impares = 0;
    int total = 5 * 3;
    float porPares, porImpares;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite o valor da posição [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &A[i][j]);

            if (A[i][j] % 2 == 0) {
                pares++;
            } else {
                impares++;
            }
        }
    }

    porPares = (float) pares / total * 100;
    porImpares = (float) impares / total * 100;

    printf("\nMatriz A:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 3; j++) {
            printf("%4d", A[i][j]);
        }
        printf("\n");
    }

    printf("\nTotal de pares: %d", pares);
    printf("\nTotal de ímpares: %d", impares);
    printf("\nPorcentagem de pares: %.2f%%", porPares);
    printf("\nPorcentagem de ímpares: %.2f%%\n", porImpares);

    return 0;
}