// Arquivo para manipular lista encadeada simples

#include <stdio.h>
#include "dupla_funcs.h"

int main(){
    struct no *l;

    criar_lista(&l);
    inserir_inicio(&l, 9);
    mostra_lista(l);

}