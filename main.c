#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#include "arquivo.h"
#include "bubblesort.h"
#include "heapsort.h"
#include "insertionsort.h"
#include "merge.h"
#include "quicksort.h"
#include "selectionsort.h"
// gcc arquivo.c contadores.c bubblesort.c heapsort.c insertionsort.c merge.c quicksort.c selectionsort.c main.c -o main.out

//void desordena_vetor();

// protótipo da funcao menu
int Menu();

int main(){
        
    
    int opcao = Menu();

    // FUNCIONAMENTO DAS OPÇÕES DO MENU
    // 1- Gerar Arquivo
    // 2- Ordenar Arquivo
    // 3- Sair
    if (opcao == 1){
        //usuario vai escolher qual o tamanho do arquivo que ele quer
        int tamanhoArquivo=0;
        printf("\n ======= GERAR ARQUIVO ========\n");
        printf("\t Tamanho do arquivo: ");
        scanf("%d", &tamanhoArquivo);

        // gera o arquivo com base no tamanho que o usuario quer
        gerar_arq_aleat(tamanhoArquivo);
    }
    else if (opcao == 2){

        int vet[10];
        selection_sort(vet, 10);
        /*Temos que fazer a função para inserir os números
        desordenados do arquivo no vetor pra chamar os outros algoritmos
        */

       // chamar os outros algoritmos e desordenar o vetor sempre

    }
    else if (opcao == 3){
        // funcao da biblioteca stdlib, o 0 como parametro indica que nao ocorreu erro
        exit (0);
    }

    return 0;
}

int Menu(){
    // opcao que o usuário irá escolher do menu
    int opcaoMenu = 0;

    // exibe o menu
    printf("===== PROJETO ORDENAÇÃO ======\n");
    printf("\t 1- Gerar Arquivo\n");
    printf("\t 2- Ordenar Arquivo\n");
    printf("\t 3- Sair\n");

    // lê a opcao que o usuário escolheu
    scanf("%d \n ", &opcaoMenu); 
    return opcaoMenu;
}


/*void desordena_vetor(){
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
*/