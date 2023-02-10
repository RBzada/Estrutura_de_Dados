#include <stdio.h>

int main(){
    printf("  TABELA ASCII\n");
    for (char i = 32; i < 127; i++){
        if (i < 100){
            printf("| (%d)  | (%c) |\n", i, i);
        }
        else{
            printf("| (%d) | (%c) |\n", i, i);
        }
        
    }
}