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

#endif