// Criar uma estrutura para representar um ponto no espaço 2D e implementar uma função que 
// verifica se esse ponto está dentro de um retângulo

#include <stdio.h>

typedef struct {
    int x, y;
}Ponto;

int dentroRet(Ponto *v1, Ponto *v2, Ponto *p);

int main(){
    Ponto vertice1, vertice2, pr;

    vertice1.x = -2;
    vertice1.y = -1;

    vertice2.x = 2;
    vertice2.y = 2;

    pr.x = 0;
    pr.y = -2;

    printf("%d", dentroRet(&vertice1, &vertice2, &pr));

    return 0;
}

int dentroRet(Ponto *v1, Ponto *v2, Ponto *p){
    if ((p->x >= v1->x) && (p->x <= v2->x) && (p->y >= v1->y) && (p->y <= v2->y)){
        return 1;
    }
    
    return 0;
}
