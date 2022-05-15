#include <stdio.h>
#include <math.h>

int converteT(int h, int m, int s){
    int segundos;
    segundos = h*3600;
    segundos += m*60;
    segundos += s;

    return segundos;
}
void transformar_h(int segundos){
    int h, m, s;
    h = segundos / 3600;
    if(h>=24){
        h -=24;
    }
    m = (segundos % 3600) / 60;
    s = (segundos % 3600) % 60; 
    printf("%.2d:%.2d:%.2d\n", h, m, s);
}

int main(){
    int h, m, s, segundos1;
    int p_ronda, s_ronda, t_ronda, q_ronda;

    scanf("%d %d %d", &h, &m, &s);

    segundos1 = converteT(h, m, s);

    p_ronda = segundos1 + converteT(1,0,0);
    transformar_h(p_ronda);
    
    s_ronda = segundos1 + converteT(2,10,30);
    transformar_h(s_ronda);

    t_ronda = segundos1 + converteT(4,40,50);
    transformar_h(t_ronda);

    q_ronda = segundos1 + converteT(12,5,5);
    transformar_h(q_ronda);

    return 0;
}

/*
Entradas para teste	
4 5 23	

Saída esperada
05:05:23
06:15:53
08:46:13
16:10:28
*/
