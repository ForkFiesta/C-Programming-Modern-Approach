#include<stdio.h>
#include <ctype.h>

int main(){

    char ch;
    int vowels=0;

    printf("Enter a sentence: ");
    while((ch=getchar()) != '\n'){
        ch = toupper(ch);
        switch (ch)
        {
        case 'A': case 'E': case 'I': case 'O': case 'U':
            vowels++;
            break;
        
        default:
            break;
        }
    }

    printf("Your sentence contains %d vowels.\n", vowels);


    return 0;
}