#include <stdio.h>

int main(void) {
  char player;
  int dano, vida = 0, jogadas, dg_morto = 0, i=0, A, I, R, W, S, C;


  scanf("%d %d", &jogadas, &vida);

  do{
    scanf(" %c %d", &player, &dano);
    

    if(player == 'A' && dano > 14 && dg_morto==0){
      vida = vida - 10;
      if(vida <= 0){
        dg_morto = 1;
        printf("Alyson derrotou o dragão!");
      }
    }
    if(player == 'I' && dano > 14 && dg_morto==0){
      vida = vida - 10; 
      if(vida <= 0){
        dg_morto = 1;
        printf("Isaac derrotou o dragão!");
      }
    }
    if(player == 'R' && dano > 14 && dg_morto==0){
      vida = vida - 6;
      if(vida <= 0){
        dg_morto = 1;
        printf("Rafaela derrotou o dragão!");
      } 
    }
    if(player == 'W' && dano > 14 && dg_morto==0){
      vida = vida - 8;
      if(vida <= 0){
        dg_morto = 1;
        printf("Wellington derrotou o dragão!");
      } 
    }
    if(player == 'S' && dano > 14 && dg_morto==0){
      vida = vida - 4;
      if(vida <= 0){
        dg_morto = 1;
        printf("Salgado derrotou o dragão!");
      }
    }
    if(player == 'C' && dano > 14 && dg_morto==0){
      vida = vida - 1;
      if(vida <= 0){
        dg_morto = 1;
        printf("Careca derrotou o dragão!");
      } 
    }

    i = i + 1;
  }while(i<jogadas);
  
  if(vida > 0){
    printf("Casa caiu!");
  }
  
  return 0;
}

/*
Entrada:
10 6
A 5
I 2
R 4
W 11
C 3
S 20
A 3
I 1
R 20
C 20

Saída:
Rafaela derrotou o dragão!
*/
