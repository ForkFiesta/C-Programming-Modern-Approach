#include <stdlib.h>
#include <stdio.h>

char *duplicate(char *str);


char *duplicate(char *str){
    char *p = str;
    int length = 0;
    while((*p++)!='\0') length++; 
    char *new_string = malloc((sizeof(char)*length)+1);
    if (new_string == NULL){
        printf("Memory failure\n");
        exit(EXIT_FAILURE);
    }
    
    for(char *q=new_string, *p=&str[0]; (*p)!='\0'; (*q++)=(*p++));
    printf("New word copied correctly.\n");
    return new_string;
    
}

int main(void){
    // check for how to print str with %s instead of putchar(). You know this
    char *str = "Hello World";

    char *new_word = duplicate(str);
    while(*new_word!='\0'){
        putchar(*new_word++);
    }
    printf("\n");
    free(new_word);

    return 0;
}