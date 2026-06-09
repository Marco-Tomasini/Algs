#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, j, menor, aux, n;

//criando vetor com n valores 

    printf("Quantos valores deseja no vetor:\n");
    scanf("%d", &n);
    
    if(n <= 0){
        printf("valor inválido!");
        return 0;
    }
        
    
    int v[n];
    
    srand(time(NULL));
    
    for(i=0; i<n; i++){
        v[i] = rand() % 1001;
    }
    
//ordenando vetor para busca binária (SelectionSort)

    for(i=0; i<n; i++){
        menor=i;
        
        //comparação
        for(j=i+1; j<n; j++){
            
            if(v[j]<v[menor]){
                menor = j;
            }
        }
        
        //trocas
        aux = v[i];
        v[i] = v[menor];
        v[menor] = aux;
    }
 

//busca binaria
    
    int chave, achou = 0, inicio = 0, fim = n-1, meio;
    
    printf("Qual numero deseja encontar?\n");
    scanf("%d", &chave);
        
    do{
        meio = (inicio + fim)/2;
        
        if (v[meio] == chave){
            achou = 1;
        }else{
            if(v[meio] < chave){
                inicio = meio + 1;
            }else{
                fim = meio-1;
            }
        }
    }while(!achou && inicio <= fim);
    
    if(achou){
        printf("Numero encontrado na posição %d\n", meio);
    }else{
        printf("Numero não encontrado\n");
    }
    
    
    
    return 0;
}