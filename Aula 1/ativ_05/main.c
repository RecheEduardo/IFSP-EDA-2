#include <stdio.h>
#include <stdlib.h>

void insertionSort(int *vetor, int n);

int main()
{
    int i;
    int array[6] = {6,5,4,2,3,1};


    printf("Array desordenado: \n\n");
    for(i = 0; i < 6; i++){
        printf("%d ", array[i]);
    }
    printf("\n\n\n");

    insertionSort(array,6);

    printf("Array ordenado com InsertionSort: \n\n");
    for(i = 0; i < 6; i++){
        printf("%d ", array[i]);
    }
    printf("\n\n\n");

    return 0;
}

void insertionSort(int *vetor, int n){
    int i, j, aux;

    for(i = 1; i < n; i++){
        aux = vetor[i];
        for(j = i; (j > 0) && (aux < vetor[j-1]); j--){
            vetor[j] = vetor[j-1];
        }
        vetor[j] = aux;
    }
}