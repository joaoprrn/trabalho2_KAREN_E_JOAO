#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#include "bubblesort.h"
#include "heapsort.h"
#include "insertionsort.h"
#include "merge.h"
#include "quicksort.h"
#include "selectionsort.h"



int main(){
    FILE *file;
    file = fopen("arquivo.txt","w");

    srand(time(NULL));

    for(int i = 0; i < 10; i++){
        fprintf(file,"%d",rand() % 10);
        fprintf(file,"\n");
    }

    fclose(file);

    file = fopen("arquivo.txt","r");

    if(file == NULL){
        printf("O arquivo não pôde ser aberto\n");
        return 0;
    }
    
    int vet[10];
    for(int i = 0; i < 10; i++){
        fscanf(file,"%d",&vet[i]);
        // insere numeroa do arquivo no vetor

    }
    fclose(file);

// INICIO SELECTION SORT ===================================
    printf("\n============================");
    printf("\n\t ALGORTIMO: Selection Sort");
    printf("\n\t TAMANHO: 10");
    clock_t t; 
    t = clock();
    selection_sort(vet, 10);
    t = clock() - t; 
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds 
    printf("\n\t TEMPO: %f", time_taken);
    printf("\n\t ORDENADO: OK!");
// FIM SELECTION SORT ===================================


    for(int i = 0; i < 10; i++){
        printf("%d ",vet[i]);
    }
    printf("\n");
    return 0;
}
