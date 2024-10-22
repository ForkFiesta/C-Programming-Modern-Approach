#include <stdio.h>

int main(){

    int firstNumber;
    int secondNumber;

    printf("Enter a two digit number: ");
    scanf("%1d%1d", &firstNumber, &secondNumber);
    printf("%d%d\n", secondNumber, firstNumber);

    /* Alternatively can do
    
    scanf("%d", int singleNumber);
    firstNumber = singleNumber / 10;
    secondNumber = singleNumber % 10;
    
     */
}