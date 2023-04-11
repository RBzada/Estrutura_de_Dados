// Arquivo com todas as funções criadas

#include <stdio.h>
#include <stdlib.h>
#include "simples_funcs.h"


void menu(){
    printf("-----------------------------");
    printf("\n            MENU\n");
    printf("-----------------------------");
    printf("\n1 - Para limpar a lista.");
    printf("\n2 - Para inserir elemento.");
    printf("\n3 - Para remover elemento.");
    printf("\n4 - Para mostrar toda lista.");
    printf("\n-----------------------------");
    printf("\nDigite a opcao que deseja: ");
}

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

int limpa_lista(struct no **ll){
    struct no *sai;

    while(*ll){ // enquanto for diferente de 0
        sai = *ll;
        *ll = (*ll)->prox;
        free(sai);
    }   

    return 1;
}

int remover_inicio(struct no **ll){
    struct no *sai;

    if(*ll){ // enquanto for diferente de 0
        sai = *ll;
        *ll = (*ll)->prox;
        free(sai);
    }   

    return 1;
}

int remover_fim(struct no **ll){
    struct no *sai, *aux;
    
    aux = *ll;

    if(aux->prox == 0){
        sai = aux;
        *ll = 0;
        free(sai);
    }
    else if(aux){
        for(;aux->prox->prox != 0; aux = aux->prox);

        sai = aux->prox;
        aux->prox = 0;
        free(sai);
    }

    return 1;
}

int destrutor(struct no **ll){
    free(ll);
    return 1;
}