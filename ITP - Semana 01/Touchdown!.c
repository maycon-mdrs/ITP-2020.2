#include <stdio.h>

int main(void) { 
  int td_B, fg_B, pat_B, td_S, fg_S, pat_S; 
  //td = Touch Down, fg = Field Goal, pat = Ponto Extra, b = Bucaneers, s = Saints;

  int BUC, SAIN;
  //buc = Bucaneers, sain = Saints

  scanf("%d %d %d", &td_S, &fg_S, &pat_S); 
  scanf("%d %d %d", &td_B, &fg_B, &pat_B); 

  BUC = (td_B * 6) + (fg_B * 3) + (pat_B * 1); 
  SAIN = (td_S * 6) + (fg_S * 3) + (pat_S * 1); 
  
  printf("Placar: Saints %d x %d Bucaneers", SAIN, BUC); 
  if (BUC > SAIN){ 
    printf("\nBucaneers venceu!");
  }
  if (BUC < SAIN){
    printf("\nSaints venceu!");
  }
  if (BUC == SAIN){
    printf("\nEmpate!"); 
  }  
  return 0;
}
