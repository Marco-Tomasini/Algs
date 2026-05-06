#include <stdio.h>

int main() {
    int numero, soma = 0;
    
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);
    
    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            soma += i;
        }
    }
    
    if (soma / 2.0 == numero) {
        printf("O numero %d E PERFEITO.\n", numero);
    } else {
        printf("O numero %d NAO E PERFEITO.\n", numero);
    }
    
    return 0;
}
