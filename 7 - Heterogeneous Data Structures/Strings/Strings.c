#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct string{
    char* str;
    int capacity;
    int length;
}string;

void set_str(string* frase, char* t_padrao){
    int tam=0, resto=0;

    tam = strlen(t_padrao)+1;
    resto = tam%16;
    tam = tam/16;

    if(resto > 0){
        tam++;
    }
    tam = tam*16;

    (*frase).str = malloc(sizeof(char)*16);
    (*frase).capacity = tam;
    (*frase).length = (int)strlen(t_padrao);
    strcpy(frase->str, t_padrao);
}

void read_str(string* frase){
    char *str_frase = malloc(sizeof(char)*305);
    int i=1;

    fgets(str_frase, 305, stdin);
    int tam = strlen(str_frase);

    do{
        i++;
    }while(i*16 < tam);

    (*frase).str= malloc(sizeof(char) * i*16);
    (*frase).length= tam;
    (*frase).capacity= (sizeof(char) * i*16);
    strtok(str_frase, "\n");
    strtok(str_frase, "\0");
    strcpy(frase->str, str_frase);
}

void concat_str(string* text, string* text2){

    (*text).length = (text->length + text2->length);
    int tam = (text->length / 16) + 1;

    (*text).str = realloc(text->str,sizeof(char) * tam * 16);
    strcat(text->str, text2->str);
    (*text).capacity = (sizeof(char) * (tam * 16));
}

void clear_str(string* frase){
    free(frase->str);
    frase->capacity = 0;
    frase->length = 0;
    frase = NULL;
}

int main() {
    string greeting;
    string name;
    set_str(&greeting, "Oi ");
    read_str(&name);
    concat_str(&greeting, &name);
    printf("%s\n", greeting.str);
    printf("%i %i\n", greeting.capacity, greeting.length);
    clear_str(&greeting);
    clear_str(&name);
    return 0;
}

/*
Entradas para teste	
Cicrano Baltazar

Saída esperada
Oi Cicrano Baltazar
32 19
*/
