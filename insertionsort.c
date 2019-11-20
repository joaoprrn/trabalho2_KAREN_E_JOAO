#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "contadores.h"
#include "insertionsort.h"


void insertionSort(int arr[], int n){ 
    // contadores 
    long long int trocas = 0, comparacoes = 0;
    
    // inicio do tempo
    clock_t t; 
    t = clock();
    
    int i, key, j; 
    for (i = 1; i < n; i++) { 
        key = arr[i]; 
        j = i - 1; 
        while (j >= 0 && arr[j] > key) { 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
        } 
        arr[j + 1] = key; 
    }

    t = clock() - t; 
    printf("\n\n========================================\n");
    printf("\t ALGORITMO: Insertion SortS");
    cont(trocas, comparacoes, t);

} 

void printArray(int arr[], int n){ 
    int i; 
    for (i = 0; i < n; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
} 
