#include <stdio.h>


int main(void){

    int input;
    int largest;
    do{
        printf("Enter a number: ");
        scanf(" %d", &input);
        if (input > largest){
            largest = input;
        }
    }
    while(input!=0);

    printf("Largest number inputted: %d\n", largest);


    return 0;
}