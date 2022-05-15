#include <stdio.h>

int main(void) {
  float valor, C, F, K;
  char unidade;
    
    scanf("%f %c", &valor, &unidade);
    
    if (unidade == 'C')
    {
        C = valor;
        F = C * 1.8 + 32;
        K = C + 273.15;
    }
    if (unidade == 'F')
    {
        F = valor;
        C = (F - 32) / 1.8;
        K = C + 273.15;
    }
    if (unidade == 'K')
    {
        K = valor;
        C = K - 273.15;
        F = C * 1.8 + 32;
    }
    
    printf("Celsius: %.2f\n", C);
    printf("Farenheit: %.2f\n", F);
    printf("Kelvin: %.2f\n", K);
 
}
