#include <stdio.h>

int main(void) { 
  int td_B, fg_B, pat_B, td_S, fg_S, pat_S, jogos, i; 
  int BUC, SAIN, soma_ts, soma_fs, soma_ps, soma_tb, soma_fb, soma_pb;

  soma_ts = 0;
  soma_fs = 0;
  soma_ps = 0;
  soma_tb = 0;
  soma_fb = 0;
  soma_pb = 0;

  i = 0;

  scanf("%d", &jogos);

  while (i<jogos){
    scanf("%d %d %d", &td_S, &fg_S, &pat_S);
    scanf("%d %d %d", &td_B, &fg_B, &pat_B);

    i = i + 1;
    
    soma_ts = soma_ts + td_S;
    soma_fs = soma_fs + fg_S;
    soma_ps = soma_ps +pat_S;

    soma_tb += td_B;
    soma_fb += fg_B;
    soma_pb += pat_B;

    SAIN = (soma_ts * 6) + (soma_fs * 3) + (soma_ps * 1);
    BUC = (soma_tb * 6) + (soma_fb * 3) + (soma_pb * 1);  
  }
   
  if (BUC > SAIN){ 
    printf("Bucaneers é o campeão na série histórica!");
    printf("\nPlacar: %d x %d", BUC, SAIN);
  }
  if (BUC < SAIN){
    printf("Saints é o campeão na série histórica!");
    printf("\nPlacar: %d x %d", SAIN, BUC);
  }
  else if (BUC == SAIN){
    printf("Série histórica empatada em %d pontos!", BUC); 
  }  


  if (soma_tb > soma_ts){
    printf("\nBucaneers marcou mais Touch Downs(%d)", soma_tb);
  } 
  if (soma_tb < soma_ts){
    printf("\nSaints marcou mais Touch Downs(%d)", soma_ts);
  }
  if (soma_tb == soma_ts){
    printf("\nNúmero de Touch Downs empatado(%d)", soma_tb);
  }


  if (soma_fb > soma_fs){
    printf("\nBucaneers marcou mais Field Goals(%d)", soma_fb);
  }
  if (soma_fb < soma_fs){
    printf("\nSaints marcou mais Field Goals(%d)", soma_fs);
  }
  if (soma_fb == soma_fs){
    printf("\nNúmero de Field Goals empatado(%d)", soma_fb);
  }


  if (soma_pb > soma_ps){
    printf("\nBucaneers marcou mais Pontos Extras(%d)", soma_pb);
  }
  if (soma_pb < soma_ps){
    printf("\nSaints marcou mais Pontos Extras(%d)", soma_ps);
  }
  if (soma_pb == soma_ps){
    printf("\nNúmero de Pontos Extras empatado(%d)", soma_pb);
  }

  
  return 0;
}

/*
Entradaa:
3
1 2 3
2 1 3
2 1 2
2 3 1
2 1 2
5 3 1	

Saída esperada:
Bucaneers é o campeão na série histórica!
Placar: 80 x 49
Bucaneers marcou mais Touch Downs(9)
Bucaneers marcou mais Field Goals(7)
Saints marcou mais Pontos Extras(7)
*/
