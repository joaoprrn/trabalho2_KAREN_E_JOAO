#include <stdio.h>
#include <stdlib.h>
#include "contadores.h"

void cont(int trocas, int comparacoes, float tempo){
    printf("\n\t QUANTIDADE DE TROCAS: %d", trocas);
    printf("\n\t QUANTIDADE DE COMPARAÇÕES: %d", comparacoes);
    printf("\n\t TEMPO EM CLOCKS: %f", tempo);
    printf("\n========================================\n\n");
}

