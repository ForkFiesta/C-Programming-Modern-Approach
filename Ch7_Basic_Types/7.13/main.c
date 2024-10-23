#include <stdio.h>


int main(){
    float word_count=0;
    float character_count=0;
    float avg_word_length;
    char ch;


    printf("Enter a sentence: ");

    ch = getchar(); // look at first character for blankspace

    if (ch == ' '){
        while (getchar() == ' '); // do not count characters or words until first character found
        word_count++;
        character_count++;
    }else word_count++; character_count++; // first character found on first look - increment counters


    while((ch=getchar()) != '\n'){ //begin iterating through rest of string
        if (ch == ' '){
            word_count++;
        }else{
            character_count++;
        }
    }
    avg_word_length = character_count / word_count;
    printf("Number of words typed: %.0f\n", word_count);
    printf("Number of characters typed: %.0f\n", character_count);

    printf("Average word length: %.1f\n", avg_word_length);


    return 0;
}