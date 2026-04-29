#include <stdio.h>

int main() {
    int fibonacci[50];
    int n, i;

    do {
        printf("Digite a quantidade de elementos da serie de Fibonacci (1 a 50): ");
        scanf("%d", &n);

        if (n < 1 || n > 50) {
            printf("Valor invalido. Digite um numero entre 1 e 50.\n");
        }
    } while (n < 1 || n > 50);

    if (n >= 1) {
        fibonacci[0] = 1;
    }

    if (n >= 2) {
        fibonacci[1] = 1;
    }

    for (i = 2; i < n; i++) {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }

    printf("Serie de Fibonacci:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci[i]);
    }
    printf("\n");

    return 0;
}
