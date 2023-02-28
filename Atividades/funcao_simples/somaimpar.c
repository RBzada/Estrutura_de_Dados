/* Programa para somar os n primeiros numeros naturais 
ímpares */

#include <stdio.h>

int soma_impares(int n);

int main(){
    int num;

    printf("Digite a quantidade de numeros impares para somar: ");
    scanf("%d", &num);

    printf("A soma dos %d primeiros numeros impares e %d", num, soma_impares(num));

    return 0;
}

int soma_impares(int n){
    int soma = 0, cont = 0;

    for (int c = 1;; c+=2){ // O c vai andar de 2 em 2(1, 3, 5, ...)
        soma += c;
        cont++;

        if(cont == n){
            return soma;
        }
    }
}