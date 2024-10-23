#include <stdio.h>
#include <ctype.h>


int main(){
    
    char first_letter;
    char ch;

    printf("Enter a first and a last name: ");
    ch = getchar();
    if (ch != ' '){ //checks if first character is blank space
        first_letter = ch; // if it is not white space it assigns the first character to first_letter
    }else{ 
        while((ch=getchar()) == ' '); //otherwise skips through white space until character is found
        first_letter = ch; // assigns first character found after whitespace to first_letter
    }
    
    while((getchar()) != ' '); //skipping rest of first name

    

    while((ch=getchar()) == ' '); // skips any spaces between first and last name
    do{
        putchar(ch);
    }while((ch = getchar()) != '\n');


    printf(", %c\n", first_letter); // a comma is printed followed by a space and the first letter.
    


    return 0;
}