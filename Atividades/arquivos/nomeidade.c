// Programa que ler primeiro nome e idade de n pessoas de um arquivo txt

#include <stdio.h>

int main(){
    FILE *arq; // Ponteiro para o arquivo que vai ser lido
    FILE *arq1; // Ponteiro para o arquivo que vai ser escrito
    char nome[30];
    int num = -1;

    arq = fopen("nomeidade.txt", "r");
    arq1 = fopen("nomeidade1.txt", "w");

    if (!arq && arq1){
        printf("Nao abriu");
        return 0;
    }

    fscanf(arq, "%s %d", nome, &num);
    fprintf(arq1,"%s %d\n", nome, num);
    while (!feof(arq)){
        fscanf(arq, "%s %d", nome, &num);
        if (num > 18){
            fprintf(arq1,"%s %d\n", nome, num);
        }
        
    }

    fclose(arq);
    fclose(arq1);
    return 0;
}