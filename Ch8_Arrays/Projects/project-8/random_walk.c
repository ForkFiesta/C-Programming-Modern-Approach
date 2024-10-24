#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){

    

    char grid[10][10];
    srand((unsigned) time(NULL));
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            grid[i][j]='.';
        }
    }
    char letter = 65;
    grid[0][0] = letter;
    int row = 0;
    int col = 0;
    int out_of_movement[] = {0, 0, 0, 0};


    while(letter < 'Z'){
        int movement = rand() % 4;
    

        switch (movement)
        {
        case 0:
            if(row > 0 && grid[row-1][col] == '.'){
                row--;
                letter++;
                grid[row][col] = letter;
                for (int i = 0; i < 4; i++){
                    out_of_movement[i]=0;
                }
                break;

            
            }
            out_of_movement[0] = 1;

            break;
        case 1:
            if(col < 9 && grid[row][col+1] == '.'){
                col++;
                letter++;
                grid[row][col] = letter;
                for (int i = 0; i < 4; i++){
                    out_of_movement[i]=0;
                }
                break;
                
            }
            out_of_movement[1] = 1;
         
            break;
        case 2:
            if(row < 9 && grid[row+1][col] == '.'){
                row++;
                letter++;
                grid[row][col] = letter;
                for (int i = 0; i < 4; i++){
                    out_of_movement[i]=0;
                }
                break;
                
            }
            out_of_movement[2] = 1;
            
            break;
        case 3:
            if (col > 0 && grid[row][col-1] == '.'){
                col--;
                letter++;
                grid[row][col] = letter;
                for (int i = 0; i < 4; i++){
                    out_of_movement[i]=0;
                }
                break;
                
            }

            out_of_movement[3] = 1;
        
            break;
        }

        if (out_of_movement[0]== 1 && out_of_movement[1]==1 && out_of_movement[2]==1 && out_of_movement[3] == 1){

            printf("Ran out of moves on letter %c \n", letter);
            break;
        }
    }


    for(int i = 0 ; i < 10; i ++){
        for (int j = 0; j<10 ; j++){
            printf("%c ", grid[i][j]);
        }
        printf("\n");
    }

    printf("\n");


    




}