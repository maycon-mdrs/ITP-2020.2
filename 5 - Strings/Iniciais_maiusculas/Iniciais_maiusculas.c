#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    char frase[60];
    int i;

    scanf(" %[^\n]", frase);

    char strlwr(char frase);

    for (i = 0; i < strlen(frase); i++) {
        if (i == 0 || frase[i - 1] == ' '){
            frase[i] = toupper(frase[i]);
        }    
        else{
            frase[i] = tolower(frase[i]);
            frase[i] = frase[i];
        }
    }

    printf("%s\n", frase);

    return 0;
}

/*
Entradas para teste	
O rato roeu a roupa do rei de Roma.

Saída esperada
O Rato Roeu A Roupa Do Rei De Roma.
*/
