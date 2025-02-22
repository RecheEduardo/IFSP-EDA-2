#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int buscaLinear(int *vetor, int n, int elem);
int buscaOrdenada(int *vetor, int n, int elem);
int buscaBinaria(int *vetor, int n, int elem);

int main()
{
    // Variaveis
    setlocale(LC_ALL, "portuguese");
    int vetorDesordenado[7] = {100,130,120,110,160,150,140};
    int vetorOrdenado[7] = {100,110,120,130,140,150,160};
    int i, x,elemBuscado;

    // Busca Linear
    printf("Vetor: ");
    for(i = 0; i < 7; i++){
        printf("%d ", vetorDesordenado[i]);
    }
    printf("\n\n");

    elemBuscado = 120;

    printf("Elemento a ser procurado por busca linear: %d\n\n", elemBuscado);

    x = buscaLinear(vetorDesordenado, 7, elemBuscado);

    if(x){
        printf("O índice do elemento no vetor é: %d\n\n", x);
    }else{
        printf("Elemento não encontrado...\n\n");
    }

    printf("\n");
    // Fim Busca Linear


    // Busca Ordenada
    printf("Vetor ordenado: ");
    for(i = 0; i < 7; i++){
        printf("%d ", vetorOrdenado[i]);
    }
    printf("\n\n");

    elemBuscado = 150;

    printf("Elemento a ser procurado por busca ordenada: %d\n\n", elemBuscado);

    x = buscaOrdenada(vetorOrdenado, 7, elemBuscado);

    if(x){
        printf("O índice do elemento no vetor é: %d\n\n", x);
    }else{
        printf("Elemento não encontrado...\n\n");
    }
    // Fim Busca Ordenada


    // Busca binária
    elemBuscado = 160;

    printf("\nElemento a ser procurado por busca binária: %d\n\n", elemBuscado);

    x = buscaBinaria(vetorOrdenado, 7, elemBuscado);

    if(x){
        printf("\nO índice do elemento no vetor é: %d\n\n", x);
    }else{
        printf("\nElemento não encontrado...\n\n");
    }


    return 0;
}

int buscaLinear(int *vetor, int n, int elem){
    int i;
    for(i = 0; i <= n; i++){
        if(elem == vetor[i]){
            return i;
        }
    }
    return -1;
}

int buscaOrdenada(int *vetor, int n, int elem){
    int i;
    for(i = 0; i <= n; i++){
        if(elem == vetor[i]){
            return i;
        }else{
            if(elem < vetor[i]){
                return -1;
            }
        }
    }
    return -1;
}

int buscaBinaria(int *vetor, int n, int elem){

    int i,inicio,meio,fim;
    inicio = 0;
    fim = n - 1;

    while(inicio <= fim){
        meio = (inicio + fim)/2;
        printf("\nInício: %d    Fim: %d\n\n", inicio, fim);

        if(elem < vetor[meio]){
            fim = meio - 1;
        }else{
            if( elem > vetor[meio]){
                inicio = meio + 1;
            }else{
                return meio;
            }
        }
    }
    return -1;
}


