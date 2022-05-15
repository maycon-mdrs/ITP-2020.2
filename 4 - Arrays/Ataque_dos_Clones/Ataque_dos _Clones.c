#include <stdio.h>

int main() {
    int l,c, x, y, vida = 0, quantidade_bomba = 0;

    scanf("%d %d", &l, &c);
    int mat[l+2][c+2];

    scanf("%d %d", &x, &y);

    for(int i = 0; i <= l+1; i++){
        for(int j = 0; j <= c+1; j++){
            mat[i][j] = 0;
        }
    }

    for(int i = 1; i<=l; i++){
        for(int j = 1; j<=c; j++){
            scanf("%d", &mat[i][j]);
        }
    }
  
    for(int n = 1; n <= l; n++){
        for(int m = 1; m <= c; m++){
            if( mat[n][m] > mat[n-1][m-1] && mat[n][m] > mat[n-1][m] &&
                mat[n][m] > mat[n][m+1] && mat[n][m] > mat[n+1][m-1] &&
                mat[n][m] > mat[n-1][m+1] && mat[n][m] > mat[n][m-1] &&
                mat[n][m] > mat[n+1][m] && mat[n][m] > mat[n+1][m+1]){

                quantidade_bomba = quantidade_bomba + 1;
                printf("Local %d: %d %d\n", quantidade_bomba, n, m);
                if(x == n && y == m){
                    vida = 1;
                }
            } 
        } 
    }
    if(vida == 1){
        printf("Descanse na Força...");
    }
    else{
        printf("Ao resgate!");
    }

    return 0;
}

/*
Entradas para teste	
5 5
5 3
1 1 2 7 11
8 8 8 9 9
8 8 8 10 3
8 8 8 5 -1
3 7 9 -2 4	

Saída esperada
Local 1: 1 5
Local 2: 3 4
Local 3: 5 3
Descanse na Força...
*/
