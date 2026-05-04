#include <stdio.h>
#include <stdlib.h>
int main() {
    int vetor[] = {1, 2, 3, 4, 5};
    int n = sizeof(vetor);
    int low = 0,achou = 0, key;
    int high = n - 1;
    scan("%i", &key);
    do {

        int mid = atoi((low+high)/2);
        int tent = vetor[mid];

        if(tent == key){
            achou = 1;
        }
        if(tent > key){
            high = mid - 1;
        }else {

        }


    }while(achou !=1 && low <= high);


    return 0;
}