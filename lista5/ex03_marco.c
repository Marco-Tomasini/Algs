#include <stdio.h>

int main() {
    int vetor[20];
    int i;

    for (i = 0; i < 20; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Valores positivos:\n");
    for (i = 0; i < 20; i++) {
        if (vetor[i] > 0) {
            printf("%d ", vetor[i]);
        }
    }
    printf("\n");

    return 0;
}
