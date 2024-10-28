#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 20


int main(){

    int word_length;
    char largest_word[MAX_SIZE];
    char smallest_word[MAX_SIZE];
    char temp_word[MAX_SIZE];

    while(word_length != 4){
        printf("Enter a word: ");
        scanf("%s", temp_word);
        word_length = strlen(temp_word);
        if(word_length>strlen(largest_word)){
            strcpy(&largest_word[0], temp_word);
        }
        if (word_length<strlen(smallest_word)){
            strncpy(&smallest_word[0], temp_word, word_length);
            // smallest_word[word_length+1] = '\0';
        }

    }

    printf("Largest word: %s\n", largest_word);
    printf("Smallest word: %s\n", smallest_word);

    return 0;
}