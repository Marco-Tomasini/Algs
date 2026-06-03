#include <stdio.h>

int soma_especial(int n, int k, int x) {
    int soma = 0;
    int encontrados = 0;
    int numero = x;

    while (encontrados < n) {
        if (numero % k == 0) {
            soma += numero;
            encontrados++;
        }

        numero++;
    }

    return soma;
}

int main() {
    int n, k, x, resultado;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    printf("Digite o valor de k: ");
    scanf("%d", &k);

    printf("Digite o valor de x: ");
    scanf("%d", &x);

    if (n <= 0 || k <= 0) {
        printf("Valores invalidos. n e k devem ser maiores que zero.\n");
        return 0;
    }

    resultado = soma_especial(n, k, x);

    printf("Resultado da soma especial: %d\n", resultado);

    return 0;
}
