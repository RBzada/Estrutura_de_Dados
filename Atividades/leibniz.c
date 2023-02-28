// Programa para retornar uma aproximação do valor de p

// pi ~ 4 * (1 - 1/3 + 1/5 - 1/7 + 1/9 - 1/11 ...)

#include <stdio.h>
#include <math.h>

double pi(int n);

int main(){
    int num; 
    double soma, total;

    printf("Digite o numero de termos que deve ser usado");
    printf("para avaliar o valor de pi: ");
    scanf("%d", &num);
    printf("A aproximacao para o valor de pi com %d termos e %f", num, pi(num));
    
    return 0;
}

double pi(int n){
    double soma;

    for (int i = 0; i < n; i++){
        soma += pow(-1, i) / (2 * i + 1);
    }

    return (4 * soma);
}