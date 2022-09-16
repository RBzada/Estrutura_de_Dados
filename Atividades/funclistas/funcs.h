#ifndef FUNCS_H
#define FUNCS_H
#define N 5

typedef struct{
    int cti, ctf;
    int dados[N];
}Lista;


void menu();

void criar_lista(Lista *l);

void limpar_lista(Lista *l);

void inserir_inicio(Lista *l, int elemento);

void inserir_fim(Lista *l);

void remover_inicio(Lista *l);

void remover_fim(Lista *l);

void mostrar_lista(Lista *l);

#endif