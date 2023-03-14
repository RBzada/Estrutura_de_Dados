// Criar uma estrutura que representa um vetor no espaço 3D e implementa uma função que 
// calcula o produto escalar de dois vetores

#include <stdio.h>

typedef struct{
    int x, y, z;
}Vetor;

float dot(Vetor *v1, Vetor *v2);

int main(){
    Vetor vetor1, vetor2;

    vetor1.x = 2;
    vetor1.y = 5;
    vetor1.z = 8;

    vetor2.x = -5;
    vetor2.y = 2;
    vetor2.z = 0;

    printf("O resultado do produtor escalar dos dois vetores: %.2f", dot(&vetor1, &vetor2));

    return 0;
}

float dot(Vetor *v1, Vetor *v2){
    return (v1->x * v2->x) + (v1->y * v2->y) + (v1->z * v2->z);
}