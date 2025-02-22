#include <stdio.h>
#include <stdlib.h>

void selectionSort(int *vetor, int n);

int main()
{
    int i;
    int array[6] = {6,5,4,2,3,1};


    printf("Array desordenado: \n\n");
    for(i = 0; i < 6; i++){
        printf("%d ", array[i]);
    }
    printf("\n\n\n");

    selectionSort(array,6);

    printf("Array ordenado com SelectionSort: \n\n");
    for(i = 0; i < 6; i++){
        printf("%d ", array[i]);
    }
    printf("\n\n\n");

    return 0;
}

void selectionSort(int *vetor, int n){
    int i, j, menor,aux;
    for(i = 0; i < n - 1; i++){
        menor = i;
        for(j = i + 1; j < n; j++){
            if(vetor[j] < vetor[menor]){
                menor = j;
            }
        }if(i != menor){
            aux = vetor[i];
            vetor[i] = vetor[menor];
            vetor[menor] = aux;
        }
    }
}