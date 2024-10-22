#include <stdio.h>


int main(){


    int num, denom;
    int d_num, d_denom;

    printf("Enter a fraction: ");
    scanf(" %d / %d", &num, &denom);
    d_num = num;
    d_denom = denom;
    int remainder;
    while(d_num!=0){
        remainder = d_denom % d_num;
        d_denom = d_num;
        d_num = remainder;
    }

    int lowest_num = num / d_denom;
    int lowest_denom = denom / d_denom;
    printf("In lowest terms: %d/%d\n", lowest_num, lowest_denom);
}