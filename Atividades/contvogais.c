// Programa para contar a quantidade de vogais que um vetor de char possui

#include <stdio.h>

void contvogal(char *vetor);

int main(){
    char nome[50] = "Rafael Barboza de Almeida";
    char *p;

    p = nome;
    contvogal(p);

    return 0;
}

void contvogal(char *vetor){
    char vogais[] = "aeiouAEIOU";
    int cont = 0;
    int i = 0;

    while (vetor[i] != '\0'){
        for (int j = 0; j <= 10; j++){
            if (vetor[i] == vogais[j]){
                cont++;
            }
        }

        i++;
    }

    printf("\nEsse vetor possui %d vogais.", cont);

}
