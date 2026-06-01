#include <stdio.h>

int main() {
    int matriz[5][6];
    int i, j;
    int somaPares = 0;
    int Pares = 0;
    float media;

    // Leitura dos valores da matriz
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 6; j++) {
            printf("Digite o valor da posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            if (matriz[i][j] % 2 == 0) {
                somaPares += matriz[i][j];
                Pares++;
            }
        }
    }

    // mostrar
    printf("\nMatriz 5x6:\n");
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 6; j++) {
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }

    if (Pares > 0) {
        media = (float)somaPares / Pares;
        printf("\nMédia dos valores pares: %.2f\n", media);
    } else {
        printf("\nNão existem valores pares na matriz.\n");
    }

    return 0;
}