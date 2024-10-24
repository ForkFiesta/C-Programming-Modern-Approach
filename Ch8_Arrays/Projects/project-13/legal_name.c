#include <stdio.h>


int main(){

    char last_name[20];

    char ch;
    char last;
    int counter =1;
    printf("Enter a first and last name: ");

    while((ch = getchar())== ' '); // move through any white space and assign first char to ch
    while(getchar() != ' '); // move through first name
    while((last = getchar()) == ' '); // movethrugh any whitespace and assign first char of last name to last;
    last_name[0] = last;
    while((last=getchar())!='\n'){
        last_name[counter++]=last;
    }

    putchar(ch);
    putchar(',');
    putchar(' ');
    for(int i = 0; i < counter; i++){
        putchar(last_name[i]);
    }
    putchar('\n');



    return 0;
}