// Arquivo com todas as funções criadas

#include <stdio.h>
#include <stdlib.h>
#include "dupla_funcs.h"

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
            printf("%d ", aux->dado);
        }
    }
    else{
        printf("\nA lista esta vazia!");
    }
}
