// Arquivo para manipular a lista

#include <stdio.h>
#include "intro_funcs.h"

int main(){
    Lista l1;

    // Criando lista
    criar_lista(&l1);

    // Mostrando lista
    mostrar_lista(&l1);

    // Inserindo elemento na última posição
    insere_fim(&l1, 10);
    mostrar_lista(&l1);
    remove_fim(&l1);
    mostrar_lista(&l1);



    return 0;
}
