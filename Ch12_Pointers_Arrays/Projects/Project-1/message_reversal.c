#include <stdio.h>
#include <stdlib.h>





int main(){

    char *input = malloc(sizeof(char) * 100);
    char ch;
    char *p = &input[0];
    int index = 0;
    printf("Enter a message: ");

    while((ch=getchar())!='\n' && index < 99){
        *p++ = ch;
    }
    *p = '\0';

    printf("You entered: %s\n", input);

    printf("In reverse: ");
    p--;

    for(;p>=&input[0];p--){
        printf("%c", *p);
    }
    printf("\n");





    return 0;
}