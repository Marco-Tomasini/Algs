#include <stdio.h>

double harmonica_iterativa(int n) {
    int i;
    double soma = 0.0;

    for (i = 1; i <= n; i++) {
        soma += 1.0 / i;
    }

    return soma;
}

double harmonica_recursiva(int n) {
    if (n <= 0) {
        return 0.0;
    }

    return (1.0 / n) + harmonica_recursiva(n - 1);
}

int main() {
    int n;
    double resultado_iterativo, resultado_recursivo;

    printf("Digite um numero inteiro n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Valor invalido. Digite um numero maior que zero.\n");
        return 0;
    }

    resultado_iterativo = harmonica_iterativa(n);
    resultado_recursivo = harmonica_recursiva(n);

    printf("Soma harmonica iterativa: %.6lf\n", resultado_iterativo);
    printf("Soma harmonica recursiva: %.6lf\n", resultado_recursivo);

    return 0;
}
