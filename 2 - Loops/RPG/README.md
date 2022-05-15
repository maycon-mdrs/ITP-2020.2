### RPG
Alyson estava em uma tarde casual de RPG com colegas quando eles tiveram um problema: todos decidiram agir ao mesmo tempo para derrotar o dragão, salvar a princesa e conquistar o tesouro, e o Mestre da seção perdeu o controle do que estava acontecendo! Percebendo a confusão em que seu mestre se metera, Alyson decidiu pedir aos alunos de ITP para escreverem um programa que pudesse ajudar o mestre a entender o que havia acontecido!

Escreva um programa que receberá dois inteiros: o número de jogadas N e os pontos de vida (life, energia) V do dragão. A partir daí, seu programa deverá ler N linhas contendo as jogadas dos participantes na seguinte forma:

C A, onde C é a letra que identifica o jogador, e A é o valor do ataque que ele realizou.

Os ataques serão inteiros variando de 1 a 20.  O dragão é um ser feroz, resistente e ágil, então apenas ataques acima de 14 irão acertá-lo! Se o ataque atingir o dragão, o valor do dano associado ao jogador que acertou é deduzido dos pontos de vida V do dragão. Quando os pontos de vida do dragão forem igual ou menor a zero, o dragão é derrotado!

Os jogadores são:

| Nome do Jogador | Letra identificadora | Dano | Personagem |
| --- | --- | --- | --- |
| Alyson | A | 10 | The Ice Giant |
| Isaac | I | 10 | The Good Carpenter |
| Rafaela | R | 6 | The Mathematician |
| Wellington | W | 8 | Anonymous |
| Salgado | S | 4 | Leaf Hands |
| Careca | C | 1 | The ITPist |

Seu programa deve calcular, para um determinado conjunto de jogadas, se o dragão é derrotado, imprimindo uma saída no formato:

*"Nome_do_participante derrotou o dragão!" (Caso o dragão seja derrotado)

*"Casa caiu!" ( Caso o dragão não seja derrotado)

| Exemplo de entrada | Exemplo de saída |
| --- | --- |
|10 6 | Rafaela derrotou o dragão! |
|A 5
|I 2
|R 4
|W 11
|C 3
|S 20
|A 3
|I 1
|R 20
|C 20
