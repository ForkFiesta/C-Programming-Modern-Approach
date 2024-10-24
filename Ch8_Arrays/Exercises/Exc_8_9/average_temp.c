#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>




int main(){

    int average_temperature[30][24] = {0};
    int hourly_temp;
    int hour_counter = 0;
    int temperature_sum = 0;
    srand((unsigned) time(NULL));

    for (int day=0; day<30; day++){
        for(int hour=0; hour<24; hour++){
            hourly_temp = rand() % 15 + 50; // maximum of 15 degrees of change
            average_temperature[day][hour] = hourly_temp;
            hour_counter++;
            temperature_sum+=hourly_temp;
        }
    }

    printf("The average hourly temperature was %d\n", temperature_sum/hour_counter);


    return 0;
}