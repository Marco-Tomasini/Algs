#include <stdio.h>

int main() {
    int vetorA[10], vetorB[10], resultado[10];
    int i;

    printf("Digite os valores do primeiro vetor:\n");
    for (i = 0; i < 10; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetorA[i]);
    }

    printf("Digite os valores do segundo vetor:\n");
    for (i = 0; i < 10; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetorB[i]);
    }

    for (i = 0; i < 10; i++) {
        resultado[i] = vetorA[i] * vetorB[i];
    }

    printf("Vetor resultante:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", resultado[i]);
    }
    printf("\n");

    return 0;
}
