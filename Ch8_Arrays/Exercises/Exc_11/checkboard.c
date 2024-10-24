#include <stdio.h>


int main(){

    char checker_board[8][8];

    for (int row = 0; row<8; row++){
        for (int column = 0; column<8; column++){
            if((column + row) % 2 == 0 ){
                checker_board[row][column] = 'B';
            }else{
                checker_board[row][column] = 'R';

            }
            printf("%c ", checker_board[row][column]);
        }
        printf("\n");
    }


    return 0;
}