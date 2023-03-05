// Programa para calcular quantas vogais um vetor de char possui possui

#include <stdio.h>

void contvogal(char *str);

int main(){
    char nome[50] = "Rafael Barboza de Almeida";
    char *p;

    p = nome;
    contvogal(p);

    return 0;
}

void contvogal(char *str){
    char vogais[] = "aeiouAEIOU";
    int i = 0,cont = 0;

    while (str[i] != '\0'){
        for (int j = 0; j <= 10; j++){
            if (str[i] == vogais[j]){
                cont++;
            }
        }
        i++;
    }

    printf("\nEsse vetor possui %d vogais.", cont);

}
