#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

/* Macros */
#define MAX_DIGITS 10
const int segments[10][7]={{1, 1, 1, 1, 1, 1, 0}, {0, 1, 1, 0, 0, 0, 0}, {1, 1, 0, 1, 1, 0, 1}, {1, 1, 1, 1, 0, 0, 1},
{0, 1, 1, 0, 0, 1, 1}, {1, 0, 1, 1, 0, 1, 1}, {1, 0, 1, 1, 1, 1, 1}, {1, 1, 1, 0, 0, 0, 0},
{1, 1, 1, 1, 1, 1, 1}, {1, 1, 1, 1, 0, 1, 1}};

char digits[4][MAX_DIGITS * 4];

/* Prototypes */
void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

void clear_digits_array(void){
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < (4*MAX_DIGITS); j++){
            digits[i][j]= ' ';
        }
    }
}

void process_digit(int digit, int position){
    int segment[7];
    // printf("Printing Segments for %d:\n", digit);
    for (int i = 0 ; i < 7; i++){
        segment[i] = segments[digit][i];
        // printf("%d ", segment[i]);
    }

    int starting_position = position*4;

    for (int i = 0 ; i < 7; i++){
        switch (segment[i])
        {
        case 1:
            if(i == 0){
                digits[0][starting_position+1] = '_';
            }
            else if (i ==1 || i == 2){
                digits[i][starting_position+2] = '|';
            }
            else if (i == 3){
                digits[2][starting_position+1] = '_';
            }
            else if (i == 4){
                digits[2][starting_position] = '|';
            }
            else if(i ==5){
                digits[1][starting_position]= '|';
            }
            else if(i == 6){
                digits[1][starting_position+1]='_';
            }
            break;

        
        default:
            break;
        }
    }

    


    // for (int i = 0; i < 7; i++){
    //     printf("%d, ", segment[i]);
    //     switch (segment[i])
    //     {
    //     case 0:
    //         break;
    //     case 1:
    //         if (i == 0 || i==6 ||i==3){
    //             digits[i][starting_position+1]='_';
    //         }
    //         else if (i == 1 || i == 2){
    //             digits[i][starting_position+2]='|';
    //         }
    //         else if(i==4 || i == 5){
    //             digits[i][starting_position]='|';
    //         }
    //         break;
            
    //     default:
    //         break;
    //     }
    // }
    // printf("\n");
   
}


void print_digits_array(void){
    for (int i = 0; i < 4; i++){
        for(int j = 0; j < MAX_DIGITS*4; j++){
            printf("%c", digits[i][j]);
        }
        printf("\n");
    }
}


int main(){
    int num_array[MAX_DIGITS] = {0};

    for(;;){
    for (int i = 0; i<MAX_DIGITS; i++){
        num_array[i]=0;
    }
    int array_index = 0;
    char ch;
    clear_digits_array();
    printf("Enter a number (Max of Ten Digits): ");
    while((ch=getchar())!='\n'){
        bool bad_number = false;
        switch (ch)
        {
        case '0':
            num_array[array_index++] = 0;
            break;
        case '1':
            num_array[array_index++] = 1;
            break;
        case '2':
            num_array[array_index++] = 2;
            break;
        case '3':
            num_array[array_index++] = 3;
            break;
        case '4':
            num_array[array_index++] = 4;
            break;
        case '5':
            num_array[array_index++] = 5;
            break;
        case '6':
            num_array[array_index++] =6;
            break;
        case '7':
            num_array[array_index++]=7;
            break;
        case '8':
            num_array[array_index++]=8;
            break;
        case '9':
            num_array[array_index++] = 9;
            break;
        default:
            bad_number = true;
            break;
        }
        if (bad_number){
            printf("Not a number. Ignoring %c\n", ch);
        }


    }


    for (int i = 0; i < array_index; i++){
        process_digit(num_array[i], i);
    }

    print_digits_array();
        
    }
    





    return 0;
}