#include <stdio.h>

int main(){

    int firstNumber;
    int secondNumber;
    int thirdNumber;

    printf("Enter a two digit number: ");
    scanf("%1d%1d%1d", &firstNumber, &secondNumber, &thirdNumber);
    printf("%d%d%d\n", secondNumber, firstNumber, thirdNumber);

    /* Alternatively can do
    
    scanf("%d", int singleNumber);
    firstNumber = singleNumber / 10;
    secondNumber = singleNumber % 10;
    
     */
}