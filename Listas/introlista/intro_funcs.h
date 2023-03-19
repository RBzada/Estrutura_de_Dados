// Arquivo com todos os protótipos das funções

#ifndef INTRO_FUNCS_H
#define INTRO_FUNCS_H

// Para lista estática
/*#define N 5

typedef struct{
    int controle;
    int dados[N];
}Lista;
*/

// Para lista dinâmica (mais utilizada)

typedef struct{
    int controle, tam;
    int *dados;
}Lista;

int criar_lista(Lista *l);

int limpar_lista(Lista *l);

void mostrar_lista(Lista *l);

int remove_fim(Lista *l);

int insere_fim(Lista *l, int n);

int remove_inicio(Lista *l);

int insere_inicio(Lista *l, int n);

void menu();

int destrutor(Lista *l);

#endif