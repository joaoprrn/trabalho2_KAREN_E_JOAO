#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "arquivo.h"


void gerar_arq_aleat(int quant){
    FILE *file;
    file = fopen("arquivo.txt","w");

    srand(time(NULL));

    for(int i = 0; i < quant; i++){
        fprintf(file,"%d",rand() % quant);
        fprintf(file,"\n");
    }

    fclose(file);

}

int* ordena_arquivo(int *vet){
    FILE *file;
    file = fopen("arquivo.txt","r");

    if(file == NULL){
        printf("O arquivo não pôde ser aberto\n");
        return 0;
    }
    

    for(int i = 0; i < 10; i++){
        fscanf(file,"%d",&vet[i]);
        // insere numeroa do arquivo no vetor

    }
    return vet;
}

