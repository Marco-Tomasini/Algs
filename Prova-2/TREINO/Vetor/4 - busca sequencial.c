#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, n, chave, pos = -1;

//criando vetor com n valores 

    printf("Quantos valores deseja no vetor:\n");
    scanf("%d", &n);
    
    if(n <= 0){
        printf("valor inválido!\n");
        return 0;
    }
        
    
    int v[n];
    
    srand(time(NULL));
    
    for(i=0; i<n; i++){
        v[i] = rand() % 1001;
    }
    

//busca sequencial
    printf("Que valor deseja buscar?\n");
    scanf("%d", &chave);
    
    for(i=0;i<n-1;i++){
        if(v[i] == chave){
            pos = i;
        }
    }
    
    if(pos == -1){
        printf("Valor não encontrado\n");
    }else{
        printf("Valor %d encontrado na posição: %d \n", chave, pos);
    }
    
    return 0;
}