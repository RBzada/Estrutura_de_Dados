// Programa para verificar se um ponto está dentro de um retângulo

#include <stdio.h>

int dentro_ret(int x0, int y0, int x1, int y1, int x, int y);

int main(){
    int x = -2, y = 0, x0 = -2, y0 = -21, x1 = 2, y1 = 2;

    printf("%d", dentro_ret(x0, y0, x1, y1, x, y));

    return 0;
}

int dentro_ret(int x0, int y0, int x1, int y1, int x, int y){
    if (x >= x0 && x <= x1){
        if (y >= y0 && y <= y1){
            return 1;
        }
    }

    return 0;
}
