#include <stdio.h>
#include <math.h>

int main(void) {
  float numero1, numero2;
  char op;
  do{
    scanf(" %c", &op);
    scanf("%f %f", &numero1, &numero2);

    switch(op){
      case '+':
        printf("%.3f+%.3f=%.3f\n", numero1, numero2, numero1 + numero2);
        break;
      case '-':
        printf("%.3f-%.3f=%.3f\n", numero1, numero2, numero1 - numero2);
        break;
      case '*':
        printf("%.3f*%.3f=%.3f\n", numero1, numero2, numero1 * numero2);
        break;
      case '/':
        printf("%.3f/%.3f=%.3f\n", numero1, numero2, numero1 / numero2);
        break;
      case '^':
        printf("%.3f^%.0f=%.3f\n", numero1, numero2, pow(numero1, numero2));
        break;
      
    }
  }while(op != 'e');

  return 0;
}

/*
Entrada:
+
10 -22
-
23 52
*
2 59
^
33 5
e	

Saída Eperada:
10.000+-22.000=-12.000
23.000-52.000=-29.000
2.000*59.000=118.000
33.000^5=39135393.000
*/
