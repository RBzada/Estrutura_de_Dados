// Arquivo com todos os protótipos das funções

#ifndef PILHA_FUNCS_H
#define PILHA_FUNCS_H


struct Pilha{
    int dado;
    struct Pilha *prox;
};

int criar_pilha(struct Pilha **pp);

void mostrar_topo(struct Pilha *pp);

int inserir_topo(struct Pilha **pp, int num);

int remover_topo(struct Pilha **pp);

struct Pilha *esvaziar_pilha(struct Pilha **pp);

#endif
