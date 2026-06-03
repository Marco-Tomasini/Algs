#include <stdio.h>

int maior_valor(int a, int b, int c) {
    int maior = a;

    if (b > maior) {
        maior = b;
    }

    if (c > maior) {
        maior = c;
    }

    return maior;
}

int main() {
    int a, b, c, maior;

    printf("Digite tres valores inteiros: ");
    scanf("%d %d %d", &a, &b, &c);

    maior = maior_valor(a, b, c);

    printf("Maior valor: %d\n", maior);

    return 0;
}
