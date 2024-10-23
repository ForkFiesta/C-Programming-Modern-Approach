#include <stdio.h>
#include <math.h>

int main(){

    double userNumber;
    printf("Enter a positive number: ");
    scanf("%lf", &userNumber);

    double guessNumber = 1;

    double division_result = userNumber / guessNumber;

    double average_result = (division_result + guessNumber) / 2;

    while(fabs(average_result - guessNumber) > .00001){
        guessNumber = average_result;
        
        division_result = userNumber / guessNumber;
        average_result = (division_result + guessNumber) / 2;
        // printf("Guess Number %.5f\t Division Result: %.5f\t Average: %.5f\n", guessNumber, division_result, average_result);
    }

    printf("Square root: %.5f\n", average_result);
}