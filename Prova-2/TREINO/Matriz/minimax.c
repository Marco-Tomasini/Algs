// Na teoria de Sistemas, define-se elemento minimax de uma matriz como o menor
// elemento da linha em que se encontra o maior elemento da matriz. Escreva um algoritmo
// que leia uma matriz A(5x5) e determine o elemento minimax desta matriz, escrevendo a
// matriz A, a posição e o valor do elemento minimax.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j, m[5][5], minimax_col = 0, minimax, maior, maior_col, maior_lin;
    
    
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            printf("\nInsira o valor da linha %d coluna %d\n", i+1, j+1);
            scanf("%d", &m[i][j]);
        }
    }

    
    maior_lin = 0;
    maior_col = 0;
    maior = m[0][0];


    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            if(m[i][j] > maior){
                maior_lin = i;
                maior_col = j;
                maior = m[i][j];
            }
        }
    }
    
    minimax = m[maior_lin][0];
    
    for(j = 0; j < 5; j++){
        if(m[maior_lin][j] < minimax){
            minimax = m[maior_lin][j];
            minimax_col = j;
        }
    }
    
    printf("o minimax (%d) esta na linha %d, coluna %d", minimax, maior_lin+1, minimax_col+1);
    
    return 0;
}