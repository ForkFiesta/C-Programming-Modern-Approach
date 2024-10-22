#include <stdio.h>


int main(){

    int num1, num2, GCD;
    printf("Enter two entegers: ");
    scanf(" %d %d", &num1, &num2);


    //Euclids Algorithim

    int remainder;

    while(num1!=0){
        remainder = num2 % num1;
        num2 = num1;
        num1 = remainder;
    }

    printf("Greatest common divisor %d\n", num2);


    return 0;
}