#include <stdio.h>
#include <string.h>
#include "funcs.h"

int main(){
    int opcao;
    int continuaroperacao = 1; 
    Lista l1;

    // Criando lista
    criar_lista(&l1);

    while(continuaroperacao == 1){    
        menu();
        scanf("%d", &opcao);

        // Verificando se a opção inserida é válida
        while (opcao < 1 || opcao > 4){
            printf("\nOpcao invalida! Tente novamente.\n");
            menu();
            scanf("%d", &opcao);
        }
        printf("-----------------------------");

        // Chamando função para limpar lista
        if (opcao == 1){
            limpar_lista(&l1);
            printf("\nLista limpada com sucesso!");
        }
        
        // Funções para inserir elemento no inicio ou no final
        else if(opcao == 2){
            int continuar = 1;

            // Variável "continuar" pergunta se a pessoa deseja continuar inserindo elemento
            while (continuar == 1){
                if (l1.cti == l1.ctf + 1){ // Verificar se a lista está cheia
                    printf("\nA lista esta cheia! Nao foi possivel continuar.");
                    break;
                }
                else if(l1.cti == 0 && l1.ctf == N){
                    printf("\nA lista esta cheia! Nao foi possivel continuar.");
                    break;
                }
                else{
                    int posicao, elemento;

                    printf("\nEscolha uma opcao:\n");
                    printf("\n1 - Para colocar no inicio.");
                    printf("\n2 - Para colocar no final."); 
                    printf("\n3 - Sair.");   
                    printf("\n-----------------------------");
                    printf("\nDigite a opcao que deseja: ");
                    scanf("%d", &posicao);

                    while (posicao < 1 || posicao > 3){
                        printf("-----------------------------------------");
                        printf("\nOpcao invalida! Tente novamente.\n");
                        printf("\n1 - Para colocar no inicio.");
                        printf("\n2 - Para colocar no final.");   
                        printf("\n3 - Para sair."); 
                        printf("\n----------------------------------------");
                        printf("\nDigite novamente a opcao que deseja: ");
                        scanf("%d", &posicao);
                    }

                    printf("----------------------------------------");

                    // Inserir elemento no começo
                    if (posicao == 1){
                        printf("\nQual elemento voce deseja inserir: ");
                        scanf("%d", &elemento);
                        inserir_inicio(&l1, elemento);
                        printf("-------------------------------------");
                    }

                    // Inserir elemento no final
                    else if (posicao == 2){
                        printf("\nQual elemento voce deseja inserir: ");
                        scanf("%d", &elemento);
                        inserir_fim(&l1, elemento);
                        printf("-------------------------------------");
                    }

                    // Sair para o menu
                    else if(posicao == 3){
                        printf("\nSaindo...\n");
                        printf("----------------------------------------");
                        break;
                    }

                    printf("\nDeseja continuar inserindo elementos(1 para sim e 0 para nao): ");
                    scanf("%d", &continuar);
                    printf("-----------------------------------------------------------------");

                    // Validação da opção continuar
                    while (continuar != 0 && continuar != 1){
                        printf("\nOpcao invalida! Tente novamente.");
                        printf("\nDeseja continuar inserindo elementos(1 para sim e 0 para nao): ");
                        scanf("%d", &continuar);
                        printf("-----------------------------------------------------------------");
                    }
                }
            }
        }

        // Funções para remover elemento no inicio ou no final
        else if(opcao == 3){
            int continuar = 1;

            // Variável "continuar" pergunta se a pessoa deseja continuar removendo elemento
            while (continuar == 1){
                if (l1.cti == -1  && l1.ctf == -1){ // Verificar se a lista está vazia
                    printf("\nA lista esta vazia! Nao foi possivel continuar.");
                    printf("\n-----------------------------------------------");
                    break;
                }
                else{
                    int posicao, elemento;

                    printf("\nEscolha uma opcao:\n");
                    printf("\n1 - Para remover do inicio.");
                    printf("\n2 - Para remover no final.");  
                    printf("\n3 - Para sair."); 
                    printf("\n-----------------------------");
                    printf("\nDigite a opcao que deseja: ");
                    scanf("%d", &posicao);

                    while (posicao < 1 || posicao > 3){
                        printf("-----------------------------------------");
                        printf("\nOpcao invalida! Tente novamente.\n");
                        printf("\n1 - Para remover do inicio.");
                        printf("\n2 - Para remover no final.");   
                        printf("\n3 - Para sair."); 
                        printf("\n-----------------------------------------");
                        printf("\nDigite novamente a opcao que deseja: ");
                        scanf("%d", &posicao);
                    }

                    printf("-----------------------------------------");

                    // Remover elemento no começo
                    if (posicao == 1){
                        remover_inicio(&l1);
                        printf("------------------------");
                    }

                    // Remover elemento do final
                    else if (posicao == 2){
                        remover_fim(&l1);
                        printf("------------------------");
                    }

                    // Sair para o menu
                    else if(posicao == 3){
                        printf("\nSaindo...\n");
                        break;
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
        }

        // Função para mostrar a lista
        else if(opcao == 4){
            if (l1.ctf != -1 && l1.cti != -1){
                printf("\nA lista ficou: ");
                mostrar_lista(&l1);
                printf("\nCTI %d    CTF %d", l1.cti, l1.ctf);
                printf("\n-----------------------------------------------");
            } 
            else{
                printf("\nA lista esta vazia!");
                printf("\n-------------------");
            }
        }

        printf("\nDeseja continuar fazendo operacoes na lista (1 para sim e 0 para nao): ");
        scanf("%d", &continuaroperacao);
        printf("-------------------------------------------------------------------------");
        
        while (continuaroperacao < 0 || continuaroperacao > 1){
            printf("\nOpcao invalida! Tente novamente.");
            printf("\nDeseja continuar fazendo operacoes na lista (1 para sim e 0 para nao): ");
            scanf("%d", &continuaroperacao);
            printf("-----------------------------------------------------------------------\n");
        }

        printf("\n\n");
    }

    return 0;
}
