#include <stdio.h>

void binario(int numero){
    int n;

    if(numero/2 !=0){
        n = numero/2;
        binario(n);
        n = numero%2;
        printf("%d", n);
    }
    else{
        n = numero%2;
        printf("%d", n);
    }
}
int main(void) {
    int numero; 

    scanf("%d", &numero);
    binario(numero);

    return 0;
}

/*
Entradas para teste
827364	

Saída esperada
11001001111111100100
*/
