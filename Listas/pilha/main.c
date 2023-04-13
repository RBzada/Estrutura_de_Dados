// Arquivo para manipular pilhas

#include <stdio.h>
#include "pilha_funcs.h"

int main(){
    struct Pilha *p1;

    criar_pilha(&p1);

    mostrar_topo(p1);

    inserir_topo(&p1, 9);

    inserir_topo(&p1, 10);

    p1 = esvaziar_pilha(&p1);

    printf("%d", p1);

    mostrar_topo(p1);

    return 0;
}