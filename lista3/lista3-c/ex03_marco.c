#include <stdio.h>

int main() {
    int n, i, amplitude, num, amplitude_min = 0;
    printf("Quantos números deseja digitar? ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        printf("digite um número: ");
        scanf("%d", &num);
        if (num > amplitude){
            amplitude = num;
        }
        if (num < amplitude_min){
            amplitude_min = num;
        }
    }
    
    printf("A amplitude é: %d", amplitude - amplitude_min);
    return 0;
}