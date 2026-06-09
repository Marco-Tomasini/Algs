#include <stdio.h>

int main()
{
    int v[10], vi[10], par = 0, impar = 0, i;
    float media_imp = 0, media = 0;

    for(i=0; i<10; i++){
        printf("Digite o valor %d do vetor: \n", i+1);
        scanf("%d", &v[i]);
        
        if(v[i]%2 == 0){
            par++;
        }else{
            if(v[i] > 10){
                media_imp += v[i];
                impar++;
            }
        }
        
        media += v[i];
    }
    
    media_imp = media_imp/impar;
    media = media/10;
    
    printf("\nQuantitade de pares: %d \n", par);
    printf("Média impares > 10: %f \n", media_imp);
    printf("Valores acima da média geral: \n");
    
    for(i=0; i<10; i++){
        if(v[i] > media){
            printf("        Posição %d : %d \n", i+1 , v[i]);
        }
    }
    
    printf("Vetor Invertido: ");
    
    for(i=0; i<10; i++){
        vi[i] = v[10-i];
        printf("%d", v[i]);
        
        if(i<10){
            printf(", ");
        }
    }
    

//fibonacci
    int n;
    
    printf("\n\n Quantos valores deseja na sequencia de Fibonacci?\n");
    scanf("%d", &n);
    
    if(n <= 0 || n > 50){
        printf("Valor Invalido para a sequencia!");
        return 0;
    } else{
        int f[n];
        
        f[0] = 1;
        
        if(n > 1){
            f[1] = 1;
        }
        
        for(i = 2; i < n; i++){
            f[i] = f[i-1] + f[i-2];
        }
        
        printf("Sequencia Fibonacci: ");
        
        for (i=0; i<n; i++){
            printf("%d", f[i]);
            
            if(i < n-1){
                printf(", ");
            }
        }
    }
    
    return 0;
}