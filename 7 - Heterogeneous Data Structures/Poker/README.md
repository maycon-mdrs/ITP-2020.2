### Poker

Poker é um dos jogos de cartas mais jogados do mundo e movimenta milhões em apostas em todo o globo. Com o olho vidrado nos $$$ desse mercado a Eletronic Arts resolveu deixar de lado todos seus Blockbusters para se dedicar ao Poker 🤑... e quer contratar você!!!! 😁

Mas antes de te contratar, eles querem ver como você se sai com um código de um antigo desenvolvedor (que eles tiveram que demitir porque não sabia usar registros nem enumerações 😔). O objetivo do código testar duas mãos (de cartas) para ver quem venceria. A ordem das possíveis mãos do Poker, da que vale mais para a que vale menos, são apresentadas abaixo. No caso de duas mãos com o mesmo jogo, ganha quem tem a maior carta.

1. Royal Flush: Sequência de Ás, King, Queen, Jack e 10 do mesmo naipe. Ex: A♦️, K♦️, Q♦️, J♦️ e 10♦️.
2. Straight flush: Sequência de 5 cartas do mesmo naipe. Ex: 10♣️, 9♣️, 8♣️, 7♣️ e 6♣️.
3. Four of a kind: 4 cartas do mesmo valor. Ex: 4♥️, 4♣️, 4♦️, 4♠️, 3♣️.
4. Full house: 3 cartas do mesmo valor e 2 par de outro. Ex: 10♥️, 10♣️, 10♦️, 5♥️, 5♣️.
5. Flush: 5 cartas do mesmo naipe, mas não em sequência. Ex: Q♦️, 10♦️, 5♦️, 3♦️ e 2♦️.
6. Straight: 5 cartas em sequência, mas não do mesmo naipe. Ex: J♥️, 10♣️, 9♦️, 8♠️ e 7♣️.
7. Three of a kind: 3 cartas do mesmo valor. Ex: 9♣️, 9♦️, 9♠️, 8♠️ e 3♦️.
8. Two pair: 2 pares diferentes. Ex: 8♦️, 8♥️, 6♠️, 6♥️, 3♣️.
9. Pair: Um único par. Ex: J♦️, J♥️, 7♣️, 5♦️, 2♥️.
10. High Card: Nenhuma das mãos anteriores. Vale a maior carta. Ex: Q♦️, 10♦️, 8♥️, 6♠️ e 5♦️.

O desenvolvedor anterior deixou o seguinte código, que você deve completar (sem alterar o main(), senão você pode ser rodar antes mesmo de entrar na EA 😨). Veja que o que você deve completar são os tipos estruturados (com seus devidos campos) e as enumerações, além, é claro, da função checkHand().

O programa lê um índice de 5 possíveis mãos do jogo, já estabelecidas a priori, e uma sequência de 5 cartas, cada carta definida pelo seu naipe (suit) e seu valor (value). Os valores de entrada das cartas são inteiros sem sinal porque eles correspondem a enumerações... que você deve implementar.

```sh
int main() {
    Card hands[][5] = {
        {  // Royal Flush
            { Diamonds, Ace },
            { Diamonds, King },
            { Diamonds, Queen }, 
            { Diamonds, Jack }, 
            { Diamonds, Ten } 
        },
        { // Full house
          { Heart, Jack },   
          { Spades, Jack },   
          { Clubs, Jack },     
          { Spades, Two  },    
          { Heart, Two } 
        },   
        { // Three of a Kind
          { Diamonds, Ten }, 
          { Spades, Seven },  
          { Diamonds, Four },  
          { Spades, Four  },   
          { Heart, Four } 
        },  
        { // Pair
          { Spades, Ace  },  
          { Heart, Jack },    
          { Spades, Jack },    
          { Heart, Seven },    
          { Clubs, Four } 
        },  
        { // High Card (No pair)
          { Clubs, Nine },   
          { Heart, Seven },   
          { Diamonds, Six },   
          { Spades, Four  },   
          { Heart, Two } 
        },   
    };
    Card myCards[5];
    Card oponentCards[5];
    
    unsigned handIndex;
    scanf("%u", &handIndex);
    for(int i = 0; i < 5; i++) {
        myCards[i] = hands[handIndex][i];
        scanf("%u %u", &oponentCards[i].suit, &oponentCards[i].value);
    }
    PokerHand myHand = checkHand(myCards);
    PokerHand oponentHand = checkHand(oponentCards);
    if (myHand > oponentHand) {
        switch(myHand) {
            case RoyalFlush:
                printf("É... simplesmente não tinha como me bater!\n");
                break;
            case StraightFlush:
            case FourOfAKind:
            case FullHouse:
                printf("Já era! Você não tinha chance!\n");
                break;
            case Flush:
            case Straight:
            case ThreeOfAKind:
                printf("É boy! Quem sabe da próxima vez...\n");
                break;
            default:
                printf("Tive sorte!\n");
        }
    }
    else if (oponentHand > myHand) {
        printf("Não valeu! Cê tá roubando!!!\n");
    }
    else if (myCards[0].value > oponentCards[0].value) {
        printf("Ufa! Por pouco!");
    }
    else {
        printf("Nan!! Bicho melado da gota!\n");
    }
    return 0;
}
```

**OBS:** Veja que a tarefa de verificar a mão do jogador ficaria trivial se as cartas estiverem ordenadas em relação ao seu valor. Aparentemente, o desenvolvedor anterior já tinha pensando nisso quando comparou myCards[0].value > oponentCards[0].value 🤔. Um algoritmo simples de ordenação, chamado Bubble Sort, é descrito em pseudocódigo a seguir (ele ordena em ordem crescente... mas o seu tem que ser em ordem decrescente... 🤔).

```
Dada uma sequência S = { S1, S2,... SN } de N elementos
Para i de 1 a N-1
    Para j de i+1 a N
        Se Si > Sj então
            Troca as posições de Si e Sj
```

| Exemplo de entrada	| Exemplo de saída |
| --- | --- |
0 
|2 9|É... simplesmente não tinha como me bater!|
2 8
2 7
2 6
2 5	
