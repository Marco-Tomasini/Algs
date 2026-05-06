#include <stdio.h>

int main() {
    int n, i = 0, valor;
    float soma_arit = 0.0, soma_harm = 0.0;
    
    printf("Quantos valores deseja digitar? ");
    scanf("%d", &n);

    while(i < n){
        printf("Digite um valor inteiro e positivo: ");
        scanf("%d", &valor);
        
        if (valor > 0){
            soma_arit += valor;
            soma_harm += 1.0 / valor;
            i++;
        } else {
            printf("Valor invalido!\n");
        }
    }

    if (n > 0) {
        printf("Media Aritmetica = %.2f\n", soma_arit / n);
        printf("Media Harmonica = %.2f\n", n / soma_harm);
    }
    
    return 0;
}   