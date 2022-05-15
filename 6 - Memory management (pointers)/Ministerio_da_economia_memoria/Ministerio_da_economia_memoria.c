#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str[10];
    int N, i=0;   
    scanf("%d\n", &N);
    char *linhas[N];

    for(int j=0; j<N; j++){
        linhas[j]=NULL;
    }

    while(i<N){
        fgets(str,10,stdin);
        if(linhas[i]==NULL){   
            linhas[i] = malloc(sizeof(char)*(strlen(str)+1));
            strcpy(linhas[i],"");
        }
    else
        linhas[i] = realloc(linhas[i], sizeof(char)*(strlen(linhas[i])+strlen(str)+1));
        strcat(linhas[i],str);
        if(str[strlen(str)-1] == '\n')
            i++;
  }

    printf("Texto liberado pelo Ministro\n");
    for(int j=0; j<i; j++){
        printf("%s", linhas[j]);
    }
    for(int j=0; j<i; j++){
        free(linhas[j]);
    }

    return 0;
}

/*
Entradas para teste

4
It allowance prevailed enjoyment in it. Calling observe for who pressed raising his. 
Can connection instrument astonished unaffected his motionless preference. Announcing say boy precaution unaffected difficulty alteration him. 
Above be would at so going heard. Engaged at village at am equally proceed. 
Settle nay length almost ham direct extent. Agreement for listening remainder get attention law acuteness day. 
Now whatever surprise resolved elegance indulged own way outlived. 

Saída esperada

Texto liberado pelo Ministro
It allowance prevailed enjoyment in it. Calling observe for who pressed raising his.
Can connection instrument astonished unaffected his motionless preference. Announcing say boy precaution unaffected difficulty alteration him.
Above be would at so going heard. Engaged at village at am equally proceed.
Settle nay length almost ham direct extent. Agreement for listening remainder get attention law acuteness day.
*/
