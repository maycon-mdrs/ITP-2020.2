#include <stdio.h>
#define max(x, y) (x > y ? x : y)

int main(){
    int n, y, i=0;
    int dist_max = 0;
  
    scanf("%d", &n);
    int vetor[n];

    for(int i = 0; i<n; ++i){
        scanf("%d", &vetor[i]);
    }
  
    int dist = vetor[0];

    while(i<n){
        dist_max = max(dist_max, vetor[i] + i + dist);
        dist = max(dist, vetor[i] - i);
        i++;
    }

    printf("%d", dist_max);
    return 0;
}

/*
Entradas para teste
6
1 1 4 3 1 2	

Saída esperada
9
*/
