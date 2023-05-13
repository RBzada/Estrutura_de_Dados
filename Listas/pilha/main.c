// Arquivo para manipular pilhas

#include <stdio.h>
#include "pilha_funcs.h"

int main(){
    struct Pilha *p1;
    int continuar_operacoes = 1;

    criar_pilha(&p1);

    while (continuar_operacoes == 1){ // Para continuar as operações com a pilha
        int opcao = -1;
    
        menu();
        scanf("%d", &opcao);
        while (opcao < 1 || opcao > 5){ // Verificando se a opcao digitada é válida
            printf("\nOpcao invalida! Tente novamente!\n");
            menu();
            scanf("%d", &opcao);
        }

        if (opcao == 1){
            esvaziar_pilha(&p1);
            printf("\nA pilha foi limpa!\n");
        }

        else if (opcao == 2){
            int num; 

            printf("\nDigite o numero que deseja colocar no topo: ");
            scanf("%d", &num);
            inserir_topo(&p1, num);
        }

        else if (opcao == 3){
            remover_topo(&p1);
            printf("\nTopo removido!");
        }

        else if (opcao == 4){
            mostrar_topo(p1);
        }

        printf("\nContinuar manipulando a pilha (0 para nao e 1 para sim): ");
        scanf("%d", &continuar_operacoes);
        while (continuar_operacoes < 0 || continuar_operacoes > 1){ // Verificando se a opcao digitada é válida
            printf("\nOpcao invalida! Tente novamente!\n");
            printf("\nContinuar manipulando a pilha (0 para nao e 1 para sim): ");
            scanf("%d", &continuar_operacoes);
        }

        if (continuar_operacoes == 0){
            break;
        }
    }
    
    return 0;
}