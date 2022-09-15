#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE* fp1;
    FILE* fp2;
    char bin;
    int matriz[100][100];
    int matrizdes[100][100];
    int valor;
    int x, y;
    int cont;

    fp1 = fopen("compactado.txt", "w");
    if (!fp1){
        printf("Erro na leitura do arquivo!\n");
        exit(1);
    }

    for (int i = 0; i < 100; i++){
        for (int j = 0; j < 100; j++){
            if (i == j){
                matriz[i][j] = 1; 
            }else{
                matriz[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < 100; i++){
        for (int j = 0; j < 100; j++){
            if (matriz[i][j] == 1){
                fprintf(fp1, "(%d, %d)\n", i, j);
            }
        }
    }
    
    fclose(fp1);


    fp2 = fopen("compactado.txt", "r");
    if (!fp2){
        printf("Erro na leitura do arquivo!\n");
        exit(1);
    }
    
    while ((bin = getc(fp2)) != EOF){
        if (bin != '(' && bin != ')' && bin != ','){
            valor = bin - '0';
            if (valor >= 0){
                printf("%d \n", valor);
                cont++;
            }
            else{
                printf("\n");
                cont = 0;
            }

            if (cont != 0){
                valor = strcat(bin, bin);
            }
        }
    }
    


    fclose(fp2);
    return 0;
}