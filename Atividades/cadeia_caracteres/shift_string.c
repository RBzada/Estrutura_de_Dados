// Função que recebe uma string como parâmetro e substitui as letras por suas sucessoras
// no alfabeto

#include <stdio.h>
#include <string.h>

void shift_string(char *str);

int main(){
    char string[50] = "Uma zebra a comer banana";
    char *p;

    p = string;
    printf("%s\n", string);

    shift_string(p);

    return 0;
}

void shift_string(char *str){
    for (int i = 0; i < strlen(str); i++){
        if (str[i] >= 65 && str[i] <= 90 || str[i] >= 97 && str[i] <= 122){
            if (str[i] == 'z' || str[i] == 'Z'){
                str[i] -= 25;
            }
            else{
                str[i] += 1;
            }
        }
    }

    printf("%s", str);
}