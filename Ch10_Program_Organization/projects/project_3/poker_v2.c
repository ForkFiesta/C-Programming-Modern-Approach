#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5
bool royal_flush, straight, flush, four, three;
int pairs;

void read_cards(int hand[10]);

void analyze_hand(int hand[10]);

void print_result(void);

int hash_function(int rank, int suit);

int hash_function(int rank, int suit){
    return suit*13 + rank;
}

void read_cards(int hand[10]){
    char ch, rank_ch, suit_ch;
    int rank, suit;
    int rank_index = 0;
    bool bad_card;
    bool card_exists[52];

    int cards_read = 0;
    bool duplicate_card = false;

    

    while (cards_read < NUM_CARDS){
        bad_card = false; // default bad card to false
        
        printf("Enter a card: ");
        rank_ch = getchar(); //get first character of input
        
        switch (rank_ch) // evaluate it
        {
        case '0':
            exit(EXIT_SUCCESS);
        case '2':
            rank = 0;
            break;
        case '3':
            rank = 1;
            break;
        case '4':
            rank = 2;
            break;
        case '5':
            rank = 3;
            break;
        case '6':
            rank = 4;
            break;
        case '7':
            rank = 5;
            break;
        case '8':
            rank = 6;
            break;
        case '9':
            rank = 7;
            break;
        case 't': case 'T':
            rank = 8;
            break;
        case 'j': case 'J':
            rank = 9;
            break;
        case 'q': case 'Q':
            rank = 10;
            break;
        case 'k': case 'K':
            rank = 11;
            break;
        case 'a': case 'A':
            rank = 12;
            break;
        
        default:
            bad_card = true; //if it's not a good value throw badcard
        }

        suit_ch = getchar();
        switch (suit_ch)
        {
        case 'c': case 'C':
            suit = 0;
            break;
        case 'd': case 'D':
            suit = 1;
            break;
        case 'h': case 'H':
            suit = 2;
            break;
        case 's': case 'S':
            suit = 3;
            break;
        
        default:
            bad_card = true;
        }
        int card_hash = hash_function(rank,suit);

        if(card_exists[card_hash]){
            printf("Card Rank: %d\tCard Suit: %d\tHash:%d already exists\n", rank, suit, card_hash);
            duplicate_card = true;
        }else{
            card_exists[card_hash] = true;
            duplicate_card = false;
        }

        while((ch=getchar()) != '\n') { // look for spaces between the suit and rank
            if (ch != ' ') bad_card = true;
        }

       
        if (bad_card) {
            printf("Bad Card; ignored.\n");
        }
        else if (duplicate_card) {
            printf("Duplicate Card; ignored.\n");
        } else {
            hand[rank_index++] = rank;
            hand[rank_index++] = suit;

            cards_read++;
        }
    }
}


void analyze_hand(int hand[10]){
    int num_consec = 0;
    int rank, suit;
    straight = false;
    flush = false;
    four = false;
    three = false;
    pairs = 0;
    /* Check for flush */
    int flush_counter = 0;

    for (int i = 1; i<9; i+=2){ //check for clush
        if(hand[i]==hand[i+2]){
            flush_counter++;
        }
    }
    if(flush_counter>=4) flush=true;
    /* Sort using selection sort */


    for (int i = 8; i>0; i-=2){
        int largest_value = hand[i];                  
        int largest_index = i;
        for (int j = 0; j<i+1; j+=2){
            if(hand[j]>largest_value){
                largest_value = hand[j];
                largest_index = j;
            }
    }
        int temp = hand[i];
        hand[i] = largest_value;
        hand[largest_index]= temp;
    
    }



    int num_occurences[hand[8]+1]; // make of size of largest value rank in hand to keep count of occurences
    for (int i = 0; i<hand[8]+1; i++){
        num_occurences[i] = 0; 
    }

    

    //now check for 5 cards that are consecutively ordered

    for (int i = 2; i<9; i+=2){
        int most_common_card = hand[i-2];
        int common_card_counter;
        if (hand[i]-hand[i-2] == 1) num_consec++;
    }



    if (num_consec>=4) straight = true;

        //check for royal flush
    if (straight && flush && hand[0]==8){
        royal_flush=true;
    }

    //now search for most common card and number of occurences
    for (int i = 2; i<9; i+=2){
        num_occurences[hand[i]]++;
    }
    for(int i =0 ; i<hand[8]+1; i++){
        if(num_occurences[i]==4) four = true;
        else if (num_occurences[i]==3) three = true;
        else if (num_occurences[i]==2) pairs++;
    }






    






    // rank = 0;
    // while (num_in_rank[rank] == 0) rank++;
    // for (;rank<NUM_RANKS && num_in_rank[rank] > 0; rank++){
    //     num_consec++;
    // }
    // if (num_consec == NUM_CARDS){
    //     straight = true;
    //     return;
    // }

    /* Check for 4 of a kind, 3 of a kind and pairs */
    // for (rank = 0; rank < NUM_RANKS; rank++){
    //     if (num_in_rank[rank] ==4) four = true;
    //     if (num_in_rank[rank] ==3) three = true;
    //     if (num_in_rank[rank] ==2) pairs++;
    // }
}

void print_result(void){
    if(royal_flush) printf("Royal Flush\n");
    else if (straight && flush) printf("Straight Flush\n");
    else if (four) printf("Four of a kind\n");
    else if (three && (pairs==1)) printf("Full House\n");
    else if (flush) printf("Flush\n");
    else if (three) printf("Three of a kind\n");
    else if (pairs == 2) printf("Two pairs\n");
    else if (pairs == 1) printf("Pair\n");
    else printf("High card\n");
}

int main(void){
    int hand[10];
    for(;;){
        
        for (int i = 0; i<10; i++){
            hand[i] = 0;
        }
        read_cards(hand);
        analyze_hand(hand);
        print_result();
    }

    return 0;
}