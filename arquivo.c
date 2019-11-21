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



void ordena_arquivo(int *vet, int tamanhoArquivo){
    FILE *file;
    file = fopen("arquivo.txt","r");

    if(file == NULL){
        printf("O arquivo não pôde ser aberto\n");
        return;
    }
    

    for(int i = 0; i < tamanhoArquivo; i++){
        fscanf(file,"%d",&vet[i]);
        // insere numeroa do arquivo no vetor

    }
    //return vet;
}

