#include <stdio.h>



int main(void){
    int hour_24;
    int minutes;
    int pm = 0;

    printf("Enter a 24-hour time: ");
    scanf("%2d:%2d", &hour_24, &minutes);
    int hour_12;

    if(hour_24<13){
        hour_12 = hour_24;
    }
    else if(hour_24>= 13 && hour_24 <=23){
        hour_12 = hour_24 - 12;
        pm = 1;
    }
    else{
        printf("That is not a valid input\n");

    }

    printf(pm ? "Equivalent 12-hour time: %d:%.2d PM\n": "Equivalent 12-hour time: %d:%.2d AM\n", hour_12, minutes);

}