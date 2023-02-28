// Programa que calcula a área da superfície e o volume de uma esfera de raio r

#include <stdio.h>
#include <math.h>

void calc_esfera(float r, float *area, float *volume);

int main(){ 
    float raio = 5, aream = -1, volumem = -1;

    calc_esfera(raio, &aream, &volumem);
    printf("A area da superficie da esfera: %.2f", aream);
    printf("\nO volume da esfera: %.2f", volumem);

    return 0;
}

void calc_esfera(float r, float *area, float *volume){
    *area = 4 * pow(r, 2);
    *volume = (4 * pow(r, 3)) / 3;
}
