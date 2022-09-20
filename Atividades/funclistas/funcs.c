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
        l->cti = N;
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


void inserir_fim(Lista *l, int elemento){
    if(l->ctf == N){
        l->ctf = 0;
    }
    else if(l->ctf == -1){
        l->ctf += 1;
    }
    else{
        l->ctf += 1;
    }

    if (l->cti == -1){
        l->cti = 0;
    }

    l->dados[l->ctf] = elemento;

}

void mostrar_lista(Lista* l){
    // Caso o cti e o ctf sejam iguais
    if(l -> cti == l->ctf){ 
        printf("%d", l->dados[0]);
    }

    // Caso cti seja 1 e ctf seja 0   
    else if(l->cti == 1 && l->ctf == 0){
        int contagem = 0;
        for (int i = l->cti; i != (l->ctf); i++){
            contagem++;
            if (i == N){
                printf(" %d", l->dados[i]);
                i = 0;
            }

            printf(" %d", l->dados[i]);
            if (contagem == N){
                break;
            }
        }
    }

    // Caso cti seja 0 e ctf seja N
    else if(l->cti == 0 && l->ctf == N){
        for (int i = 0; i < (N + 1); i++){
            printf(" %d", l->dados[i]);
        }
    }

    // Caso cti seja a soma de ctf + 1 (lista cheia)
    else if(l->cti == l->ctf + 1){
        int ctiaux;
        ctiaux = l->cti;
        for (int i = 0; i < N; i++){
            printf("%d ", l->dados[ctiaux]);
            if (ctiaux == N){
                ctiaux = 0;
                printf("%d ", l->dados[ctiaux]);
            }
            
            ctiaux++;
        }    
    }

    else{
        for (int i = l->cti; i != (l->ctf + 1); i++){
            if (i == N){
                printf(" %d", l->dados[i]);
                i = 0;
            }

            printf(" %d", l->dados[i]);
        }
    }
}

