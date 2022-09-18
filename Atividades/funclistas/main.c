#include <stdio.h>
#include <string.h>
#include "funcs.h"

int main(){
    int opcao;
    Lista l1;

    menu();
    scanf("%d", &opcao);

    // Verificando se o código inserido é válido
    while (opcao < 1 || opcao > 4){
        printf("Codigo inexistente.");
        printf("\n\nDigite novamente a opcao que deseja: ");
        scanf("%d", &opcao);
    }
    printf("-----------------------------");

    // Criando lista
    criar_lista(&l1);

    // Chamando função para cirar lista
    if (opcao == 1){
        limpar_lista(&l1);
        printf("\nLista limpada com sucesso!");
    }
    
    // Funções para inserir elemento no inicio ou no final
    else if(opcao == 2){
        int continuar = 1;
        int cont = 0;

        // Variável "continuar" pergunta se a pessoa deseja continuar inserindo elemento
        while (continuar == 1){
            if ((l1.ctf - l1.cti) == 1 || (l1.ctf - l1.cti) == -1){ // Descubrir quando a lista está cheio
                printf("\nA lista esta cheia! Nao foi possivel continuar.");
                return 0;
            }
            else{
                int posicao, elemento;

                printf("\nEscolha uma opcao:\n");
                printf("\n1 - Para colocar no inicio.");
                printf("\n2 - Para colocar no final.");    
                printf("\n-----------------------------");
                printf("\nDigite a opcao que deseja: ");
                scanf("%d", &posicao);
                while (posicao < 1 || posicao > 2){
                    printf("Codigo inexistente.");
                    printf("\n\nDigite novamente a opcao que deseja: ");
                    scanf("%d", &posicao);
                }
                printf("-------------------------------------");

                if (posicao == 1){
                    cont++;
                    printf("\nQual elemento voce deseja inserir: ");
                    scanf("%d", &elemento);
                    inserir_inicio(&l1, elemento);
                    printf("-------------------------------------");
                }
            }

            printf("\nDeseja continuar inserindo elementos(1 para sim e 0 para nao): ");
            scanf("%d", &continuar);
            printf("\n-----------------------------------------------------------------");
        }
    }

    return 0;

}
