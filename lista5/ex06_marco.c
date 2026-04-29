#include <stdio.h>

int main() {
    int vetor[30];
    int i, soma = 0, somaAcima = 0, quantidadeAcima = 0;
    float media, porcentagem;

    for (i = 0; i < 30; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }

    media = (float)soma / 30;

    printf("Media de todos os valores: %.2f\n", media);
    printf("Valores acima da media e suas posicoes:\n");

    for (i = 0; i < 30; i++) {
        if (vetor[i] > media) {
            printf("Valor: %d - Posicao: %d\n", vetor[i], i);
            somaAcima += vetor[i];
            quantidadeAcima++;
        }
    }

    porcentagem = (quantidadeAcima * 100.0) / 30;

    printf("Quantidade acima da media: %d\n", quantidadeAcima);
    printf("Soma dos numeros acima da media: %d\n", somaAcima);
    printf("Porcentagem acima da media: %.2f%%\n", porcentagem);

    return 0;
}
