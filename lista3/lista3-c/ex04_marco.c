#include <stdio.h>

int main() {
    int inicio, fim;
    
    printf("Digite o inicio do intervalo (Fahrenheit): ");
    scanf("%d", &inicio);
    printf("Digite o fim do intervalo (Fahrenheit): ");
    scanf("%d", &fim);
    
    printf("\nTabela de conversao Fahrenheit -> Celsius\n");
    printf("-----------------------------------------\n");
    
    for (int f = inicio; f <= fim; f += 2) {
        float c = (f - 32.0) * 5.0 / 9.0;
        printf("Fahrenheit: %d | Celsius: %.2f\n", f, c);
    }
    
    return 0;
}
