// Programa para calcular as raízes de uma equação do segundo grau e 
//armazená-las em variáveis localizadas no main

#include <stdio.h>
#include <math.h>

int raizes(float a, float b, float c, float *x1, float *x2);

int main(){
    float coefa = 3, coefb = 0, coefc = -12, xp1 = -1, xp2 = -1;

    raizes(coefa, coefb, coefc, &xp1, &xp2);
    
    if (raizes(coefa, coefb, coefc, &xp1, &xp2) == 2){
        printf("\nEssa equacao possui 2 raizes sendo elas: %.2f e %.2f", xp1, xp2);
    }else if(raizes(coefa, coefb, coefc, &xp1, &xp2) == 1){
        printf("\nEssa equacao possui 1 raiz sendo ela %.2f", xp1);
    }else{
        printf("\nEssa equacao nao possui raiz");
    }

    return 0;
}


int raizes(float a, float b, float c, float *x1, float *x2){
    float delta;

    delta = pow(b, 2) - 4 * a * c;

    if (delta > 0){
        *x1 = (-b + sqrt(delta)) / (2 * a);
        *x2 = (-b - sqrt(delta)) / (2 * a);

        return 2;
    }else if (delta == 0){
        *x1 = (-b + sqrt(delta)) / (2 * a);
        *x2 = *x1;

        return 1;
    }else{
        return 0;
    }
}
