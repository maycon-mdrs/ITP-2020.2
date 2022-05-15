### Touchdown na série histórica!
A liga de futebol americano NFL resolveu abandonar as fichinhas de papel e construir um programa para computar os resultados dos jogos de futebol americano. Para saber se é possível, eles pediram que você escreva um programa de teste para o jogo dos Saints contra os Bucaneers.

Existem três dados que marcam pontuação no jogo:

* TD (Touch Down) - vale 6 pontos
* FG (Field Goal) - vale 3 pontos
* PAT (Ponto Extra) - vale 1 ponto
Para calcular qual a pontuação foi feita em algum jogo, você precisaria apenas somar quantos TD, FG e PAT foram feitos multiplicados pelos seus valores. Porém como para a NFL qualquer estatística tem algum valor, eles pediram para que você faça um programa que receba como entrada uma sequência com os resultados de todos os jogos entre dois times e indique:

* Qual time é o campeão da série histórica (qual time teve maior pontuação total somada)
* Qual marcou mais Touch Downs(TD)
* Qual marcou mais Field Goals(FG)
* Qual marcou mais Pontos Extras(PAT)
Mais uma vez estaremos analisando o New Orleans Saints e o Tampa Bay Bucaneers, porém usando um conjunto com os resultados de N jogos entre eles. Seu programa deve ler o número N de jogos e, em seguida, ler 2*N triplas contendo os TD, FG e PAT de cada jogo para cada uma das equipes (Saints primeiro, depois Bucaneers). Com os resultados o programa deve calcular as estatísticas e imprimí-las como mostram os exemplos.

| Exemplo de entrada	| Exemplo de saída |
| --- | --- |
3
1 2 3 | Bucaneers é o campeão na série histórica!
2 1 3 | Placar: 80 x 49
2 1 2 | Bucaneers marcou mais Touch Downs(9)
2 3 1 | Bucaneers marcou mais Field Goals(7)
2 1 2 | Saints marcou mais Pontos Extras(7)
5 3 1
