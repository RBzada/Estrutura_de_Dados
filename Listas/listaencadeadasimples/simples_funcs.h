// Arquivo com todos os protótipos das funções

#ifndef SIMPLES_FUNCS_H
#define SIMPLES_FUNCS_H

struct no{
    int valor;
    struct no *prox;
};

int criar_lista(struct no **ll);

void mostra_lista(struct no *ll);

#endif
