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
    clock_t t;
    t = clock();
    if (n < 1){
        t = clock() - t;
        cont(trocas, comparacoes, t);
        return;
    } 
 
    for (int i=0; i<n; i++) 
        if (v[i] > v[i+1]){
            comparacoes++;
            swap(&v[i], &v[i+1]);
        }
    bubbleSort(v, n-1); 
}



