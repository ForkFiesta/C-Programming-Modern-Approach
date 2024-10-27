#include <stdio.h>


void split_date(int day_of_year, int year, int *month, int *day){
    *month = day_of_year / 31;

    *day = day_of_year % 31;

}

int main(){


    int day_of_year = 232;
    int year =2024;
    int month;
    int day;

    split_date(day_of_year, year, &month, &day);

    printf("The date is %2d-%2d-%4d\n", month, day, year);
}