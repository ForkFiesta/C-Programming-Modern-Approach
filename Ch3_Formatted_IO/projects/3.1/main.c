#include <stdio.h>


int main(void){

    int year;
    int month;
    int day;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d / %d / %d", &month, &day, &year);
    printf("You entered the date %d%.2d%.2d\n", year, month, day); // p is 2 for d with a leading 0 if the digit is one
}