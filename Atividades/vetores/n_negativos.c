// Função que recebe como parâmetro um vetor de números reais (vet) de tamanho n e retorne 
//quantos números negativos estão armazenados nesse vetor

#include <stdio.h>

int negativos (int n, float *vet);

int main(){
    float vetor[10] = {1, -2, 3, 4, 5, 1, -2, -3, -4, 5};
    float *p;

    p = vetor;

    printf("Esse vetor possui %d numeros negativos", negativos(10, p));

    return 0;
}

int negativos (int n, float *vet){
    int somatorio = 0;

    for (int i = 0; i < n; i++){
        if (vet[i] < 0){
            somatorio++;
        }
    }

    return somatorio;
}
