#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "contadores.h"
#include "selectionsort.h"


void selection_sort(int num[], int tam) { 
  long long int trocas = 0, comparacoes = 0;
  int i, j, min, aux;

  clock_t t; 
  t = clock();

  for (i = 0; i < (tam-1); i++) 
  {
     min = i;
     for (j = (i+1); j < tam; j++) {
       if(num[j] < num[min]) {
        comparacoes++;
        min = j;
       }
         
     }
     if (num[i] != num[min]) {
       trocas++;
       aux = num[i];
       num[i] = num[min];
       num[min] = aux;
     }
  }

  t = clock() - t; 
  printf("\n========================================\n");
  printf("\t ALGORITMO: Selection SortS");
  cont(trocas, comparacoes, t);
}

