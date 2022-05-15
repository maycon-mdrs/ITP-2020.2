### From json string
Uma forma muito usada para vetores é com o formato [ 1, 2, 3, ..., N ], onde cada elemento é seguido por ','. Essa forma é tão comum que muitas linguagens a usam como base para representação de vetores, é inclusive a forma que o formato json usa para representar vetores no geral.

No formato os números recebidos são usualmente de qualquer tipo, sejam double ou int, pois o formato json não se preocupa com a representação em bytes dos números. Em C para converter um vetor no formato json temos que verificar primeiro se o vetor tem números double, pois nesse caso temos que criar um vetor de doubles, caso contrário criamos um vetor de ints. Dessa forma implemente as seguintes funções:

* fromJsonString_int: recebe uma string como parâmetro no formato [ 1, 2, 34, ..., N ] e um ponteiro para inteiro tam, a função deve retornar o vetor de inteiros referente e preencher em tam o tamanho do vetor. Veja que para que a função possa retornar o vetor de inteiros, ela precisa alocar dinamicamente o vetor!  Suponha ainda que a string recebida nesse método não terá tamanho maior do que 200 caracteres.
* fromJsonString_double: recebe uma string como parâmetro no formato [ 15, 2.23, 34.6, ..., N.D ] e um ponteiro para inteiro tam, a função deve retornar o vetor de double referente e preencher no ponteiro tam, o tamanho do vetor. Veja que para que a função possa retornar o vetor de double, ela precisa alocar dinamicamente o vetor!  Suponha ainda que a string recebida nesse método não terá tamanho maior do que 200 caracteres.

O programa deve receber um número N como entrada seguido por um conjunto de N entradas no formato json array. Para cada entrada, o seu programa deve usar as funções implementadas para converter o dado recebido em vetor de double ou int. Todas as impressões(printf) devem ser feitas dentro do main!

Dica: nesta questão tente usar as funções strtok, atoi, atof e sprintf (dependendo de como você fizer, pode ser que prefira a função sscanf).

Importante: Não esqueça de usar a função free para deletar as strings/vetores criados!

| Exemplo de entrada |	Exemplo de saída |
| --- | --- |
| 4 |
| [6, 9, 7, 8, 4] | 6 9 7 8 4 |
| [2.3, 3, 5.4, 1] | 2.300000 3.000000 5.400000 1.000000 |
| [-2.12, -10.14, 0, -8, 7] | -2.120000 -10.140000 0.000000 -8.000000 7.000000 |
| [-4, -5, -3, -8, 0, 2] | -4 -5 -3 -8 0 2 |
