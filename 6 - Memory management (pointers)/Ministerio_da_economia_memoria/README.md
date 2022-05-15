### Ministério da Economia de Memória
O presidente Chromonaro fez uma divisão igualitária da memória do computador para guardar um texto de várias linhas. Como o presidente não conhecia muito bem esse negócio de memória, resolveu chamar o Paulo Mozilla, Ministro da Economia de Memória, para dar uma olhada no planejamento e melhorar o que desse.

-Sr. Presidente, claro que não vai caber na memória, tem um monte de linha desse texto que é muito menor do que a quantidade que o senhor disponibilizou, vai gastar, o Sistema Operacional não vai gostar. Falou o ministro desconfiado...

-Tá OK! Vamo cortar isso aê. Disse o presidente em tom de ordem, depois de ouvir a sugestão do Ministro.​

Para dizer que entendia do assunto o Ministro rapidamente fez um rascunho de como ficaria o código:

```sh
int main(){
  char str[10];
  int N;   
  scanf("%d\n", &N);
  char *linhas[N];
  
  for(int i=0; i<N; i++)
    linhas[i]=NULL;   
  
  do{
    fgets(str,10,stdin);
  }while(adicionarLinhas(N, linhas,str));

  printf("Texto liberado pelo Ministro\n");
  imprimirLinhas(N, linhas);
  
  liberarLinhas(N, linhas);
  return 0;
}
```
Mas na hora de implementar a função 'adicionarLinhas' o ministro entregou para você o trabalho. A função 'adicionarLinhas' deve receber a string como parâmetro que deve ser adicionada ao vetor 'linhas'. Veja que a string recebida pela função não corresponde a uma linha completa, assim antes de começar a preencher o próximo elemento no vetor linhas a função deve verificar se a ultima string adicionada tem um finalizador de linha '\n'.

Além disso, por ordem do Ministro da Economia de Memória, o seu programa deve armazenar cada linha de texto em uma string com o tamanho exato para caber a linha toda. A função deve retornar 1 enquanto o vetor ainda tiver espaço e 0 quando não houver mais espaços e a última linha foi lida.

Por fim você também precisa implementar as funções imprimeLinhas que imprime as linhas lidas e a função liberarLinhas que libera todas as linhas alocadas. Veja que, dependendo do valor de N, a entrada pode ser cortada, pois o Ministro resolveu cortar uma parte do texto que seria guardado a fim de economizar mais memória.

| Exemplo de entrada	| Exemplo de saída |
| --- | --- |
|4|
|It allowance prevailed enjoyment in it. Calling observe for who pressed raising his. | Texto liberado pelo Ministro |
|Can connection instrument astonished unaffected his motionless preference. Announcing say boy precaution unaffected difficulty alteration him.| It allowance prevailed enjoyment in it. Calling observe for who pressed raising his. |
|Above be would at so going heard. Engaged at village at am equally proceed. | Can connection instrument astonished unaffected his motionless preference. Announcing say boy precaution unaffected difficulty alteration him. |
|Settle nay length almost ham direct extent. Agreement for listening remainder get attention law acuteness day. | Above be would at so going heard. Engaged at village at am equally proceed. |
|Now whatever surprise resolved elegance indulged own way outlived. | Settle nay length almost ham direct extent. Agreement for listening remainder get attention law acuteness day.c |

