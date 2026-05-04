#include <stdio.h>

int main() {

    int v[] = {6,3,2,1,4,5};
    int n = sizeof(v);
    int chave;
    int achou = 0;
    scanf("%d", &chave);
    for (int i = 0; i < n; i++) {
        if(chave == v[i]){
            achou = 1;
        }
    }
    if(!achou){
        printf("Elemento não encontrado!\n");
    }
    return 0;
}