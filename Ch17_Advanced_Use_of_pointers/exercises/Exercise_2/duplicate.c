#include <stdlib.h>
#include <stdio.h>

char *duplicate(char *str);


char *duplicate(char *str){
    char *p = str;
    int length = 0;
    while((*p++)!='\0') length++; 
    char *new_string = malloc((sizeof(char)*length));
    if (new_string == NULL){
        printf("Memory failure\n");
        return new_string;
    }
    
    for(char *q=new_string, *p=&str[0]; (*p)!='\0'; (*q++)=(*p++));
    printf("New word copied correctly.\n");
    return new_string;
    
}

int main(void){
    char str[20] = "Hello World";
    char *p = &str[0];

    char *new_word = duplicate(p);
    char *q = new_word;
    printf("%s", q);
    
    printf("\n");
    free(new_word);
    printf("New_word free'd correctly\n");

    return 0;
}