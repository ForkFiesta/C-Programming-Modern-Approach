#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5
bool straight, flush, four, three;
int pairs;

void read_cards(int num_in_rank[], int num_in_suit[]);

void analyze_hand(int num_in_rank[], int num_in_suit[]);

void print_result(void);

void read_cards(int num_in_rank[], int num_in_suit[]){
    bool card_exists[NUM_RANKS][NUM_SUITS];
    char ch, rank_ch, suit_ch;
    int rank, suit;
    bool bad_card;

    int cards_read = 0;

    for(rank = 0; rank < NUM_RANKS; rank++){
        num_in_rank[rank] = 0;
        for (suit = 0; suit < NUM_SUITS; suit++){
            card_exists[rank][suit] = false;
        }
    }

    for (suit = 0; suit < NUM_SUITS; suit++){
        num_in_suit[suit] = 0;
    }

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

        while((ch=getchar()) != '\n') { // look for spaces between the suit and rank
            if (ch != ' ') bad_card = true;
        }

        if (bad_card) {
            printf("Bad Card; ignored.\n");
        }
        else if (card_exists[rank][suit]) {
            printf("Duplicate Card; ignored.\n");
        } else {
            num_in_rank[rank]++;
            num_in_suit[suit]++;
            card_exists[rank][suit] = true;
            cards_read++;
        }
    }
}


void analyze_hand(int num_in_rank[], int num_in_suit[]){
    int num_consec = 0;
    int rank, suit;
    straight = false;
    flush = false;
    four = false;
    three = false;
    pairs = 0;
    /* Check for flush */
    for (suit = 0; suit < NUM_SUITS; suit++){
        if (num_in_suit[suit] == NUM_CARDS){
            flush = true;
        }
    }

    /* Check for straight */
    rank = 0;
    while (num_in_rank[rank] == 0) rank++;
    for (;rank<NUM_RANKS && num_in_rank[rank] > 0; rank++){
        num_consec++;
    }
    if (num_consec == NUM_CARDS){
        straight = true;
        return;
    }

    /* Check for 4 of a kind, 3 of a kind and pairs */
    for (rank = 0; rank < NUM_RANKS; rank++){
        if (num_in_rank[rank] ==4) four = true;
        if (num_in_rank[rank] ==3) three = true;
        if (num_in_rank[rank] ==2) pairs++;
    }
}

void print_result(void){
    if (straight && flush) printf("Straight Flush\n");
    else if (four) printf("Four of a kind\n");
    else if (three && (pairs==1)) printf("Full House\n");
    else if (flush) printf("Flush\n");
    else if (three) printf("Three of a kind\n");
    else if (pairs == 2) printf("Two pairs\n");
    else if (pairs == 1) printf("Pair\n");
    else printf("High card\n");
}

int main(void){
    int num_in_rank[NUM_RANKS];
    int num_in_suits[NUM_SUITS];

    for(;;){
        read_cards(num_in_rank, num_in_suits);
        analyze_hand(num_in_rank, num_in_suits);
        print_result();
    }

    return 0;
}