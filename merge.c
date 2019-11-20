#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "contadores.h"
#include "merge.h"

void merge(int vetor[], int comeco, int meio, int fim) {
    long long int trocas = 0, comparacoes = 0;

    // inicio do contador de tempo 
    clock_t t; 
    t = clock();

    int com1 = comeco, com2 = meio+1, comAux = 0, tam = fim-comeco+1;
    int *vetAux;
    vetAux = (int*)malloc(tam * sizeof(int));

    while(com1 <= meio && com2 <= fim){
        if(vetor[com1] < vetor[com2]) {
            // comparacoes
            comparacoes++;
            vetAux[comAux] = vetor[com1];
            com1++;
        } else {
            // comparacoes
            comparacoes++;
            vetAux[comAux] = vetor[com2];
            com2++;
        }
        // trocou
        trocas++;
        comAux++;
    }

    while(com1 <= meio){  //Caso ainda haja elementos na primeira metade
        vetAux[comAux] = vetor[com1];
        comAux++;
        com1++;
    }

    while(com2 <= fim) {   //Caso ainda haja elementos na segunda metade
        vetAux[comAux] = vetor[com2];
        comAux++;
        com2++;
    }

    for(comAux = comeco; comAux <= fim; comAux++){    //Move os elementos de volta para o vetor original
        vetor[comAux] = vetAux[comAux-comeco];
    }
    
    free(vetAux);

    t = clock() - t; 
    printf("\n\n========================================\n");
    printf("\t ALGORITMO: Merge Sort");
    cont(trocas, comparacoes, t);

}

void mergeSort(int vetor[], int comeco, int fim){
    if (comeco < fim) {
        int meio = (fim+comeco)/2;

        mergeSort(vetor, comeco, meio);
        mergeSort(vetor, meio+1, fim);
        merge(vetor, comeco, meio, fim);
    }
}

