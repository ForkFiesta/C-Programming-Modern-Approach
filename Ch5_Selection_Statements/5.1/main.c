#include <stdio.h>

int main(void){
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if(number<10){
        printf("The number %d has 1 digit\n", number);
    }
    else if (number<100){
        printf("The number %d has 2 digits\n", number);
    }
    else if (number < 1000){
        printf("the number %d has 3 digits\n", number);
    }
    else{
        printf("The number %d has 4 or more digits\n", number);
    }

    return 0;
}