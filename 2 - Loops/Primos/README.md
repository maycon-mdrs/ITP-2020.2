### Decomposição em números primos
A decomposição(ou fatoração) em números primos é uma característica dos números inteiros definida pelo seguinte axioma:

"Todo número inteiro positivo e maior que 1 tem uma única fatoração por números primos"

A ideia por trás da fatoração é que, dado um número inteiro positivo A, maior que 1, precisamos encontrar um conjunto de números primos cuja multiplicação resulta no número inicial. Um exemplo concreto pode ser com o número 800 = 2*2*2*2*2*5*5 ou 2^5*5^2.

Escreva um programa que, leia um número inteiro N como entrada realize as seguintes operações:

* Se o número não for positivo  ou for menor ou igual à 1, o programa deve escrever na saída: "Erro, número precisa ser maior do que 1!"

* Caso contrário o programa deverá calcular e imprimir a fatoração por números primos do número recebido como entrada no formato: a^A*b^B*...*z^Z (a < b < c ... < z)

| Exemplo de entrada	| Exemplo de saída |
| --- | --- |
| 800	| 2^5*5^2 | 
| 97	| 97^1 |
