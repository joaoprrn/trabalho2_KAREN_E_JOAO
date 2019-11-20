#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "contadores.h"
#include "bubblesort.h"

long long int trocas = 0, comparacoes = 0;

void swap(int *a, int *b){ 
    int temp = *a; 
    *a = *b; 
    *b = temp;
    trocas++;
} 


void bubbleSort(int *v, int n){
    long long int trocas = 0, comparacoes = 0;
    clock_t t;
    t = clock();

    if (n < 1){
        t = clock() - t;
        printf("\n\n========================================\n");
        printf("\t ALGORITMO: Bubble SortS");
        cont(trocas, comparacoes, t);
        return;
    } 
 
    for (int i=0; i<n; i++) 
        if (v[i] > v[i+1]){
            swap(&v[i], &v[i+1]);
        }
        comparacoes++;
        bubbleSort(v, n-1); 
}



