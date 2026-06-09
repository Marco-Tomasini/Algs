#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, j, aux, n;

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
    
//ordenando vetor para busca binária (BubleSort)
    
    for(i=0; i<n;i++){
        for(j=0;j<n-1-i;j++){
            if(v[j]>v[j+1]){
                aux=v[j+1];
                v[j+1]=v[j];
                v[j]=aux;
            }
        }
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