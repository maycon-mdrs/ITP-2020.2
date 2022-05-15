#include <stdio.h>
#include <math.h>

void converteS(int segundos, int *h, int *m, int *s){
  *h = segundos / 3600;
  *m = (segundos % 3600) / 60;
  *s = (segundos % 3600) % 60; 
}
int main(){
  int h, m, s, segundos;

  scanf("%d", &segundos);
  converteS(segundos, &h, &m, &s);
  printf("%.2d:%.2d:%.2d", h, m, s);

  return 0;
}
