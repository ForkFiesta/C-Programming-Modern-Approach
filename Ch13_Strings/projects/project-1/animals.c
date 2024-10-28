#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 20


int read_line(char str[], int n){
    int ch, i = 0;

    while((ch=getchar())!='\n'){
        if(i<n) str[i++] = ch;
    }
    str[i] = '\0';
    return i;
}
int main(){
    int longest_word = 0;
    int shortest_word = 20;
    char largest_word[MAX_SIZE];
    char smallest_word[MAX_SIZE];
    char temp_word[MAX_SIZE];
    char *l = largest_word;
    char *t = temp_word;
    char *s = smallest_word;
    

    int word_length;
    while(word_length != 4){

        printf("Enter word: ");
        word_length = read_line(temp_word, MAX_SIZE);
        char *l = largest_word;
        char *t = temp_word;
        char *s = smallest_word;
        if (word_length>longest_word){
            longest_word = word_length;
            while (*l != '\0'){
                l++;
                while(*t != '\0'){
                    *l = *t;
                    l++;
                    t++;
                }

            }
            *l = '\0';
        }
        t = temp_word;
        if (word_length < shortest_word){
            shortest_word = word_length;
            while(*s != '\0'){
                s++;
                while(*t != '\0'){
                    *s = *t;
                    s++;
                    t++;
                }
            }
            *s = '\0';


        }
    }

    printf("Smallest word: %s\n", smallest_word);
    printf("Largest Word: %s\n", largest_word);
    
        
    



    


    return 0;
}