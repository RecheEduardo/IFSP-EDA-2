#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int *vetor, int n);
void selectionSort(int *vetor, int n);
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


    bubbleSort(array, 6);

    printf("Array ordenado com BubbleSort: \n\n");
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


    insertionSort(array,6);

    printf("Array ordenado com insertionSort: \n\n");
    for(i = 0; i < 6; i++){
        printf("%d ", array[i]);
    }
    printf("\n\n\n");

    return 0;
}

void bubbleSort(int *vetor, int n){
    int i, continua,aux, fim = n;
    do{
        continua = 0;
        for(i = 0; i < n - 1; i++){
            if(vetor[i] > vetor[i + 1]){
                aux = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = aux;
                continua = i;
            }
        }
        fim--;
    }while(continua != 0);
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
