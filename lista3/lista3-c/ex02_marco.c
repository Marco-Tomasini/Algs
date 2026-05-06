#include <stdio.h>

int main() {
    int n1,n2, i, soma = 0;
    printf("Digite o primeiro número inteiro: ");
    scanf("%i", &n1);
    printf("Digite o segundo número inteiro: ");
    scanf("%i", &n2);

    if (n1 > n2){
        for (i = n2; i < n1; i++)
            if (i % 2 != 0){
                soma = soma + i;
            }
    }
    else{
        for (i = n1; i < n2; i++)
            if (i % 2 != 0){
                soma = soma + i;
            }  
    }

    printf("A soma dos números ímpares entre %i e %i é: %i", n1, n2, soma);

    return 0;
}