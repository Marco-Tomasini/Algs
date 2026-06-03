#include <stdio.h>

int primo(int numero) {
    int i;

    if (numero < 2) {
        return 0;
    }

    for (i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int k, n, numero, encontrados = 0;

    printf("Digite o valor de k: ");
    scanf("%d", &k);

    printf("Digite a quantidade n de primos: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Quantidade invalida.\n");
        return 0;
    }

    printf("Os %d primeiros numeros primos acima de %d sao:\n", n, k);

    numero = k + 1;

    while (encontrados < n) {
        if (primo(numero)) {
            printf("%d", numero);
            encontrados++;

            if (encontrados < n) {
                printf(", ");
            }
        }

        numero++;
    }

    printf("\n");

    return 0;
}
