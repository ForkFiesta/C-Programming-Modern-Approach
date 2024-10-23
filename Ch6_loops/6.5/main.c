#include <stdio.h>

int main(){

    int number;

    printf("Enter a number: ");
    scanf("%d", &number);
    int dum_num = number;
    do{
        printf("%d", dum_num%10);
        dum_num /= 10;
    }while(dum_num > 0);
    printf("\n");

    /* Alternatively can do
    
    scanf("%d", int singleNumber);
    firstNumber = singleNumber / 10;
    secondNumber = singleNumber % 10;
    
     */
}