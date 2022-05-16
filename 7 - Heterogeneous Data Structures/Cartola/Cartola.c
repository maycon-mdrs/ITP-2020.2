#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct times_struct{
    char nomes[205];
    int pontos, jogos, vitorias, empates, derrotas, gols_pro, gols_contra, saldo_de_gols;

}times;

times* scan_times(times* nome_t, int quant){
    char linha[305];
    char *retirar; 
    int t = quant +3;

    nome_t = malloc(sizeof(times)*t);

    for(int i=0; i<quant; i++){
        fgets(linha, 305, stdin);

        retirar = strtok(linha, ";");
        strcpy(nome_t[i].nomes, retirar);

        retirar = strtok(NULL, "\n");

        sscanf(retirar, " %d %d %d %d %d\n", &nome_t[i].vitorias, &nome_t[i].empates, &nome_t[i].derrotas, &nome_t[i].gols_pro, &nome_t[i].gols_contra);

        nome_t[i].jogos = nome_t[i].vitorias + nome_t[i].empates + nome_t[i].derrotas;

        nome_t[i].pontos = (nome_t[i].vitorias * 3) + (nome_t[i].empates*1);

        nome_t[i].saldo_de_gols = nome_t[i].gols_pro - nome_t[i].gols_contra;
    }
  
    times aux;

    for(int i=0; i<quant-1; i++){
        for(int k=i+1; k<quant; k++){

            if(nome_t[i].pontos > nome_t[k].pontos){
                aux = nome_t[i];
                nome_t[i] = nome_t[k];
                nome_t[k] = aux; 
            }
             else if(nome_t[i].pontos == nome_t[k].pontos && nome_t[i].vitorias > nome_t[k].vitorias ){
                aux = nome_t[i];
                nome_t[i] = nome_t[k];
                nome_t[k] = aux;

            } 
            else if(nome_t[i].pontos == nome_t[k].pontos && nome_t[i].vitorias == nome_t[k].vitorias && nome_t[i].saldo_de_gols > nome_t[k].saldo_de_gols){
                aux = nome_t[i];
                nome_t[i] = nome_t[k];
                nome_t[k] = aux;
            }
        }
    }
    return nome_t;
}

void imprimir_tabela(times* tab, int quant){
    printf("Tabela do campeonato:\n");
    printf("Nome| Pontos| Jogos| Vitorias| Empates| Derrotas| Gols Pro| Gols Contra| Saldo de Gols\n");

    for(int i=quant-1; i>-1; i--){
        printf("%s| %d| %d| %d| %d| %d| %d| %d| %d", tab[i].nomes, tab[i].pontos, tab[i].jogos, tab[i].vitorias, tab[i].empates, tab[i].derrotas, tab[i].gols_pro,tab[i].gols_contra, tab[i].saldo_de_gols);
        printf("\n");
    }

    printf("\n");
    printf("Times na zona da libertadores:\n");
    for(int i=quant-1; i> quant-7; i--){
        printf("%s\n", tab[i].nomes);
    }

    printf("\n");
    printf("Times rebaixados:\n");
    for(int i=0; i<4; i++){
        printf("%s\n", tab[i].nomes);
    }
}

int main() {
    int quant;
    times* nome_t = NULL;
    scanf("%d\n", &quant);

    nome_t = scan_times(nome_t, quant);
    imprimir_tabela(nome_t, quant);

    return 0;
}
    
