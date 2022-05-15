#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int *fromJsonString_int(char *vet, int *tamanho){
    int* vetor = malloc(sizeof(int)*100);

    *tamanho=0;
    char *quebra;
    vet++;

    quebra = strtok(vet, ",");
    
    while (quebra != NULL){
        sscanf(quebra, "%d", &vetor[*tamanho]);
        (*tamanho)++;

        quebra=strtok(NULL, ",");
    }
    return vetor;

}

double *fromJsonString_double(char *vet, int *tamanho){
    double* vetor= malloc(sizeof(double)*100);

    *tamanho=0;
    char *quebra;
    vet++;

    quebra= strtok(vet, ",");

    while (quebra != NULL){
        sscanf(quebra, "%lf", &vetor[*tamanho]);
        (*tamanho)++;

        quebra=strtok(NULL, ",");
    }
    return vetor;

}

int main(void) {
    char vet[205];
    int quant, tam, tipo_f =0;

    scanf("%d\n", &quant);
 
    for(int i=0; i<quant; i++){
        fgets(vet,205,stdin);
        for(int j=0; j<=strlen(vet); j++){
            if(vet[j]=='.'){
                tipo_f = 1;
            }
        }
        if(tipo_f == 1){
            double* vet_double=fromJsonString_double(vet, &tam);
            for (int y=0; y<tam; y++){
                printf("%lf ", vet_double[y]);
            }
            printf("\n");
        }
        else if(vet[0]=='[' && vet[1]==']'){
            printf("vetor vazio\n");
        }
        else {
            int* vet_int=fromJsonString_int(vet, &tam);
            for (int y=0; y<tam; y++){
                printf("%d ", vet_int[y]);
            }      
            printf("\n");
        }
        tipo_f = 0;
    }
    return 0;
}

/*
Entradas para teste	
3
[-10, 2, 1, 6, 13, -10, -4, -5, -8, -4, -13, -6, 5, 14, 4, -6, -12, 1, -11, 3, -19, -15, 6, -8, 13, 6, 17, -5, -7, 8, 15, 2, 13, 12, -15, 2, -14, 6, 2, 2]
[40, -8.9, 19.13, -6.214, 44, 8.1, -4.4, 7.1, -15, -7]
[]	

Saída esperada
-10 2 1 6 13 -10 -4 -5 -8 -4 -13 -6 5 14 4 -6 -12 1 -11 3 -19 -15 6 -8 13 6 17 -5 -7 8 15 2 13 12 -15 2 -14 6 2 2
40.000000 -8.900000 19.130000 -6.214000 44.000000 8.100000 -4.400000 7.100000 -15.000000 -7.000000
vetor vazio
*/
