#include <stdio.h>
#include <stdbool.h>



int main(){

    bool digits_seen[10]={false};
    int digit_occurences[10] = {0};

    int digit;
    long n;
    int double_digits=0;
    char ch;
    bool keep_playing = true;

    while(keep_playing){
        printf("Enter a number: ");
        scanf("%ld", &n);
        if (n<=0){
            keep_playing = false;
            printf("\nExiting Program.\n");
            break;
        }


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
        printf("\n\n");
        for (int i = 0; i < 10 ; i++){
            digits_seen[i]= false;
            digit_occurences[i]=0;
        }




    }




    return 0;
}