#include <stdio.h>

int main(){
    unsigned char i;

    printf("  TABELA ASCII\n");
    for (i = 32; i < 255; i++){
        if (i < 100){
            printf("| (%d)  | (%c) |\n", i, i);
        }
        else{
            printf("| (%d) | (%c) |\n", i, i);
        } 
    }
    printf("| (%d) | (%c) |\n", i, i);

    return 0;
}