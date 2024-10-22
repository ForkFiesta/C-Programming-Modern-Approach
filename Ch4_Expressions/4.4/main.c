#include <stdio.h>

int main(){

    int base10;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &base10);

    int firstDigit = base10 % 8;
    int secondDigit = (base10 / 8) % 8;
    int thirdDigit = ((base10 / 8)/8) %8;
    int fourthDigit = (((base10 / 8)/8)/8) % 8;
    int fifthDigit = ((((base10 / 8)/8)/8)/8) % 8;

    printf("%d%d%d%d%d\n", fifthDigit, fourthDigit, thirdDigit, secondDigit, firstDigit);
}