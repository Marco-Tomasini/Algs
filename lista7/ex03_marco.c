#include <stdio.h>

int soma_impares_entre(int x, int y) {
    int inicio, fim, i, soma = 0;

    if (x < y) {
        inicio = x + 1;
        fim = y - 1;
    } else {
        inicio = y + 1;
        fim = x - 1;
    }

    for (i = inicio; i <= fim; i++) {
        if (i % 2 != 0) {
            soma += i;
        }
    }

    return soma;
}

int main() {
    int x, y, soma;

    printf("Digite os valores de x e y: ");
    scanf("%d %d", &x, &y);

    soma = soma_impares_entre(x, y);

    printf("Soma dos impares entre %d e %d: %d\n", x, y, soma);

    return 0;
}
