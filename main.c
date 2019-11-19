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


void desordena_vetor();

int main(){
    

    
    gerar_arq_aleat(10);
    int vet[10] = ordena_arquivo();
    selection_sort(vet, 10);
    desordena_vetor();

    for(int i = 0; i < 10; i++){
        printf("%d ",vet[i]);
    }
    printf("\n");
    return 0;
}

void desordena_vetor(){
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
}
