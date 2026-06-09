#include <stdio.h>

int main()
{
    float v[10];
    int i, n;
    float maior, media = 0, acima_m = 0;

    for (i = 0; i < 10; i++) {
        printf("Digite o %d° valor do vetor\n", i+1);
        scanf("%f", &v[i]);
        
        if(i == 0){
            maior = i;
        }
        
        if(v[i] > maior){
            maior = v[i];
        }
        
        media += v[i];
    }
    
    media = media/10;
    
    printf("\nMaior Valor: %f \n", maior);
    printf("Média dos valores: %.2f \n", media);
    printf("Valores acima da média: \n");
    
    for(i = 0; i < 10; i++){
        if(v[i] > media){
            printf("         posição %d: %.2f \n",i+1, v[i]);
        }
    }
    
    return 0;
}