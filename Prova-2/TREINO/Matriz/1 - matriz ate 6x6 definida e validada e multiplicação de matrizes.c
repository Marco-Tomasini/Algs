#include <stdio.h>
#include <stdlib.h>

//Modifique o algoritmo anterior para torná-lo mais genérico. Declare as matrizes A e B
//como 6x6 (limite máximo para esse programa) e faça com que o usuário entre com o
//número de linhas e colunas que efetivamente A e B terão (que deve respeitar o limite).
//Depois, o usuário deve entrar com os dados de A e B (de acordo com o número de linhas
//e colunas definido). O programa então calcula a multiplicação entre A e B e armazena na
//matriz resultante C, com o seu número de linhas e colunas definido em função do
//tamanho de A e B. Por fim, mostrar a matriz C. Lembre-se de testar a compatibilidade
//entre as duas matrizes.

int main() {
    int colA, linA, colB, linB, i, j, k;
    int A[6][6], B[6][6], C[6][6];
    
    printf("Quantas Linhas Quer na Matriz A?\n");
    scanf("%d", &linA);
    
    printf("\nQuantas Colunas Quer na Matriz A?\n");
    scanf("%d", &colA);
    
    printf("\nQuantas Linhas Quer na Matriz B?\n");
    scanf("%d", &linB);
    
    printf("\nQuantas Colunas Quer na Matriz B?\n");
    scanf("%d\n", &colB);
    
    if(linA > 6 || linB > 6 || colA > 6 || linB > 6){
        printf("O tamanho das matrizes não pode ser maior que 6x6\n");
        return 0;
    }else{
        if(colA != linB){
            printf("O nº de colunas da matriz A não é igual ao número de linhas da matriz B, impossível fazer a multiplicação\n");
        }else{
            for(i=0; i<linA; i++){
                for(j=0; j<colA; j++){
                    printf("Digite o elemento da linha %d coluna %d da matriz A\n", i+1, j+1);
                    scanf("%d", &A[i][j]);
                }
            }
            
            for(i=0; i<linB; i++){
                for(j=0; j<colB; j++){
                    printf("Digite o elemento da linha %d coluna %d da matriz B\n", i+1, j+1);
                    scanf("%d", &B[i][j]);
                }
            }
            
            //Multiplicação das matrizes
            for(i = 0; i < linA; i++){
                for(j = 0; j < colB; j++){
                    C[i][j] = 0; // Inicializa a posição com 0 antes de somar
                    for(k = 0; k < colA; k++){ // Pode ser colA ou linB, são iguais
                        C[i][j] += A[i][k] * B[k][j];
                    }
                }
            }
            
            //Matriz C resultante
            printf("\nMatriz C Resultante:\n");
            for(i = 0; i < linA; i++){
                for(j = 0; j < colB; j++){
                    printf("%d\t", C[i][j]);
                }
            printf("\n"); 
            }
        }
    }
    return 0;
}