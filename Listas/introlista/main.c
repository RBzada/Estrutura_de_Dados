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
    insere_fim(&l1, 8);
    insere_fim(&l1, 9);
    mostrar_lista(&l1);

    // Removendo elemento do início
    remove_inicio(&l1);
    mostrar_lista(&l1);
    
    return 0;
}
