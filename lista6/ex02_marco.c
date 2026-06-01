#include <stdio.h>

int main() {
    int matriz[7][4];
    int i, j;
    int menor;
    int linhaMenor=0, colunaMenor=0;

    for (i = 0; i < 7; i++) {
        for (j = 0; j < 4; j++) {
            printf("Digite o valor da posição [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    menor = matriz[0][0];

    for (i = 0; i < 7; i++) {
        for (j = 0; j < 4; j++) {
            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
                linhaMenor = i;
                colunaMenor = j;
            }
        }
    }

    printf("\nMatriz 7x4:\n");
    for (i = 0; i < 7; i++) {
        for (j = 0; j < 4; j++) {
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n\nMenor valor: %d\n", menor);
    printf("Posição: linha %d, coluna %d\n", linhaMenor + 1, colunaMenor + 1);

    return 0;
}