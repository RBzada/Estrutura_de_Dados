// Arquivo para manipular a lista

#include <stdio.h>
#include "intro_funcs.h"

int main(){
    Lista l1;
    int opcao, continuaroperacao = 1;

    criar_lista(&l1);
    for (int i = 0; i < N; i++){
        l1.dados[i] = i;
        l1.controle++;
    }


    while(continuaroperacao == 1){
        menu();
        scanf("%d", &opcao);
        while (opcao < 1 || opcao > 4){
            printf("\nOpcao invalida. Tente novamente\n\n");
            menu();
            scanf("%d", &opcao);
        }

        if (opcao == 1){
            // Limpar lista

            if (limpar_lista(&l1) == 1){
                printf("\nLista limpa com sucesso!");
            }
        }

        else if(opcao == 2){
            // Inserindo elemento
            int num, inserir, continuar = 1;
            while(continuar == 1){     
                printf("\nDigite o numero que deseja inserir: ");
                scanf("%d", &num);
                
                printf("\nDigite onde deseja inserir o elemento(0 no comeco e 1 no final): ");
                scanf("%d", &inserir);
                while(inserir != 0 && inserir != 1){
                    // Enquanto o usuário não colocar 0 ou 1 fica num loop infinito
                    printf("\nOpcao invalida. Tente novamente\n\n");
                    printf("\nDigite onde deseja inserir o elemento(0 no comeco e 1 no final): ");
                    scanf("%d", &inserir);
                }

                if (inserir == 0){
                    // Inserindo no comeco
                    if (insere_inicio(&l1, num) == 1){
                        printf("\nElemento inserido no inicio com sucesso!\n");
                    }
                    else{
                        printf("\nA lista esta cheia!\n");
                    }
                }
                else if(inserir == 1){
                    // Inserindo no final
                    if (insere_fim(&l1, num) == 1){
                        printf("\nElemento inserido no fim com sucesso!\n");
                    }
                    else{
                        printf("\nA lista esta cheia!\n");
                    }
                }

                printf("\nDeseja continuar inserindo elementos(1 para sim e 0 para nao): ");
                scanf("%d", &continuar);
                printf("-----------------------------------------------------------------");

                // Validação da opção continuar
                while (continuar != 0 && continuar != 1){
                    printf("\nOpcao invalida! Tente novamente.");
                    printf("\nDeseja continuar inserindo elementos(1 para sim e 0 para nao): ");
                    scanf("%d", &continuar);
                    printf("-----------------------------------------");
                }
            }
        }

        else if (opcao == 3){
            // Removendo elemento
            int remover, continuar = 1;
            while(continuar == 1){
                printf("\nDigite de onde deseja remover o elemento(0 do comeco e 1 do final): ");
                scanf("%d", &remover);
                while(remover != 0 && remover != 1){
                    // Enquanto o usuário não colocar 0 ou 1 fica num loop infinito
                    printf("\nOpcao invalida. Tente novamente\n\n");
                    printf("\nDigite de onde deseja remover o elemento(0 do comeco e 1 do final): ");
                    scanf("%d", &remover);
                }

                if (remover == 0){
                    // Removendo do comeco
                    if (remove_inicio(&l1) == 1){
                        printf("\nElemento removido do inicio com sucesso!\n");
                    }
                    else{
                        printf("\nA lista esta vazia!\n");
                    }
                }
                else if(remover == 1){
                    // Removendo no final
                    if (remove_fim(&l1) == 1){
                        printf("\nElemento removido do fim com sucesso!\n");
                    }
                    else{
                        printf("\nA lista esta vazia!\n");
                    }
                }
                
                printf("\nDeseja continuar removendo elementos(1 para sim e 0 para nao): ");
                scanf("%d", &continuar);
                printf("-----------------------------------------------------------------");

                // Validação da opção continuar
                while (continuar != 0 && continuar != 1){
                    printf("\nOpcao invalida! Tente novamente.");
                    printf("\nDeseja continuar removendo elementos(1 para sim e 0 para nao): ");
                    scanf("%d", &continuar);
                    printf("-----------------------------------------");
                }
            }
        }

        else if (opcao == 4){
            // Mostrando lista
            mostrar_lista(&l1);
        }

        printf("\nDeseja continuar fazendo operacoes na lista (1 para sim e 0 para nao): ");
        scanf("%d", &continuaroperacao);
        printf("-------------------------------------------------------------------------");
        
        while (continuaroperacao != 0 && continuaroperacao != 1){
            printf("\nOpcao invalida! Tente novamente.");
            printf("\nDeseja continuar fazendo operacoes na lista (1 para sim e 0 para nao): ");
            scanf("%d", &continuaroperacao);
            printf("-----------------------------------------------------------------------\n");
        }

        printf("\n\n");
    }
    
    return 0;
}
