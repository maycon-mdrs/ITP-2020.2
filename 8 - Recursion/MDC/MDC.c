#include <stdio.h>

int mdc(int a, int b){
    int cal;
    if(b==0){
        return a;
    }
    else{
        return mdc(b, a%b);
    }
}
int main(void) {
    int n1, n2, n3;
    int cal;

    scanf("%d %d %d", &n1, &n2, &n3);

    cal = mdc(mdc(n1, n2), n3);

    printf("MDC de %d, %d e %d: %d", n1, n2, n3, cal);

    return 0;
}

/*
Entradas para teste		
44 88 132	

Saída esperada
MDC de 44, 88 e 132: 44
*/
