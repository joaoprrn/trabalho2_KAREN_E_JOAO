#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "contadores.h"
#include "quicksort.h"

void quick_sort(int *a, int left, int right) {
    long long int trocas = 0, comparacoes = 0;
    int i, j, x, y;
    
    // inicio do tempo
    clock_t t; 
    t = clock();

    i = left;
    j = right;
    x = a[(left + right) / 2];
     
    while(i <= j) {
        while(a[i] < x && i < right) {
            i++;
        }
        while(a[j] > x && j > left) {
            j--;
        }
        if(i <= j) {
            trocas++;
            y = a[i];
            a[i] = a[j];
            a[j] = y;
            i++;
            j--;
        }
    }
     
    if(j > left) {
        comparacoes++;
        quick_sort(a, left, j);
    }
    if(i < right) {
        comparacoes++;
        quick_sort(a, i, right);
    }

    // fim do tempo de execucao
    t = clock() - t; 
    printf("\n\n========================================\n");
    printf("\t ALGORITMO: Quick Sort");
    cont(trocas, comparacoes, t);
}


