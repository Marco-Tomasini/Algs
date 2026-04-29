#include <stdio.h>

int main() {
    int vetor[30];
    int i, aux;

    printf("Digite 30 valores inteiros:\n");

    for (i = 0; i < 30; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 15; i++) {
        aux = vetor[i];
        vetor[i] = vetor[29 - i];
        vetor[29 - i] = aux;
    }

    printf("\nVetor invertido:\n");

    for (i = 0; i < 30; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n");

    return 0;
}
