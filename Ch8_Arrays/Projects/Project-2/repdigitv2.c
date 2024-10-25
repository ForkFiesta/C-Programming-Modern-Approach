#include <stdio.h>
#include <stdbool.h>



int main(){

    bool digits_seen[10]={false};
    int digit_occurences[10] = {0};

    int digit;
    long n;
    int double_digits=0;


    printf("Enter a number: ");
    scanf("%ld", &n);


    while(n > 0){
        digit = n % 10;
        if (digits_seen[digit]){
            digit_occurences[digit]++;
            n /= 10;
            // printf("%d ", digit);
        }else{
            digits_seen[digit]=true;
            digit_occurences[digit]++;
            n /=10;
        }
    }
    printf("Digits: \t");
    for (int i=0; i<10; i++){
        printf("%d ", i);
    }
    printf("\nOccurences: \t");
    for(int i =0; i<10; i++){
        printf("%d ", digit_occurences[i]);
    }
    printf("\n");

    return 0;
}