#include <stdio.h>
#include <string.h>
#include "funcs.h"

int main(){
    int opcao;
    Lista l1;

    menu();
    scanf("%d", &opcao);

    while (opcao < 1 || opcao > 5){
        printf("Codigo inexistente.");
        printf("\n\nDigite novamente a opcao que deseja: ");
        scanf("%d", &opcao);
    }

    criar_lista(&l1);
    return 0;

}
