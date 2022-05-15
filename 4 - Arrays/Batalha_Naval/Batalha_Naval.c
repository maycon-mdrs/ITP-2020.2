#include <stdio.h>

int main() {
    char mat[10][10];
    int i, j, y, a, b, c, d, e, f, x, z; 

    for(i = 0; i<10; i++){
        for(j = 0; j<10; j++){
            mat[i][j] = '~';    
        }
    } 
  
    scanf("%d %d", &a, &b);
    mat[a][b] = '*';

    scanf("%d %d", &a, &b);
    scanf("%d %d", &x, &z);
    if(a == x && b < z){
        mat[a][b] = '<';
        mat[x][z] = '>';
    }
    if(a != x && b == z){
        mat[a][b] = '^';
        mat[x][z] = 'v';
    }

    scanf("%d %d", &a, &b);
    scanf("%d %d", &x, &z);
    scanf("%d %d", &c, &d);
    if(a == x && a == c &&  b < z && z < d){
        mat[a][b] = '<';
        mat[x][z] = '=';
        mat[c][d] = '>';
    }
    if(a != x && a != c && b == z && b == d){
        mat[a][b] = '^';
        mat[x][z] = '|';
        mat[c][d] = 'v';  
    }

    scanf("%d %d", &a, &b);
    scanf("%d %d", &x, &z);
    scanf("%d %d", &c, &d);
    scanf("%d %d", &e, &f);
    if(a == x && a == c && a == e && b < z && b < d && b < f){
        mat[a][b] = '<';
        mat[x][z] = '=';
        mat[c][d] = '=';
        mat[e][f] = '>';
    }
    if(a != x && a != c && a != e && b == z && b == d && b == f){
        mat[a][b] = '^';
        mat[x][z] = '|';
        mat[c][d] = '|';
        mat[e][f] = 'v';
    }

    for(i = 0; i<10; i++){
        for(j = 0; j<10; j++){
            printf("%c", mat[i][j]);    
        }
        printf("\n");
    } 
    return 0;
}

/*
Entrada(s) para teste
0 0
0 9
1 9
9 7
9 8
9 9
6 0
7 0
8 0
9 0	

Saída esperada
*~~~~~~~~^
~~~~~~~~~v
~~~~~~~~~~
~~~~~~~~~~
~~~~~~~~~~
~~~~~~~~~~
^~~~~~~~~~
|~~~~~~~~~
|~~~~~~~~~
v~~~~~~<=>
*/
