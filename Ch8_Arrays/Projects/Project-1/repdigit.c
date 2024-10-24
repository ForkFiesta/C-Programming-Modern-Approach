#include <stdio.h>
#include <stdbool.h>



int main(){

    bool digits_seen[10]={false};

    int digit;
    long n;
    int double_digits=0;


    printf("Enter a number: ");
    scanf("%ld", &n);
    printf("Repeat Digits: ");

    while(n > 0){
        digit = n % 10;
        if (digits_seen[digit]){
            n /= 10;
            printf("%d ", digit);
        }else{
            digits_seen[digit]=true;
            n /=10;
        }
    }
  
    printf("\n");

    return 0;
}