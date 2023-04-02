// Arquivo com todos os protótipos das funções

#ifndef SIMPLES_FUNCS_H
#define SIMPLES_FUNCS_H

struct No{
    int valor;
    struct No *prox;
};

int criar_lista(struct No **ll);

#endif
