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
    for (int i = 0 ; i < 7; i++){
        segment[i] = segments[digit][i];
    }
    for (int i = 0; i < 7; i++){
        switch (segment[i])
        {
        case 0:
            break;
        case 1:
            if (i == 0 || i==6 ||i==3){
                digits[i][position+1]='_';
            }
            else if (i == 1 || i == 2){
                digits[i][position+2]='|';
            }
            else if(i==4 || i == 5){
                digits[i][position]='|';
            }
            break;
            
        default:
            break;
        }
    }
   
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
    int array_index = 0;
    char ch;
    clear_digits_array();
    printf("Enter a number: ");
    while((ch=getchar())!='\n'){
        bool bad_number = false;
        switch (ch)
        {
        case 0:
            num_array[array_index++] = 0;
            bad_number = false;
            break;
        case 1:
            num_array[array_index++] = 1;
            bad_number = false;
            break;
        case 2:
            num_array[array_index++] = 2;
            bad_number = false;
            break;
        case 3:
            num_array[array_index++] = 3;
            bad_number = false;
            break;
        case 4:
            num_array[array_index++] = 4;
            bad_number = false;
            break;
        case 5:
            num_array[array_index++] = 5;
            bad_number = false;
            break;
        case 6:
            num_array[array_index++] =6;
            bad_number = false;
            break;
        case 7:
            num_array[array_index++]=7;
            bad_number = false;
            break;
        case 8:
            num_array[array_index++]=8;
            bad_number = false;
            break;
        case 9:
            num_array[array_index++] = 9;
            bad_number = false;
            break;
        default:
            bad_number = true;
            break;
        }
        if (bad_number){
            printf("Not a number. Ignoring %c\n", ch);
        }else{
            printf("Read digit %c\n", ch);
        }


    }


    for (int i = 0; i < array_index+1; i++){
        process_digit(num_array[i], i);
    }

    print_digits_array();





    return 0;
}