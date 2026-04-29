#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tam = 1000;
    int vetor[1000];
    int i, j, aux;
    clock_t inicio, fim;
    double tempo_total;

    // Inicializa a semente para números aleatórios
    srand(time(NULL));

    // Preenche o vetor com números de 1 a 10000 para garantir que sejam diferentes
    for (i = 0; i < tam; i++) {
        vetor[i] = i + 1;
    }

    // Embaralha o vetor (Fisher-Yates Shuffle) para que não fiquem ordenados
    for (i = tam - 1; i > 0; i--) {
        j = rand() % (i + 1);
        aux = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = aux;
    }

    printf("Ordenando %d números...\n", tam);

    inicio = clock(); // Marca o início do tempo

    // Algoritmo Bubble Sort
    for (i = 0; i < tam; i++) {
        for (j = 0; j < tam - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }

    fim = clock(); // Marca o fim do tempo

    // Calcula o tempo em segundos
    tempo_total = ((double)(fim - inicio)) / CLOCKS_PER_SEC;

    printf("\nVetor ordenado:\n");
    for (i = 0; i < tam; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    printf("\nTempo de execução: %f segundos\n", tempo_total);

    return 0;
}
