#include <stdio.h>


void split_time(long total_sec, int *hr, int *min, int *sec){
    printf("Total seconds: %ld\n", total_sec);
    *sec = total_sec % 60;
    *min = (((total_sec - *sec)/ 60)) % 60;
    *hr = (((total_sec - *sec)/ 60))/60;
    



}


int main(void){
    long total_sec;
    // long total_sec = (9.5 * 60 * 60 +(17*60)+30); // 9:30 am in total seconds
    int hrs;
    int minutes;
    int seconds;

    printf("Enter a time in seconds ('34200' as 9:30am): ");
    scanf(" %ld", &total_sec);

    split_time(total_sec, &hrs, &minutes, &seconds);
    printf("You inputed %2.2d:%2.2d:%2.2d\n", hrs, minutes, seconds);




    return 0;
}