#include <stdio.h>

int fibo(int n) {
    int i, anterior = 1, atual = 1, proximo;

    if (n <= 0) {
        return 0;
    }

    if (n == 1 || n == 2) {
        return 1;
    }

    for (i = 3; i <= n; i++) {
        proximo = anterior + atual;
        anterior = atual;
        atual = proximo;
    }

    return atual;
}

int main() {
    int n, i;

    printf("Digite a quantidade de termos da sequencia de Fibonacci: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Quantidade invalida.\n");
        return 0;
    }

    printf("Os %d primeiros termos da sequencia de Fibonacci sao:\n", n);

    for (i = 1; i <= n; i++) {
        printf("%d", fibo(i));

        if (i < n) {
            printf(", ");
        }
    }

    printf("\n");

    return 0;
}
