// Funções completas que serão utilizadas no main

#include <stdio.h>
#include <stdlib.h>
#include "arvore_funcs.h"

struct no *cria_arvore(int valor, struct no *fesq, struct no *fdir){
    struct no *novo;

    novo = (struct no *) malloc(sizeof(struct no));
    if(!novo) return 0;
    
    novo->valor = valor;
    novo->esq = fesq;
    novo->dir = fdir;
    
    return novo;
}

void mostra_arvore(struct no *raiz){
    if(raiz){
        printf("%d ", raiz->valor);
        mostra_arvore(raiz->esq);
        mostra_arvore(raiz->dir);
    }   
    else return;
}

int contanos(struct no *raiz){
    if(!raiz) return 0;
    return (1 + contano(raiz->esq) + contano(raiz->dir));
}
