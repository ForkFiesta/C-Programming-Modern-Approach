#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <ctype.h>

int roll_dice();


bool play_game();


int roll_dice(){
    // srand((unsigned)time(NULL));
    int roll_1 = (rand() % 6) + 1;
    int roll_2 = (rand() % 6) + 1;

    int roll = roll_1 + roll_2;


    return roll;
}

bool play_game(){
    char input;
    int roll_count = 0;
    int point;
    printf("Press enter to roll: ");
    input = getchar();
    int roll = roll_dice();
    printf("You rolled: %d\n", roll);
    if(roll == 7 || roll == 11){
        printf("You win!\n");
        return true;
    }
    else if (roll == 2 || roll==3 || roll == 12 ){
        printf("You lose!\n");
        return false;
    }
    else{
        point = roll;
    }
    printf("Your point is: %d\n", point);
    roll = 0;
    while(roll != 7 && roll != point){
        printf("Press enter to roll");
        input = getchar();
        roll = roll_dice();
        printf("You rolled: %d\n", roll);
    }
    if (roll == 7){
        printf("You lose!\n");
        return false;
    }else{
        printf("You win!\n");
        return true;
    }

    


}




int main(){

    
    printf("Let's play Craps!\n");
    srand((unsigned)time(NULL));
    bool continue_playing = true;
    int wins = 0;
    int losses = 0;

    while (continue_playing){
        bool player_won;
        player_won = play_game();
        if(player_won) wins++;
        else losses++;
        printf("Play again? (y/n): ");
        if (tolower(getchar())== 'n'){
            continue_playing = false;
        }

        
    }
    printf("\nWins: %d\t Losses: %d\n\n", wins, losses);

    printf("Thanks for playing!\n");
    
    

}