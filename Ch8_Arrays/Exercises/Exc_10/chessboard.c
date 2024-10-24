#include <stdio.h>



int main(){


    char chess_board[8][8]={[0]={'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},[1]={'p','p','p','p','p','p','p','p'},
    [6]={'P','P','P','P','P','P','P','P'}, [7]={'R','N', 'B','Q', 'K', 'B', 'N', 'R'}}; 

    for (int row = 0; row<8; row++){
        for (int col=0; col<8;col++){
            printf("%c ", chess_board[row][col]);
        }
        printf("\n");
    }
}