#include <stdio.h>

int main()
{   
 
    double n;

    int n100, n50, n20 , n10, n5, n2;
    //n = nota
    int m1;
    //m = moeda
    int r100,r50,r20,r10,r5,r2,r1;

    scanf("%lf",&n);
  
    n100= (int) n/100;
    r100= (int) n%100;
    n50= r100/50;
    r50= r100%50;
    n20= r50/20;
    r20= r50%20;
    n10= r20/10;
    r10= r20%10;
    n5= r10/5;
    r5= r10%5;
    n2= r5/2;
    r2= r5%2;
    m1= r2/1;
    r1= r2%1;
  
    printf("%d nota(s) de 100\n",n100);
    printf("%d nota(s) de 50\n",n50);
    printf("%d nota(s) de 20\n",n20);
    printf("%d nota(s) de 10\n",n10);
    printf("%d nota(s) de 5\n",n5);
    printf("%d nota(s) de 2\n",n2);
    printf("%d moeda(s) de 1\n",m1);
   
    return 0;
}
