#include <stdio.h>
#include <ctype.h>


int main(){


    char sentence[100] ={'\0'}; // assigns array to null;
    char ch; // declares a char variable
    int pointer=0;
    char terminator;
    printf("Enter a sentence: ");
    while((ch=getchar()) != '.' && ch != '.' && ch != '!' && ch != '?'){
        sentence[pointer++] = tolower(ch);

    }
    terminator = ch; // assigns most recent getchar to terminator
    int sentence_length = pointer;
    int wordlength = 0;
    for (int i = sentence_length; i>=0; i--, wordlength++){
        if(sentence[i] == ' '){
            for (int j = i+1; j < i+(wordlength); j++){
                putchar(sentence[j]);
            }
            putchar(' ');
            wordlength = 0;

        }else if (i == 0){
            for (int j=i; j<i+wordlength; j++){
                putchar(sentence[j]);
            }
            putchar(terminator);
            putchar('\n');
        }
    }


    return 0;
}