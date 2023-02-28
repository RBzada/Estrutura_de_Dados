/* Programa para verificar se o número é primo */

#include <stdio.h>

int primo(int n);

int main(){
    int num, i = 0, cont = 0;

    printf("Digite o numero que deseja verificar: ");
    scanf("%d", &num);

    if (primo(num)){
        printf("O numero e primo.");
    }else{
        printf("O numero nao e primo.");
    } 

    return 0;
}   

int primo(int n){
    int i;

    for (i = 2; i < n; i++){
        if (n % i == 0){
            return 0;
        }
    }

    return 1;
}