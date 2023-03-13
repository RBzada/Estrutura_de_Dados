// Função que recebe como parâmetro um vetor de números inteiros (vet) de tamanho n e retorne
// quantos números pares estão armazenados nesse vetor

#include <stdio.h>

int pares(int n, int *vet);

int main(){
    int vetor[10] = {1, 4, 6, 5, 10, 12, 8, 1, 5, 7};
    int *p;

    p = vetor;

    printf("Esse vetor possui %d numeros negativos", pares(10, p));

    return 0;
}

int pares(int n, int *vet){
    int somatorio = 0;

    for(int i = 0; i < n; i++){
        if (vet[i] % 2 == 0){
            somatorio++;
        }
    }

    return somatorio;
}