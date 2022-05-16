#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef enum value{
    Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King, Ace
}value;

typedef enum suit{
    Diamonds, Heart, Spades, Clubs
}suit;

typedef struct Card{
    suit suit;
    value value; 
}Card;

typedef enum PokerHand{
    HighCard, Pair, TwoPair, ThreeOfAKind, Straight, Flush,
    FullHouse, FourOfAKind, StraightFlush, RoyalFlush
}PokerHand;

void ordenar_cartas(Card baralho[5]){
    Card aux;

    for(int i=0; i<4; i++){
        for(int k=i+1; k<5; k++){
            if(baralho[i].value < baralho[k].value){
                aux = baralho[i];
                baralho[i] = baralho[k];
                baralho[k] = aux;
            }
        }
    } 
}

PokerHand checkHand(Card cards_m[5]){

    ordenar_cartas(cards_m);

    if(cards_m[0].suit == cards_m[1].suit && cards_m[0].suit == cards_m[2].suit && cards_m[0].suit == cards_m[3].suit && cards_m[0].suit == cards_m[4].suit){
        if(cards_m[0].value == Ace && cards_m[1].value == King && cards_m[2].value == Queen && cards_m[3].value == Jack && cards_m[4].value == Ten){
            return RoyalFlush;
        } 
        else if(cards_m[0].value == cards_m[1].value+1 && cards_m[1].value == cards_m[2].value+1 && cards_m[2].value == cards_m[3].value+1 && cards_m[3].value == cards_m[4].value+1){
            return StraightFlush;
        } 
        else{
            return Flush;
        }
    }
    if (cards_m[0].value == cards_m[3].value || cards_m[1].value == cards_m[4].value){
        return FourOfAKind;
    }
    if((cards_m[0].value == cards_m[2].value && cards_m[3].value == cards_m[4].value) || (cards_m[0].value == cards_m[1].value && cards_m[2].value == cards_m[4].value)){
        return FullHouse;
    }
    if(cards_m[0].value == cards_m[1].value+1 && cards_m[1].value == cards_m[2].value+1 && cards_m[2].value == cards_m[3].value+1 && cards_m[3].value == cards_m[4].value+1){
        return Straight;
    }
    if(cards_m[0].value == cards_m[2].value || cards_m[1].value == cards_m[3].value || cards_m[2].value == cards_m[4].value){
        return ThreeOfAKind; 
    }
    if((cards_m[0].value == cards_m[1].value && cards_m[3].value == cards_m[4].value) || (cards_m[0].value == cards_m[1].value && cards_m[2].value == cards_m[3].value) || (cards_m[1].value == cards_m[2].value && cards_m[3].value == cards_m[4].value)){
        return TwoPair;
    }
    if(cards_m[0].value == cards_m[1].value || cards_m[1].value == cards_m[2].value || cards_m[2].value == cards_m[3].value || cards_m[3].value == cards_m[4].value){
        return Pair;
    }
    else{
        return HighCard;
    }
    
    return HighCard;
}

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

/*
Entradas para teste		
4
1 4
0 5
2 9
0 0
3 2	

Saída esperada
Nan!! Bicho melado da gota!
*/
