#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int soma_divisores(int numero);

int main(){
    int n, n2, i;
    int soma, soma2; 

    scanf("%d %d",&n, &n2);

    soma = soma_divisores(n);
    soma2 = soma_divisores(n2);

    if(soma == n2 && soma2 == n){
        printf("S");
    }
    if(abs(soma - n2) <= 2 && abs(soma2 - n) <= 2){
        printf("S");
    }
    else{
        printf("N");
    }
}

int soma_divisores(int numero){
    int i;
    int som = 0;

    for(i=1;i<numero;i++)
        if (numero % i == 0) 
        som = som + i; 
      
    return som;
}

/*
Entradas para teste
440 638

Saída esperada
S
*/
