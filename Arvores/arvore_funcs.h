// Arquivo com todos os protótipos das funções que serão utilizadas main
 
#ifndef ARVORE_FUNCS_H  
#define ARVORE_FUNCS_H

struct no{
    int valor;
    struct no *esq, *dir;
};

int cria_arvore(struct no **a);



#endif