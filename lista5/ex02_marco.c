#include <stdio.h>

int main() {
    int vetor[30];
    int i;

    for (i = 0; i < 30; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 30; i++) {
        if (vetor[i] == 0) {
            vetor[i] = 1;
        }
    }

    printf("Vetor final:\n");
    for (i = 0; i < 30; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
