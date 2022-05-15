#include <stdio.h>

int mediana(int a, int b, int c);

int main() {
    int mediana1, mediana2, mediana3, mediana_A;
    int mediana4, mediana5, mediana6, mediana_B;
    int a, b, c, A, x, y, z, B;

    scanf("%d %d %d", &a, &b, &c);
    mediana1 = mediana(a,b,c);
    
    scanf("%d %d %d", &a, &b, &c);
    mediana2 = mediana(a,b,c);

    scanf("%d %d %d", &a, &b, &c);
    mediana3 = mediana(a,b,c);

    mediana_A = mediana(mediana1, mediana2, mediana3);

    scanf("%d %d %d", &x, &y, &z);
    mediana4 = mediana(x,y,z);

    scanf("%d %d %d", &x, &y, &z);
    mediana5 = mediana(x,y,z);

    scanf("%d %d %d", &x, &y, &z);
    mediana6 = mediana(z,y,z);

    mediana_B = mediana(mediana4, mediana5, mediana6);

    int jogador_a = mediana_A;
    int jogador_b = mediana_B;

    if (jogador_a > jogador_b){
        printf("A\n");
    } 
    if (jogador_b > jogador_a){
        printf("B\n");
    } 
    if (jogador_a == jogador_b){
        printf("empate\n");
    }
    return 0;
}
int mediana(int a, int b, int c){
    int meio = 0;

    if (a>=b && b>=c){
        meio = b;
    }
    if (b>=a && a>=c){
        meio = a;
    }
    if (a>=b && c>=b){
        meio = a;
    }
    if (c>=b && b>=a){
        meio = b;
    }
    if (b>=c && c>=a){
        meio = c;
    }
    if (a>=c && c>=b){
        meio = c;
    }
  
    return meio;
}

/*
Entradas para teste	
3 10 6 5 7 2 6 1 8 8 3 4 2 6 1 0 1 2	

Saída esperada
A
*/
