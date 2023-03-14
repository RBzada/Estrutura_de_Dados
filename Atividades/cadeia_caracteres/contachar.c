// Função que recebe uma string como parâmetro e retorna o número de ocorrência do caractere
// especificado

#include <stdio.h>
#include <string.h>

int conta_char(char *str, char c);

int main(){
    char string[50] = "Eu quero comer banana";
    char *p;
    char c;

    p = string;

    printf("Digite o caracter deseja procurar na string: ");
    scanf("%c", &c);

    printf("\nEssa string possui %d caracteres '%c' ", conta_char(p, c), c); 

    return 0;
}

int conta_char(char *str, char c){
    int somatorio = 0;

    for (int i = 0; i < (strlen(str) + 1); i ++){
        if (str[i] == c){
            somatorio++;
        }
    }

    return somatorio;
}