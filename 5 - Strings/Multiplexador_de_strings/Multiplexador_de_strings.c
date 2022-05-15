#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char s1[20]="\0", s2[20]="\0", s3[40] = "\0";
    int i=0, tamanhoT=0, indices1 = 0, indices2 = 0, tamanhos1, tamanhos2;

    scanf(" %[^\n]", s1);
    scanf(" %[^\n]", s2);

    tamanhos1 = strlen(s1);
    tamanhos2 = strlen(s2);
    tamanhoT = tamanhos1 + tamanhos2;

    for (int i; i < tamanhoT; i++){
        if(i % 2 == 0 && indices1 < tamanhos1){
            s3[i] = s1[indices1];
            indices1++;
        } 
        else if(indices2 >= tamanhos2){
            s3[i] = s1[indices1];
            indices1++;
        }
        else{
            s3[i] = s2[indices2];
            indices2++;
        }
    }

    printf("%s\n", s3);
}

/*
Entradas para teste	
12345
abcde

Saída esperada
1a2b3c4d5e
*/
