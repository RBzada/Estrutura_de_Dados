// Função que recebe uma string como parâmetro e altera nela as ocorrência de caracteres
// maiúsculos para minúsculos

#include <stdio.h>
#include <string.h>

void minusculo(char *str);

int main(){
    char string[50] = "Eu QuErO CoMeR BaNaNa";
    char *p;

    p = string;

    printf("%s", string);

    minusculo(p);

    return 0;
}

void minusculo(char *str){
    for (int i = 0; i < strlen(str); i++){
        if (str[i] >= 65 && str[i] <= 90){
            str[i] += 32;
        }
    }

    printf("\n%s", str);
}