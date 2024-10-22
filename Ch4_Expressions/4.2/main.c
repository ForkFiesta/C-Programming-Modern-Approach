#include <stdio.h>

int main(){

    int singleNumber;

    printf("Enter a two digit number: ");
    scanf("%d", &singleNumber);

    int firstNumber = singleNumber % 10;
    int firstCluster = singleNumber / 10;
    int secondNumber = firstCluster % 10;
    int thirdNumber = firstCluster /10;
    printf("%d%d%d\n", firstNumber, secondNumber, thirdNumber);

    /* Alternatively can do
    
    scanf("%d", int singleNumber);
    firstNumber = singleNumber / 10;
    secondNumber = singleNumber % 10;
    
     */
}