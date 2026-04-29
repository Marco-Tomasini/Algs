#include <stdio.h>

int main() {
    int vetor[30];
    int i, soma = 0, quantidade = 0;
    float media;

    for (i = 0; i < 30; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);

        if (vetor[i] % 2 != 0 && vetor[i] > 10) {
            soma += vetor[i];
            quantidade++;
        }
    }

    if (quantidade > 0) {
        media = (float)soma / quantidade;
        printf("Media dos impares maiores que 10: %.2f\n", media);
    } else {
        printf("Nenhum valor impar maior que 10 foi digitado.\n");
    }

    return 0;
}
