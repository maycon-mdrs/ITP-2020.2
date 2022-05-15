#include <stdio.h>

void mudar_vetor(int *vet, int valor_lido, int tam);

int main() {
    int tam, y = 0, amg, quantidade, valor_lido;

    scanf("%d %d", &tam, &amg);

    int vet[tam];

    for(int i = 0; i<tam; i++){    
        vet[i] = i;                 
    }
  
    for(int a = 0; a<amg; a++){
        scanf("%d", &quantidade);
        for(int x = 0; x<quantidade; x++){  
            scanf("%d", &valor_lido);
            mudar_vetor(vet, valor_lido, tam);
        }
    }
  
    printf("[");
    while(y<tam-1){
        if(vet[y] > -1){
            printf(" %d,", vet[y]);
        }
        y++;
    }
    if(vet[y] > -1){
        printf(" %d", vet[y]);
    }
  
    printf(" ]");

    return 0;
}

void mudar_vetor(int *vet, int valor_lido, int tam){
    for(int a = 0; a<tam; a++){
        if(vet[a] == valor_lido){
            vet[a] = -1;
        }
    }
}

/*
Entradas para teste	
10 4
4
1 7 3 5
3
7 4 3
4
8 1 2 0
5
7 9 2 1 6

Saída esperada
[ ]
*/
