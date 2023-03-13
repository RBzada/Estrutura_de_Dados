// Função que recebe como parâmetro um vetor de números inteiros (vet) de tamanho n e inverta
// a ordem dos elementos armazenados nesse vetor

#include <stdio.h>

void inverte(int n, int *vet);

int main(){
    int vetor[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int *p;

    p = vetor;

    inverte(11, p);

    return 0;
}

void inverte(int n, int *vet){
    int a, b;

    for (int i = 0; i < (n / 2); i++){
        a = vet[i];
        b = vet[n - 1 - i];
        vet[i] = b;
        vet[n - 1 - i] = a;
    }

    for (int i = 0; i < n; i++){
        printf("%d ", vet[i]);
    }
}
