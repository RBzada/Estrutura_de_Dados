// Arquivo com todos os protótipos das funções

#ifndef DUPLA_FUNCS_H
#define DUPLA_FUNCS_H

struct no{
    struct no *ant;
    int dado;
    struct no *prox;
}*listai, *listaf;

void menu();

int criar_lista(struct no **ll);

void mostra_lista(struct no *ll);

int inserir_inicio(struct no **ll, int num);

int inserir_fim(struct no **ll, int num);

int limpa_lista(struct no **ll);

int remover_inicio(struct no **ll);

int remover_fim(struct no **ll);

int destrutor(struct no **ll);

#endif