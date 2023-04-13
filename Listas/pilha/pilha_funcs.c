// Arquivo com todas as funções criadas

#include <stdio.h>
#include <stdlib.h>
#include "pilha_funcs.h"


int criar_pilha(struct Pilha **pp){
    *pp = 0;

    return 1;
}

void mostrar_topo(struct Pilha *pp){
    if(pp){
        printf("\nO topo: %d", pp->dado); // apenas o primeiro elemento por ser uma pilha
    }   
    else{
        printf("Lista vazia!");
    }
}

int inserir_topo(struct Pilha **pp, int num){
    struct Pilha *novo;
    novo = (struct Pilha*) malloc(sizeof(struct Pilha));

    if(!novo){ // não alocou
        return 0;
    }
    else{
        // preenchendo
        novo->dado = num;
        novo->prox = *pp;

        // inserindo na lista
        *pp = novo;

        return 1;
    }
}

int remover_topo(struct Pilha **pp){
    struct Pilha *sai;

    if(*pp){ // se for diferente de 0
        sai = *pp;
        *pp = (*pp)->prox;
        free(sai);
    }   

    return 1;
}

struct Pilha *esvaziar_pilha(struct Pilha **pp){
    struct Pilha *sai;

    while(*pp){ // se for diferente de 0
        sai = *pp;
        *pp = (*pp)->prox;
        free(sai);
    }   

    return 0;
}