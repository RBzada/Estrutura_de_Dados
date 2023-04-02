// Arquivo com todas as funções criadas

#include <stdio.h>
#include <stdlib.h>
#include "simples_funcs.h"

int criar_lista(struct no **ll){
    *ll = 0;

    return 1;
}

void mostra_lista(struct no *ll){
    struct no *aux = ll;

    if (aux != 0){
        for (aux = ll; aux != 0; aux = aux->prox){
            printf("%d ", aux->prox);
        }
    }
    else{
        printf("\nA lista esta vazia!");
    }
}
