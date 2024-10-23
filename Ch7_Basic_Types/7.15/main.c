#include <stdio.h>
//a largest value of n when factorial is short is 7
// b) largest value of n when factorial is int is 16
// c) largest value of n when factorial in long is 20
// d) same for long long

//largest value using float is 34
// largest value using double is 170!!
// largest value using long double is 170 as well






int main(){

    long double factorial;
    int number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);
    factorial = (long double)number;


    for(int i=factorial-1; i>0; i--){
        factorial *= i;
    }

    printf("Factorial of %d is %.0Lf\n", number, factorial);
}