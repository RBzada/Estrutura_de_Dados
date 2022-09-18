#include "funcs.h"
#include <stdio.h>
#include <string.h>

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

void criar_lista(Lista *l){
    l->cti = -1;
    l->ctf = -1;
}

void limpar_lista(Lista *l){
    l->cti = -1;
    l->ctf = -1;
}

void inserir_inicio(Lista *l, int elemento){
    if (l->cti == 0){
        l->cti = 5;
    }
    else if(l->cti == -1){
        l->cti += 1;
    }
    else{
        l->cti -= 1;
    }

    if (l->ctf == -1){
        l->ctf = 0;
    }
    

    l->dados[l->cti] = elemento;

}

void mostrar_lista(Lista  *l){
    for (int i = l->cti; i < l->ctf; i++){
        printf("\n%d", l->dados[i]);
    }
}

