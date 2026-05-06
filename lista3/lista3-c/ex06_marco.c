#include <stdio.h>
#include <ctype.h>

int main() {
    int n, qtd_mulheres = 0;
    float altura, maior_altura_h = 0.0, soma_altura_m = 0.0;
    char sexo;
    
    printf("Digite o numero de pessoas (N): ");
    scanf("%i", &n);
    
    for (int i = 0; i < n; i++) {
        printf("\nDados da pessoa %i:\n", i + 1);
        printf("Sexo (M/F): ");
        scanf(" %c", &sexo);
        sexo = toupper(sexo);
        
        printf("Altura (m): ");
        scanf("%f", &altura);
        
        if (sexo == 'M') {
            if (altura > maior_altura_h) {
                maior_altura_h = altura;
            }
        } else if (sexo == 'F') {
            soma_altura_m += altura;
            qtd_mulheres++;
        } else {
            printf("Sexo invalido! Ignorando pessoa...\n");
            i--;
        }
    }
    
    printf("\n--- Resultados ---\n");
    if (maior_altura_h > 0.0) {
        printf("A maior altura entre os homens: %.2fm\n", maior_altura_h);
    } else {
        printf("Nenhum homem foi registrado.\n");
    }
    
    if (qtd_mulheres > 0) {
        printf("A media de altura das mulheres: %.2fm\n", soma_altura_m / qtd_mulheres);
    } else {
        printf("Nenhuma mulher foi registrada.\n");
    }
    
    return 0;
}
