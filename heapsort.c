#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "contadores.h"
#include "heapsort.h"

void heapsort(int a[], int n) {
    long long int trocas = 0, comparacoes = 0;
    
    // inicio do tempo
    clock_t tempo; 
    tempo = clock();
    int i = n / 2, pai, filho, t;
    while(1) {
        if (i > 0) {
            i--;
            t = a[i];
        } else {
            n--;
            if (n <= 0) return;
            trocas++;
            t = a[n];
            a[n] = a[0];
        }
        pai = i;
        filho = i * 2 + 1;
        while (filho < n) {
            comparacoes++;
            if ((filho + 1 < n)  &&  (a[filho + 1] > a[filho]))
                filho++;
            comparacoes++;
            if (a[filho] > t) {
                trocas++;
                a[pai] = a[filho];
                pai = filho;
                filho = pai * 2 + 1;
            } else {
                break;
          }
        }
        a[pai] = t;
   }
    
    tempo = clock() - t; 
    printf("\n\n========================================\n");
    printf("\t ALGORITMO: Heap SortS");
    cont(trocas, comparacoes, t);

}

