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
            printf("%d ", aux->valor);
        }
    }
    else{
        printf("\nA lista esta vazia!");
    }
}

int inserir_inicio(struct no **ll, int num){
    struct no *nova;
    nova = (struct no*) malloc(sizeof(struct no));

    if(!nova){ // não alocou
        return 0;
    }
    else{
        // preenchendo
        nova->valor = num;
        nova->prox = *ll;

        // inserindo na lista
        *ll = nova;

        return 1;
    }
}

int inserir_fim(struct no **ll, int num){
    struct no *nova, *aux;
    nova = (struct no*) malloc(sizeof(struct no));

    if (!nova){
        return 0;
    }
    else{
        // preenchendo
        nova->valor = num;
        nova->prox = 0;

        aux = *ll;

        if(aux){ // se aux != 0 (se é o primeiro)
            for (;aux->prox != 0; aux = aux->prox);
            
            aux->prox = nova;
        }
        else{ // se a lista não possui elementos
            *ll = nova;
        }
    }
}
