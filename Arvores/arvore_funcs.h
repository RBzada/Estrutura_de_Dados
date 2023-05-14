// Arquivo com todos os protótipos das funções que serão utilizadas main
 
#ifndef ARVORE_FUNCS_H  
#define ARVORE_FUNCS_H

struct no{
    int valor;
    struct no *esq, *dir;
};

struct no *cria_arvore(int valor, struct no *fesq, struct no *fdir);

void mostra_arvore(struct no *raiz);

int contanos(struct no *raiz);

#endif