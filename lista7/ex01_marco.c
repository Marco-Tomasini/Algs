#include <stdio.h>

int tipo_triangulo(float a, float b, float c) {
    if (a <= 0 || b <= 0 || c <= 0) {
        return 0;
    }

    if (a + b <= c || a + c <= b || b + c <= a) {
        return 0;
    }

    if (a == b && b == c) {
        return 1;
    }

    if (a == b || a == c || b == c) {
        return 2;
    }

    return 3;
}

int main() {
    float a, b, c;
    int tipo;

    printf("Digite os tres lados do triangulo: ");
    scanf("%f %f %f", &a, &b, &c);

    tipo = tipo_triangulo(a, b, c);

    switch (tipo) {
        case 0:
            printf("Os lados nao formam um triangulo.\n");
            break;
        case 1:
            printf("Triangulo equilatero.\n");
            break;
        case 2:
            printf("Triangulo isosceles.\n");
            break;
        case 3:
            printf("Triangulo escaleno.\n");
            break;
    }

    return 0;
}
