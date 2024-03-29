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

// protótipo da funcao menu
int Menu();

int main(){

    while(1){  // só para quando o usuario escolher sair   
        
        // recebe a opcao que o usuario escolheu no menu e coloca na variavel 'opcao'
        int opcao = Menu();

        if (opcao == 1){ // 1- Gerar Arquivo
        
            //usuario vai escolher qual o tamanho do arquivo que ele quer
            int tamanhoArquivo=0;
            printf("\n ======= GERAR ARQUIVO ========\n");
            printf("\t Tamanho do arquivo: ");
            scanf("%d", &tamanhoArquivo);

            // gera o arquivo com base no tamanho que o usuario quer
            gerar_arq_aleat(tamanhoArquivo);
            printf("\n\tArquivo gerado com sucesso!\n");

            // chama o menu novamente
            opcao =  Menu();
            if (opcao == 2){ // 2- Ordenar Arquivo

                int *vet = (int*) malloc(tamanhoArquivo * sizeof(int));
                //int vet[10];
                selection_sort(vet, tamanhoArquivo);
                ordena_arquivo(vet, tamanhoArquivo);
                bubbleSort(vet, tamanhoArquivo);
                ordena_arquivo(vet, tamanhoArquivo);
                heapsort(vet, tamanhoArquivo);
                ordena_arquivo(vet, tamanhoArquivo);
                insertionSort(vet, tamanhoArquivo);
                ordena_arquivo(vet, tamanhoArquivo);
                //merge(vet, tamanhoArquivo);
                //ordena_arquivo(vet, tamanhoArquivo);
                //quick_sort(vet, tamanhoArquivo);
                //ordena_arquivo(vet, tamanhoArquivo);

                /*for(int i = 0; i < tamanhoArquivo; i++){
                    printf("%d ",vet[i]);
                }
                printf("\n");*/

                /*Temos que fazer a função para inserir os números
                desordenados do arquivo no vetor pra chamar os outros algoritmos
                */

                // desordenar o vetor e chamar os outros algoritmos
            }
            else if (opcao == 3){ // 3- Sair
                // funcao da biblioteca stdlib, o 0 como parametro indica que nao ocorreu erro
                exit (0);
            }
        }

        else if (opcao == 2){ // 2- Ordenar Arquivo
            printf("\nPor favor, gere um arquivo!\n");

        }
        else if (opcao == 3){ // 3- Sair
            // funcao da biblioteca stdlib, o 0 como parametro indica que nao ocorreu erro
            exit (0);
        }
        }
    return 0;
}

int Menu(){
    // opcao que o usuário irá escolher do menu
    int opcaoMenu = 0;

    // exibe o menu
    printf("\n\n===== PROJETO ORDENAÇÃO ======\n");
    printf("\t 1- Gerar Arquivo\n");
    printf("\t 2- Ordenar Arquivo\n");
    printf("\t 3- Sair\n");

    // lê a opcao que o usuário escolheu
    scanf("%d", &opcaoMenu); 
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