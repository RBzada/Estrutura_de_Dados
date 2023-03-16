// Arquivo com todas as funções criadas

#include <stdio.h>
#include "intro_funcs.h"

int criar_lista(Lista *l){
    l->controle = -1;
    return 1;
}

int limpar_lista(Lista *l){
    l->controle = -1;
    return 1; 
}

void mostrar_lista(Lista *l){
    if (l->controle != -1){
        for (int i = 0; i < N; i++){
            printf("%d ", l[i]);
        }
    }
    else{
        printf("A lista esta vazia!");
    }
}

int remove_fim(Lista *l){
    if(l->controle == -1){
        return 0;
    }
    else{
        l->controle--;
        return 1;
    }
}