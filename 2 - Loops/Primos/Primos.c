#include <stdio.h>

int main(void) {
  int numero, numero2, i;

  scanf("%d", &numero);

  if(numero <= 1){
    printf( "Erro, número precisa ser maior do que 1!\n");
  }

  for(i = 2; numero > 1; i++){
    numero2 = 0;
    while(numero % i == 0){
      numero2 ++;
      numero = numero / i;
    }
      if(numero2 != 0){
        if(numero == 1){
          printf("%d^%d", i, numero2);
        }
        else{
          printf("%d^%d*", i, numero2);
        }
      }   
  }
  return 0;
}

/*
Entrada:
800	

Saída esperada:
2^5*5^2
*/
