// Programa para guardar 5 nomes em um vetor de ponteiros alocado dinamicamente

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
    char **m;
    char nome[15];
    
    // Alocando espaço para o vetor m
    m = (char**) malloc(5 * sizeof(char*));
    if (m == NULL){
        printf("Não alocou");
        return 0;
    }

    // Alocando espaço para todos as posições do array de ponteiro
    for (int i = 0; i < 5; i++){
        printf("\nDigite o nome que deseja guarda: ");
        scanf("%15s", nome);

        m[i] = (char*) malloc((strlen(nome) * sizeof(char)) + 1);
        
        if (m[i] == NULL){
            printf("Não Alocou");

            for(int j = i; j > -1; j--){
                free(m[j]);
            }

            return 0;
        }

        m[i] = nome;
    }

    // Colocando os nomes nos espaços de memória
   // for (int i = 0; i < 5; i++){
   //     printf("\nDigite o nome que deseja guarda: ");
   //     scanf("%s", nome);
   //     m[i] = nome;
    //    printf("%s", m[i]);
   // }

    // Printando cada posição do array
    for (int i = 0; i < 5; i++){
        printf("\n%s", m[i]);
    }

    // Liberando espaço de cada posição do array de ponteiro
    for (int i = 0; i < 5; i++){
        free(m[i]); 
    }

    // liberando memoria que aponta para o array
    free(m);

}