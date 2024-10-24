#include <stdio.h>
#include <stdbool.h>


void minutes_to_12_hour(int minutes_passed_departure, int minutes_passed_arrival){
    
    int minutes_departure = minutes_passed_departure % 60;
    int hours_departure = minutes_passed_departure / 60;
    bool departure_pm = false;
    if (hours_departure >= 12){
        departure_pm = true;
    }
    if (hours_departure >= 13){
        hours_departure-=12;
    } 

    int minutes_arrival = minutes_passed_arrival % 60;
    int hours_arrival = minutes_passed_arrival / 60;
    bool arrival_pm = false;
    if (hours_arrival >= 12) arrival_pm = true;
    if (hours_arrival >= 13) hours_arrival-=12;

    
    printf("Nearest departure time is %2.2d:%2.2d ", hours_departure, minutes_departure);
    if (departure_pm){
        printf("PM");
    }else{
        printf("AM");
    }

    printf("., arriving at %2.2d:%2.2d ", hours_arrival, minutes_arrival);
    if (arrival_pm){
        printf("PM\n");
    }else{
        printf("AM\n");
    }

    

}

int main(){

    int departure_times[] = {8*60, 9*60+43, 11*60+19, 12*60+47, 14*60, 15*60+45, 19*60, 21*60+45};
    int arrival_times[] = {10*60+16, 11*60+52, 13*60+31, 15*60, 16*60+8, 17*60+55, 21*60+20, 23*60+58};
    int entered_hour, entered_minute;
    printf("Enter a 24-hour time: ");
    scanf(" %d : %d", &entered_hour, &entered_minute);

    int total_entered_minutes = entered_hour * 60 + entered_minute;
    int nearest_distance = 3600;
    int index;
    for (int i = 0; i<sizeof(departure_times)/sizeof(int); i++){
        
        if (departure_times[i] > total_entered_minutes && departure_times[i]-total_entered_minutes < nearest_distance){
            nearest_distance = departure_times[i]-total_entered_minutes;
            index = i;
            
        }else if (departure_times[i] < total_entered_minutes && total_entered_minutes-departure_times[i] < nearest_distance){
            nearest_distance = total_entered_minutes-departure_times[i];
            index = i;
        }
    }

    minutes_to_12_hour(departure_times[index], arrival_times[index]);




    return 0;
}

