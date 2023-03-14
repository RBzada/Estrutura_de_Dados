// Função que recebe como parâmetro uma string e substitui as ocorrências de uma letra pelo
// seu oposto no alfabeto, isto é, a -> z, b -> y. Caracteres que não forem letras 
// permanecem inalterados

#include <stdio.h>
#include <string.h>

void string_oposta(char *str);

int main(){
    char string[50] = "AB CD ef GH ij KL mn ZA";
    char *p;

    p = string;

    printf("%c\n", string);

    string_oposta(p);

    return 0;
}

void string_oposta(char *str){  
    for (int i = 0; i < strlen(str); i++){
        if (str[i] >= 65 && str[i] <= 90){ // Se, pela tabela ascii, o caracter estiver entre 65('A') e 90('Z') entra
            str[i] = 90 - (str[i] - 65); // ultimo caracter da tabela ascii (90) menos a diferença do caracter pelo primeiro (65)
        }
        else if (str[i] >= 97 && str[i] <= 122){ // Se, pela tabela ascii, o caracter estiver entre 97('a') e 122('z') entra
            str[i] = 122 - (str[i] - 97); // ultimo caracter da tabela ascii (122) menos a diferença do caracter pelo primeiro (97)
        }
    }

    printf("%s", str);
}