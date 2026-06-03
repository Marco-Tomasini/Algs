#include <stdio.h>

long long soma_iterativa(int n) {
    int i;
    long long soma = 0;

    for (i = 1; i <= n; i++) {
        soma += i;
    }

    return soma;
}

long long soma_recursiva(int n) {
    if (n <= 0) {
        return 0;
    }

    return n + soma_recursiva(n - 1);
}

int main() {
    int n;
    long long resultado_iterativo, resultado_recursivo;

    printf("Digite um numero inteiro n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Valor invalido. Digite um numero maior ou igual a zero.\n");
        return 0;
    }

    resultado_iterativo = soma_iterativa(n);
    resultado_recursivo = soma_recursiva(n);

    printf("Soma iterativa: %lld\n", resultado_iterativo);
    printf("Soma recursiva: %lld\n", resultado_recursivo);

    return 0;
}
