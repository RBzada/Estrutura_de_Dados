/* Programa para mostrar os n primeiros termos da sequência de fibonacci*/

#include <stdio.h>

int fibonacci(int n);

int main(){
    int num, a = 1, b = 1, c = 0;

    printf("Digite a quantidade de termos da sequencia de fibonacci que deseja impimir: ");
    scanf("%d", &num);

    printf("O %d numero da sequencia de fibonacci e %d", num, fibonacci(num));

    return 0;
}

int fibonacci(int n){
    int a = 1, b = 1, c;

    for (int i = 0; i < (n - 1); i++){
        b = a;
        a += c;
        c = b;
    }

    return a;
}